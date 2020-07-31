using System;
using UnityEngine;

namespace BasicsLibrary
{
    public abstract class MonoSingleton<T> : MonoBehaviour where T : MonoSingleton<T>
    {
        private static   string _GameManager = "GameManager";
        protected static T      _instance    = null;

        public static T Instance
        {
            get
            {
                if (null == _instance) //如果 _instance 为空
                {
                    //创建一个唯一的 MonoSingleton 游戏对象
                    GameObject gm = GameObject.FindWithTag(_GameManager);
                    if (null == gm)
                    {
                        gm = new GameObject(_GameManager);
                        DontDestroyOnLoad(gm);
                    }

                    //如果在游戏管理器上面找不到这个单例对象,则添加
                    _instance = gm.GetComponent<T>();
                    if (null == _instance)
                    {
                        _instance = gm.AddComponent<T>();
                    }
                }
                return _instance;
            }
        }
        
        
        
    }
}