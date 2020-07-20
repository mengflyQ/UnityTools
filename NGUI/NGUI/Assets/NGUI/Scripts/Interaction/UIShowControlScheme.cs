namespace NGUI
{

	using UnityEngine;

	/// <summary>
	/// Show or hide the widget based on whether the control scheme is appropriate.
	/// </summary>

	public class UIShowControlScheme : MonoBehaviour
	{
		public GameObject target;
		public bool       mouse      = false;
		public bool       touch      = false;
		public bool       controller = true;

		void OnEnable()
		{
			NGUICamera.onSchemeChange += OnScheme;
			OnScheme();
		}

		void OnDisable()
		{
			NGUICamera.onSchemeChange -= OnScheme;
		}

		void OnScheme()
		{
			if (target != null)
			{
				NGUICamera.ControlScheme scheme = NGUICamera.currentScheme;
				if (scheme      == NGUICamera.ControlScheme.Mouse) target.SetActive(mouse);
				else if (scheme == NGUICamera.ControlScheme.Touch) target.SetActive(touch);
				else if (scheme == NGUICamera.ControlScheme.Controller) target.SetActive(controller);
			}
		}
	}
}