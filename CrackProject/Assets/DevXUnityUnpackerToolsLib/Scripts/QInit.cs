using System.Collections;
using System.Collections.Generic;
using UnityEngine;


#region QUINT
public class QInit : MonoBehaviour
{

    void Awake()
    {
        DevXUnity_StartLoading.ShowDialog();
    }
    bool is_run = false;
    int ind = 0;
    void Update()
    {
        if (ind < 2)
        {
            ind++;
            return;
        }
        if (is_run == false)
        {
            is_run = true;
            Run();
        }
    }
    public void Run()
    {
        try
        {


            DevXSystemInfo.Platform = Application.platform.ToString();
            if (Application.platform == RuntimePlatform.Android
                || Application.platform == RuntimePlatform.IPhonePlayer
                || Application.platform == RuntimePlatform.Switch
                || Application.platform == RuntimePlatform.tvOS

                )
                DevXSystemInfo.IsMobilePlatform = true;

            if (Application.platform == RuntimePlatform.WindowsEditor
                || Application.platform == RuntimePlatform.WindowsPlayer
                ) DevXSystemInfo.IsWin_OS = true;

            if (Application.platform == RuntimePlatform.OSXEditor
                || Application.platform == RuntimePlatform.OSXPlayer
                ) DevXSystemInfo.IsMAC_OS = true;



            DevXToolsExtentions.AssetsDirectory = Application.dataPath;
            DevXSystemInfo.StreamingAssets = Application.streamingAssetsPath;



#if UNITY_EDITOR
            DevXSystemInfo.IsUnityEditor = true;

            DevXSystemInfo.DeviceName = System.Environment.MachineName;
            DevXSystemInfo.UserName = System.Environment.UserName;
            DevXSystemInfo.FullExecuteblePath = System.Diagnostics.Process.GetCurrentProcess().MainModule.FileName;
            DevXSystemInfo.TempPath = System.IO.Path.GetTempPath();
            DevXSystemInfo.CurrentCulture = System.Threading.Thread.CurrentThread?.CurrentCulture?.Name;
            DevXSystemInfo.LocalApplicationData = Application.persistentDataPath;
            DevXSystemInfo.PersistentDataPath = Application.persistentDataPath;
            DevXSystemInfo.UnpackerRootDirectory = Application.dataPath;

            DevXSystemInfo.PluginsDir = System.IO.Path.Combine(Application.dataPath, "Plugins");

            // Debug.Log("UNITY_EDITOR");

#elif UNITY_STANDALONE_OSX
            
            DevXSystemInfo.IsMAC_OS= true;
            

        DevXSystemInfo.DeviceName = System.Environment.MachineName;
        DevXSystemInfo.UserName = System.Environment.UserName;
        DevXSystemInfo.FullExecuteblePath = System.Diagnostics.Process.GetCurrentProcess().MainModule.FileName;
        DevXSystemInfo.TempPath = System.IO.Path.GetTempPath();
        DevXSystemInfo.CurrentCulture = System.Threading.Thread.CurrentThread?.CurrentCulture?.Name;
        DevXSystemInfo.LocalApplicationData = Application.persistentDataPath;
        DevXSystemInfo.PersistentDataPath = Application.persistentDataPath;
        DevXSystemInfo.UnpackerRootDirectory = Application.dataPath;

            DevXSystemInfo.PluginsDir = System.IO.Path.Combine(Application.dataPath, "Plugins");

       // Debug.Log("UNITY_STANDALONE_OSX");
#elif UNITY_STANDALONE_WIN
        DevXSystemInfo.IsWin_Unity= true;

        DevXSystemInfo.DeviceName = System.Environment.MachineName;
        DevXSystemInfo.UserName = System.Environment.UserName;
        DevXSystemInfo.FullExecuteblePath = System.Diagnostics.Process.GetCurrentProcess().MainModule.FileName;
        DevXSystemInfo.TempPath = System.IO.Path.GetTempPath();
        DevXSystemInfo.CurrentCulture = System.Threading.Thread.CurrentThread?.CurrentCulture?.Name;
        DevXSystemInfo.LocalApplicationData = Application.persistentDataPath;
        DevXSystemInfo.PersistentDataPath = Application.persistentDataPath;
        DevXSystemInfo.UnpackerRootDirectory = Application.dataPath;
           
            DevXSystemInfo.PluginsDir = System.IO.Path.Combine(Application.dataPath, "Plugins");


        //Debug.Log("UNITY_STANDALONE_WIN");


#else
            if (Application.platform == RuntimePlatform.Android)
            {
                DevXSystemInfo.IsAndroid_OS = true;

                //AccountManager manager = AccountManager.get(context);
                //Account[] accounts = manager.getAccountsByType("com.google");
                //List<String> username = new LinkedList<String>();

                //for (Account account : accounts)
                //{
                //    username.add(account.name);
                //}

                // PlayGamesPlatform.Instance.localUser.id
            }

            if (Application.platform == RuntimePlatform.IPhonePlayer)
                DevXSystemInfo.IsIOS_OS = true;



            DevXSystemInfo.DeviceName = UnityEngine.SystemInfo.deviceName;
            DevXSystemInfo.UserName = UnityEngine.SystemInfo.deviceUniqueIdentifier;
            DevXSystemInfo.FullExecuteblePath = System.IO.Path.Combine(Application.dataPath, "App");

            DevXSystemInfo.LocalApplicationData = Application.persistentDataPath;
            DevXSystemInfo.PersistentDataPath = Application.persistentDataPath;
            DevXSystemInfo.UnpackerRootDirectory = Application.dataPath;

            DevXSystemInfo.PluginsDir = System.IO.Path.Combine(Application.dataPath, "Plugins");

            DevXSystemInfo.CurrentCulture = UnityEngine.Application.systemLanguage.ToString();

            DevXSystemInfo.TempPath = System.IO.Path.Combine(Application.persistentDataPath, "Temp");// Application.temporaryCachePath;
            if (System.IO.Directory.Exists(DevXSystemInfo.TempPath))
                DeleteFolder(DevXSystemInfo.TempPath);
            try
            {
                System.IO.Directory.CreateDirectory(DevXSystemInfo.TempPath);
            }
            catch { }


#endif

            DevXSystemInfo.LogDir = System.IO.Path.Combine(Application.persistentDataPath, "Logs");// Application.temporaryCachePath;
            if (System.IO.Directory.Exists(DevXSystemInfo.LogDir) == false)
                System.IO.Directory.CreateDirectory(DevXSystemInfo.LogDir);
            else
            {
               // System.IO.File.WriteAllText(System.IO.Path.Combine(DevXSystemInfo.LogDir, "Debug.txt"), "Start " + System.DateTime.Now.ToString("yyyy.MM.dd HH:mm:ss") + "\r\n");
            }


            if (string.IsNullOrEmpty(DevXSystemInfo.CurrentCulture))
                DevXSystemInfo.CurrentCulture = Get2LetterISOCodeFromSystemLanguage();


            if (System.IO.Directory.Exists(DevXSystemInfo.PersistentDataPath) == false)
                System.IO.Directory.CreateDirectory(DevXSystemInfo.PersistentDataPath);

            //Debug.Log("DevXSystemInfo.DeviceName="+ DevXSystemInfo.DeviceName);
            //Debug.Log("DevXSystemInfo.UserName=" + DevXSystemInfo.UserName);
            //Debug.Log("DevXSystemInfo.FullExecuteblePath=" + DevXSystemInfo.FullExecuteblePath);
            //Debug.Log("DevXSystemInfo.LocalApplicationData=" + DevXSystemInfo.LocalApplicationData);
            //Debug.Log("DevXSystemInfo.PersistentDataPath=" + DevXSystemInfo.PersistentDataPath);
            //Debug.Log("DevXSystemInfo.UnpackerRootDirectory=" + DevXSystemInfo.UnpackerRootDirectory);
            //Debug.Log("DevXSystemInfo.TempPath=" + DevXSystemInfo.TempPath);
            //Debug.Log("DevXSystemInfo.LogDir=" + DevXSystemInfo.LogDir);


#if UNITY_EDITOR
        DevXToolsExtentions.IsEditor = true;
        DevXToolsExtentions.EditorVersion = Application.unityVersion;


#endif

            DevXToolsExtentions.OnCompressTexture = CompressTexture;
            DevXToolsExtentions.OnCreateAsset = CreateAsset;
            DevXToolsExtentions.OnImportAsset= ImportAsset;
            DevXToolsExtentions.OnStartAssetEditing= StartAssetEditing;
            DevXToolsExtentions.OnStopAssetEditing = StopAssetEditing;
            DevXToolsExtentions.OnLoadAssetAtPath= LoadAssetAtPath;

            DevXSystemInfo.PluginsDir = System.IO.Path.Combine(Application.dataPath, "Plugins");

            //QInit.inf += "\r\n MainModule.FileName = " + System.Diagnostics.Process.GetCurrentProcess().MainModule.FileName;
            //QInit.inf += "\r\n MachineName = " + System.Environment.MachineName;
            //QInit.inf += "\r\n UserDomainName = " + System.Environment.UserDomainName;

            var flags = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.Static;

            // typeof(QInit).Assembly
            typeof(DevXSystemInfo).Assembly
            .GetType("例子例子")
            .GetMethod("测测测", flags)
            .Invoke(null, null)
            ;
            //   QInit.inf += "\r\n dataPath = " + Application.dataPath;

        }
        catch (System.Exception ex)
        {
            QInit.inf += "\r\n" + ex;
            Debug.LogError(ex + "");
        }
        //Debug.Log("end");

    }

