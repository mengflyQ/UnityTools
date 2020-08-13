using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using UnityEngine;

public class TestDown : MonoBehaviour
{
    CHttpDownMng m_downMng;
    void Start()
    {
        // IPHostEntry host = Dns.GetHostByName("blog.csdn.net");
        // IPAddress   ip   = host.AddressList[0];
        // Debug.Log(ip.ToString());
        
        CTcp.StartTestIPV6("blog.csdn.net"); // 启动时测试一下我本地的IPV6环境, 请将这个域名修改你项目的CDN地址
    }
    void  StartDown()
    {
        // 以下只是测试几个下载，麻烦同学修改成您项目的资源url
        List<DownResInfo> downList = new List<DownResInfo>();
        PushDownFile(downList, "http://www.heao.gov.cn/HEAOFiles/All/ZHC/2019/09301.jpg");
        PushDownFile(downList, "http://www.heao.gov.cn/HEAOFiles/All/ZHC/2019/09302.jpg");
        PushDownFile(downList, "http://www.heao.gov.cn/HEAOFiles/All/ZHC/2019/09122.jpg");
        PushDownFile(downList, "http://www.heao.gov.cn/a/201910/42140.shtml");

        //PushDownFile(downList, "http://static.it1352.com/Content/upload/20170317180310_925aaf68-2087-4102-9286-03f51d5df29a.jpg");
        //PushDownFile(downList, "http://static.it1352.com/Content/upload/fad370454fb441158b55171ac70f2ef3.jpg");
        //PushDownFile(downList, "http://static.it1352.com/Content/upload/4ed6d2990e07438395000000087858a3.jpg");
        //PushDownFile(downList, "http://static.it1352.com/Content/upload/1eda9f0e70134189839a7dd4b5e271ca.jpg");
        //PushDownFile(downList, "http://static.it1352.com/Content/upload/567680127c434a9099dc7f2a705695a5.jpg");
        CHttpDownMng mng = new CHttpDownMng();
        mng.StartDown(downList, 2, 100 * 1024, CTargetPlat.PersistentRootPath);
        m_downMng = mng;
    }
    void  PushDownFile(List<DownResInfo> downList, string url)
    {
        DownResInfo node = new DownResInfo();
        node.url = url;
        CHttpDown.GetDownFileSize(url, out node.nFileSize);
        downList.Add(node);
    }

    void OnGUI()
    {
        float fOffsetY = Screen.height - 720;
        if (fOffsetY < 0.0f)
            fOffsetY = 0.0f;
        else if (fOffsetY > 300)
            fOffsetY = 300;
        float fLeft = 50.0f;
        float fTop = 250.0f + fOffsetY;
        if (GUI.Button(new Rect(fLeft, fTop, 100.0f, 20.0f), "测试下载"))
        {
            StartDown();
        }
        fLeft += 120;
        if (GUI.Button(new Rect(fLeft, fTop, 120.0f, 20.0f), "打开下载目录"))
        {
            string szPath = CTargetPlat.PersistentRootPath;
            szPath = szPath.Replace('/', '\\');
            System.Diagnostics.Process.Start("explorer.exe", szPath);
        }
    }
}
