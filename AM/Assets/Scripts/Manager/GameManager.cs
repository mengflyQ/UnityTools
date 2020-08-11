using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameBasicsLibrary;
using AM;

public class GameManager : MonoSingleton<GameManager>
{
    /// <summary>
    /// 当前脚本只有 Awake 是在场景加载完毕之前调用的,请慎用
    /// </summary>
    void Awake()
    {
        ConfigManager.Instance.Awake();
        AssetsManager.Instance.Awake();
        LuaManager.Instance.Awake();
        UIManager.Instance.Awake();
        GameSceneManager.Instance.Awake();
    }

    void Start()
    {
        ConfigManager.Instance.Start();
        AssetsManager.Instance.Start();
        LuaManager.Instance.Start();
        UIManager.Instance.Start();
        GameSceneManager.Instance.Awake();
    }
    
    /// <summary>
    /// 当使用到了,再执行此方法,没有使用到,不要放出
    /// </summary>
    void Update()
    {
        // ConfigManager.Instance.Update();
        // AssetsManager.Instance.Update();
        // LuaManager.Instance.Update();
        UIManager.Instance.Update();
        // GameSceneManager.Instance.Update();
    }

    /// <summary>
    /// 当使用到了,再执行此方法,没有使用到,不要放出
    /// </summary>
    void LateUpdate()
    {
        // ConfigManager.Instance.LateUpdate();
        // AssetsManager.Instance.LateUpdate();
        LuaManager.Instance.LateUpdate();
        // UIManager.Instance.LateUpdate();
        // GameSceneManager.Instance.LateUpdate();
    }

    private void OnDestroy()
    {
        ConfigManager.Instance.OnDestroy();
        AssetsManager.Instance.OnDestroy();
        LuaManager.Instance.OnDestroy();
        UIManager.Instance.OnDestroy();
        GameSceneManager.Instance.OnDestroy();
        Quit();
    }

    /// <summary>
    /// 退出游戏只能调用这一个方法
    /// </summary>
    public void Quit()
    {
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
        Resources.UnloadUnusedAssets();
#else
        Application.Quit();
#endif
    }

    #region 场景加载前/后执行的方法

    /// <summary>
    /// 默认直接让GameManager这个游戏节点创建在项目里面
    /// 也就是说,所有的单例的生命周期是在场景创建之前才创建的
    /// </summary>
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
    private static void GameManagerBeforeSceneLoad()
    {
        DontDestroyOnLoad(GameManager.Instance.gameObject);
    }
    
    /// <summary>
    /// 在场景加载之后做一些事情
    /// </summary>
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    private static void GameManagerAfterSceneLoad()
    {
        Debug.Log("场景已加载");
    }
    

    #endregion

}
