namespace NGUI
{

	using UnityEngine;

	/// <summary>
	/// Attaching this script to an element of a scroll view will make it possible to center on it by clicking on it.
	/// 将此脚本附加到滚动视图的元素上，可以通过单击使其居中。
	/// </summary>

	[AddComponentMenu("NGUI/Event/Center Scroll View on Click")]
	public class UICenterOnClick : MonoBehaviour
	{
		void OnClick()
		{
			UICenterOnChild center = NGUITools.FindInParents<UICenterOnChild>(gameObject);
			NGUIPanel         panel  = NGUITools.FindInParents<NGUIPanel>(gameObject);

			if (center != null)
			{
				if (center.enabled)
					center.CenterOn(transform);
			}
			else if (panel != null && panel.clipping != NGUIDrawCall.Clipping.None)
			{
				UIScrollView sv = panel.GetComponent<UIScrollView>();
				Vector3 offset =
					-panel.cachedTransform.InverseTransformPoint(transform.position);
				if (!sv.canMoveHorizontally) offset.x = panel.cachedTransform.localPosition.x;
				if (!sv.canMoveVertically) offset.y   = panel.cachedTransform.localPosition.y;
				NGUISpringPanel.Begin(panel.cachedGameObject, offset, 6f);
			}
		}
	}
}