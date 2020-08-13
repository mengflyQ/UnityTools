using UnityEditor;
using UnityEngine;

namespace AssetFrameworkEditor
{
    [CustomEditor(typeof(AssetBundlesConfig))]
    public class ABConfigEditor  : Editor
    {
        SerializedProperty _initialPath;
        SerializedProperty _hotUpdatePath;
        SerializedProperty _allAssetConfig;

        void OnEnable()
        {
            //获取指定字段
            _initialPath = serializedObject.FindProperty("initialPath");
            _hotUpdatePath = serializedObject.FindProperty("hotUpdatePath");
            _allAssetConfig = serializedObject.FindProperty("allAssetConfig");
        }

        public override void OnInspectorGUI()
        {
            //更新
            serializedObject.Update();
            //开始检查是否有修改
            EditorGUI.BeginChangeCheck();
            //显示属性第二个参数必须为true，否则无法显示子节点即List内容
            EditorGUILayout.PropertyField(_initialPath, true);
            EditorGUILayout.PropertyField(_hotUpdatePath, true);
            //结束检查是否有修改
            if (EditorGUI.EndChangeCheck())
            { //提交修改
                serializedObject.ApplyModifiedProperties();
            }
            GUI.enabled = false;
            EditorGUILayout.PropertyField(_allAssetConfig, true);
            GUI.enabled = true;
        }
    }

}