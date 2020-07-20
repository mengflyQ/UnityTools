namespace NGUIEditor
{
	using NGUI;

	using UnityEngine;
	using UnityEditor;

	[CanEditMultipleObjects]
	[CustomEditor(typeof(NGUIColorPicker))]
	public class UIColorPickerEditor : Editor
	{
		public override void OnInspectorGUI()
		{
			serializedObject.Update();

			NGUIEditorTools.SetLabelWidth(100f);
			NGUIColorPicker picker = target as NGUIColorPicker;

			GUILayout.Space(6f);
			GUI.changed = false;

			NGUIEditorTools.DrawProperty(serializedObject, "value");
			NGUIEditorTools.DrawProperty(serializedObject, "selectionWidget");

			GUILayout.Space(6f);
			GUI.changed = false;

			NGUIEditorTools.DrawEvents("On Value Change", picker, picker.onChange);
			serializedObject.ApplyModifiedProperties();
		}
	}
}