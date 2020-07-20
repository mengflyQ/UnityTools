namespace NGUI
{

	using UnityEngine;
	using System.Collections.Generic;

	/// <summary>
	/// This class is meant to be used only internally. It's like Debug.Log, but prints using OnGUI to screen instead.
	/// </summary>
	[AddComponentMenu("NGUI/Internal/NGUIDebug")]
	public class NGUIDebug : MonoBehaviour
	{
		static bool         mRayDebug = false;
		static List<string> mLines    = new List<string>();
		static NGUIDebug    mInstance = null;
		
		
		private GUIStyle _guiStyle;
		
		
		/// <summary>
		/// Set by NGUICamera. Can be used to show/hide raycast information.
		/// </summary>
		static public bool debugRaycast
		{
			get { return mRayDebug; }
			set
			{
				mRayDebug = value;
				if (value && Application.isPlaying)
					CreateInstance();
			}
		}

		/// <summary>
		/// Ensure we have an instance present.
		/// </summary>
		static public void CreateInstance()
		{
			if (mInstance == null)
			{
				GameObject go = new GameObject("_NGUI Debug");
				mInstance = go.AddComponent<NGUIDebug>();
				DontDestroyOnLoad(go);
				GUIStyle bb =new GUIStyle();
				bb.normal.background = null;            
				bb.fontSize          = 16;
				mInstance._guiStyle = bb;
			}
		}

		/// <summary>
		/// Add a new on-screen log entry.
		/// </summary>
		static void LogString(string text)
		{
			if (Application.isPlaying)
			{
				if (mLines.Count > 20) mLines.RemoveAt(0);
				mLines.Add(text);
				CreateInstance();
			}
			else Debug.Log(text);
		}

		/// <summary>
		/// Add a new log entry, printing all of the specified parameters.
		/// </summary>
		static public void Log(params object[] objs)
		{
			string text = "";

			for (int i = 0; i < objs.Length; ++i)
			{
				if (i == 0)
				{
					text += objs[i].ToString();
				}
				else
				{
					text += ", " + objs[i].ToString();
				}
			}

			LogString(text);
		}

		/// <summary>
		/// Add a new log entry.
		/// </summary>
		static public void Log(string s)
		{
			if (!string.IsNullOrEmpty(s))
			{
				string[] lines = s.Split('\n');
				foreach (string st in lines) LogString(st);
			}
		}

		/// <summary>
		/// Clear the logged text.
		/// </summary>
		static public void Clear()
		{
			mLines.Clear();
		}

		/// <summary>
		/// Draw bounds immediately. Won't be remembered for the next frame.
		/// </summary>
		static public void DrawBounds(Bounds b)
		{
			Vector3 c  = b.center;
			Vector3 v0 = b.center - b.extents;
			Vector3 v1 = b.center + b.extents;
			Debug.DrawLine(new Vector3(v0.x, v0.y, c.z), new Vector3(v1.x, v0.y, c.z), Color.red);
			Debug.DrawLine(new Vector3(v0.x, v0.y, c.z), new Vector3(v0.x, v1.y, c.z), Color.red);
			Debug.DrawLine(new Vector3(v1.x, v0.y, c.z), new Vector3(v1.x, v1.y, c.z), Color.red);
			Debug.DrawLine(new Vector3(v0.x, v1.y, c.z), new Vector3(v1.x, v1.y, c.z), Color.red);
		}

		void OnGUI()
		{
			Rect rect = new Rect(5f, 5f, Screen.width, 20);

			if (mRayDebug)
			{
				NGUICamera.ControlScheme scheme = NGUICamera.currentScheme;
				string                 text   = "Scheme: " + scheme;
				GUI.color = Color.black;
				rect.y    -= 1f;
				rect.x    -= 1f;
				GUI.color =  Color.white;
				GUI.Label(rect, text, _guiStyle);
				rect.y += 20;
				rect.x += 1f;
			
				text      = "Hover: " + NGUITools.GetHierarchy(NGUICamera.hoveredObject).Replace("\"", "");
				GUI.color = Color.black;
				rect.y    -= 1f;
				rect.x    -= 1f;
				GUI.color =  Color.white;
				GUI.Label(rect, text, _guiStyle);
				rect.y += 20;
				rect.x += 1f;
			
				text      = "Selection: " + NGUITools.GetHierarchy(NGUICamera.selectedObject).Replace("\"", "");
				GUI.color = Color.black;
				rect.y    -= 1f;
				rect.x    -= 1f;
				GUI.color =  Color.white;
				GUI.Label(rect, text, _guiStyle);
				rect.y += 20;
				rect.x += 1f;
			
				text = "Controller: " +
				            NGUITools.GetHierarchy(NGUICamera.controllerNavigationObject).Replace("\"", "");
				GUI.color = Color.black;
				rect.y    -= 1f;
				rect.x    -= 1f;
				GUI.color =  Color.white;
				GUI.Label(rect, text, _guiStyle);
				rect.y += 20;
				rect.x += 1f;
			
				text = "Active events: " + NGUICamera.CountInputSources();
				if (NGUICamera.disableController) text     += ", disabled controller";
				if (NGUICamera.ignoreControllerInput) text += ", ignore controller";
				if (NGUICamera.inputHasFocus) text         += ", input focus";
				GUI.color = Color.black;
				rect.y    -= 1f;
				rect.x    -= 1f;
				GUI.color =  Color.white;
				GUI.Label(rect, text, _guiStyle);
				rect.y += 20;
				rect.x += 1f;
			}

			for (int i = 0, imax = mLines.Count; i < imax; ++i)
			{
				GUI.color = Color.black;
				GUI.Label(rect, mLines[i]);
				rect.y    -= 1f;
				rect.x    -= 1f;
				GUI.color =  Color.white;
				GUI.Label(rect, mLines[i], _guiStyle);
				rect.y += 20;
				rect.x += 1f;
			}
		}
	}
}