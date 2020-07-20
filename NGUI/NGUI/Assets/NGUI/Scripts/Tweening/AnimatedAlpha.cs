namespace NGUI
{

	using UnityEngine;

	/// <summary>
	/// Makes it possible to animate alpha of the widget or a panel.
	/// </summary>

	[ExecuteInEditMode]
	public class AnimatedAlpha : MonoBehaviour
	{
		[Range(0f, 1f)] public float alpha = 1f;

		NGUIWidget mWidget;
		NGUIPanel  mPanel;

		void OnEnable()
		{
			mWidget = GetComponent<NGUIWidget>();
			mPanel  = GetComponent<NGUIPanel>();
			LateUpdate();
		}

		void LateUpdate()
		{
			if (mWidget != null) mWidget.alpha = alpha;
			if (mPanel  != null) mPanel.alpha  = alpha;
		}
	}
}