using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BasicsLibrary;

namespace AM
{
    public class AssetsManager : Singleton<AssetsManager>
    {
        protected override void Awake()
        {
            Debug.Log("资产初始化");
        }

        public void Test()
        {
            Debug.Log("AssetsManager.Test");
        }
    }
}

