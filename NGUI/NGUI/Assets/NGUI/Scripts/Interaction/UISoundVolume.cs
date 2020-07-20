namespace NGUI
{

	using UnityEngine;

	/// <summary>
	/// Very simple script that can be attached to a slider and will control the volume of all sounds played via NGUITools.PlaySound,
	/// which includes all of UI's sounds.
	/// </summary>

	[RequireComponent(typeof(UISlider))]
	[AddComponentMenu("NGUI/Event/Sound Volume")]
	public class UISoundVolume : MonoBehaviour
	{
		void Awake()
		{
			UISlider slider = GetComponent<UISlider>();
			slider.value = NGUITools.soundVolume;
			EventDelegate.Add(slider.onChange, OnChange);
		}

		void OnChange()
		{
			NGUITools.soundVolume = UISlider.current.value;
		}
	}
}