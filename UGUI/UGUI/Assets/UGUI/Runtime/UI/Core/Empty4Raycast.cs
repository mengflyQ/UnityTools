using UnityEngine;
using System.Collections;

namespace UnityEngine.UI
{
    /// <summary>
    /// https://blog.uwa4d.com/archives/fillrate.html
    /// 只在逻辑上响应Raycast,但是不参与绘制
    /// </summary>
    public class Empty4Raycast : MaskableGraphic
    {
        protected Empty4Raycast()
        {
            useLegacyMeshGeneration = false;
        }

        protected override void OnPopulateMesh(VertexHelper toFill)
        {
            toFill.Clear();
        }
    }
}
