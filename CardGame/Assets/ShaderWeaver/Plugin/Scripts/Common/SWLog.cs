//----------------------------------------------
//            Shader Weaver
//      Copyright© 2017 Jackie Lo
//----------------------------------------------
namespace ShaderWeaver
{
	using UnityEngine;
	using System.Collections;
	using System.Collections.Generic;
	using UnityEditor;
	using System.IO;
	using System.Text.RegularExpressions;
	using System.Reflection;

	public class SWLog{
		public static void Log(string content)
		{
			string str = string.Format ("{0}:{1}\r\n", System.DateTime.Now, content);
			File.AppendAllText (SWGlobalSettings.AssetsFullPath + "/../ShaderWeaverLog.log", str);
		}
	}
}