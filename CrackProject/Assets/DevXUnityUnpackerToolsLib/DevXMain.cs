using System.Collections;
using System.Collections.Generic;
using UnityEngine;

#if UNITY_EDITOR

using UnityEditor;
using UnityEditor.SceneManagement;


public class DfsvErereAe2eeD
{

    [MenuItem("DevXUnity/Run editor unpacker")]
    public static void Fdae3FfvvRFe()
    {
        UnityEditor.SceneManagement.EditorSceneManager.OpenScene("Assets/DevXUnityUnpackerToolsLib/MainScene.unity");
        ////UnityEngine.SceneManagement.SceneManager.LoadScene("DevXUnityUnpackerToolsLib/MainScene");
        EditorApplication.isPlaying = true;


        //EditorApplication.isPlaying = true;
        //UnityEditor.SceneManagement.EditorSceneManager.NewScene(NewSceneSetup.EmptyScene);
        //GameObject cgo = new GameObject("Camera");
        ////cgo.hideFlags = HideFlags.HideAndDontSave;
        //cgo.AddComponent<Camera>();
        //cgo.AddComponent<AudioListener>();

        //GameObject go = new GameObject("Run");
        ////go.hideFlags = HideFlags.HideAndDontSave;

        //go.AddComponent<StandaloneFileBrowserCreate>();
        //go.AddComponent<QInit>();
    }
}
#endif