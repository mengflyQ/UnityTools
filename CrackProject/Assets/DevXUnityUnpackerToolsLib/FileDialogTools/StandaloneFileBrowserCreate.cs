using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StandaloneFileBrowserCreate : MonoBehaviour
{

    public class f_init
    {
        public f_init()
        {

#if UNITY_STANDALONE_OSX
        StandaloneFileBrowser.PlatformWrapper = new PluginTools.StandaloneFileBrowserMac();
#elif UNITY_STANDALONE_WIN
        StandaloneFileBrowser.PlatformWrapper = new PluginTools.StandaloneFileBrowserWindows();
#elif UNITY_EDITOR
        StandaloneFileBrowser.PlatformWrapper = new PluginTools.StandaloneFileBrowserEditor();
#endif
        }
    }
    f_init gl_init = new f_init();
    void Awake()
    {


    }

    // Use this for initialization
    void Start()
    {



    }

    // Update is called once per frame
    void Update()
    {

    }
}
