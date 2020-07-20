namespace NGUIEditor
{
	using NGUI;
	using UnityEngine;
	using UnityEditor;


	[CustomEditor(typeof(NGUIActiveAnimation))]
	public class ActiveAnimationEditor : Editor
	{
		public override void OnInspectorGUI()
		{
			NGUIEditorTools.SetLabelWidth(80f);
			NGUIActiveAnimation aa = target as NGUIActiveAnimation;
			GUILayout.Space(3f);
			NGUIEditorTools.DrawEvents("On Finished", aa, aa.onFinished);
		}
	}
}
