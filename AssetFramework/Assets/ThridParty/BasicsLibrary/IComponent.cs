/********************************************************************
 Date: 2020-08-05
 Name: MD5Util
 author:  zhuzizheng
*********************************************************************/

namespace GameBasicsLibrary
{
    /// <summary>
    /// 存在于管理器上面的组件,只能使用以下 3 个方法继承接口,在 manager 里面塞入即可
    /// 一般的数据类是不需要的
    /// Lua数据类一般不需要,LuaManager 已经够用了
    /// UI上时间相关组件需要
    /// 加载场景时进度条需要
    /// </summary>
    public interface IComponent
    {
        void Start();
        void Update();
        void OnDestroy();
    }
}