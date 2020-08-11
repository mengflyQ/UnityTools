using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

namespace AM
{
    public enum PlatformType
    {
        UnKnow = 0,
        Android = 1,
        iOS = 2,
        Windows = 3,
        macOS = 4,
        WebGL = 5,
    }
    
    
    public static class Platform
    {
        
        public static PlatformType GetPlatformType()
        {
#if UNITY_IPHONE
            return PlatformType.iOS;
#elif UNITY_ANDROID
            return PlatformType.Android;
#elif UNITY_STANDALONE_WIN
            return PlatformType.Windows;
#elif UNITY_STANDALONE_OSX
            return PlatformType.macOS;
#else
            return PlatformType.UnKnow;
#endif
        }
        
        public static string GetPlatformName()
        {
            PlatformType pt = GetPlatformType();
            switch (pt)
            {
                case PlatformType.Android:
                    return "android";
                case PlatformType.iOS:
                    return "ios";
                case PlatformType.Windows:
                    return "windows";
                case PlatformType.macOS:
                    return "macos";
                default:
                    return "unknow";
            } 
        }
        
        
       
        
    }
}


