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
using UnityEngine;

namespace AM
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
                }
                else
                {
                    IPState = 1;
                    IPHostEntry iph = Dns.GetHostEntry(cdn);
                    foreach (var VARIABLE in iph.AddressList)
                    {
                        Debug.Log("===" + VARIABLE.ToString());
                    }
                    IPState = 2;
                }
            }
            catch (Exception e)
            {
                IPState = 0;
                Debug.LogError("测试是否支持 IPV6 报错,IsSupportedIPV6," + e.ToString());
            }
        }
    }
}


