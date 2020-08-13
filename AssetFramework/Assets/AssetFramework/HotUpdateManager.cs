using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameBasicsLibrary;

namespace AssetFramework
{
    /// <summary>
    /// 热更管理
    /// 支持整个配置表更新,将所有的热更包更新下载下来
    /// 支持单个热更包更新
    /// 最好的做法是对比完配置表,本地缺什么就下载什么.
    /// 1. 下载服务器配置表
    /// 2. 与本地配置表对比
    /// 3. 进行单包下载,不建议下载一整个 zip 文件,有可能中断
    /// 4. 下载完毕,进行检查
    /// 5. 结束热更
    /// </summary>
    public class HotUpdateManager : Singleton<HotUpdateManager> , IManager
    {
        //配置表
        public AssetsConfigs assetsConfigs;
        public void Awake()
        {
            
        }

        public void Start()
        {
        
        }

        public void Update()
        {
        
        }

        public void LateUpdate()
        {
        
        }
        public void OnDestroy()
        {
        
        }
    }
}