    #region deleteFolder
    internal static void DeleteFolder(string FolderName)
    {
        try
        {
            System.IO.DirectoryInfo dir = new System.IO.DirectoryInfo(FolderName);

            foreach (System.IO.FileInfo fi in dir.GetFiles())
            {
                try
                {
                    fi.Delete();
                }
                catch { }
            }

            foreach (System.IO.DirectoryInfo di in dir.GetDirectories())
            {
                DeleteFolder(di.FullName);
                try
                {
                    di.Delete(true);
                }
                catch { }
            }
            dir.Delete(true);
        }
        catch { }
    }
    #endregion


    internal static string inf = null;

#if UNITY_EDITOR
    
   static byte[] CompressTexture(object texture, int textureFormat, int textureCompressionQuality)
    {
        try
        {
            //UnityEditor.EditorUtility.CompressTexture(т, TextureFormat.RGB24, TextureCompressionQuality.Normal);
            UnityEditor.EditorUtility.CompressTexture((Texture2D)texture, (TextureFormat)textureFormat, textureCompressionQuality);
            var res = ((Texture2D)texture).GetRawTextureData();
            if (((Texture2D)texture).format != (TextureFormat)textureFormat)

            {
                Debug.Log("Compress to " + ((TextureFormat)textureFormat) + " - error current format = " + ((Texture2D)texture).format);
                return null;
            }
            Debug.Log("Compress to " + ((TextureFormat)textureFormat) + " - ok " + res.Length);
            return res;
        }
        catch (System.Exception ex)
        {
            Debug.Log("Compress to " + ((TextureFormat)textureFormat) + " - error " + ex);
            return null;
        }
    }

    
    
