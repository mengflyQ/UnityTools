using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace ExcelFramework
{
    public static class ExcelTexture
    {
        public static Texture Icon
        {
            get
            {
                return EditorGUIUtility.Load ("ExcelFramework/Excel.png") as Texture;
            }
        }
        
        public static Texture Data
        {
            get
            {
                return EditorGUIUtility.Load ("ExcelFramework/Data.png") as Texture;
            }
        }
    }
}