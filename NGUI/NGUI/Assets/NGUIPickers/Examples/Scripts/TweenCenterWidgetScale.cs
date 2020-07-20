using UnityEngine;
using System.Collections;

/// <summary>
/// Ping pongs a scale tween on the picker's selected widget
/// Needs messages from IPForwardPickerEvents
/// See example scene for setup
/// </summary>
public class TweenCenterWidgetScale : MonoBehaviour {
	
	public float scaleFactor = 1.3f;
	public float duration = .3f;
	public NGUI.UITweener.Method tweenMethod;
	
	public IPPickerBase _picker;
	NGUI.TweenScale _tweenScale;
	NGUI.NGUIWidget _centerWidget;

	
	void OnSelectionStart ()
	{
		if ( _tweenScale == null )
			return;
		
		StartCoroutine ( StopTweenOnDirection () );
	}
	
	IEnumerator StopTweenOnDirection ()
	{
		while ( _tweenScale.direction == NGUI.AnimationOrTween.Direction.Forward ) // Wait until the tween is reversing
		{
			yield return null;
		}
		
		_tweenScale.style = NGUI.UITweener.Style.Once;
	}
	
	void OnPickerStopped ()
	{
		_centerWidget = _picker.GetCenterWidget ();
	
		GetOrAddTweener ();
		
		_tweenScale.from = _centerWidget.cachedTransform.localScale;
		_tweenScale.to = _tweenScale.from * ( scaleFactor );
		_tweenScale.Play (true);
	}
	
	void GetOrAddTweener ()
	{
		_tweenScale = _centerWidget.gameObject.GetComponent ( typeof ( NGUI.TweenScale ) ) as NGUI.TweenScale;
		
		if ( _tweenScale == null )
		{
			_tweenScale = _centerWidget.gameObject.AddComponent ( typeof ( NGUI.TweenScale ) ) as NGUI.TweenScale;
			_tweenScale.duration = duration;
			_tweenScale.method = tweenMethod;
		}
		_tweenScale.style = NGUI.UITweener.Style.PingPong;
	}
}
