using UnityEngine;

namespace libx
{
    public class Settings : ScriptableObject
    {
        [Tooltip("是否在编辑器下开启加载AssetBundle的模式，开启后需要先打AssetBundle")]
        public bool runtimeMode;
        [Tooltip("是否开启本地服务器器，可以用来做版本更新测试")]
        public bool localServer;
        [Tooltip("是否复制资源到StreamingAssets")]
        public bool copyToStreamingAssets;
    }
}
