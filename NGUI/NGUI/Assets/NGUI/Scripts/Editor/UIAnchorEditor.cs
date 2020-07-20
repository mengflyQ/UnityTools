namespace NGUIEditor
{
	using NGUI;

	using UnityEngine;
	using UnityEditor;

	[CanEditMultipleObjects]
	[CustomEditor(typeof(NGUIAnchor))]
	public class UIAnchorEditor : Editor
	{
		public override void OnInspectorGUI()
		{
			base.OnInspectorGUI();
			EditorGUILayout.HelpBox("All NGUI widgets have anchoring functionality built-in.", MessageType.Info);
		}
	}
}