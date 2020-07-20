namespace NGUI
{

	using UnityEngine;
	using System.Collections.Generic;

	/// <summary>
	/// This class makes it possible to activate or select something by pressing a key (such as space bar for example).
	/// 这个类可以通过按下一个键(例如空格键)来激活或选择某个东西。
	/// </summary>

	[AddComponentMenu("NGUI/Event/Key Binding")]
#if W2
public class UIKeyBinding : MonoBehaviour, TNet.IStartable
#else
	public class UIKeyBinding : MonoBehaviour
#endif
	{
		static public List<UIKeyBinding> list = new List<UIKeyBinding>();

		[DoNotObfuscateNGUI]
		public enum Action
		{
			PressAndClick,
			Select,
			All,
		}

		[DoNotObfuscateNGUI]
		public enum Modifier
		{
			Any,
			Shift,
			Ctrl,
			Alt,
			None,
		}

		/// <summary>
		/// Key that will trigger the binding.
		/// </summary>

		public KeyCode keyCode = KeyCode.None;

		/// <summary>
		/// Modifier key that must be active in order for the binding to trigger.
		/// </summary>

		public Modifier modifier = Modifier.Any;

		/// <summary>
		/// Action to take with the specified key.
		/// </summary>

		public Action action = Action.PressAndClick;

		[System.NonSerialized] bool mIgnoreUp = false;
		[System.NonSerialized] bool mIsInput  = false;
		[System.NonSerialized] bool mPress    = false;

		/// <summary>
		/// Key binding's descriptive caption.
		/// </summary>

		public string captionText
		{
			get
			{
				string s = NGUITools.KeyToCaption(keyCode);
				if (modifier == Modifier.None || modifier == Modifier.Any) return s;
				return modifier + "+" + s;
			}
		}

		/// <summary>
		/// Check to see if the specified key happens to be bound to some element.
		/// </summary>

		static public bool IsBound(KeyCode key)
		{
			for (int i = 0, imax = list.Count; i < imax; ++i)
			{
				var kb = list[i];
				if (kb != null && kb.keyCode == key) return true;
			}

			return false;
		}

		/// <summary>
		/// Find the specified key binding by its game object's name.
		/// </summary>

		static public UIKeyBinding Find(string name)
		{
			for (int i = 0, imax = list.Count; i < imax; ++i)
			{
				if (list[i].name == name) return list[i];
			}

			return null;
		}

#if W2
	protected virtual void Awake () { TNet.TNUpdater.AddStart(this); }
#endif
		protected virtual void OnEnable()
		{
			list.Add(this);
		}

		protected virtual void OnDisable()
		{
			list.Remove(this);
		}

		/// <summary>
		/// If we're bound to an input field, subscribe to its Submit notification.
		/// </summary>

#if W2
	public virtual void OnStart ()
#else
		protected virtual void Start()
#endif
		{
			NGUIInputField input = GetComponent<NGUIInputField>();
			mIsInput = (input != null);
			if (input != null) EventDelegate.Add(input.onSubmit, OnSubmit);
		}

		/// <summary>
		/// Ignore the KeyUp message if the input field "ate" it.
		/// </summary>

		protected virtual void OnSubmit()
		{
			if (NGUICamera.currentKey == keyCode && IsModifierActive()) mIgnoreUp = true;
		}

		/// <summary>
		/// Convenience function that checks whether the required modifier key is active.
		/// </summary>

		protected virtual bool IsModifierActive()
		{
			return IsModifierActive(modifier);
		}

		/// <summary>
		/// Convenience function that checks whether the required modifier key is active.
		/// </summary>

		static public bool IsModifierActive(Modifier modifier)
		{
			if (modifier == Modifier.Any) return true;

			if (modifier == Modifier.Alt)
			{
				if (NGUICamera.GetKey(KeyCode.LeftAlt) ||
				    NGUICamera.GetKey(KeyCode.RightAlt)) return true;
			}
			else if (modifier == Modifier.Ctrl)
			{
				if (NGUICamera.GetKey(KeyCode.LeftControl) ||
				    NGUICamera.GetKey(KeyCode.RightControl)) return true;
			}
			else if (modifier == Modifier.Shift)
			{
				if (NGUICamera.GetKey(KeyCode.LeftShift) ||
				    NGUICamera.GetKey(KeyCode.RightShift)) return true;
			}
			else if (modifier == Modifier.None)
				return
					!NGUICamera.GetKey(KeyCode.LeftAlt)      &&
					!NGUICamera.GetKey(KeyCode.RightAlt)     &&
					!NGUICamera.GetKey(KeyCode.LeftControl)  &&
					!NGUICamera.GetKey(KeyCode.RightControl) &&
					!NGUICamera.GetKey(KeyCode.LeftShift)    &&
					!NGUICamera.GetKey(KeyCode.RightShift);

			return false;
		}

		/// <summary>
		/// Process the key binding.
		/// </summary>

		protected virtual void Update()
		{
			if (keyCode != KeyCode.Numlock && NGUICamera.inputHasFocus) return;
			if (keyCode == KeyCode.None || !IsModifierActive()) return;
#if WINDWARD && UNITY_ANDROID
		// NVIDIA Shield controller has an odd bug where it can open the on-screen keyboard via a KeyCode.Return binding,
		// and then it can never be closed. I am disabling it here until I can track down the cause.
		if (keyCode == KeyCode.Return && PlayerPrefs.GetInt("Start Chat") == 0) return;
#endif

#if UNITY_FLASH
		bool keyDown = Input.GetKeyDown(keyCode);
		bool keyUp = Input.GetKeyUp(keyCode);
#else
			bool keyDown = NGUICamera.GetKeyDown(keyCode);
			bool keyUp   = NGUICamera.GetKeyUp(keyCode);
#endif

			if (keyDown) mPress = true;

			if (action == Action.PressAndClick || action == Action.All)
			{
				if (keyDown)
				{
					NGUICamera.currentTouchID = -1;
					NGUICamera.currentKey     = keyCode;
					OnBindingPress(true);
				}

				if (mPress && keyUp)
				{
					NGUICamera.currentTouchID = -1;
					NGUICamera.currentKey     = keyCode;
					OnBindingPress(false);
					OnBindingClick();
				}
			}

			if (action == Action.Select || action == Action.All)
			{
				if (keyUp)
				{
					if (mIsInput)
					{
						if (!mIgnoreUp && !(keyCode != KeyCode.Numlock && NGUICamera.inputHasFocus))
						{
							if (mPress) NGUICamera.selectedObject = gameObject;
						}

						mIgnoreUp = false;
					}
					else if (mPress)
					{
						NGUICamera.hoveredObject = gameObject;
					}
				}
			}

			if (keyUp) mPress = false;
		}

		protected virtual void OnBindingPress(bool pressed)
		{
			NGUICamera.Notify(gameObject, "OnPress", pressed);
		}

		protected virtual void OnBindingClick()
		{
			NGUICamera.Notify(gameObject, "OnClick", null);
		}

		/// <summary>
		/// Convert the key binding to its text format.
		/// </summary>

		public override string ToString()
		{
			return GetString(keyCode, modifier);
		}

		/// <summary>
		/// Convert the key binding to its text format.
		/// </summary>

		static public string GetString(KeyCode keyCode, Modifier modifier)
		{
			return (modifier != Modifier.None)
				       ? modifier + "+" + NGUITools.KeyToCaption(keyCode)
				       : NGUITools.KeyToCaption(keyCode);
		}

		/// <summary>
		/// Given the ToString() text, parse it for key and modifier information.
		/// </summary>

		static public bool GetKeyCode(string text, out KeyCode key, out Modifier modifier)
		{
			key      = KeyCode.None;
			modifier = Modifier.None;
			if (string.IsNullOrEmpty(text)) return true;

			if (text.Length > 2 && text.Contains("+") && text[text.Length - 1] != '+')
			{
				var parts = text.Split(new char[] {'+'}, 2);
				key = NGUITools.CaptionToKey(parts[1]);
				try
				{
					modifier = (Modifier) System.Enum.Parse(typeof(Modifier), parts[0]);
				}
				catch (System.Exception)
				{
					return false;
				}
			}
			else
			{
				modifier = Modifier.None;
				key      = NGUITools.CaptionToKey(text);
			}

			return true;
		}

		/// <summary>
		/// Get the currently active key modifier, if any.
		/// </summary>

		static public Modifier GetActiveModifier()
		{
			var mod = Modifier.None;
			if (NGUICamera.GetKey(KeyCode.LeftAlt)        || NGUICamera.GetKey(KeyCode.RightAlt)) mod = Modifier.Alt;
			else if (NGUICamera.GetKey(KeyCode.LeftShift) || NGUICamera.GetKey(KeyCode.RightShift))
				mod                                                                                     = Modifier.Shift;
			else if (NGUICamera.GetKey(KeyCode.LeftControl) || NGUICamera.GetKey(KeyCode.RightControl)) mod = Modifier.Ctrl;
			return mod;
		}
	}
}