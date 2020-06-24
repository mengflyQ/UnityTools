using System.IO;
using UnityEditor;
using UnityEngine;

namespace Editor
{
    public static class BuildAssetBundles
    {
        /// <summary>
        /// 打包 iOS /iPhone 
        /// 如果想要 Xcode 工程,可以自行设置
        /// </summary>
        [MenuItem("Tools/BuildAssetBundles")]
        public static void BuildAllAssetBundles()
        {
            string outputPath = Application.dataPath + "/StreamingAssets/" +
                                EditorUserBuildSettings.activeBuildTarget.ToString();
            BuildAssetBundleOptions assetOptions = BuildAssetBundleOptions.ChunkBasedCompression | 
                                                   BuildAssetBundleOptions.DeterministicAssetBundle;
            BuildPipeline.BuildAssetBundles(outputPath, assetOptions, EditorUserBuildSettings.activeBuildTarget);
        }    
    }
}