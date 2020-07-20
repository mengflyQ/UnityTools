#if !UNITY_FLASH
#define DYNAMIC_FONT
#endif

namespace NGUIEditor
{
	using NGUI;
	using UnityEngine;
	using UnityEditor;

	/// <summary>
	/// Inspector class used to edit UILabels.
	/// </summary>

	[CanEditMultipleObjects]
	[CustomEditor(typeof(NGUILabel), true)]
	public class UILabelInspector : UIWidgetInspector
	{
		[DoNotObfuscateNGUI]
		public enum FontType
		{
			NGUI,
			Unity,
		}

		NGUILabel  mLabel;
		FontType mFontType;

		protected override void OnEnable()
		{
			base.OnEnable();
			var bit = serializedObject.FindProperty("mFont");
			mFontType = (bit != null && bit.objectReferenceValue != null) ? FontType.NGUI : FontType.Unity;
		}

		void OnNGUIFont(Object obj)
		{

			serializedObject.Update();

			var sp = serializedObject.FindProperty("mFont");
			sp.objectReferenceValue = obj;

			sp                      = serializedObject.FindProperty("mTrueTypeFont");
			sp.objectReferenceValue = null;

			serializedObject.ApplyModifiedProperties();
			NGUISettings.ambigiousFont = obj;
		}

		void OnUnityFont(Object obj)
		{
			serializedObject.Update();

			SerializedProperty sp = serializedObject.FindProperty("mTrueTypeFont");
			sp.objectReferenceValue = obj;

			sp                      = serializedObject.FindProperty("mFont");
			sp.objectReferenceValue = null;

			serializedObject.ApplyModifiedProperties();
			NGUISettings.ambigiousFont = obj;
		}

		/// <summary>
		/// Draw the label's properties.
		/// </summary>

