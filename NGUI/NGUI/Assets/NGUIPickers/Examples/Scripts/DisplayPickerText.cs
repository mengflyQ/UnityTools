using UnityEngine;
using System.Collections;

[RequireComponent ( typeof ( NGUI.NGUILabel ) ) ]
public class DisplayPickerText : MonoBehaviour {
	
	public IPTextPicker picker; //The picker to grab text from
	
	NGUI.NGUILabel _label;
	
	void Awake()
	{
		_label = gameObject.GetComponent ( typeof ( NGUI.NGUILabel ) ) as NGUI.NGUILabel;
	}
	
	void DisplayText ()
	{
		_label.text = picker.CurrentLabelText;
	}
}
