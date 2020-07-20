namespace NGUI
{

    using UnityEngine;
    using System.Collections.Generic;

    /// <summary>
    /// Generated geometry class. All widgets have one.
    /// This class separates the geometry creation into several steps, making it possible to perform
    /// actions selectively depending on what has changed. For example, the widget doesn't need to be
    /// rebuilt unless something actually changes, so its geometry can be cached. Likewise, the widget's
    /// transformed coordinates only change if the widget's transform moves relative to the panel,
    /// so that can be cached as well. In the end, using this class means using more memory, but at
    /// the same time it allows for significant performance gains, especially when using widgets that
    /// spit out a lot of vertices, such as UILabels.
    /// 生成几何数据,所有的单个 widget 都有一个这样的类
    /// 这个类将几何图形的创建分成几个步骤,使其能够执行
    /// 如果发生了更改,会重新生成,不发生更改,则会缓存这些几何数据,从而降低堆内存
    /// 单个 widget 相对于 panel 移动时,转换坐标会改变,这个也可以缓存.
    /// 这个类使用了堆内存,但是性能提升很大.
    /// UILabel 字体很多的情况下,顶点也很多,一个字母 4 个顶点,2 个三角形
    /// 优化步骤:
    /// 1:对UIGeometry的顶点属性做了缓存池，并保证OnFill时进行按需选择；
    /// 2:通过unsafe的方法来修改IndexBuffer的长度；
    /// 3:填充数组前充分设置List.capacity；
    /// </summary>

    public class NGUIGeometry
    {
        /// <summary>
        /// Widget's vertices (before they get transformed).
        /// Widget 的顶点(在它们被转换之前)。
        /// </summary>

        public BetterList<Vector3> verts = new BetterList<Vector3>();

        /// <summary>
        /// Widget's texture coordinates for the geometry's vertices.
        /// Widget的几何体顶点的纹理坐标。
        /// </summary>

        public BetterList<Vector2> uvs = new BetterList<Vector2>();

        /// <summary>
        /// Array of colors for the geometry's vertices.
        /// 几何图形的顶点的颜色数组。
        /// </summary>
        public BetterList<Color32> cols = new BetterList<Color32>();
        
        
        // Relative-to-panel vertices, normal, and tangent
        // 相对于面板顶点，法线和切线
        public BetterList<Vector3> mRtpVerts = new BetterList<Vector3>();
        Vector3 mRtpNormal;
        Vector4 mRtpTan;

        /// <summary>
        /// Whether the geometry contains usable vertices.
        /// 几何图形是否包含可用的顶点。
        /// </summary>
        public bool hasVertices
        {
            get { return (verts.Size > 0); }
        }

        /// <summary>
        /// Whether the geometry has usable transformed vertex data.
        /// 几何图形是否具有可用的转换顶点数据。
        /// </summary>
        public bool hasTransformed
        {
            get { return (mRtpVerts != null) && (mRtpVerts.Size > 0) && (mRtpVerts.Size == verts.Size); }
        }


        /// <summary>
        /// Custom delegate called after WriteToBuffers finishes filling in the geometry.
        /// Use it to apply any and all modifications to vertices that you need.
        /// 在WriteToBuffers填完几何图形后调用自定义委托。
        /// 如果你需要,可以使用它应用任何和所有修改的顶点，
        /// </summary>

        public OnCustomWrite onCustomWrite;

        public delegate void OnCustomWrite(BetterList<Vector3> v, BetterList<Vector2> u, BetterList<Color32> c, BetterList<Vector3> n,
                                           BetterList<Vector4> t, BetterList<Vector4> u2);

        /// <summary>
        /// Step 1: Prepare to fill the buffers -- make them clean and valid.
        /// 步骤1:准备填充缓冲区——使它们干净有效。
        /// </summary>
        public void Clear()
        {
            verts.Clear();
            uvs.Clear();
            cols.Clear();
            mRtpVerts.Clear();
        }

        /// <summary>
        /// Step 2: Transform the vertices by the provided matrix.
        /// 步骤2:通过提供的矩阵转换顶点。根据传入的空间变换矩阵更新（相对于panel的）顶点、法线、切线位置。
        /// </summary>
        public void ApplyTransform(Matrix4x4 widgetToPanel, bool generateNormals = true)
        {
            if (verts.Size > 0)
            {
                mRtpVerts.Clear();
                for (int i = 0, imax = verts.Size; i < imax; ++i)
                    mRtpVerts.Add(widgetToPanel.MultiplyPoint3x4(verts.Buffer[i]));

                // Calculate the widget's normal and tangent
                if (generateNormals)
                {
                    mRtpNormal = widgetToPanel.MultiplyVector(Vector3.back).normalized;
                    Vector3 tangent = widgetToPanel.MultiplyVector(Vector3.right).normalized;
                    mRtpTan = new Vector4(tangent.x, tangent.y, tangent.z, -1f);
                }
            }
            else mRtpVerts.Clear();
        }

        /// <summary>
        /// Step 3: Fill the specified buffer using the transformed values.
        /// 步骤3:使用转换后的值填充指定的缓冲区。将缓存写入到drawCall的buffer中。
        /// </summary>
        public void WriteToBuffers(BetterList<Vector3> v, BetterList<Vector2> u, BetterList<Color32> c, BetterList<Vector3> n, BetterList<Vector4> t,
                                   BetterList<Vector4> u2)
        {
            if (mRtpVerts == null || mRtpVerts.Size <= 0)
            {
                return;
            }
            if (n == null)
            {
                //加快数组拷贝
                v.AddRange(mRtpVerts, mRtpVerts.Size);
				u.AddRange(uvs, mRtpVerts.Size);
				c.AddRange(cols, mRtpVerts.Size);
                // for (int i = 0, imax = mRtpVerts.Size; i < imax; ++i)
                // {
                //     v.Add(mRtpVerts.Buffer[i]);
                //     u.Add(uvs.Buffer[i]);
                //     c.Add(cols.Buffer[i]);
                // }
            }
            else
            {
                v.AddRange(mRtpVerts, mRtpVerts.Size);
				u.AddRange(uvs, mRtpVerts.Size);
				c.AddRange(cols, mRtpVerts.Size);
                for (int i = 0, imax = mRtpVerts.Size; i < imax; ++i)
                {
                    // v.Add(mRtpVerts.Buffer[i]);
                    // u.Add(uvs.Buffer[i]);
                    // c.Add(cols.Buffer[i]);
                    n.Add(mRtpNormal);
                    t.Add(mRtpTan);
                }
            }

            if (u2 != null)
            {
                Vector4 uv2 = Vector4.zero;

                for (int i = 0, imax = verts.Size; i < imax; ++i)
                {
                    uv2.x = verts.Buffer[i].x;
                    uv2.y = verts.Buffer[i].y;
                    u2.Add(uv2);
                }
            }

            if (onCustomWrite != null) onCustomWrite(v, u, c, n, t, u2);
        }


        //删除时候回收复用BetterList
        public void Destroy()
        {
            verts.Release();
            uvs.Release();
            cols.Release();
            mRtpVerts.Release();
        }
    }
}