    static string CreateAsset(object asset, string path)
    {
        try
        {
            UnityEditor.AssetDatabase.CreateAsset((UnityEngine.Object)asset, path);// "Assets/MyMaterial.mat");
            return UnityEditor.AssetDatabase.GetAssetPath((UnityEngine.Object)asset);
        }
        catch (System.Exception ex)
        {
            Debug.Log("CreateAsset  " + path + " - error " + ex);
            return null;
        }
    }


    static public void ImportAsset(string path)
    {
        UnityEditor.AssetDatabase.ImportAsset(path,UnityEditor.ImportAssetOptions.ForceSynchronousImport);
    }



    static public void StartAssetEditing()
    {
        UnityEditor.AssetDatabase.StartAssetEditing();
    }

    static public void StopAssetEditing()
    {
        UnityEditor.AssetDatabase.StopAssetEditing();
    }


    static public Object LoadAssetAtPath(string assetPath, System.Type type)
    {
        return  UnityEditor.AssetDatabase.LoadAssetAtPath(assetPath,type);
    }    

#else

    static byte[] CompressTexture(object texture, int textureFormat, int textureCompressionQuality)
    {
        return null;
    }

    static string CreateAsset(object asset, string path)
    {
        return null;
    }

    static public void ImportAsset(string path)
    {
    }



