namespace NGUIEditor
{
    using NGUI;

    using UnityEngine;
    using UnityEditor;

    [CanEditMultipleObjects]
    [CustomEditor(typeof(UISlider))]
    public class UISliderEditor : UIProgressBarEditor
    {
    }
}