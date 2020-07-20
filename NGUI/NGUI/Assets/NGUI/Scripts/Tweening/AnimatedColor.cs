namespace NGUI
{

	using UnityEngine;

	/// <summary>
	/// Makes it possible to animate a color of the widget.
	/// </summary>

	[ExecuteInEditMode]
	[RequireComponent(typeof(NGUIWidget))]
	public class AnimatedColor : MonoBehaviour
	{
		public Color color = Color.white;

		NGUIWidget mWidget;

		void OnEnable()
		{
			mWidget = GetComponent<NGUIWidget>();
			LateUpdate();
		}

		void LateUpdate()
		{
			mWidget.color = color;
		}
	}
}