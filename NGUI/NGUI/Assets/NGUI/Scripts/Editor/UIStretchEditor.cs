namespace NGUIEditor
{
	using NGUI;

	using UnityEngine;
	using UnityEditor;

	[CanEditMultipleObjects]
	[CustomEditor(typeof(NGUIStretch))]
	public class UIStretchEditor : Editor
	{
		public override void OnInspectorGUI()
		{
			base.OnInspectorGUI();
			EditorGUILayout
			   .HelpBox("NGUIStretch is a legacy component and should not be used anymore. All widgets have anchoring functionality built-in.",
			            MessageType.Warning);
		}
	}
}