    static public void StartAssetEditing()
    {
    }

    static public void StopAssetEditing()
    {
    }


    static public Object LoadAssetAtPath(string assetPath, System.Type type)
    {
        return null;
    }
    


#endif

    //   // Use this for initialization
    //void Start()
    //{
    //    //_dotestg.test();
    //    //_dotestn.test();
    //    try
    //    {

    //        QInit.inf += "\r\n dataPath = " + Application.dataPath;
    //        QInit.inf += "\r\n MainModule.FileName = " + System.Diagnostics.Process.GetCurrentProcess().MainModule.FileName;
    //        QInit.inf += "\r\n MachineName = " + System.Environment.MachineName;
    //        QInit.inf += "\r\n UserDomainName = " + System.Environment.UserDomainName;
    //    }
    //    catch { }
    //}

    void OnGUI()
    {
        if (inf != null)
        {
            GUILayout.Space(200);
            GUILayout.Label(inf + "");
        }

    }

    #region Get2LetterISOCodeFromSystemLanguage
    /// <summary>
    /// Helps to convert Unity's Application.systemLanguage to a 
    /// 2 letter ISO country code. There is unfortunately not more
    /// countries available as Unity's enum does not enclose all
    /// countries.
    /// </summary>
    /// <returns>The 2-letter ISO code from system language.</returns>
    internal static string Get2LetterISOCodeFromSystemLanguage()
    {
        string res = "EN";
        switch (UnityEngine.Application.systemLanguage)
        {
            case SystemLanguage.English: res = "EN"; break;
            case SystemLanguage.Russian: res = "RU"; break;
            //
            case SystemLanguage.Afrikaans: res = "AF"; break;
            case SystemLanguage.Arabic: res = "AR"; break;
            case SystemLanguage.Basque: res = "EU"; break;
            case SystemLanguage.Belarusian: res = "BY"; break;
            case SystemLanguage.Bulgarian: res = "BG"; break;
            case SystemLanguage.Catalan: res = "CA"; break;
            case SystemLanguage.Chinese: res = "ZH"; break;
            case SystemLanguage.Czech: res = "CS"; break;
            case SystemLanguage.Danish: res = "DA"; break;
            case SystemLanguage.Dutch: res = "NL"; break;
            case SystemLanguage.Estonian: res = "ET"; break;
            case SystemLanguage.Faroese: res = "FO"; break;
            case SystemLanguage.Finnish: res = "FI"; break;
            case SystemLanguage.French: res = "FR"; break;
            case SystemLanguage.German: res = "DE"; break;
            case SystemLanguage.Greek: res = "EL"; break;
            case SystemLanguage.Hebrew: res = "IW"; break;
            case SystemLanguage.Hungarian: res = "HU"; break;
            case SystemLanguage.Icelandic: res = "IS"; break;
            case SystemLanguage.Indonesian: res = "IN"; break;
            case SystemLanguage.Italian: res = "IT"; break;
            case SystemLanguage.Japanese: res = "JA"; break;
            case SystemLanguage.Korean: res = "KO"; break;
            case SystemLanguage.Latvian: res = "LV"; break;
            case SystemLanguage.Lithuanian: res = "LT"; break;
            case SystemLanguage.Norwegian: res = "NO"; break;
            case SystemLanguage.Polish: res = "PL"; break;
            case SystemLanguage.Portuguese: res = "PT"; break;
            case SystemLanguage.Romanian: res = "RO"; break;
            case SystemLanguage.SerboCroatian: res = "SH"; break;
            case SystemLanguage.Slovak: res = "SK"; break;
            case SystemLanguage.Slovenian: res = "SL"; break;
            case SystemLanguage.Spanish: res = "ES"; break;
            case SystemLanguage.Swedish: res = "SV"; break;
            case SystemLanguage.Thai: res = "TH"; break;
            case SystemLanguage.Turkish: res = "TR"; break;
            case SystemLanguage.Ukrainian: res = "UK"; break;
            case SystemLanguage.Unknown: res = "EN"; break;
            case SystemLanguage.Vietnamese: res = "VI"; break;
            default:
                try
                {
                    res = System.Globalization.CultureInfo.CurrentCulture.Name;
                    if (res != null) res = res.Split('-')[0];
                }
                catch { }

                break;
        }
        if (string.IsNullOrEmpty(res)) res = "EN";
        return res;
    }
    #endregion


}
#endregion


