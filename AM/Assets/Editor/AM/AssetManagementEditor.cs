using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace AMEditor
{
    public class AssetManagementEditor : Editor
    {

        #region AB配置

        [MenuItem("AM/1.AB配置/创建AB配置文件",priority = 901)]
        public static AssetBundlesConfig AddABConfig()
        {
            AssetBundlesConfig abConfig = AssetDatabase.LoadAssetAtPath<AssetBundlesConfig>("Editor Default resources/AM/AssetBundlesConfig.asset");
            if (abConfig == null)
            {
                abConfig = ScriptableObject.CreateInstance<AssetBundlesConfig>();
                abConfig.initialPath.AddRange(AssetBundlesConfig.GetInitialPath());
                abConfig.hotUpdatePath.AddRange(AssetBundlesConfig.GetHotUpdatePath());
                AssetDatabase.CreateAsset(abConfig,"Assets/Editor Default resources/AM/AssetBundlesConfig.asset");
                AssetDatabase.SaveAssets();
                AssetDatabase.Refresh();
            }
            Selection.activeObject = abConfig;
            return abConfig;
        }
        
        [MenuItem("AM/1.AB配置/重置 AB 路径",priority = 906)]
        public static void UpdateABConfig()
        {
            AssetBundlesConfig abConfig = AddABConfig();
            abConfig.initialPath.Clear();
            abConfig.hotUpdatePath.Clear();
            abConfig.allAssetConfig.Clear();
            abConfig.initialPath.AddRange(AssetBundlesConfig.GetInitialPath());
            abConfig.hotUpdatePath.AddRange(AssetBundlesConfig.GetHotUpdatePath());
        }
        
        
        [MenuItem("AM/1.AB配置/设置 AB 名字",priority = 904)]
        public static void UpdateABName()
        {
            AssetBundlesConfig abConfig = AddABConfig();
            abConfig.allAssetConfig.Clear();
            
        }
        
        [MenuItem("AM/1.AB配置/清除 AB 名字",priority = 905)]
        public static void DeleteABName()
        {
            AssetBundlesConfig abConfig = AddABConfig();
            abConfig.allAssetConfig.Clear();
        }

        #endregion
        
        #region 游戏设置

        [MenuItem("AM/2.游戏配置/创建游戏基础配置文件",priority = 1101)]
        public static AMSettings AddAMSettings()
        {
            AMSettings amSettings = AssetDatabase.LoadAssetAtPath<AMSettings>("Assets/Resources/AMSettings.asset");
            if (amSettings == null)
            {
                amSettings = ScriptableObject.CreateInstance<AMSettings>();
                AssetDatabase.CreateAsset(amSettings, "Assets/Resources/AMSettings.asset");
                AssetDatabase.SaveAssets();
                AssetDatabase.Refresh();
            }
            Selection.activeObject = amSettings;
            return amSettings;
        }
        
        [MenuItem("AM/2.游戏配置/是否开启热更新",priority = 1102)]
        public static AMSettings UpdateAMSettings()
        {
            AMSettings amSettings = AddAMSettings();
            amSettings.IsBeginHotUpdate = !amSettings.IsBeginHotUpdate;
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
            Selection.activeObject = amSettings;
            return amSettings;
        }

        #endregion
        
        #region 打ab包

        [MenuItem("AM/3.AB打包/打包(当前平台)",priority = 10001)]
        public static void BuildAssetBundle()
        {
            
        }
    
        [MenuItem("AM/3.AB打包/随包资源(当前平台)",priority = 10002)]
        public static void BuildInitialAssetBundle()
        {
        
        }
    
        [MenuItem("AM/3.AB打包/热更包资源(当前平台)",priority = 10003)]
        public static void BuildHotUpdateAssetBundle()
        {
        
        }
        
        /// <summary>
        /// 一键打包,无需配置,主要提供给 Jenkins 使用
        /// 上面的方法主要提供给程序/运营/策划等人使用
        /// </summary>
        public static void BuildAB()
        {
            
        }

        #endregion
        
    }
}


