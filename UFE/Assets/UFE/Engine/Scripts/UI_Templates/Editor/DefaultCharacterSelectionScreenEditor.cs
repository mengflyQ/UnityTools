using UnityEngine;
using UnityEditor;
using UnityEngine.UI;
using System.Collections.Generic;

[CustomEditor(typeof(DefaultCharacterSelectionScreen))]
public class DefaultCharacterSelectionScreenEditor : Editor{
	public override void OnInspectorGUI (){
		EditorGUI.BeginChangeCheck();
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("canvasPreview"));
        //EditorGUILayout.PropertyField(this.serializedObject.FindProperty("enableUFEInput"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("firstSelectableGameObject"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("wrapInput"));
		EditorGUILayout.Space();
		EditorGUILayout.Space();
		EditorGUILayout.Space();
		EditorGUILayout.Space();
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("selectSound"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("cancelSound"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("moveCursorSound"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("onLoadSound"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("music"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("stopPreviousSoundEffectsOnLoad"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("delayBeforePlayingMusic"));
		EditorGUILayout.Space();
		EditorGUILayout.Space();
		EditorGUILayout.Space();
		EditorGUILayout.Space();
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("namePlayer1"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("namePlayer2"));

		SerializedProperty displayMode = this.serializedObject.FindProperty("displayMode");
		EditorGUILayout.PropertyField(displayMode);

		if (displayMode.enumValueIndex == (int)DefaultCharacterSelectionScreen.DisplayMode.CharacterGameObject){
			EditorGUILayout.PropertyField(this.serializedObject.FindProperty("background3dPrefab"));
			EditorGUILayout.PropertyField(this.serializedObject.FindProperty("positionPlayer1"));
			EditorGUILayout.PropertyField(this.serializedObject.FindProperty("positionPlayer2"));
		}else{
			EditorGUILayout.PropertyField(this.serializedObject.FindProperty("portraitPlayer1"));
			EditorGUILayout.PropertyField(this.serializedObject.FindProperty("portraitPlayer2"));
		}

		EditorGUILayout.Space();
		EditorGUILayout.Space();
		EditorGUILayout.Space();
		EditorGUILayout.Space();
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("hudPlayer1"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("hudPlayer2"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("hudBothPlayers"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("noCharacterSprite"));
		EditorGUILayout.Space();
		EditorGUILayout.Space();
		EditorGUILayout.Space();
		EditorGUILayout.Space();
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("characters"), true);
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("defaultCharacterPlayer1"));
		EditorGUILayout.PropertyField(this.serializedObject.FindProperty("defaultCharacterPlayer2"));
		EditorGUI.EndChangeCheck();
		this.serializedObject.ApplyModifiedProperties();
	}
}
