/****************************************************
    文件：NetUtil.cs
    作者：zhuzizheng
    日期：2019-8-12
    功能：网络工具类
*****************************************************/

using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using UnityEngine;

namespace AssetFramework
{
    public static class NetUtil
    {
        /// <summary>
        /// 同步测试 IPV4,IPV6
        /// 0 表示未开始测试
        /// 1 表示正在测试中,但是还没有结果
        /// 2 表示支持 IPV6
        /// 3 表示支持 IPV4
        /// 最多测试一次
        /// </summary>
        /// <param name="cdn"></param>
        /// <returns></returns>
        public static int IPState = 0;
        
        /// <summary>
        /// 使用此方法,最后去拿 IPState 使用
        /// </summary>
        /// <param name="cdn"></param>
        /// <returns></returns>
        public static void StartTestIPV4Or6(string cdn)
        {
            try
            {
                IPAddress ipa;
                if (IPAddress.TryParse(cdn, out ipa))
                {
                    IPState = 3;
                    return;
                }
                else
                {
                    IPState = 1;
                    IPHostEntry iph = Dns.GetHostEntry(cdn);
                    for (int i = 0; i < iph.AddressList.Length; i++)
                    {
                        IPAddress ipAddress = iph.AddressList[i];
                        //测试每一个地址,这个判断支持 IPV4
                        if (ipAddress.AddressFamily == AddressFamily.InterNetwork)
                        {
                            IPState = 3; 
                        }
                        else if (ipAddress.AddressFamily == AddressFamily.InterNetworkV6) //测试是否支持 IPV6,如果支持 IPV6,就让其改变
                        {
                            TestConnect(ipAddress);
                        }
                    }
                }
            }
            catch (Exception e)
            {
                IPState = 0;
                Debug.LogError("测试是否支持 IPV6 报错,IsSupportedIPV6," + e.ToString());
            }
        }


        private static void TestConnect(IPAddress ipAddress)
        {
            Thread thread = new Thread(Connect);
            thread.Start(ipAddress);
        }

        private static void Connect(object parameter)
        {
            //略等 100 毫秒
            Thread.Sleep(100);
            IPAddress ipAddress = parameter as IPAddress;
            Socket test_Socket = null;
            bool isConnected = false;
            try
            {
                test_Socket = new Socket(ipAddress.AddressFamily,SocketType.Stream,ProtocolType.Tcp);
                test_Socket.Connect(ipAddress,80);//默认端口 80
                if (test_Socket.Connected)
                {
                    isConnected = true;
                }
            }
            catch (Exception e)
            {
                isConnected = false;
                test_Socket = null;
                Debug.LogError("连接服务器出错:" + e.ToString());
            }
            
            //啥也没连上,这种情况下应该属于没有 IPV6 ,IPV4 要看StartTestIPV4Or6上面是否有
            if (isConnected == false) return; 
                
            //如果在测试情况下,并且当前链接的协议簇是 IPV6,结果就是 IPV6 可以连接
            if (IPState == 1 && ipAddress.AddressFamily == AddressFamily.InterNetworkV6)
            {
                IPState = 2; 
            }
            else if (ipAddress.AddressFamily == AddressFamily.InterNetwork)//如果当前连上的是 IPV4,则 IPV4 可连接
            {
                IPState = 3; 
            }
            //关闭 socket
            if (test_Socket != null)
            {
                test_Socket.Shutdown(SocketShutdown.Both);
                test_Socket.Close();
                test_Socket = null;
            }
        }
        
        
        
        
        
    }
}


