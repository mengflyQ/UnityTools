namespace NGUI
{

	using UnityEngine;
	using System.Collections.Generic;

	/// <summary>
	/// Similar to UIButtonColor, but adds a 'disabled' state based on whether the collider is enabled or not.
	/// </summary>

	[AddComponentMenu("NGUI/Event/Button")]
	public class UIButton : UIButtonColor
	{
		/// <summary>
		/// Current button that sent out the onClick event.
		/// </summary>

		static public UIButton current;
		
		/// <summary>
		/// 是否是双击脚本,默认为是双击才会触发事件
		/// </summary>
		public bool IsDoubleClick = false;
		/// <summary>
		/// 双击触发开始记录的时间
		/// </summary>
		private float IDCBeginTime = 0f;		
		/// <summary>
		/// 双击触发开始的次数
		/// </summary>
		private byte IDCCount = 0;
		
		/// <summary>
		/// Whether the button will highlight when you drag something over it.
		/// </summary>

		public bool dragHighlight = false;

		/// <summary>
		/// Name of the hover state sprite.
		/// </summary>

		public string hoverSprite;

		/// <summary>
		/// Name of the pressed sprite.
		/// </summary>

		public string pressedSprite;

		/// <summary>
		/// Name of the disabled sprite.
		/// </summary>

		public string disabledSprite;

		/// <summary>
		/// Name of the hover state sprite.
		/// </summary>

		public UnityEngine.Sprite hoverSprite2D;

		/// <summary>
		/// Name of the pressed sprite.
		/// </summary>

		public UnityEngine.Sprite pressedSprite2D;

		/// <summary>
		/// Name of the disabled sprite.
		/// </summary>

		public UnityEngine.Sprite disabledSprite2D;

		/// <summary>
		/// Whether the sprite changes will elicit a call to MakePixelPerfect() or not.
		/// </summary>

		public bool pixelSnap = false;

		/// <summary>
		/// Click event listener.
		/// </summary>

		public List<EventDelegate> onClick = new List<EventDelegate>();

		// Cached value
		[System.NonSerialized] NGUISprite           mSprite;
		[System.NonSerialized] NGUI2DSprite         mSprite2D;
		[System.NonSerialized] string             mNormalSprite;
		[System.NonSerialized] UnityEngine.Sprite mNormalSprite2D;

		/// <summary>
		/// Whether the button should be enabled.
		/// </summary>

		public override bool isEnabled
		{
			get
			{
				if (!enabled) return false;
#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
			var col = collider;
#else
				var col = gameObject.GetComponent<Collider>();
#endif
				if (col && col.enabled) return true;
				var c2d = GetComponent<Collider2D>();
				return (c2d && c2d.enabled);
			}
			set
			{
				if (isEnabled != value)
				{
#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
				var col = collider;
#else
					var col = gameObject.GetComponent<Collider>();
#endif
					if (col != null)
					{
						col.enabled = value;
						var buttons = GetComponents<UIButton>();
						foreach (UIButton btn in buttons) btn.SetState(value ? State.Normal : State.Disabled, false);
					}
					else
					{
						var c2d = GetComponent<Collider2D>();

						if (c2d != null)
						{
							c2d.enabled = value;
							var buttons = GetComponents<UIButton>();
							foreach (UIButton btn in buttons)
								btn.SetState(value ? State.Normal : State.Disabled, false);
						}
						else enabled = value;
					}
				}
			}
		}

		/// <summary>
		/// Convenience function that changes the normal sprite.
		/// </summary>

		public string normalSprite
		{
			get
			{
				if (!mInitDone) OnInit();
				return mNormalSprite;
			}
			set
			{
				if (!mInitDone) OnInit();
				if (mSprite != null && !string.IsNullOrEmpty(mNormalSprite) && mNormalSprite == mSprite.spriteName)
				{
					mNormalSprite = value;
					SetSprite(value);
					NGUITools.SetDirty(mSprite);
				}
				else
				{
					mNormalSprite = value;
					if (mState == State.Normal) SetSprite(value);
				}
			}
		}

		/// <summary>
		/// Convenience function that changes the normal sprite.
		/// </summary>

		public UnityEngine.Sprite normalSprite2D
		{
			get
			{
				if (!mInitDone) OnInit();
				return mNormalSprite2D;
			}
			set
			{
				if (!mInitDone) OnInit();
				if (mSprite2D != null && mNormalSprite2D == mSprite2D.sprite2D)
				{
					mNormalSprite2D = value;
					SetSprite(value);
					NGUITools.SetDirty(mSprite);
				}
				else
				{
					mNormalSprite2D = value;
					if (mState == State.Normal) SetSprite(value);
				}
			}
		}

		/// <summary>
		/// Cache the sprite we'll be working with.
		/// </summary>

		protected override void OnInit()
		{
			base.OnInit();
			mSprite   = (mWidget as NGUISprite);
			mSprite2D = (mWidget as NGUI2DSprite);
			if (mSprite   != null) mNormalSprite   = mSprite.spriteName;
			if (mSprite2D != null) mNormalSprite2D = mSprite2D.sprite2D;
		}

		/// <summary>
		/// Set the initial state.
		/// </summary>

		protected override void OnEnable()
		{
#if UNITY_EDITOR
			if (!Application.isPlaying)
			{
				mInitDone = false;
				return;
			}
#endif
			if (isEnabled)
			{
				if (mInitDone) OnHover(NGUICamera.hoveredObject == gameObject);
			}
			else SetState(State.Disabled, true);
		}

		/// <summary>
		/// Drag over state logic is a bit different for the button.
		/// </summary>

		protected override void OnDragOver()
		{
			if (isEnabled && (dragHighlight || NGUICamera.currentTouch.pressed == gameObject))
				base.OnDragOver();
		}

		/// <summary>
		/// Drag out state logic is a bit different for the button.
		/// </summary>

		protected override void OnDragOut()
		{
			if (isEnabled && (dragHighlight || NGUICamera.currentTouch.pressed == gameObject))
				base.OnDragOut();
		}

		/// <summary>
		/// Call the listener function.
		/// </summary>

		protected virtual void OnClick()
		{
			if (IsDoubleClick == true)
			{
				if (Time.realtimeSinceStartup - IDCBeginTime >0.3f)
				{
					IDCCount = 0;
					IDCBeginTime = Time.realtimeSinceStartup;
					IDCCount++;
					return;
				}
				IDCCount++;
				if (Time.realtimeSinceStartup - IDCBeginTime >0.3f || IDCCount != 2)
				{
					IDCBeginTime = 0f;
					IDCCount     = 0;
					return;
				}
			}
			if (current == null && isEnabled && NGUICamera.currentTouchID != -2 && NGUICamera.currentTouchID != -3)
			{
				current = this;
				EventDelegate.Execute(onClick);
				current = null;
			}
			if (IsDoubleClick == true)
			{
				IDCBeginTime = 0f;
				IDCCount = 0;
			}
		}

		/// <summary>
		/// Change the visual state.
		/// </summary>

		public override void SetState(State state, bool immediate)
		{
			base.SetState(state, immediate);

			if (mSprite != null)
			{
				switch (state)
				{
					case State.Normal:
						SetSprite(mNormalSprite);
						break;
					case State.Hover:
						SetSprite(string.IsNullOrEmpty(hoverSprite) ? mNormalSprite : hoverSprite);
						break;
					case State.Pressed:
						SetSprite(pressedSprite);
						break;
					case State.Disabled:
						SetSprite(disabledSprite);
						break;
				}
			}
			else if (mSprite2D != null)
			{
				switch (state)
				{
					case State.Normal:
						SetSprite(mNormalSprite2D);
						break;
					case State.Hover:
						SetSprite(hoverSprite2D == null ? mNormalSprite2D : hoverSprite2D);
						break;
					case State.Pressed:
						SetSprite(pressedSprite2D);
						break;
					case State.Disabled:
						SetSprite(disabledSprite2D);
						break;
				}
			}
		}

		/// <summary>
		/// Convenience function that changes the sprite.
		/// </summary>

		protected void SetSprite(string sp)
		{
			if (mSprite != null && !string.IsNullOrEmpty(sp) && mSprite.spriteName != sp)
			{
				mSprite.spriteName = sp;
				if (pixelSnap) mSprite.MakePixelPerfect();
			}
		}

		/// <summary>
		/// Convenience function that changes the sprite.
		/// </summary>

		protected void SetSprite(UnityEngine.Sprite sp)
		{
			if (sp != null && mSprite2D != null && mSprite2D.sprite2D != sp)
			{
				mSprite2D.sprite2D = sp;
				if (pixelSnap) mSprite2D.MakePixelPerfect();
			}
		}
	}
}