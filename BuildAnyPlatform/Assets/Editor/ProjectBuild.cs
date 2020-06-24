using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEditor.Build.Reporting;
using UnityEditor.SceneManagement;
using UnityEngine;




/// <summary>
/// 必须为静态类
/// </summary>
public static class ProjectBuild
{
    /// <summary>
    /// 这个地方的配置,包括脚本,Jenkins 以及后续的都需要一直
    /// </summary>
    public enum BuildPlatformType
    {
        ipa = 0,
        apk = 1,
        exe = 2,
        app = 3,
    }

    public static void BuildWithUWA()
    {
        //打开开始场景,然后将UWA_Launcher添加进场景
        EditorSceneManager.OpenScene("Assets/Scenes/GameStart.unity");
        string uwa_path = "Assets/UWA/Prefabs/UWA_Launcher.prefab";
        GameObject gameObj = AssetDatabase.LoadAssetAtPath<GameObject>(uwa_path);
        if (gameObj.GetComponent<UWA_Launcher>() != null)
        {
            GameObject UWA_Launcher = GameObject.Instantiate(gameObj);
            UWA_Launcher.name = "UWA_Launcher";
        }
    }


    /// <summary>
    /// 脚本调用,从 Jenkins 里面调用到这个方法进行打包
    /// </summary>
    public static void AutomationBuild()
    {
        BuildPlatformType bpt;
        //先根据命令行参数获取打包平台
        if (!Enum.TryParse(GetCommands("Platform"), out bpt))
        {
            Debug.LogError("枚举项 Platform 在对应的命令行参数中不存在");
            return;
        }
        
        //判断此次打包是哪个平台的
        switch (bpt)
        {
            case BuildPlatformType.apk:
                //BuildAPK();
                BuildAPK_Dev();
                break;
            case BuildPlatformType.ipa:
                BuildIPA();
                break;
            case BuildPlatformType.exe:
                BuildEXE();
                break;
            case BuildPlatformType.app:
                BuildAPP();
                break;
            default:
                Debug.LogError("没有配置这个平台,无法打包  " + bpt.ToString());
                return;
        }
    }
    
    
    
    
    
    
    
    
    
    
    /// <summary>
    /// 打包 iOS /iPhone 
    /// 如果想要 Xcode 工程,可以自行设置
    /// </summary>
    [MenuItem("Tools/Build/ipa")]
    public static void BuildIPA()
    {
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.iOS, BuildTarget.iOS);
        InitConfig(BuildPlatformType.ipa);
        BuildAssetBundle(BuildPlatformType.ipa);
        AssetDatabase.Refresh();

        
        BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
        buildPlayerOptions.scenes           = new[] { "Assets/Scenes/GameStart.unity" };
        buildPlayerOptions.locationPathName = "iOSBuild";
        buildPlayerOptions.targetGroup      = BuildTargetGroup.iOS;
        buildPlayerOptions.target           = BuildTarget.iOS;
        buildPlayerOptions.options          = BuildOptions.None;
        BuildReport  report  = BuildPipeline.BuildPlayer(buildPlayerOptions);
        BuildSummary summary = report.summary;
        if (summary.result == BuildResult.Succeeded)
        {
            Debug.Log("Build ios/ipa succeeded: " + (summary.totalSize /1024 /1024) + " M");
        }
        else if (summary.result == BuildResult.Failed)
        {
            Debug.LogError("Build ios/ipa failed");
        }
    }
    
    /// <summary>
    /// 打包 Android /华为/小米/vivo/三星等
    /// 如果想要 Android 工程,可以自行设置
    /// </summary>
    [MenuItem("Tools/Build/apk")]
    public static void BuildAPK()
    {
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Android, BuildTarget.Android);
        //Android 特有设置
        PlayerSettings.Android.keystorePass = "xxx";
        PlayerSettings.Android.keyaliasPass = "xxx";
        InitConfig(BuildPlatformType.apk);
        BuildAssetBundle(BuildPlatformType.apk);
        AssetDatabase.Refresh();
        //2019版 false 为输出 apk 包,true 为输出 Android 工程,需要使用 Android studio 打开
        EditorUserBuildSettings.exportAsGoogleAndroidProject = false;

        
        BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
        buildPlayerOptions.scenes           = new[] { "Assets/Scenes/GameStart.unity" };
        buildPlayerOptions.locationPathName = "AndroidBuild.apk";
        buildPlayerOptions.targetGroup      = BuildTargetGroup.Android;
        buildPlayerOptions.target           = BuildTarget.Android;
        buildPlayerOptions.options          = BuildOptions.None;
        BuildReport  report  = BuildPipeline.BuildPlayer(buildPlayerOptions);
        BuildSummary summary = report.summary;
        if (summary.result == BuildResult.Succeeded)
        {
            Debug.Log("Build android/apk succeeded: " + (summary.totalSize /1024 /1024) + " M");
        }
        else if (summary.result == BuildResult.Failed)
        {
            Debug.LogError("Build android/apk failed");
        }
    }

    /// <summary>
    /// 打包 Android /华为/小米/vivo/三星等
    /// 如果想要 Android 工程,可以自行设置
    /// </summary>
    [MenuItem("Tools/Build/apk_Dev")]
    public static void BuildAPK_Dev()
    {
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Android, BuildTarget.Android);
        //Android 特有设置
        PlayerSettings.Android.keystorePass = "xxx";
        PlayerSettings.Android.keyaliasPass = "xxx";
        InitConfig(BuildPlatformType.apk);
        BuildAssetBundle(BuildPlatformType.apk);
        AssetDatabase.Refresh();
        //2019版 false 为输出 apk 包,true 为输出 Android 工程,需要使用 Android studio 打开
        EditorUserBuildSettings.exportAsGoogleAndroidProject = false;


        BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
        buildPlayerOptions.scenes = new[] { "Assets/Scenes/GameStart.unity" };
        buildPlayerOptions.locationPathName = "AndroidBuild.apk";
        buildPlayerOptions.targetGroup = BuildTargetGroup.Android;
        buildPlayerOptions.target = BuildTarget.Android;
        buildPlayerOptions.options = BuildOptions.Development;
        BuildReport report = BuildPipeline.BuildPlayer(buildPlayerOptions);
        BuildSummary summary = report.summary;
        if (summary.result == BuildResult.Succeeded)
        {
            Debug.Log("Build android/apk succeeded: " + (summary.totalSize / 1024 / 1024) + " M");
        }
        else if (summary.result == BuildResult.Failed)
        {
            Debug.LogError("Build android/apk failed");
        }
    }

    /// <summary>
    /// 打包 windows 上面可运行程序
    /// </summary>
    [MenuItem("Tools/Build/exe")]
    public static void BuildEXE()
    {
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Standalone, BuildTarget.StandaloneWindows);
        InitConfig(BuildPlatformType.exe);
        BuildAssetBundle(BuildPlatformType.exe);
        AssetDatabase.Refresh();

        
        BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
        buildPlayerOptions.scenes           = new[] { "Assets/Scenes/GameStart.unity" };
        buildPlayerOptions.locationPathName = "WindowsBuild.exe";
        buildPlayerOptions.targetGroup      = BuildTargetGroup.Standalone;
        buildPlayerOptions.target           = BuildTarget.StandaloneWindows64;
        buildPlayerOptions.options          = BuildOptions.None;
        BuildReport  report  = BuildPipeline.BuildPlayer(buildPlayerOptions);
        BuildSummary summary = report.summary;
        if (summary.result == BuildResult.Succeeded)
        {
            Debug.Log("Build windows/exe succeeded: " + (summary.totalSize /1024 /1024) + " M");
        }
        else if (summary.result == BuildResult.Failed)
        {
            Debug.LogError("Build windows/exe failed");
        }
    }
    
    /// <summary>
    /// 打包 mac 上面可以执行的程序
    /// </summary>
    [MenuItem("Tools/Build/app")]
    public static void BuildAPP()
    {
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Standalone, BuildTarget.StandaloneOSX);
        InitConfig(BuildPlatformType.app);
        BuildAssetBundle(BuildPlatformType.app);
        AssetDatabase.Refresh();

        
        BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
        buildPlayerOptions.scenes             = new[] { "Assets/Scenes/GameStart.unity" };
        buildPlayerOptions.locationPathName   = "MacOSBuild";
        buildPlayerOptions.targetGroup        = BuildTargetGroup.Standalone;
        buildPlayerOptions.target             = BuildTarget.StandaloneOSX;
        buildPlayerOptions.options            = BuildOptions.None;
        BuildReport  report                   = BuildPipeline.BuildPlayer(buildPlayerOptions);
        BuildSummary summary                  = report.summary;
        if (summary.result == BuildResult.Succeeded)
        {
            Debug.Log("Build MacOS/app succeeded: " + (summary.totalSize/1024/1024) + " M");
        }
        else if (summary.result == BuildResult.Failed)
        {
            Debug.LogError("Build MacOS/app failed");
        }
    }

    /// <summary>
    /// 初始化设置,可以单独执行,打出内网配置,联调服配置,外网配置,具体设置,需要搞懂具体的业务
    /// </summary>
    public static void InitConfig(BuildPlatformType bpt)
    {
        BuildWithUWA();
    }
    
    /// <summary>
    /// 打包 ab 资源,包括有热更资源,信息记录,md5,并上传到平台服务器(热更服务器,资源服务器)等
    /// 可以单独执行打热更包
    /// </summary>
    public static void BuildAssetBundle(BuildPlatformType bpt)
    {
        
    }
    
    
    
    

    
        
    public static List<string> commands = new List<string>();
    /// <summary>
    /// 该函数使用Environment类方法获取命令行参数;
    /// 使用该函数时 程序名被视为第1参数, 命令行中的其他值依次被视为第2 3...个参数.
    /// </summary>
    private static string GetCommands(string key)
    {
        if (commands.Count<=0)
        {
            commands.Clear();
            foreach (string arg in System.Environment.GetCommandLineArgs())
            {
                //只需要有标记的参数才可以使用,其他的不可以使用
                if (arg.StartsWith("sign_") && arg.EndsWith("_sign"))
                {
                    string arg1 = arg.Replace("sign_", "").Replace("_sign", "");
                    commands.Add(arg1);
                }
            }
        }

        foreach (var value in commands)
        {
            if (value.Contains(key + "-"))
            {
                return value.Split('-').Last();
            }
        }
        Debug.LogError("没有找到你想要的参数,请在脚本或者 Jenkins 里面设置相关参数 :" + key);
        return key;
    }
}
