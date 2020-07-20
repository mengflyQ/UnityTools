namespace NGUIEditor
{
	using NGUI;

	using UnityEditor;
	using UnityEngine;

	/// <summary>
	/// Inspector class used to edit UI sprites and textures.
	/// </summary>

	[CanEditMultipleObjects]
	[CustomEditor(typeof(NGUIBasicSprite), true)]
	public class UIBasicSpriteEditor : UIWidgetInspector
	{
		/// <summary>
		/// Draw all the custom properties such as sprite type, flip setting, fill direction, etc.
		/// </summary>

		protected override void DrawCustomProperties()
		{
			GUILayout.Space(6f);

			SerializedProperty sp =
				NGUIEditorTools.DrawProperty("Type", serializedObject, "mType", GUILayout.MinWidth(20f));

			NGUISprite.Type type = (NGUISprite.Type) sp.intValue;

			if (type == NGUISprite.Type.Simple)
			{
				NGUIEditorTools.DrawProperty("Flip", serializedObject, "mFlip");
			}
			else if (type == NGUISprite.Type.Tiled)
			{
				NGUIEditorTools.DrawBorderProperty("Trim", serializedObject, "mBorder");
				NGUIEditorTools.DrawProperty("Flip", serializedObject, "mFlip");
			}
			else if (type == NGUISprite.Type.Sliced)
			{
				NGUIEditorTools.DrawBorderProperty("Border", serializedObject, "mBorder");
				NGUIEditorTools.DrawProperty("Flip", serializedObject, "mFlip");

				EditorGUI.BeginDisabledGroup(sp.hasMultipleDifferentValues);
				{
					sp = serializedObject.FindProperty("centerType");
					bool val = (sp.intValue != (int) NGUISprite.AdvancedType.Invisible);

					if (val != EditorGUILayout.Toggle("Fill Center", val))
					{
						sp.intValue = val ? (int) NGUISprite.AdvancedType.Invisible : (int) NGUISprite.AdvancedType.Sliced;
					}
				}
				EditorGUI.EndDisabledGroup();
			}
			else if (type == NGUISprite.Type.Filled)
			{
				NGUIEditorTools.DrawProperty("Flip",     serializedObject, "mFlip");
				NGUIEditorTools.DrawProperty("Fill Dir", serializedObject, "mFillDirection", GUILayout.MinWidth(20f));
				GUILayout.BeginHorizontal();
				GUILayout.Space(4f);
				NGUIEditorTools.DrawProperty("Fill Amount", serializedObject, "mFillAmount", GUILayout.MinWidth(20f));
				GUILayout.Space(4f);
				GUILayout.EndHorizontal();
				NGUIEditorTools.DrawProperty("Invert Fill", serializedObject, "mInvert", GUILayout.MinWidth(20f));
			}
			else if (type == NGUISprite.Type.Advanced)
			{
				NGUIEditorTools.DrawBorderProperty("Border", serializedObject, "mBorder");
				NGUIEditorTools.DrawProperty("  Left",   serializedObject, "leftType");
				NGUIEditorTools.DrawProperty("  Right",  serializedObject, "rightType");
				NGUIEditorTools.DrawProperty("  Top",    serializedObject, "topType");
				NGUIEditorTools.DrawProperty("  Bottom", serializedObject, "bottomType");
				NGUIEditorTools.DrawProperty("  Center", serializedObject, "centerType");
				NGUIEditorTools.DrawProperty("Flip",     serializedObject, "mFlip");
			}

			if (type == NGUIBasicSprite.Type.Simple || type == NGUIBasicSprite.Type.Sliced
			) // Gradients get too complicated for tiled and filled.
			{
				GUILayout.BeginHorizontal();
				SerializedProperty gr =
					NGUIEditorTools.DrawProperty("Gradient", serializedObject, "mApplyGradient", GUILayout.Width(95f));

				EditorGUI.BeginDisabledGroup(!gr.hasMultipleDifferentValues && !gr.boolValue);
				{
					NGUIEditorTools.SetLabelWidth(30f);
					serializedObject.DrawProperty("mGradientTop", "Top", GUILayout.MinWidth(40f));
					GUILayout.EndHorizontal();
					GUILayout.BeginHorizontal();
					NGUIEditorTools.SetLabelWidth(50f);
					GUILayout.Space(79f);

					serializedObject.DrawProperty("mGradientBottom", "Bottom", GUILayout.MinWidth(40f));
					NGUIEditorTools.SetLabelWidth(80f);
				}
				EditorGUI.EndDisabledGroup();
				GUILayout.EndHorizontal();
			}

			base.DrawCustomProperties();
		}
	}
}