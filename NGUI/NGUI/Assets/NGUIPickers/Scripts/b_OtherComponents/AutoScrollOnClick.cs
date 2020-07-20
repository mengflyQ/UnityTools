//----------------------------------------------
//            NGUI Infinite Pickers
// 		Copyright © 2013 Gregorio Zanon
//----------------------------------------------
using UnityEngine;
using System.Collections;
using NGUI;
public class AutoScrollOnClick : MonoBehaviour {
	
	public IPCycler cycler;
	
	void Awake ()
	{
		if ( cycler == null )
			Debug.LogError ( "No cycler referenced!" );

	}
	
	void OnClick ()
	{
		int deltaIndexFromCenter = cycler.GetDeltaIndexFromScreenPos ( NGUICamera.currentTouch.pos );
		if ( deltaIndexFromCenter != 0 )
			cycler.AutoScrollBy ( deltaIndexFromCenter );
	}
}
