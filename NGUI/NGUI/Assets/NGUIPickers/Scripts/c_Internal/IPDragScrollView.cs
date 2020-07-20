using UnityEngine;
using System.Collections;

public class IPDragScrollView : NGUI.UIDragScrollView {

	void OnPress (bool pressed)
	{
		if (scrollView && enabled && NGUI.NGUITools.GetActive(gameObject))
		{
			scrollView.Press(pressed);
		}
	}
}
