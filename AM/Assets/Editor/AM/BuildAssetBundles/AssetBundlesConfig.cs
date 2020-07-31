using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace AMEditor
{
    /// <summary>
    /// 配置 AB 打包的路径
    /// </summary>
    [CanEditMultipleObjects]
    public class AssetBundlesConfig : ScriptableObject
    {
        public static List<string> GetInitialPath()
        {
            return new List<string>()
                   {
                       "Assets/_AssetManagement/Initial/"
                   };
        }
        
        public static List<string> GetHotUpdatePath()
        {
            return new List<string>()
                   {
                       "Assets/_AssetManagement/HotUpdate/"
                   };
        }
        
        /// <summary>
        /// 每一个资源的配置信息
        /// </summary>
        [System.Serializable]
        public class AssetConfig
        {
            //当前资源的名字
            public string name;
            //当前资源的路径
            public string AssetPath;
            //当前资源设置的 AB 名字
            public string ABName;
        }

        [SerializeField]
        public List<string> initialPath = new List<string>();
        [SerializeField]
        public List<string> hotUpdatePath = new List<string>();
        [Tooltip("这个不可以手动设置,程序自动设置")]
        [SerializeField]
        public List<AssetConfig> allAssetConfig = new List<AssetConfig>();

    }
}


