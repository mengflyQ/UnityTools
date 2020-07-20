//----------------------------------------------
//            NGUI Infinite Pickers
// 		Copyright © 2013 Gregorio Zanon
//----------------------------------------------
using UnityEngine;
using System.Collections;

public abstract class IPTexturePickerBase : IPPickerBase {
	
	public Shader shader;
	
	[SerializeField]
	protected NGUI.NGUITexture[] uiTextures;
	
	public override NGUI.NGUIWidget GetCenterWidget ()
	{
		return uiTextures [ cycler.CenterWidgetIndex ];
	}
	
	public override NGUI.NGUIWidget GetWidgetAtScreenPos ( Vector2 pos )
	{
		int index = cycler.GetIndexFromScreenPos ( pos );
		return uiTextures [index];
	}

	protected override void InitWidgets ()
	{
		for ( int i = 0; i < uiTextures.Length; i++ )
		{	
			uiTextures[i].color = widgetsColor;
			uiTextures[i].pivot = widgetsPivot;
			uiTextures[i].cachedTransform.localPosition = widgetOffsetInPicker;
		}
	}
	
	
	protected override void MakeWidgetComponents ()
	{
		uiTextures = cycler.MakeWidgets < NGUI.NGUITexture > ();
		
		if ( shader == null )
			shader = Shader.Find ("Unlit/Transparent Colored");
		
		foreach ( NGUI.NGUITexture tex in uiTextures )
		{
			tex.shader = shader;
			tex.depth  = widgetsDepth;
		}
		
		_nbOfWidgets = uiTextures.Length;
	}
	
	public override void EnableWidgets (bool enable)
	{
		for ( int i = 0; i < uiTextures.Length; i++ )
		{
			uiTextures[i].enabled = enable;
		}
	}
	
		protected override bool WidgetsNeedRebuild ()
		{
			if ( uiTextures == null || uiTextures.Length == 0 )
				return true;
			
			for ( int i = 0; i < uiTextures.Length; i++ )
			{
				if ( uiTextures[i] == null )
					return true;
			}
			return false;
		}
}