		protected override bool ShouldDrawProperties()
		{
			mLabel = mWidget as NGUILabel;

			GUILayout.BeginHorizontal();

#if DYNAMIC_FONT
			mFontType = (FontType) EditorGUILayout.EnumPopup(mFontType, "DropDown", GUILayout.Width(74f));
			if (NGUIEditorTools.DrawPrefixButton("Font", GUILayout.Width(64f)))
#else
		mFontType = FontType.NGUI;
		if (NGUIEditorTools.DrawPrefixButton("Font", GUILayout.Width(74f)))
#endif
			{
				if (mFontType == FontType.NGUI)
				{
					var bmf = mLabel.bitmapFont;
					ComponentSelector.Show<NGUIFont>(OnNGUIFont);
				}
				else ComponentSelector.Show<Font>(OnUnityFont, new string[] {".ttf", ".otf"});
			}

			bool               isValid = false;
			SerializedProperty fnt     = null;
			SerializedProperty ttf     = null;
			GUI.changed = false;

			if (mFontType == FontType.NGUI)
			{
				fnt = NGUIEditorTools.DrawProperty("", serializedObject, "mFont", GUILayout.MinWidth(40f));

				if (fnt.objectReferenceValue != null)
				{
					if (GUI.changed) serializedObject.FindProperty("mTrueTypeFont").objectReferenceValue = null;
					NGUISettings.ambigiousFont = fnt.objectReferenceValue;
					isValid                    = true;
				}
			}
			else
			{
				ttf = NGUIEditorTools.DrawProperty("", serializedObject, "mTrueTypeFont", GUILayout.MinWidth(40f));

				if (ttf.objectReferenceValue != null)
				{
					if (GUI.changed) serializedObject.FindProperty("mFont").objectReferenceValue = null;
					NGUISettings.ambigiousFont = ttf.objectReferenceValue;
					isValid                    = true;
				}
			}

			GUILayout.EndHorizontal();

			if (mFontType == FontType.Unity)
			{
				EditorGUILayout
				   .HelpBox("Dynamic fonts suffer from issues in Unity itself where your characters may disappear, get garbled, or just not show at times. Use this feature at your own risk.\n\n" +
				            "When you do run into such issues, please submit a Bug Report to Unity via Help -> Report a Bug (as this is will be a Unity bug, not an NGUI one).",
				            MessageType.Warning);
			}

			NGUIEditorTools.DrawProperty("Material", serializedObject, "mMat");

			EditorGUI.BeginDisabledGroup(!isValid);
			{
				var dynFont = (ttf != null) ? ttf.objectReferenceValue as Font : null;
				var bmFont  = (fnt != null) ? fnt.objectReferenceValue : null;
				var bm      = bmFont as INGUIFont;

				if (bm != null && bm.isDynamic)
				{
					dynFont = bm.dynamicFont;
					bm      = null;
				}

				if (dynFont != null)
				{
					GUILayout.BeginHorizontal();
					{
						EditorGUI.BeginDisabledGroup((ttf != null)
							                             ? ttf.hasMultipleDifferentValues
							                             : fnt.hasMultipleDifferentValues);

						var prop = NGUIEditorTools.DrawProperty("Font Size", serializedObject, "mFontSize",
						                                        GUILayout.Width(142f));
						NGUISettings.fontSize = prop.intValue;

						prop = NGUIEditorTools.DrawProperty("", serializedObject, "mFontStyle",
						                                    GUILayout.MinWidth(40f));
						NGUISettings.fontStyle = (FontStyle) prop.intValue;

						NGUIEditorTools.DrawPadding();
						EditorGUI.EndDisabledGroup();
					}
					GUILayout.EndHorizontal();
				}
				else if (bmFont != null)
				{
					GUILayout.BeginHorizontal();
					var prop = NGUIEditorTools.DrawProperty("Font Size", serializedObject, "mFontSize",
					                                        GUILayout.Width(142f));

					EditorGUI.BeginDisabledGroup(true);

					if (!serializedObject.isEditingMultipleObjects)
					{
						var printed = mLabel.finalFontSize;
						var def     = mLabel.defaultFontSize;

						if (mLabel.overflowMethod == NGUILabel.Overflow.ShrinkContent && printed != mLabel.fontSize)
						{
							GUILayout.Label(" Printed: " + printed);
						}
						else if (printed != def) GUILayout.Label(" Default: " + def);
					}

					EditorGUI.EndDisabledGroup();

					NGUISettings.fontSize = prop.intValue;
					GUILayout.EndHorizontal();
				}

				bool ww = GUI.skin.textField.wordWrap;
				GUI.skin.textField.wordWrap = true;
				SerializedProperty sp = serializedObject.FindProperty("mText");

				if (sp.hasMultipleDifferentValues)
				{
					NGUIEditorTools.DrawProperty("", sp, GUILayout.Height(128f));
				}
				else
				{
					GUIStyle style = new GUIStyle(EditorStyles.textField);
					style.wordWrap = true;

					float height = style.CalcHeight(new GUIContent(sp.stringValue), Screen.width - 100f);
					bool  offset = true;

					if (height > 90f)
					{
						offset = false;
						height = style.CalcHeight(new GUIContent(sp.stringValue), Screen.width - 20f);
					}
					else
					{
						GUILayout.BeginHorizontal();
						GUILayout.BeginVertical(GUILayout.Width(76f));
						GUILayout.Space(3f);
						GUILayout.Label("Text");
						GUILayout.EndVertical();
						GUILayout.BeginVertical();
					}

					Rect rect = EditorGUILayout.GetControlRect(GUILayout.Height(height));

					GUI.changed = false;
					string text                     = EditorGUI.TextArea(rect, sp.stringValue, style);
					if (GUI.changed) sp.stringValue = text;

					if (offset)
					{
						GUILayout.EndVertical();
						GUILayout.EndHorizontal();
					}
				}

				GUI.skin.textField.wordWrap = ww;

				NGUIEditorTools.DrawPaddedProperty("Modifier", serializedObject, "mModifier");

				SerializedProperty ov = NGUIEditorTools.DrawPaddedProperty("Overflow", serializedObject, "mOverflow");
				NGUISettings.overflowStyle = (NGUILabel.Overflow) ov.intValue;
				if (NGUISettings.overflowStyle == NGUILabel.Overflow.ClampContent)
					NGUIEditorTools.DrawProperty("Use Ellipsis", serializedObject, "mOverflowEllipsis",
					                             GUILayout.Width(110f));

				if (NGUISettings.overflowStyle == NGUILabel.Overflow.ResizeFreely)
				{
					GUILayout.BeginHorizontal();
					SerializedProperty s =
						NGUIEditorTools.DrawPaddedProperty("Max Width", serializedObject, "mOverflowWidth");

					if (s != null)
					{
						if (s.intValue < 0) s.intValue = 0;
						if (s.intValue == 0) GUILayout.Label("unlimited");
					}

					GUILayout.EndHorizontal();

					GUILayout.BeginHorizontal();
					s = NGUIEditorTools.DrawPaddedProperty("Max Height", serializedObject, "mOverflowHeight");

					if (s != null)
					{
						if (s.intValue < 0) s.intValue = 0;
						if (s.intValue == 0) GUILayout.Label("unlimited");
					}

					GUILayout.EndHorizontal();
				}

				NGUIEditorTools.DrawPaddedProperty("Alignment", serializedObject, "mAlignment");

				if (dynFont != null)
					NGUIEditorTools.DrawPaddedProperty("Keep crisp", serializedObject, "keepCrispWhenShrunk");

				if (bm != null) EditorGUI.BeginDisabledGroup(bm.packedFontShader);
				else EditorGUI.BeginDisabledGroup(false);

				GUILayout.BeginHorizontal();
				SerializedProperty gr = NGUIEditorTools.DrawProperty("Gradient", serializedObject, "mApplyGradient",
				                                                     GUILayout.Width(95f));

				EditorGUI.BeginDisabledGroup(!gr.hasMultipleDifferentValues && !gr.boolValue);
				{
					NGUIEditorTools.SetLabelWidth(30f);
					NGUIEditorTools.DrawProperty("Top", serializedObject, "mGradientTop", GUILayout.MinWidth(40f));
					GUILayout.EndHorizontal();
					GUILayout.BeginHorizontal();
					NGUIEditorTools.SetLabelWidth(50f);
					GUILayout.Space(79f);

					NGUIEditorTools.DrawProperty("Bottom", serializedObject, "mGradientBottom",
					                             GUILayout.MinWidth(40f));
					NGUIEditorTools.SetLabelWidth(80f);
				}
				EditorGUI.EndDisabledGroup();
				GUILayout.EndHorizontal();

				GUILayout.BeginHorizontal();
				GUILayout.Label("Effect", GUILayout.Width(76f));
				sp = NGUIEditorTools.DrawProperty("", serializedObject, "mEffectStyle", GUILayout.MinWidth(16f));

				EditorGUI.BeginDisabledGroup(!sp.hasMultipleDifferentValues && !sp.boolValue);
				{
					NGUIEditorTools.DrawProperty("", serializedObject, "mEffectColor", GUILayout.MinWidth(10f));
					GUILayout.EndHorizontal();

					GUILayout.BeginHorizontal();
					{
						GUILayout.Label(" ", GUILayout.Width(56f));
						NGUIEditorTools.SetLabelWidth(20f);
						NGUIEditorTools.DrawProperty("X", serializedObject, "mEffectDistance.x",
						                             GUILayout.MinWidth(40f));
						NGUIEditorTools.DrawProperty("Y", serializedObject, "mEffectDistance.y",
						                             GUILayout.MinWidth(40f));
						NGUIEditorTools.DrawPadding();
						NGUIEditorTools.SetLabelWidth(80f);
					}
				}
				EditorGUI.EndDisabledGroup();
				GUILayout.EndHorizontal();
				EditorGUI.EndDisabledGroup();

				sp = NGUIEditorTools.DrawProperty("Float spacing", serializedObject, "mUseFloatSpacing",
				                                  GUILayout.Width(100f));

				if (!sp.boolValue)
				{
					GUILayout.BeginHorizontal();
					GUILayout.Label("Spacing", GUILayout.Width(56f));
					NGUIEditorTools.SetLabelWidth(20f);
					NGUIEditorTools.DrawProperty("X", serializedObject, "mSpacingX", GUILayout.MinWidth(40f));
					NGUIEditorTools.DrawProperty("Y", serializedObject, "mSpacingY", GUILayout.MinWidth(40f));
					NGUIEditorTools.DrawPadding();
					NGUIEditorTools.SetLabelWidth(80f);
					GUILayout.EndHorizontal();
				}
				else
				{
					GUILayout.BeginHorizontal();
					GUILayout.Label("Spacing", GUILayout.Width(56f));
					NGUIEditorTools.SetLabelWidth(20f);
					NGUIEditorTools.DrawProperty("X", serializedObject, "mFloatSpacingX", GUILayout.MinWidth(40f));
					NGUIEditorTools.DrawProperty("Y", serializedObject, "mFloatSpacingY", GUILayout.MinWidth(40f));
					NGUIEditorTools.DrawPadding();
					NGUIEditorTools.SetLabelWidth(80f);
					GUILayout.EndHorizontal();
				}

				NGUIEditorTools.DrawProperty("Max Lines", serializedObject, "mMaxLineCount", GUILayout.Width(110f));

				GUILayout.BeginHorizontal();
				sp = NGUIEditorTools.DrawProperty("BBCode", serializedObject, "mEncoding", GUILayout.Width(100f));

				if (bm != null) EditorGUI.BeginDisabledGroup(!sp.boolValue || !bm.hasSymbols);
				else EditorGUI.BeginDisabledGroup(true);

				NGUIEditorTools.SetLabelWidth(60f);
				NGUIEditorTools.DrawPaddedProperty("Symbols", serializedObject, "mSymbols");
				NGUIEditorTools.SetLabelWidth(80f);
				EditorGUI.EndDisabledGroup();
				GUILayout.EndHorizontal();
			}
			EditorGUI.EndDisabledGroup();
			return isValid;
		}
	}
}