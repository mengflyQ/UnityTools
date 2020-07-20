//----------------------------------------------
//            NGUI Infinite Pickers
// 		Copyright © 2013 Gregorio Zanon
//----------------------------------------------
using UnityEngine;
using System.Collections;
using NGUI;
public class DragPickerSprite : MonoBehaviour {
	
	public NGUI.NGUISprite draggedSprite;
	public IPSpritePicker picker;
	public NGUI.TweenAlpha tweenAlpha;
	
	public bool dragSelectedItemOnly;
	public float delayAfterExit;
	
	NGUI.UIDragObject _dragObject;
	IPUserInteraction _userInteraction;
	
	void Start ()
	{
		_dragObject = gameObject.AddComponent ( typeof ( NGUI.UIDragObject ) ) as NGUI.UIDragObject;
		_dragObject.target = draggedSprite.cachedTransform; // UIDragObject
	}
	
	void OnPress ( bool press )
	{
		if ( press )
		{
			if ( _userInteraction == null )
			{
				_userInteraction = gameObject.GetComponent ( typeof ( IPUserInteraction ) ) as IPUserInteraction;
				_userInteraction.onDragExit += OnDragExit;
			}
			Vector3 touchPosInWorld = NGUI.NGUICamera.currentCamera.ScreenToWorldPoint ( new Vector3 ( NGUI.NGUICamera.currentTouch.pos.x, NGUICamera.currentTouch.pos.y, draggedSprite.cachedTransform.position.z ) );
			draggedSprite.cachedTransform.position = touchPosInWorld;
		}
		else
		{
			draggedSprite.enabled = false;
			
			StopAllCoroutines ();
			
			if ( NGUI.NGUICamera.currentTouch.current != null && NGUI.NGUICamera.currentTouch.current != this.gameObject )
			{
				NGUI.NGUICamera.currentTouch.current.SendMessage ( "OnSpriteDrop", draggedSprite.spriteName, SendMessageOptions.DontRequireReceiver );
			}
		}	
	}
	
	void OnDragExit ()
	{
		if ( dragSelectedItemOnly )
		{
			StartCoroutine ( DelayedSpriteAppearance ( delayAfterExit ) );
		}
		else
		{
			Vector3 onExitTouchPosInWorld = NGUI.NGUICamera.currentCamera.ScreenToWorldPoint ( new Vector3 ( NGUI.NGUICamera.currentTouch.pos.x, NGUICamera.currentTouch.pos.y, draggedSprite.cachedTransform.position.z ) );
			Vector3 touchLocalPosInCycler = picker.transform.InverseTransformPoint ( onExitTouchPosInWorld );
			StartCoroutine ( DelayedSpriteAppearance ( delayAfterExit, touchLocalPosInCycler ) );
		}
	}
	
	IEnumerator DelayedSpriteAppearance ( float delay )
	{
		yield return new WaitForSeconds ( delay );
		
		draggedSprite.spriteName = picker.CurrentSpriteName;
		draggedSprite.cachedTransform.localScale = picker.GetCenterWidget ().cachedTransform.localScale;
		draggedSprite.enabled = true;
		tweenAlpha.ResetToBeginning ();
		tweenAlpha.Play ( true );
	}
	
	IEnumerator DelayedSpriteAppearance ( float delay, Vector3 touchLocalPosInCycler )
	{
		yield return new WaitForSeconds ( delay );
		
		float exitDistanceFromCenter;
			
		if ( _userInteraction.cycler.direction == IPCycler.Direction.Horizontal )
		{
			exitDistanceFromCenter = touchLocalPosInCycler.x;
		}
		else
		{
			exitDistanceFromCenter = touchLocalPosInCycler.y;
		}
		
		exitDistanceFromCenter = exitDistanceFromCenter >= 0 ? exitDistanceFromCenter + _userInteraction.cycler.spacing / 2 : exitDistanceFromCenter - _userInteraction.cycler.spacing / 2;

		int deltaIndex = (int) exitDistanceFromCenter / ( int )_userInteraction.cycler.spacing;
		
		int spriteIndex = ( picker.SelectedIndex + deltaIndex ) % picker.spriteNames.Count;
		
		if ( spriteIndex < 0 )
			spriteIndex += picker.spriteNames.Count;
		
		draggedSprite.spriteName = picker.spriteNames [spriteIndex];
		draggedSprite.cachedTransform.localScale = picker.GetCenterWidget ().cachedTransform.localScale;
		draggedSprite.enabled = true;
		tweenAlpha.ResetToBeginning ();
		tweenAlpha.Play ( true );
	}
	
	
}
