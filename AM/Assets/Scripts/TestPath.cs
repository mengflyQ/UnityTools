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
        Debug.Log(ShowPath.text);
        // string path = AM.Platform.GetLocalStreamingAssetsPlatformPath("ReadMe.txt");
        // if(!File.Exists(path)) //判断文件是否存在
        //     return;
        // StreamReader streamReader = File.OpenText(path);
        // ShowPath.text = streamReader.ReadToEnd();
        // streamReader.Close();
    }
    
}
