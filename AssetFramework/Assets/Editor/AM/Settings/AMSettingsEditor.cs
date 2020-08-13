using UnityEditor;
using UnityEngine;

namespace AMEditor
{
    [CustomEditor(typeof(AMSettings))]
    public class AMSettingsEditor : Editor
    {
        // SerializedProperty _IsInEditorDebugMode;
        // SerializedProperty _IsBeginHotUpdate;
        // SerializedProperty _HotUpdateURL;
        //
        // void OnEnable()
        // {
        //     //获取指定字段
        //     _IsInEditorDebugMode = serializedObject.FindProperty("IsInEditorDebugMode");
        //     _IsBeginHotUpdate = serializedObject.FindProperty("IsBeginHotUpdate");
        //     _HotUpdateURL = serializedObject.FindProperty("HotUpdateURL");
        // }
        public override void OnInspectorGUI()
        {
            // //更新
            // serializedObject.Update();
            // //开始检查是否有修改
            // EditorGUI.BeginChangeCheck();
            // //结束检查是否有修改
            // if (EditorGUI.EndChangeCheck())
            // { //提交修改
            //     serializedObject.ApplyModifiedProperties();
            // }
            GUI.enabled = false;
            base.OnInspectorGUI();
            GUI.enabled = true;
        }
    }
}