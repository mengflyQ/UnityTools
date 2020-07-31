using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AM;
using BasicsLibrary;

public class GameManager : MonoSingleton<GameManager>
{
    
    void Awake()
    {
        
    }

    void Start()
    {
        AssetsManager.Instance.Test();
    }

    void Update()
    {
        
    }

    private void OnDestroy()
    {
#if UNITY_EDITOR
        Resources.UnloadUnusedAssets();
#endif
    }

    #region 场景加载之前执行的方法

    /// <summary>
    /// 默认直接让GameManager这个游戏节点创建在项目里面
    /// 也就是说,所有的单例的生命周期是在场景创建之前才创建的
    /// </summary>
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
    private static void MonoSingletonOnLoad()
    {
        DontDestroyOnLoad(GameManager.Instance.gameObject);
    }

    #endregion

}
