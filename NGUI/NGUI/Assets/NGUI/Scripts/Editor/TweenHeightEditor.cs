namespace NGUIEditor
{
	using NGUI;

	using UnityEngine;
	using UnityEditor;

	[CustomEditor(typeof(TweenHeight))]
	public class TweenHeightEditor : UITweenerEditor
	{
		public override void OnInspectorGUI()
		{
			GUILayout.Space(6f);
			NGUIEditorTools.SetLabelWidth(120f);

			TweenHeight tw = target as TweenHeight;
			GUI.changed = false;

			EditorGUILayout.BeginHorizontal();
			EditorGUI.BeginDisabledGroup(tw.fromTarget != null);
			var from = EditorGUILayout.IntField("From", tw.from);
			EditorGUI.EndDisabledGroup();
			var fc = (NGUIWidget) EditorGUILayout.ObjectField(tw.fromTarget, typeof(NGUIWidget), true,
			                                                GUILayout.Width(110f));
			EditorGUILayout.EndHorizontal();

			EditorGUILayout.BeginHorizontal();
			EditorGUI.BeginDisabledGroup(tw.toTarget != null);
			var to = EditorGUILayout.IntField("To", tw.to);
			EditorGUI.EndDisabledGroup();
			var tc = (NGUIWidget) EditorGUILayout.ObjectField(tw.toTarget, typeof(NGUIWidget), true, GUILayout.Width(110f));
			EditorGUILayout.EndHorizontal();

			var table = EditorGUILayout.Toggle("Update Table", tw.updateTable);

			if (from < 0) from = 0;
			if (to   < 0) to   = 0;

			if (GUI.changed)
			{
				NGUIEditorTools.RegisterUndo("Tween Change", tw);
				tw.from        = from;
				tw.to          = to;
				tw.fromTarget  = fc;
				tw.toTarget    = tc;
				tw.updateTable = table;
				NGUITools.SetDirty(tw);
			}

			DrawCommonProperties();
		}
	}
}