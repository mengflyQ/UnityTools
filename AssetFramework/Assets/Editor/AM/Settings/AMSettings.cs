using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace AMEditor
{
    [CanEditMultipleObjects]
    public class AMSettings : ScriptableObject
    {
        /// <summary>
        /// 是否是在编辑器调试模式下,默认是 true,打包成 exe,app,apk,ipa 等是 false
        /// </summary>
        [Tooltip("是否是在编辑器调试模式下,默认是 true,打包成 exe,app,apk,ipa 等是 false")]
        public bool IsInEditorDebugMode = true;
        
        /// <summary>
        /// 是否开启热更新,默认不开启.开发效率高
        /// </summary>
        [Tooltip("是否开启热更新,默认不开启.开发效率高")]
        public bool IsBeginHotUpdate = false;
        
        /// <summary>
        /// 下载的资源服务器地址,用来快速验证游戏逻辑;
        /// 开发时直接让平台对接平台服务器地址,游戏内接收平台发送过来的数据即可.
        /// 修改时,直接修改当前的 URL 即可
        /// </summary>
        [Tooltip("平台资源服务器,热更使用")]
        public string HotUpdateURL = "http://localhost:9527/";
        
    }
}


