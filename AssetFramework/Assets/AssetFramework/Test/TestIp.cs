/****************************************************
    文件：TestIp.cs
    作者：zhuzizheng
    日期：#CreateTime#
    功能：#干活#
*****************************************************/

using System.Collections;
using System.Collections.Generic;
using System.Net;
using UnityEngine;

namespace AssetFramework
{
    public class TestIp : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
            // NetUtil.StartTestIPV4Or6("www.baidu.com");
            // Debug.Log(NetUtil.IPState);
            NetUtil.StartTestIPV4Or6("blog.csdn.net");
            Debug.Log(NetUtil.IPState);
            // NetUtil.StartTestIPV4Or6("127.0.0.1");
            // Debug.Log(NetUtil.IPState);
            //
            // IPHostEntry iph = Dns.GetHostEntry("blog.csdn.net");
            // foreach (var VARIABLE in iph.AddressList)
            // {
            //     Debug.Log("===" + VARIABLE.ToString());
            // }
            //
            // IPHostEntry iph1 = Dns.GetHostEntry("www.baidu.com");
            // foreach (var VARIABLE in iph1.AddressList)
            // {
            //     Debug.Log("---" + VARIABLE.ToString());
            // }
        }
    }
}
