//----------------------------------------------
//            NGUI Infinite Pickers
// 		Copyright © 2013 Gregorio Zanon
//----------------------------------------------

using UnityEngine;
using System.Collections;
using NGUI;

public abstract class IPPickerLabelBase : IPPickerBase 
{
	public NGUI.NGUIFont font;
	
	[SerializeField]
	protected NGUI.NGUILabel[] uiLabels;
	
	public override NGUI.NGUIWidget GetCenterWidget ()
	{
		return uiLabels [ cycler.CenterWidgetIndex ];
	}
	
	public override NGUI.NGUIWidget GetWidgetAtScreenPos ( Vector2 pos )
	{
		int index = cycler.GetIndexFromScreenPos ( pos );
		return uiLabels [index];
	}
	
	protected override void InitWidgets ()
	{
		for ( int i = 0; i < uiLabels.Length; i++ )
		{
			uiLabels[i].bitmapFont = font;
			uiLabels[i].MakePixelPerfect ();
			
			uiLabels[i].color = widgetsColor;
			uiLabels[i].pivot = widgetsPivot;
			uiLabels[i].cachedTransform.localPosition = widgetOffsetInPicker;
		}
	}
	
	protected override void MakeWidgetComponents ()
	{
		uiLabels = cycler.MakeWidgets < NGUI.NGUILabel > ();
		
		foreach ( NGUI.NGUILabel label in uiLabels )
		{
			label.depth = widgetsDepth;
		}
		
		_nbOfWidgets = uiLabels.Length;
	}
	
	public override void EnableWidgets (bool enable)
	{
		for ( int i = 0; i < uiLabels.Length; i++ )
		{
			uiLabels[i].enabled = enable;
		}
	}
	
	protected override bool WidgetsNeedRebuild ()
	{
		if ( uiLabels == null || uiLabels.Length == 0 )
			return true;
		
		for ( int i = 0; i < uiLabels.Length; i++ )
		{
			if ( uiLabels[i] == null )
				return true;
		}
		return false;
	}
}
