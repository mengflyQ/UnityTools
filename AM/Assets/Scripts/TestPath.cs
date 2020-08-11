using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class TestPath : MonoBehaviour
{
    public Text ShowPath;
    
    // Start is called before the first frame update
    void Start()
    {
        ShowPath.text = Application.dataPath           + "\n" + Application.streamingAssetsPath + "\n" +
                        Application.persistentDataPath + "\n" + Application.temporaryCachePath;
        StartCoroutine(ReadTXT());
    }

    IEnumerator ReadTXT()
    {
        yield return new WaitForSeconds(2);  
        ShowPath.text = "开始切换 UnityWebRequest";
        
        
        yield return new WaitForSeconds(2);  
        UnityWebRequest uwr = UnityWebRequest.Get(AM.ConfigerPath.GetRequestStreamingAssetsPlatformPath("ReadMe.txt"));  
        yield return uwr.SendWebRequest();  
        //加载完成后处理，有点delay  
        ShowPath.text = uwr.downloadHandler.text;
        
        yield return new WaitForSeconds(2);  
        ShowPath.text = "开始切换 WWW";
        
        yield return new WaitForSeconds(2);  
        WWW www = new WWW(AM.ConfigerPath.GetRequestStreamingAssetsPlatformPath("ReadMe.txt"));  
        yield return www;  
        //加载完成后处理，有点delay  
        ShowPath.text = www.text;
        
        
        yield return new WaitForSeconds(2);
        ShowPath.text = "开始切换 File";
        
        
        yield return new WaitForSeconds(2);
        //不能用在 Android 真机平台上面
        string path = AM.ConfigerPath.GetFileLocalStreamingAssetsPlatformPath("ReadMe.txt");
        if (File.Exists(path)) //判断文件是否存在
        {
            StreamReader streamReader = File.OpenText(path);
            ShowPath.text = streamReader.ReadToEnd();
            streamReader.Close();
        }
        

        yield return new WaitForSeconds(2);  
        ShowPath.text = "切换结束";

    }
    
}
