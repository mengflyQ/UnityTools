namespace NGUIEditor
{
    using NGUI;

#if UNITY_3_5
using UnityEngine;
using UnityEditor;

[CanEditMultipleObjects]
[CustomEditor(typeof(UITable))]
public class UITableEditor : UIWidgetContainerEditor
{
}
#endif
}