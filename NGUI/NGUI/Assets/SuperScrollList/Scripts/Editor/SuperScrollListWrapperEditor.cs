using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;
using NGUI;

[CustomEditor(typeof(SuperScrollListWrapper))]
public class SuperScrollListWrapperEditor : Editor
{
	public override void OnInspectorGUI()
	{
		SuperScrollListWrapper script = target as SuperScrollListWrapper;

		script.Grid.arrangement = (SuperScrollListWrapper.InternalGrid.Arrangement)EditorGUILayout.EnumPopup("Arrangement", script.Grid.arrangement);
		script.Grid.pivot = (NGUIWidget.Pivot)EditorGUILayout.EnumPopup("Pivot", script.Grid.pivot);
		script.Grid.maxPerLine = EditorGUILayout.IntField("Element Count Per Line", script.Grid.maxPerLine);
		script.Grid.cellWidth = EditorGUILayout.FloatField("  Cell Width", script.Grid.cellWidth);
		script.Grid.cellHeight = EditorGUILayout.FloatField("  Cell Height", script.Grid.cellHeight);

		if (!Application.isPlaying)
		{
			if (GUILayout.Button("Reposition Children (Preview)"))
			{
				script.Grid.Reposition(script);
			}
		}
	}
}
