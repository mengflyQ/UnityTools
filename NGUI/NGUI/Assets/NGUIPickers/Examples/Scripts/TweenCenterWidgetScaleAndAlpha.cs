using UnityEngine;
using System.Collections;

public class TweenCenterWidgetScaleAndAlpha : MonoBehaviour {

	public IPPickerBase picker;
	
	public float scaleFactor = 1.1f;
	
	public float duration = .5f;
	
	NGUI.TweenScale scaleTween;
	NGUI.TweenAlpha alphaTween;
	
	NGUI.NGUIWidget currentWidget;

	void Start ()
	{
		Grow ();
	}
	
	void Grow ()
	{
		currentWidget = picker.GetCenterWidget ();
		
		scaleTween = currentWidget.gameObject.GetComponent ( typeof ( NGUI.TweenScale ) ) as NGUI.TweenScale;
		if ( scaleTween == null )
		{
			AddTweeners ( );
		}
		else
		{
			alphaTween = currentWidget.gameObject.GetComponent ( typeof ( NGUI.TweenAlpha ) ) as NGUI.TweenAlpha;
		}
		
		scaleTween.Play ( true );
		alphaTween.Play ( true );
	}
			
	void Shrink ()
	{
		scaleTween.Play ( false );
		alphaTween.Play ( false );
	}
	
	void AddTweeners ( )
	{
		scaleTween = currentWidget.gameObject.AddComponent ( typeof ( NGUI.TweenScale ) ) as NGUI.TweenScale;
		alphaTween = currentWidget.gameObject.AddComponent ( typeof ( NGUI.TweenAlpha ) ) as NGUI.TweenAlpha;
		
		scaleTween.from = currentWidget.cachedTransform.localScale;
		scaleTween.to = new Vector3 ( currentWidget.cachedTransform.localScale.x * scaleFactor, currentWidget.cachedTransform.localScale.y * scaleFactor, currentWidget.cachedTransform.localScale.z );
		scaleTween.duration = duration;
		
		alphaTween.to = 1f;
		alphaTween.from = currentWidget.alpha;
		alphaTween.duration = duration;
	}
}
