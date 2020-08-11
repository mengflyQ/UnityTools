/********************************************************************
 Date: 2020-08-11
 Name: ConfigerPath
 author:  zhuzizheng
*********************************************************************/

using UnityEngine;
using System.IO;

namespace AM
{
    /// <summary>
    /// 所有平台的配置路径,
    /// 下载路径,
    /// 文件保存路径等
    /// </summary>
    public static class ConfigerPath
    {
        
        
        
        /// <summary>
        /// 在 Android 真机上面,只能使用www/UnityWebRequest对这个路径进行读取
        /// 其他平台上面可以使用 file 或者 www/UnityWebRequest 进行读取.
        /// 或者将StreamingAssets文件夹下面的所有文件,在手机端,全部挪到persistentDataPath文件夹下进行读取也可以的
        /// </summary>
        /// <param name="path"></param>
        /// <returns></returns>
        public static string GetRequestStreamingAssetsPlatformPath(string path)
        {
            string url = GetFileLocalStreamingAssetsPlatformPath(path);
#if   !UNITY_ANDROID
            url = "file://" +url;
#endif
            return url;
        }
        
        
        /// <summary>
        /// Application.streamingAssetsPath 是只读路径,无法在其他平台上面写入数据
        /// Application.persistentDataPath  是可以读写路径
        /// 这个方式在 mac editor 与 windows editor 方式下使用 File 的方式进行读取
        /// 如果要用 www 的方式进行读取需要在前面加上 file://
        /// </summary>
        /// <param name="path"></param>
        /// <returns></returns>
        public static string GetFileLocalStreamingAssetsPlatformPath(string path)
        {
            string lspPath = Application.streamingAssetsPath + "/" + Platform.GetPlatformName();
#if   UNITY_STANDALONE || UNITY_EDITOR
            if (!Directory.Exists(lspPath))
            {
                Directory.CreateDirectory(lspPath);
            }
            if (!Directory.Exists(lspPath))
            {
                Debug.LogError("不存在这个文件夹");
            }
#endif
            return lspPath + "/" + path;
        }
        
        private static string m_persistent_root_path = string.Empty;
        /// <summary>
        /// 各个平台的 PersistentDataPath 可读写,无需加 "file://"
        /// </summary>
        /// <param name="path"></param>
        /// <returns></returns>
        public static string GetPersistentDataPlatformPath(string path = "")
        {
            if (m_persistent_root_path == string.Empty)
            {
                m_persistent_root_path = Application.persistentDataPath;
#if UNITY_STANDALONE || UNITY_EDITOR
                m_persistent_root_path = Application.dataPath;
                m_persistent_root_path = m_persistent_root_path.Substring(0, m_persistent_root_path.Length - 6) + "tmp_persistent";
#else
                m_persistent_root_path = Application.persistentDataPath + "/" + Platform.GetPlatformName();
#endif
                if (!Directory.Exists(m_persistent_root_path))
                {
                    Directory.CreateDirectory(m_persistent_root_path);
                }
            }
            return m_persistent_root_path + "/" + path;
        }
    }
}

/*
        UnityWebRequest uwr = UnityWebRequest.Get(AM.Platform.GetRequestStreamingAssetsPlatformPath("ReadMe.txt"));  
        yield return uwr.SendWebRequest();  
        //加载完成后处理，有点delay  
        ShowPath.text = uwr.downloadHandler.text;

        //一般不再使用它了
        WWW www = new WWW(AM.Platform.GetRequestStreamingAssetsPlatformPath("ReadMe.txt"));  
        yield return www;  
        //加载完成后处理，有点delay  
        ShowPath.text = www.text;
        
        //不能用在 Android 真机平台上面
        string path = AM.Platform.GetFileLocalStreamingAssetsPlatformPath("ReadMe.txt");
        if (File.Exists(path)) //判断文件是否存在
        {
            StreamReader streamReader = File.OpenText(path);
            ShowPath.text = streamReader.ReadToEnd();
            streamReader.Close();
        } 
 */