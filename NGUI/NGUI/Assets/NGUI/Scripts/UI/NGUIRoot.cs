namespace NGUI
{

	using UnityEngine;
	using System.Collections.Generic;

	/// <summary>
	/// This is a script used to keep the game object scaled to 2/(Screen.height).
	/// If you use it, be sure to NOT use NGUIOrthoCamera at the same time.
	/// UI界面的根目录，用于分辨率适配和事件广播,不能和 NGUIOrthoCamera 同时使用
	/// 适配宽高屏幕比例
	/// </summary>
	[ExecuteInEditMode]
	[AddComponentMenu("NGUI/UI/NGUIRoot")]
	public class NGUIRoot : MonoBehaviour
	{
		/// <summary>
		/// List of all UIRoots present in the scene.
		/// 在场景中出现的所有uiroot的列表。
		/// </summary>
		static public List<NGUIRoot> list = new List<NGUIRoot>();

		[DoNotObfuscateNGUI]
		public enum Scaling
		{
			Flexible,//缩放类型,灵活
			Constrained,//缩放类型,受到约束
			ConstrainedOnMobiles,//缩放类型,手机上受到约束
		}

		[DoNotObfuscateNGUI]
		public enum Constraint
		{
			Fit,//约束类型,合适
			Fill,//约束类型,充满,填充完整
			FitWidth,//按照宽度进行约束
			FitHeight,//按照高度进行约束
		}

		/// <summary>
		/// Type of scaling used by the NGUIRoot.默认是灵活的适配类型
		/// </summary>
		public Scaling scalingStyle = Scaling.Flexible;

		/// <summary>
		/// When the UI scaling is constrained, this controls the type of constraint that further fine-tunes how it's scaled.
		/// 当UI伸缩受到限制时，这将控制进一步微调其伸缩方式的约束类型。
		/// </summary>
		public Constraint constraint
		{
			get
			{
				if (fitWidth)
				{
					if (fitHeight) return Constraint.Fit;
					return Constraint.FitWidth;
				}
				else if (fitHeight) return Constraint.FitHeight;

				return Constraint.Fill;
			}
		}

		/// <summary>
		/// Width of the screen, used when the scaling style is set to Flexible.
		/// 屏幕宽度，当缩放样式设置为灵活时使用。
		/// </summary>
		public int manualWidth = 1280;

		/// <summary>
		/// Height of the screen when the scaling style is set to FixedSize or Flexible.
		/// 缩放样式设置为固定大小或灵活时的屏幕高度。
		/// </summary>
		public int manualHeight = 720;

		/// <summary>
		/// If the screen height goes below this value, it will be as if the scaling style
		/// is set to FixedSize with manualHeight of this value.
		/// 如果屏幕高度低于该值，就好像缩放样式被设置为FixedSize并手动设置该值的height。
		/// </summary>
		public int minimumHeight = 320;

		/// <summary>
		/// If the screen height goes above this value, it will be as if the scaling style
		/// is set to Fixed Height with manualHeight of this value.
		/// 如果屏幕高度超过这个值，就好像缩放样式被设置为固定高度，手动设置这个值的高度。
		/// </summary>
		public int maximumHeight = 1536;

		/// <summary>
		/// When Constraint is on, controls whether the content must be restricted horizontally to be at least 'manualWidth' wide.
		/// 当启用约束时，控制是否必须将内容水平限制为至少“manualWidth”宽。
		/// </summary>
		public bool fitWidth = false;

		/// <summary>
		/// When Constraint is on, controls whether the content must be restricted vertically to be at least 'Manual Height' tall.
		/// 当约束打开时，控制是否必须将内容垂直限制为至少“手动高度”高。
		/// </summary>
		public bool fitHeight = true;

		/// <summary>
		/// Whether the final value will be adjusted by the device's DPI setting.
		/// Used when the Scaling is set to Pixel-Perfect.
		/// 设备的DPI设置是否会调整最终值。当缩放设置为像素完美时使用。
		/// </summary>
		public bool adjustByDPI = false;

		/// <summary>
		/// If set and the game is in portrait mode, the UI will shrink based on the screen's width instead of height.
		/// Used when the Scaling is set to Pixel-Perfect.
		/// 如果游戏处于竖屏模式，UI会根据屏幕的宽度而不是高度缩小。当缩放设置为像素完美时使用。
		/// </summary>
		public bool shrinkPortraitUI = false;

		/// <summary>
		/// Active scaling type, based on platform.主动扩展类型，基于平台。
		/// </summary>
		public Scaling activeScaling
		{
			get
			{
				Scaling scaling = scalingStyle;

				if (scaling == Scaling.ConstrainedOnMobiles)
#if UNITY_EDITOR || UNITY_IPHONE || UNITY_ANDROID || UNITY_WP8 || UNITY_WP_8_1 || UNITY_BLACKBERRY
					return Scaling.Constrained;
#else
				return Scaling.Flexible;
#endif
				return scaling;
			}
		}

		/// <summary>
		/// UI Root's active height, based on the size of the screen.UIRoot的高度，基于屏幕的大小。
		/// </summary>
		public int activeHeight
		{
			get
			{
				Scaling scaling = activeScaling;

				if (scaling == Scaling.Flexible)
				{
					Vector2 screen = NGUITools.screenSize;
					float   aspect = screen.x / screen.y;

					if (screen.y < minimumHeight)
					{
						screen.y = minimumHeight;
						screen.x = screen.y * aspect;
					}
					else if (screen.y > maximumHeight)
					{
						screen.y = maximumHeight;
						screen.x = screen.y * aspect;
					}

					// Portrait mode uses the maximum of width or height to shrink the UI
					int height =
						Mathf.RoundToInt((shrinkPortraitUI && screen.y > screen.x) ? screen.y / aspect : screen.y);

					// Adjust the final value by the DPI setting
					return adjustByDPI ? NGUIMath.AdjustByDPI(height) : height;
				}
				else
				{
					Constraint cons = constraint;
					if (cons == Constraint.FitHeight)
						return manualHeight;

					Vector2 screen        = NGUITools.screenSize;
					float   aspect        = screen.x            / screen.y;
					float   initialAspect = (float) manualWidth / manualHeight;

					switch (cons)
					{
						case Constraint.FitWidth:
						{
							return Mathf.RoundToInt(manualWidth / aspect);
						}
						case Constraint.Fit:
						{
							return (initialAspect > aspect) ? Mathf.RoundToInt(manualWidth / aspect) : manualHeight;
						}
						case Constraint.Fill:
						{
							return (initialAspect < aspect) ? Mathf.RoundToInt(manualWidth / aspect) : manualHeight;
						}
					}

					return manualHeight;
				}
			}
		}

		/// <summary>
		/// Pixel size adjustment. Most of the time it's at 1, unless the scaling style is set to FixedSize.
		/// 像素大小调整。大多数时候它是1，除非缩放样式被设置为FixedSize。
		/// </summary>
		public float pixelSizeAdjustment
		{
			get
			{
				int height = Mathf.RoundToInt(NGUITools.screenSize.y);
				return height == -1 ? 1f : GetPixelSizeAdjustment(height);
			}
		}

		/// <summary>
		/// Helper function that figures out the pixel size adjustment for the specified game object.
		/// 辅助功能，找出像素大小调整为指定的游戏对象。
		/// </summary>
		static public float GetPixelSizeAdjustment(GameObject go)
		{
			NGUIRoot root = NGUITools.FindInParents<NGUIRoot>(go);
			return (root != null) ? root.pixelSizeAdjustment : 1f;
		}

		/// <summary>
		/// Calculate the pixel size adjustment at the specified screen height value.
		/// 计算指定屏幕高度值下的像素大小调整。
		/// </summary>
		public float GetPixelSizeAdjustment(int height)
		{
			height = Mathf.Max(2, height);

			if (activeScaling == Scaling.Constrained)
				return (float) activeHeight / height;

			if (height < minimumHeight) return (float) minimumHeight / height;
			if (height > maximumHeight) return (float) maximumHeight / height;
			return 1f;
		}

		Transform mTrans;

		protected virtual void Awake()
		{
			mTrans = transform;
		}

		protected virtual void OnEnable()
		{
			list.Add(this);
		}

		protected virtual void OnDisable()
		{
			list.Remove(this);
		}

		protected virtual void Start()
		{
			NGUIOrthoCamera oc = GetComponentInChildren<NGUIOrthoCamera>();

			if (oc != null)
			{
				Debug.LogWarning("NGUIRoot should not be active at the same time as NGUIOrthoCamera. Disabling NGUIOrthoCamera.",
				                 oc);
				Camera cam = oc.gameObject.GetComponent<Camera>();
				oc.enabled = false;
				if (cam != null) cam.orthographicSize = 1f;
			}
			else UpdateScale(false);
		}

		void Update()
		{
#if UNITY_EDITOR
			if (!Application.isPlaying && gameObject.layer != 0)
				UnityEditor.EditorPrefs.SetInt("NGUI Layer", gameObject.layer);
#endif
			UpdateScale();
		}

		/// <summary>
		/// Immediately update the root's scale. Call this function after changing the min/max/manual height values.
		/// 立即更新root的缩放。在更改最小/最大/手动高度值后调用此函数。
		/// </summary>
		public void UpdateScale(bool updateAnchors = true)
		{
			if (mTrans != null)
			{
				float calcActiveHeight = activeHeight;

				if (calcActiveHeight > 0f)
				{
					float size = 2f / calcActiveHeight;

					Vector3 ls = mTrans.localScale;

					if (!(Mathf.Abs(ls.x - size) <= float.Epsilon) ||
					    !(Mathf.Abs(ls.y - size) <= float.Epsilon) ||
					    !(Mathf.Abs(ls.z - size) <= float.Epsilon))
					{
						mTrans.localScale = new Vector3(size, size, size);
						if (updateAnchors) BroadcastMessage("UpdateAnchors", SendMessageOptions.DontRequireReceiver);
					}
				}
			}
		}

		/// <summary>
		/// Broadcast the specified message to the entire UI.
		/// 将指定的消息广播到整个UI。
		/// </summary>
		static public void Broadcast(string funcName)
		{
#if UNITY_EDITOR
			if (Application.isPlaying)
#endif
			{
				for (int i = 0, imax = list.Count; i < imax; ++i)
				{
					NGUIRoot root = list[i];
					if (root != null) root.BroadcastMessage(funcName, SendMessageOptions.DontRequireReceiver);
				}
			}
		}

		/// <summary>
		/// Broadcast the specified message to the entire UI.
		/// 将指定的消息广播到整个UI。
		/// </summary>
		static public void Broadcast(string funcName, object param)
		{
			if (param == null)
			{
				// More on this: http://answers.unity3d.com/questions/55194/suggested-workaround-for-sendmessage-bug.html
				Debug.LogError("SendMessage is bugged when you try to pass 'null' in the parameter field. It behaves as if no parameter was specified.");
			}
			else
			{
				for (int i = 0, imax = list.Count; i < imax; ++i)
				{
					NGUIRoot root = list[i];
					if (root != null) root.BroadcastMessage(funcName, param, SendMessageOptions.DontRequireReceiver);
				}
			}
		}
	}
}