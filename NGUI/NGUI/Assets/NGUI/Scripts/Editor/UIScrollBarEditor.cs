namespace NGUIEditor
{
    using NGUI;

    using UnityEngine;
    using UnityEditor;

    [CanEditMultipleObjects]
    [CustomEditor(typeof(UIScrollBar))]
    public class UIScrollBarEditor : UIProgressBarEditor
    {
        protected override void DrawLegacyFields()
        {
            UIScrollBar sb = target as UIScrollBar;

            float val = EditorGUILayout.Slider("Value", sb.value, 0f, 1f);
            float size = EditorGUILayout.Slider("Size", sb.barSize, 0f, 1f);
            float alpha = EditorGUILayout.Slider("Alpha", sb.alpha, 0f, 1f);

            if (sb.value != val ||
                sb.barSize != size ||
                sb.alpha != alpha)
            {
                NGUIEditorTools.RegisterUndo("Scroll Bar Change", sb);
                sb.value = val;
                sb.barSize = size;
                sb.alpha = alpha;
                NGUITools.SetDirty(sb);

                for (int i = 0; i < UIScrollView.list.Size; ++i)
                {
                    UIScrollView sv = UIScrollView.list.Buffer[i];

                    if (sv.horizontalScrollBar == sb || sv.verticalScrollBar == sb)
                    {
                        NGUIEditorTools.RegisterUndo("Scroll Bar Change", sv);
                        sv.UpdatePosition();
                    }
                }
            }
        }
    }
}
