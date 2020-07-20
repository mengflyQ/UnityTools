namespace NGUIEditor
{
	using NGUI;

	using UnityEngine;
	using UnityEditor;

	[CustomEditor(typeof(UIPlayAnimation))]
	public class UIPlayAnimationEditor : Editor
	{
		enum ResetOnPlay
		{
			ContinueFromCurrent,
			RestartAnimation,
		}

		enum SelectedObject
		{
			KeepCurrent,
			SetToNothing,
		}

		public override void OnInspectorGUI()
		{
			NGUIEditorTools.SetLabelWidth(120f);
			UIPlayAnimation pa = target as UIPlayAnimation;
			GUILayout.Space(6f);

			GUI.changed = false;

			EditorGUI.BeginDisabledGroup(pa.target);
			Animator animator = (Animator) EditorGUILayout.ObjectField("Animator", pa.animator, typeof(Animator), true);
			EditorGUI.EndDisabledGroup();
			EditorGUI.BeginDisabledGroup(pa.animator);
			Animation anim = (Animation) EditorGUILayout.ObjectField("Animation", pa.target, typeof(Animation), true);

			EditorGUI.EndDisabledGroup();
			EditorGUI.BeginDisabledGroup(anim == null && animator == null);
			string clipName = EditorGUILayout.TextField("State Name", pa.clipName);

			NGUI.AnimationOrTween.Trigger trigger =
				(NGUI.AnimationOrTween.Trigger) EditorGUILayout.EnumPopup("Trigger condition", pa.trigger);

			EditorGUI.BeginDisabledGroup(animator != null && !string.IsNullOrEmpty(clipName));
			NGUI.AnimationOrTween.Direction dir =
				(NGUI.AnimationOrTween.Direction) EditorGUILayout.EnumPopup("Play direction", pa.playDirection);
			EditorGUI.EndDisabledGroup();

			SelectedObject so = pa.clearSelection ? SelectedObject.SetToNothing : SelectedObject.KeepCurrent;
			bool clear = (SelectedObject) EditorGUILayout.EnumPopup("Selected object", so) ==
			             SelectedObject.SetToNothing;
			NGUI.AnimationOrTween.EnableCondition enab =
				(NGUI.AnimationOrTween.EnableCondition) EditorGUILayout.EnumPopup("If disabled on start",
				                                                                  pa.ifDisabledOnPlay);
			ResetOnPlay rs = pa.resetOnPlay ? ResetOnPlay.RestartAnimation : ResetOnPlay.ContinueFromCurrent;
			bool reset = (ResetOnPlay) EditorGUILayout.EnumPopup("On activation", rs) ==
			                    ResetOnPlay.RestartAnimation;
			NGUI.AnimationOrTween.DisableCondition dis =
				(NGUI.AnimationOrTween.DisableCondition) EditorGUILayout.EnumPopup("When finished", pa.disableWhenFinished);
			EditorGUI.EndDisabledGroup();

			if (GUI.changed)
			{
				NGUIEditorTools.RegisterUndo("PlayAnimation Change", pa);
				pa.target              = anim;
				pa.animator            = animator;
				pa.clipName            = clipName;
				pa.trigger             = trigger;
				pa.playDirection       = dir;
				pa.clearSelection      = clear;
				pa.ifDisabledOnPlay    = enab;
				pa.resetOnPlay         = reset;
				pa.disableWhenFinished = dis;
				NGUITools.SetDirty(pa);
			}

			NGUIEditorTools.SetLabelWidth(80f);
			NGUIEditorTools.DrawEvents("On Finished", pa, pa.onFinished);
		}
	}
}