namespace NGUI
{

	using UnityEngine;

	/// <summary>
	/// Simple example script of how a button can be rotated visibly when the mouse hovers over it or it gets pressed.
	/// </summary>

	[AddComponentMenu("NGUI/Event/Button Rotation")]
	public class UIButtonRotation : MonoBehaviour
	{
		public Transform tweenTarget;
		public Vector3   hover    = Vector3.zero;
		public Vector3   pressed  = Vector3.zero;
		public float     duration = 0.2f;

		Quaternion mRot;
		bool       mStarted = false;

		void Start()
		{
			if (!mStarted)
			{
				mStarted = true;
				if (tweenTarget == null) tweenTarget = transform;
				mRot = tweenTarget.localRotation;
			}
		}

		void OnEnable()
		{
			if (mStarted) OnHover(NGUICamera.IsHighlighted(gameObject));
		}

		void OnDisable()
		{
			if (mStarted && tweenTarget != null)
			{
				TweenRotation tc = tweenTarget.GetComponent<TweenRotation>();

				if (tc != null)
				{
					tc.value   = mRot;
					tc.enabled = false;
				}
			}
		}

		void OnPress(bool isPressed)
		{
			if (enabled)
			{
				if (!mStarted) Start();
				TweenRotation.Begin(tweenTarget.gameObject, duration,
				                    isPressed
					                    ? mRot * Quaternion.Euler(pressed)
					                    : (NGUICamera.IsHighlighted(gameObject) ? mRot * Quaternion.Euler(hover) : mRot))
				             .method = UITweener.Method.EaseInOut;
			}
		}

		void OnHover(bool isOver)
		{
			if (enabled)
			{
				if (!mStarted) Start();
				TweenRotation.Begin(tweenTarget.gameObject, duration, isOver ? mRot * Quaternion.Euler(hover) : mRot)
				             .method = UITweener.Method.EaseInOut;
			}
		}

		void OnSelect(bool isSelected)
		{
			if (enabled && (!isSelected || NGUICamera.currentScheme == NGUICamera.ControlScheme.Controller))
				OnHover(isSelected);
		}
	}
}