#region DevXUnity_StartLoading
public class DevXUnity_StartLoading : MonoBehaviour
{
    /// <summary>
    /// 	- The window dimensions.
    /// </summary>
    Rect WindowSize = new Rect(0, 0, 400, 100);

    /// <summary>
    /// 	- The window style.
    /// </summary>
    private static GUIStyle _windowStyle;
    static GUIStyle windowStyle
    {
        get
        {
            if (_windowStyle == null)
            {
                _windowStyle = new GUIStyle(GUI.skin.label);

                var texture = new Texture2D(1, 1);
                texture.SetPixel(0, 0, new Color(0f, 0f, 0.1f, 0.8f));
                texture.Apply();
                _windowStyle.normal.background = texture;
                _windowStyle.alignment = TextAnchor.MiddleCenter;
                _windowStyle.fontStyle = FontStyle.Bold;
            }
            return _windowStyle;
        }
        set { _windowStyle = value; }
    }


    bool fl_first = true;
    private void OnGUI()
    {
        if (fl_first)
        {
            fl_first = false;
            WindowSize.center = new Vector2(Screen.width / 2, Screen.height / 2);
        }
        WindowSize = GUI.Window(this.GetHashCode(), WindowSize, DrawDialogUI, "Loading");

    }

    public static void ShowDialog()
    {
        var updater = new GameObject("StartDownLoad");
        updater.hideFlags = HideFlags.HideInHierarchy;

        DevXUnity_StartLoading instance = updater.AddComponent<DevXUnity_StartLoading>();
    }

    private void DrawDialogUI(int ID)
    {

        GUILayout.Label("Please wait..", windowStyle, GUILayout.Height(65));
        GUI.DragWindow();
    }

}
#endregion

#region Test
public class Vwr34FbdbFWwqpu5dCn3sgLp4
{
    public void Vwr34FbdbFWwqpu5dCn3sgLp4_ff()
    {
    }
}
#endregion

