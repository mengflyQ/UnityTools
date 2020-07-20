namespace NGUI
{

	using UnityEngine;

	/// <summary>
	/// Makes it possible to animate the widget's width and height using Unity's animations.
	/// </summary>

	[ExecuteInEditMode]
	public class AnimatedWidget : MonoBehaviour
	{
		public float width  = 1f;
		public float height = 1f;

		NGUIWidget mWidget;

		void OnEnable()
		{
			mWidget = GetComponent<NGUIWidget>();
			LateUpdate();
		}

		void LateUpdate()
		{
			if (mWidget != null)
			{
				mWidget.width  = Mathf.RoundToInt(width);
				mWidget.height = Mathf.RoundToInt(height);
			}
		}
	}
}