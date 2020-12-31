using UnityEditor;
using UnityEngine;
using ShaderWeaver;
using System.IO;

namespace UnityEditor
{
    [CustomEditor(typeof(Material))]
    [CanEditMultipleObjects]
    public class SWInspectorMaterial : MaterialEditor
    {
        Shader shader = null;
        bool isShaderWeaverShader =false;
        public override void OnInspectorGUI()
        {  
            base.OnInspectorGUI();


            Material mat = (Material)target;
            if(shader != mat.shader)
            {
                shader = mat.shader;
                string adbPath = AssetDatabase.GetAssetPath(shader);
                string path = SWCommon.AssetDBPath2Path(adbPath);
                string fullPath = SWCommon.Path2FullPath(path);
                if (File.Exists(fullPath))
                    isShaderWeaverShader = SWDataManager.IsSWShader(fullPath);
                else
                    isShaderWeaverShader = false;
            }

            if (isShaderWeaverShader) {
                GUILayout.Space(20);
                GUILayout.BeginHorizontal ();
                if (GUILayout.Button ("Open in Shader Weaver",GUILayout.Height(36))) {
                  SWWindowMain.OpenFromInspector (shader);
                }

                if (GUILayout.Button ("Open in Text Editor", GUILayout.Height(36))) {
                  AssetDatabase.OpenAsset (shader, 1);
                }
                GUILayout.EndHorizontal ();
                GUILayout.Space(20);
            } 
        }
    }
}