using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ShaderWeaver
{
    public static class FloatEX 
    {
        public static string ToStringEX(this float f)
        {
            string str = f.ToString();
            str = str.Replace(',', '.');
            return str; 
        }
    }
}