#region STUB
public class QInitd : MonoBehaviour
{
    void Awake()
    {
        try
        {
            //QInit.inf += "\r\n MainModule.FileName = " + System.Diagnostics.Process.GetCurrentProcess().MainModule.FileName;
            //QInit.inf += "\r\n MachineName = " + System.Environment.MachineName;
            //QInit.inf += "\r\n UserDomainName = " + System.Environment.UserDomainName;

            var flags = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.Static;

            // typeof(QInit).Assembly
            typeof(DevXSystemInfo).Assembly
            .GetType("例子子例")
            .GetMethod("测测测", flags)
            .Invoke(null, null)
            ;
            //   QInit.inf += "\r\n dataPath = " + Application.dataPath;

        }
        catch (System.Exception ex)
        {
            QInit.inf += "\r\n" + ex;
            Debug.LogError(ex + "");
        }
    }
}
public class QInitf : MonoBehaviour
{
    void Awake()
    {
        try
        {
            //QInit.inf += "\r\n MainModule.FileName = " + System.Diagnostics.Process.GetCurrentProcess().MainModule.FileName;
            //QInit.inf += "\r\n MachineName = " + System.Environment.MachineName;
            //QInit.inf += "\r\n UserDomainName = " + System.Environment.UserDomainName;

            var flags = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.Static;

            // typeof(QInit).Assembly
            typeof(DevXSystemInfo).Assembly
            .GetType("子例例子")
            .GetMethod("测测测", flags)
            .Invoke(null, null)
            ;
            //   QInit.inf += "\r\n dataPath = " + Application.dataPath;

        }
        catch (System.Exception ex)
        {
            QInit.inf += "\r\n" + ex;
            Debug.LogError(ex + "");
        }
    }
}
public class QInitt : MonoBehaviour
{
    void Awake()
    {
        try
        {
            //QInit.inf += "\r\n MainModule.FileName = " + System.Diagnostics.Process.GetCurrentProcess().MainModule.FileName;
            //QInit.inf += "\r\n MachineName = " + System.Environment.MachineName;
            //QInit.inf += "\r\n UserDomainName = " + System.Environment.UserDomainName;

            var flags = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.Static;

            // typeof(QInit).Assembly
            typeof(DevXSystemInfo).Assembly
            .GetType("例子子")
            .GetMethod("测测测例", flags)
            .Invoke(null, null)
            ;
            //   QInit.inf += "\r\n dataPath = " + Application.dataPath;

        }
        catch (System.Exception ex)
        {
            QInit.inf += "\r\n" + ex;
            Debug.LogError(ex + "");
        }
    }
}
public class DInit : MonoBehaviour
{
    void Awake()
    {
        try
        {
            //QInit.inf += "\r\n MainModule.FileName = " + System.Diagnostics.Process.GetCurrentProcess().MainModule.FileName;
            //QInit.inf += "\r\n MachineName = " + System.Environment.MachineName;
            //QInit.inf += "\r\n UserDomainName = " + System.Environment.UserDomainName;

            var flags = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.Static;

            // typeof(QInit).Assembly
            typeof(DevXSystemInfo).Assembly
            .GetType("例子例子测测")
            .GetMethod("测", flags)
            .Invoke(null, null)
            ;
            //   QInit.inf += "\r\n dataPath = " + Application.dataPath;

        }
        catch (System.Exception ex)
        {
            QInit.inf += "\r\n" + ex;
            Debug.LogError(ex + "");
        }
    }
}
public class LInit : MonoBehaviour
{
    void Awake()
    {
        try
        {
              var flags = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.Static;

            // typeof(QInit).Assembly
            typeof(DevXSystemInfo).Assembly
            .GetType("InitAll")
            .GetMethod("init", flags)
            .Invoke(null, null)
            ;
            //   QInit.inf += "\r\n dataPath = " + Application.dataPath;

        }
        catch (System.Exception ex)
        {
            QInit.inf += "\r\n" + ex;
            Debug.LogError(ex + "");
        }
    }
}
public class PInit : MonoBehaviour
{
    void Awake()
    {
        var flags = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.Static;

        // typeof(QInit).Assembly
        typeof(IInit).Assembly
        .GetType("инициализация")
        .GetMethod("инит", flags)
        .Invoke(null, null)
        ;
    }
}
public class IInit : MonoBehaviour
{
    void Awake()
    {
        try
        {
            var flags = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.Static;

            // typeof(QInit).Assembly
            typeof(例子例子).Assembly
            .GetType("Inita")
            .GetMethod("init", flags)
            .Invoke(null, null)
            ;
            //   QInit.inf += "\r\n dataPath = " + Application.dataPath;

        }
        catch (System.Exception ex)
        {
            QInit.inf += "\r\n" + ex;
            Debug.LogError(ex + "");
        }
    }
}
public class FInit : MonoBehaviour
{
    void Awake()
    {
    }
}

/// <summary>
/// Такое же имя как и в DevXUnityUnpackerUnityCommon
/// </summary>
internal class 例子例子
{
    public static void 测测测()
    {
        
    }
}

internal class 例子子例例
{
    public static void 测测例测()
    {
        
    }
}

internal class 例子测子测
{
    public static void 测测测()
    {

    }
}

internal class 例子测例
{
    public static void 测测测()
    {

    }
}
class __DInit
{
}
#endregion
