#define SHOW_HIDDEN_OBJECTS

namespace NGUI
{

    using UnityEngine;
    using System.Collections.Generic;

    /// <summary>
    /// This is an internally-created script used by the UI system. You shouldn't be attaching it manually.
    /// NGUI 核心类,将数据类 NGUIGeometry 与 NGUIWidget 合在一起进行绘制
    /// Unity原生的动态合批技术在NGUI中并没有使用。NGUI所有使用的Shader都默认关闭了动态合批，即在shader的tag中设置"DisableBatching"="true"。因此，如果在NGUI中使用自定义的shader，也需要注意这一点
    /// drawCall本身的消耗并不高，真正带来性能负担（CPU）的是渲染器每次切换渲染状态所带来的消耗（这里的渲染状态包括材质、纹理、shader等）
    /// 
    /// 术语理解:
    /// UI 普通信息:颜色,位置,宽高,透明度,锚点,轴心等
    /// 管理器:管理 UI 的排布分级 以及 渲染
    /// 几何信息数据:顶点,UI,颜色,纹理信息,法线,切线
    /// 渲染状态:shader,material,纹理,就是 Mesh
    /// 渲染器:类似于 GPU 的功能,最终所有的数据传入这个渲染器里面进行渲染到屏幕上面,就是 MeshRenderer
    ///
    /// UI 普通信息,对应的 UIWidget
    /// 渲染状态以及渲染器对应的 UIDrawcall
    /// 几何信息数据对应的是 整个UIGeometry 以及 部分UIDrawcall
    /// 管理器对应的 UIPanel,管理UIWidget对其进行分级传入UIDrawcall显示
    /// 
    /// UIRect作为第一层抽象类,定义了 UI 的矩形框,锚点等信息
    /// UIWidget作为第二层抽象类,可以作为容器类使用,定义了 轴心,widget height depth clolor alpha等信息,可以更新几何信息以及其他属性的数据缓存
    /// UIDrawcall 不依赖整个 NGUI,可以传入几何信息数据即可渲染,将几何信息数据生成Mesh,并生产渲染状态(Material),将Material与Mesh数据传入渲染器里面将所有 UI 渲染到屏幕上面
    /// UIPanel 作为第二层抽象类,可以作为容器类使用,用于管理UIWidget、UIDrawCall等，实现界面的渲染裁剪、更新。收集,排序,更新 UI.
    /// 使用 depth 属性作为渲染状态的分析合并,计算有多少个渲染状态,是否穿插等,最终提供给 UIDrawcall 的渲染器进行渲染.
    /// </summary>
    [ExecuteInEditMode]
    [AddComponentMenu("NGUI/Internal/NGUIDrawCall")]
    public class NGUIDrawCall : MonoBehaviour
    {
        //NGUIDrawCall的对象池子,进行缓存而不是立即销毁
        static BetterList<NGUIDrawCall> mActiveList = new BetterList<NGUIDrawCall>();
        static BetterList<NGUIDrawCall> mInactiveList = new BetterList<NGUIDrawCall>();

        /// <summary>
        /// List of active draw calls.
        /// 所有激活的 draw call
        /// </summary>
        static public BetterList<NGUIDrawCall> activeList { get { return mActiveList; } }

        /// <summary>
        /// List of inactive draw calls. Only used at run-time in order to avoid object creation/destruction.
        /// 未激活的抽取调用列表。仅在运行时使用，以避免对象创建/销毁。
        /// </summary>
        static public BetterList<NGUIDrawCall> inactiveList { get { return mInactiveList; } }

        [DoNotObfuscateNGUI]
        public enum Clipping : int
        {
            None = 0,
            TextureMask = 1,            // Clipped using a texture rather than math,裁剪使用纹理而不是数学
            SoftClip = 3,               // Alpha-based clipping with a softened edge,基于透明度来裁剪软化的边缘
            ConstrainButDontClip = 4,   // No actual clipping, but does have an area,没有实际剪辑，但有一个区域
        }

        [HideInInspector] [System.NonSerialized] public int widgetCount = 0;
        [HideInInspector] [System.NonSerialized] public int depthStart = int.MaxValue;
        [HideInInspector] [System.NonSerialized] public int depthEnd = int.MinValue;
        [HideInInspector] [System.NonSerialized] public NGUIPanel manager;
        [HideInInspector] [System.NonSerialized] public NGUIPanel panel;
        [HideInInspector] [System.NonSerialized] public Texture2D clipTexture;
        [HideInInspector] [System.NonSerialized] public bool alwaysOnScreen = false;
        [HideInInspector] [System.NonSerialized] public BetterList<Vector3> verts = new BetterList<Vector3>();
        [HideInInspector] [System.NonSerialized] public BetterList<Vector3> norms = new BetterList<Vector3>();
        [HideInInspector] [System.NonSerialized] public BetterList<Vector4> tans = new BetterList<Vector4>();
        [HideInInspector] [System.NonSerialized] public BetterList<Vector2> uvs = new BetterList<Vector2>();
        [HideInInspector] [System.NonSerialized] public BetterList<Vector4> uv2 = new BetterList<Vector4>();
        [HideInInspector] [System.NonSerialized] public BetterList<Color32> cols = new BetterList<Color32>();

        [System.NonSerialized] Material mMaterial;      // Material used by this draw call,当前 draw call 所用的材质
        [System.NonSerialized] Texture mTexture;        // Main texture used by the material,material使用的主要纹理
        [System.NonSerialized] Shader mShader;      // Shader used by the dynamically created material,动态创建的material使用的Shader
        [System.NonSerialized] int mClipCount = 0;  // Number of times the draw call's content is getting clipped,draw call 的内容被裁剪的次数
        [System.NonSerialized] Transform mTrans;            // Cached transform
        [System.NonSerialized] Mesh mMesh;          // First generated mesh,第一个生成的 mesh
        [System.NonSerialized] MeshFilter mFilter;      // Mesh filter for this draw call,当前 draw call 的网格过滤器
        [System.NonSerialized] MeshRenderer mRenderer;      // Mesh renderer for this screen,
        [System.NonSerialized] Material mDynamicMat;    // Instantiated material,这个屏幕的网格渲染器
        [System.NonSerialized] int[] mIndices;      // Cached indices,缓存的索引

#if UNITY_4_7
	[System.NonSerialized] Vector3[] mTempVerts = null;
	[System.NonSerialized] Vector2[] mTempUV0 = null;
	[System.NonSerialized] Vector2[] mTempUV2 = null;
	[System.NonSerialized] Color[] mTempCols = null;
	[System.NonSerialized] Vector3[] mTempNormals = null;
	[System.NonSerialized] Vector4[] mTempTans = null;
#else
        [System.NonSerialized] ShadowMode mShadowMode = ShadowMode.None;
#endif
        [System.NonSerialized] bool mRebuildMat = true;
        [System.NonSerialized] bool mLegacyShader = false;
        [System.NonSerialized] int mRenderQueue = 3000;
        [System.NonSerialized] int mTriangles = 0;

        /// <summary>
        /// Whether the draw call has changed recently.
        /// draw call最近是否发生变化,isDirty用于标识该drawCall是否需要重新填充其几何信息
        /// drawCall中的widget发生改变（包括移动、修改等）
        /// 有新的widget被添加到panel/从panel中移除，即widget被添加到drawCall/从drawCall中移除（可能只需要修改某个drawCall，也可能需要rebuild整个panel，详见panel章节）
        /// panel发生改变（包括移动、修改等）
        /// </summary>
        [System.NonSerialized]
        public bool isDirty = false;

        [System.NonSerialized] bool mTextureClip = false;
        [System.NonSerialized] bool mIsNew = true;

        /// <summary>
        /// Callback that will be triggered at OnWillRenderObject() time.
        /// 在OnWillRenderObject()时被触发的回调函数。
        /// </summary>
        public OnRenderCallback onRender;
        public delegate void OnRenderCallback(Material mat);

        /// <summary>
        /// Callback that will be triggered when a new draw call gets created.
        /// 当一个新的draw call被创建时将被触发的回调。
        /// </summary>
        public OnCreateDrawCall onCreateDrawCall;
        public delegate void OnCreateDrawCall(NGUIDrawCall dc, MeshFilter filter, MeshRenderer ren);

        /// <summary>
        /// Render queue used by the draw call.
        /// 绘制调用使用的渲染队列。 Material使用的
        /// </summary>
        public int renderQueue
        {
            get
            {
                return mRenderQueue;
            }
            set
            {
                if (mRenderQueue != value)
                {
                    mRenderQueue = value;

                    if (mDynamicMat != null)
                    {
                        mDynamicMat.renderQueue = value;
#if UNITY_EDITOR
                        if (mRenderer != null) mRenderer.enabled = isActive;
#endif
                    }
                }
            }
        }

        /// <summary>
        /// Renderer's sorting order, to be used with Unity's 2D system.
        /// 渲染器的排序顺序，用于Unity的2D系统。实际上对应的是Renderer的属性
        /// </summary>
        public int sortingOrder
        {
            get
            {
                return mSortingOrder;
            }
            set
            {
                if (mSortingOrder != value)
                {
                    mSortingOrder = value;
                    if (mRenderer != null) mRenderer.sortingOrder = value;
                }
            }
        }

        /// <summary>
        /// Renderer's sorting layer name, used with the Unity's 2D system.
        /// 渲染器的排序层名称，用于Unity的2D系统。实际上对应的是Renderer的属性
        /// </summary>
        public string sortingLayerName
        {
            get
            {
                if (!string.IsNullOrEmpty(mSortingLayerName)) return mSortingLayerName;
                if (mRenderer == null) return null;
                mSortingLayerName = mRenderer.sortingLayerName;
                return mSortingLayerName;
            }
            set
            {
                if (mRenderer != null && mSortingLayerName != value)
                {
                    mSortingLayerName = value;
                    mRenderer.sortingLayerName = value;
                }
            }
        }

        [System.NonSerialized] string mSortingLayerName;
        [System.NonSerialized] int mSortingOrder = 0;

        /// <summary>
        /// Final render queue used to draw the draw call's geometry.
        /// 用于绘制绘制调用的几何图形的最终渲染队列。
        /// </summary>
        public int finalRenderQueue
        {
            get
            {
                return (mDynamicMat != null) ? mDynamicMat.renderQueue : mRenderQueue;
            }
        }

#if UNITY_EDITOR

        /// <summary>
        /// Whether the draw call is currently active.
        /// 抽取调用当前是否处于活动状态。
        /// </summary>
        public bool isActive
        {
            get
            {
                return mActive;
            }
            set
            {
                if (mActive != value)
                {
                    mActive = value;

                    if (mRenderer != null)
                    {
                        mRenderer.enabled = value;
                        NGUITools.SetDirty(gameObject);
                    }
                }
            }
        }
        bool mActive = true;
#endif

        /// <summary>
        /// Transform is cached for speed and efficiency.
        /// 转换被缓存以提高速度和效率。
        /// </summary>
        public Transform cachedTransform { get { if (mTrans == null) mTrans = transform; return mTrans; } }

        /// <summary>
        /// Material used by this screen.这个屏幕使用的材料。
        /// </summary>
        public Material baseMaterial
        {
            get
            {
                return mMaterial;
            }
            set
            {
                if (mMaterial != value)
                {
                    mMaterial = value;
                    mRebuildMat = true;
                }
            }
        }

        /// <summary>
        /// Dynamically created material used by the draw call to actually draw the geometry.
        /// 动态创建的材料使用的draw调用实际绘制几何。
        /// 目的是为了运行时对一份材质的修改不影响使用了相同材质的drawCall。
        /// 例如我们处理裁剪是通过切换shader来实现的，一个UI元素被裁剪，并不意味着另一个使用了相同图集下的UI元素就需要被裁剪。所以我们需要多复制一份出来。
        /// </summary>
        public Material dynamicMaterial { get { return mDynamicMat; } }

        /// <summary>
        /// Texture used by the material.
        /// 材质使用的纹理。
        /// </summary>
        public Texture mainTexture
        {
            get
            {
                return mTexture;
            }
            set
            {
                mTexture = value;
                if (mBlock == null) mBlock = new MaterialPropertyBlock();
                mBlock.SetTexture("_MainTex", value != null ? value : Texture2D.whiteTexture);
            }
        }

        /// <summary>
        /// Shader used by the material.
        /// </summary>
        public Shader shader
        {
            get
            {
                return mShader;
            }
            set
            {
                if (mShader != value)
                {
                    mShader = value;
                    mRebuildMat = true;
                }
            }
        }

#if !UNITY_4_7
        [DoNotObfuscateNGUI]
        public enum ShadowMode
        {
            None,
            Receive,
            CastAndReceive,
        }

        /// <summary>
        /// Shadow casting method.
        /// </summary>
        public ShadowMode shadowMode
        {
            get
            {
                return mShadowMode;
            }
            set
            {
                if (mShadowMode != value)
                {
                    mShadowMode = value;

                    if (mRenderer != null)
                    {
                        if (mShadowMode == ShadowMode.None)
                        {
                            mRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
                            mRenderer.receiveShadows = false;
                        }
                        else if (mShadowMode == ShadowMode.Receive)
                        {
                            mRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
                            mRenderer.receiveShadows = true;
                        }
                        else
                        {
                            mRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
                            mRenderer.receiveShadows = true;
                        }
                    }
                }
            }
        }
#endif

        /// <summary>
        /// The number of triangles in this draw call.
        /// 这个 draw call 中的三角形数量
        /// </summary>
        public int triangles { get { return (mMesh != null) ? mTriangles : 0; } }

        /// <summary>
        /// Whether the draw call is currently using a clipped shader.
        /// 当前 draw call 是否使用剪切的着色器
        /// </summary>
        public bool isClipped { get { return mClipCount != 0; } }

        /// <summary>
        /// Create an appropriate material for the draw call.
        /// 为 draw call 创建适当的素材。
        /// </summary>
        void CreateMaterial()
        {
            mTextureClip = false;
            mLegacyShader = false;
            mClipCount = panel.clipCount;

            string shaderName = (mShader != null) ? mShader.name :
                ((mMaterial != null) ? mMaterial.shader.name : "Unlit/Transparent Colored");

            // Figure out the normal shader's name
            shaderName = shaderName.Replace("GUI/Text Shader", "Unlit/Text");

            if (shaderName.Length > 2)
            {
                if (shaderName[shaderName.Length - 2] == ' ')
                {
                    int index = shaderName[shaderName.Length - 1];
                    if (index > '0' && index <= '9') shaderName = shaderName.Substring(0, shaderName.Length - 2);
                }
            }

            if (shaderName.StartsWith("Hidden/"))
                shaderName = shaderName.Substring(7);

            // Legacy functionality
            const string soft = " (SoftClip)";
            shaderName = shaderName.Replace(soft, "");

            const string textureClip = " (TextureClip)";
            shaderName = shaderName.Replace(textureClip, "");

            if (panel != null && panel.clipping == Clipping.TextureMask)
            {
                mTextureClip = true;
                shader = Shader.Find("Hidden/" + shaderName + textureClip);
            }
            else if (mClipCount != 0)
            {
                shader = Shader.Find("Hidden/" + shaderName + " " + mClipCount);
                if (shader == null) shader = Shader.Find(shaderName + " " + mClipCount);

                // Legacy functionality
                if (shader == null && mClipCount == 1)
                {
                    mLegacyShader = true;
                    shader = Shader.Find(shaderName + soft);
                }
            }
            else shader = Shader.Find(shaderName);

            // Always fallback to the default shader
            if (shader == null) shader = Shader.Find("Unlit/Transparent Colored");

            if (mMaterial != null)
            {
                mDynamicMat = new Material(mMaterial);
                mDynamicMat.name = "[NGUI] " + mMaterial.name;
                mDynamicMat.hideFlags = (HideFlags.DontSave | HideFlags.NotEditable);
                mDynamicMat.CopyPropertiesFromMaterial(mMaterial);
#if !UNITY_FLASH
                string[] keywords = mMaterial.shaderKeywords;
                for (int i = 0; i < keywords.Length; ++i)
                    mDynamicMat.EnableKeyword(keywords[i]);
#endif
                // If there is a valid shader, assign it to the custom material
                if (shader != null)
                {
                    mDynamicMat.shader = shader;
                }
                else if (mClipCount != 0)
                {
                    Debug.LogError(shaderName + " shader doesn't have a clipped shader version for " + mClipCount + " clip regions");
                }
            }
            else
            {
                mDynamicMat = new Material(shader);
                mDynamicMat.name = "[NGUI] " + shader.name;
                mDynamicMat.hideFlags = HideFlags.DontSave | HideFlags.NotEditable;
            }
        }

        /// <summary>
        /// Rebuild the draw call's material.
        /// 重新生成 draw call 的材质球,会根据需要找到一份新的shader，并实例化一个新的DynamicMat。
        /// </summary>
        Material RebuildMaterial()
        {
            // Destroy the old material
            NGUITools.DestroyImmediate(mDynamicMat);

            // Create a new material
            CreateMaterial();
            mDynamicMat.renderQueue = mRenderQueue;

            // Update the renderer
            if (mRenderer != null)
            {
                mRenderer.sharedMaterials = new Material[] { mDynamicMat };
                mRenderer.sortingLayerName = mSortingLayerName;
                mRenderer.sortingOrder = mSortingOrder;
            }
            return mDynamicMat;
        }

        /// <summary>
        /// Update the renderer's materials.
        /// 更新渲染器的材质球
        /// 材质在下列时刻需要被重新（rebuild）：
        /// mRebuildMat为true，默认在初始化/修改shader、material/OnEnable时
        /// 材质丢失
        /// panel的裁剪信息发生改变（需要修改shader信息）
        /// </summary>
        void UpdateMaterials()
        {
            if (panel == null) return;

            // If clipping should be used, we need to find a replacement shader
            if (mRebuildMat || mDynamicMat == null || mClipCount != panel.clipCount || mTextureClip != (panel.clipping == Clipping.TextureMask))
            {
                RebuildMaterial();
                mRebuildMat = false;
            }
        }

        static ColorSpace mColorSpace = ColorSpace.Uninitialized;

        /// <summary>
        /// Set the draw call's geometry.
        /// 给 draw call 的几何图元设置数据,生成/更新渲染数据 Mesh,并塞入渲染器。
        /// 1 生成drawCall所需的MeshFilter、Mesh和MeshRenderer（仅第一次）
        /// 2 将渲染数据（包括顶点、uvs、颜色、第二uvs、法线信息、切线信息）赋值给Mesh
        /// 3 设置Renderer的状态（是否投射/接受阴影）
        /// 4 更新材质（调用UpdateMaterials方法）
        /// </summary>
        public void UpdateGeometry(int widgetCount, bool needsBounds)
        {
            this.widgetCount = widgetCount;
            int vertexCount = verts.Size;

            // Safety check to ensure we get valid values 安全检查，以确保我们得到的值是有效的
            if (vertexCount > 0 && (vertexCount == uvs.Size && vertexCount == cols.Size) && (vertexCount % 4) == 0)
            {
                if (mColorSpace == ColorSpace.Uninitialized)
                    mColorSpace = QualitySettings.activeColorSpace;

                if (mColorSpace == ColorSpace.Linear)
                {
                    for (int i = 0; i < vertexCount; ++i)
                    {
                        var c = cols.Buffer[i];
                        c.r = (byte)Mathf.GammaToLinearSpace(c.r);
                        c.g = (byte)Mathf.GammaToLinearSpace(c.g);
                        c.b = (byte)Mathf.GammaToLinearSpace(c.b);
                        c.a = (byte)Mathf.GammaToLinearSpace(c.a);
                        cols.Buffer[i] = c;
                    }
                }

                // Cache all components 缓存所有组件
                if (mFilter == null) mFilter = gameObject.GetComponent<MeshFilter>();
                if (mFilter == null) mFilter = gameObject.AddComponent<MeshFilter>();

                if (vertexCount < 65000)
                {
                    // Populate the index buffer 填充索引缓冲区
                    int indexCount = (vertexCount >> 1) * 3;
                    bool setIndices = (mIndices == null || mIndices.Length != indexCount);

                    // Create the mesh 创建网格
                    if (mMesh == null)
                    {
                        mMesh = new Mesh();
                        mMesh.hideFlags = HideFlags.DontSave;
                        mMesh.name = (mMaterial != null) ? "[NGUI] " + mMaterial.name : "[NGUI] Mesh";
                        if (dx9BugWorkaround == 0) mMesh.MarkDynamic();
                        setIndices = true;
                    }
#if !UNITY_FLASH
                    // If the buffer length doesn't match, we need to trim all buffers 如果缓冲区长度不匹配，我们需要修剪所有缓冲区
                    bool trim = uvs.Size != vertexCount || cols.Size != vertexCount || uv2.Size != vertexCount || norms.Size != vertexCount || tans.Size != vertexCount;

                    // Non-automatic render queues rely on Z position, so it's a good idea to trim everything,非自动渲染队列依赖于Z位置，所以最好把所有东西都修剪一下
                    if (!trim && panel != null && panel.renderQueue != NGUIPanel.RenderQueue.Automatic)
                        trim = (mMesh == null || mMesh.vertexCount != verts.Size);

                    // NOTE: Apparently there is a bug with Adreno devices:
                    // http://www.tasharen.com/forum/index.php?topic=8415.0
#if !UNITY_ANDROID
                    // If the number of vertices in the buffer is less than half of the full buffer, trim it,如果缓冲区中的顶点数少于整个缓冲区的一半，则对其进行修剪
                    if (!trim && (vertexCount << 1) < verts.Size) trim = true;
#endif
#endif
                    mTriangles = (vertexCount >> 1);

                    if (mMesh.vertexCount != vertexCount)
                    {
                        mMesh.Clear();
                        setIndices = true;
                    }
#if UNITY_4_7
				var hasUV2 = (uv2 != null && uv2.Count == vertexCount);
				var hasNormals = (norms != null && norms.Count == vertexCount);
				var hasTans = (tans != null && tans.Count == vertexCount);

				if (mTempVerts == null || mTempVerts.Length < vertexCount) mTempVerts = new Vector3[vertexCount];
				if (mTempUV0 == null || mTempUV0.Length < vertexCount) mTempUV0 = new Vector2[vertexCount];
				if (mTempCols == null || mTempCols.Length < vertexCount) mTempCols = new Color[vertexCount];

				if (hasUV2 && (mTempUV2 == null || mTempUV2.Length < vertexCount)) mTempUV2 = new Vector2[vertexCount];
				if (hasNormals && (mTempNormals == null || mTempNormals.Length < vertexCount)) mTempNormals = new Vector3[vertexCount];
				if (hasTans && (mTempTans == null || mTempTans.Length < vertexCount)) mTempTans = new Vector4[vertexCount];

				verts.CopyTo(mTempVerts);
				uvs.CopyTo(mTempUV0);
				cols.CopyTo(mTempCols);

				if (hasNormals) norms.CopyTo(mTempNormals);
				if (hasTans) tans.CopyTo(mTempTans);
				if (hasUV2) for (int i = 0, imax = verts.Count; i < imax; ++i) mTempUV2[i] = uv2[i];

				mMesh.vertices = mTempVerts;
				mMesh.uv = mTempUV0;
				mMesh.colors = mTempCols;
				mMesh.uv2 = hasUV2 ? mTempUV2 : null;
				mMesh.normals = hasNormals ? mTempNormals : null;
				mMesh.tangents = hasTans ? mTempTans : null;
#else
                    mMesh.SetVertices(verts.ToArray());
                    mMesh.SetUVs(0, uvs.ToArray());
                    mMesh.SetColors(cols.ToArray());
                    mMesh.SetUVs(1, (uv2.Size == vertexCount) ? uv2.ToArray() : null);
                    mMesh.SetNormals((norms.Size == vertexCount) ? norms.ToArray() : null);
                    mMesh.SetTangents((tans.Size == vertexCount) ? tans.ToArray() : null);
#endif
                    if (setIndices)
                    {
                        GenerateCachedIndexBuffer(verts.Size, indexCount, a =>
                        {
                            mIndices = a;
                            mMesh.triangles = mIndices;
                        });
                        //mIndices = GenerateCachedIndexBuffer(vertexCount, indexCount);
                        //mMesh.SetTriangles(mIndices, 0, needsBounds);
                    }

#if !UNITY_FLASH
                    if (trim || !alwaysOnScreen)
#endif
                        mMesh.RecalculateBounds();

                    mFilter.mesh = mMesh;
                }
                else
                {
                    mTriangles = 0;
                    if (mMesh != null) mMesh.Clear();
                    Debug.LogError("Too many vertices on one panel: " + vertexCount);
                }

                if (mRenderer == null) mRenderer = gameObject.GetComponent<MeshRenderer>();

                if (mRenderer == null)
                {
                    mRenderer = gameObject.AddComponent<MeshRenderer>();
#if UNITY_EDITOR
                    mRenderer.enabled = isActive;
#endif
#if !UNITY_4_7
                    if (mShadowMode == ShadowMode.None)
                    {
                        mRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
                        mRenderer.receiveShadows = false;
                    }
                    else if (mShadowMode == ShadowMode.Receive)
                    {
                        mRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
                        mRenderer.receiveShadows = true;
                    }
                    else
                    {
                        mRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
                        mRenderer.receiveShadows = true;
                    }
#endif
                }

                if (mIsNew)
                {
                    mIsNew = false;
                    if (onCreateDrawCall != null) onCreateDrawCall(this, mFilter, mRenderer);
                }

                UpdateMaterials();
            }
            else
            {
                if (mFilter.mesh != null) mFilter.mesh.Clear();
                Debug.LogError("UIWidgets must fill the buffer with 4 vertices per quad. Found " + vertexCount);
            }

            verts.Clear();
            uvs.Clear();
            uv2.Clear();
            cols.Clear();
            norms.Clear();
            tans.Clear();
        }

        const int maxIndexBufferCache = 10;

        public static Nordeus.DataStructures.VaryingIntList mCache = new Nordeus.DataStructures.VaryingIntList();
        void GenerateCachedIndexBuffer(int vertexCount, int indexCount, Nordeus.DataStructures.VaryingIntList.ArrayAction action)
        {
            if (mCache.size < indexCount)
            {
                mCache.MakeLargerThan(indexCount);
                for (int i = mCache.size / 3 * 2; i < vertexCount; i += 4)
                {
                    mCache.Add(i);
                    mCache.Add(i + 1);
                    mCache.Add(i + 2);

                    mCache.Add(i + 2);
                    mCache.Add(i + 3);
                    mCache.Add(i);
                }
            }
            mCache.AsArrayOfLength(indexCount, action);
        }

        //public static List<int[]> mCache = new List<int[]>();

        ///// <summary>
        ///// Generates a new index buffer for the specified number of vertices (or reuses an existing one).
        ///// </summary>
        //int[] GenerateCachedIndexBuffer(int vertexCount, int indexCount)
        //{
        //    for (int i = 0, imax = mCache.Count; i < imax; ++i)
        //    {
        //        int[] ids = mCache[i];
        //        if (ids != null && ids.Length == indexCount)
        //            return ids;
        //    }

        //    int[] rv = new int[indexCount];
        //    int index = 0;

        //    for (int i = 0; i < vertexCount; i += 4)
        //    {
        //        rv[index++] = i;
        //        rv[index++] = i + 1;
        //        rv[index++] = i + 2;

        //        rv[index++] = i + 2;
        //        rv[index++] = i + 3;
        //        rv[index++] = i;
        //    }
        //    if (mCache.Count > maxIndexBufferCache) mCache.RemoveAt(0);
        //    mCache.Add(rv);
        //    return rv;
        //}

        /// <summary>
        /// This function is called when it's clear that the object will be rendered.
        /// We want to set the shader used by the material, creating a copy of the material in the process.
        /// We also want to update the material's properties before it's actually used.
        /// 当对象明显要呈现时调用此函数。
        /// 我们想设置材质使用的着色器，在这个过程中创建材质的副本。
        /// 我们还想在实际使用之前更新材料的属性。
        /// </summary>
        protected MaterialPropertyBlock mBlock;

        void OnWillRenderObject()
        {
            UpdateMaterials();

            if (mBlock != null) mRenderer.SetPropertyBlock(mBlock);
            if (onRender != null) onRender(mDynamicMat != null ? mDynamicMat : mMaterial);
            if (mDynamicMat == null || mClipCount == 0) return;

            if (mTextureClip)
            {
                Vector4 cr = panel.drawCallClipRange;
                Vector2 soft = panel.clipSoftness;

                Vector2 sharpness = new Vector2(1000.0f, 1000.0f);
                if (soft.x > 0f) sharpness.x = cr.z / soft.x;
                if (soft.y > 0f) sharpness.y = cr.w / soft.y;

                mDynamicMat.SetVector(ClipRange[0], new Vector4(-cr.x / cr.z, -cr.y / cr.w, 1f / cr.z, 1f / cr.w));
                mDynamicMat.SetTexture("_ClipTex", clipTexture);
            }
            else if (!mLegacyShader)
            {
                NGUIPanel currentPanel = panel;

                for (int i = 0; currentPanel != null;)
                {
                    if (currentPanel.hasClipping)
                    {
                        float angle = 0f;
                        Vector4 cr = currentPanel.drawCallClipRange;

                        // Clipping regions past the first one need additional math
                        if (currentPanel != panel)
                        {
                            Vector3 pos = currentPanel.cachedTransform.InverseTransformPoint(panel.cachedTransform.position);
                            cr.x -= pos.x;
                            cr.y -= pos.y;

                            Vector3 v0 = panel.cachedTransform.rotation.eulerAngles;
                            Vector3 v1 = currentPanel.cachedTransform.rotation.eulerAngles;
                            Vector3 diff = v1 - v0;

                            diff.x = NGUIMath.WrapAngle(diff.x);
                            diff.y = NGUIMath.WrapAngle(diff.y);
                            diff.z = NGUIMath.WrapAngle(diff.z);

                            if (Mathf.Abs(diff.x) > 0.001f || Mathf.Abs(diff.y) > 0.001f)
                                Debug.LogWarning("Panel can only be clipped properly if X and Y rotation is left at 0", panel);

                            angle = diff.z;
                        }

                        // Pass the clipping parameters to the shader
                        SetClipping(i++, cr, currentPanel.clipSoftness, angle);
                    }
                    currentPanel = currentPanel.parentPanel;
                }
            }
            else // Legacy functionality
            {
                Vector2 soft = panel.clipSoftness;
                Vector4 cr = panel.drawCallClipRange;
                Vector2 v0 = new Vector2(-cr.x / cr.z, -cr.y / cr.w);
                Vector2 v1 = new Vector2(1f / cr.z, 1f / cr.w);

                Vector2 sharpness = new Vector2(1000.0f, 1000.0f);
                if (soft.x > 0f) sharpness.x = cr.z / soft.x;
                if (soft.y > 0f) sharpness.y = cr.w / soft.y;

                mDynamicMat.mainTextureOffset = v0;
                mDynamicMat.mainTextureScale = v1;
                mDynamicMat.SetVector("_ClipSharpness", sharpness);
            }
        }

        static int[] ClipRange = null;
        static int[] ClipArgs = null;

        /// <summary>
        /// Set the shader clipping parameters.
        /// 设置着色器裁剪参数。
        /// </summary>
        void SetClipping(int index, Vector4 cr, Vector2 soft, float angle)
        {
            angle *= -Mathf.Deg2Rad;

            Vector2 sharpness = new Vector2(1000.0f, 1000.0f);
            if (soft.x > 0f) sharpness.x = cr.z / soft.x;
            if (soft.y > 0f) sharpness.y = cr.w / soft.y;

            if (index < ClipRange.Length)
            {
                mDynamicMat.SetVector(ClipRange[index], new Vector4(-cr.x / cr.z, -cr.y / cr.w, 1f / cr.z, 1f / cr.w));
                mDynamicMat.SetVector(ClipArgs[index], new Vector4(sharpness.x, sharpness.y, Mathf.Sin(angle), Mathf.Cos(angle)));
            }
        }

        // Unity 5.4 bug work-around: http://www.tasharen.com/forum/index.php?topic=14839.0
        static int dx9BugWorkaround = -1;

        /// <summary>
        /// Cache the property IDs.
        /// 缓存属性id。
        /// </summary>
        void Awake()
        {
            if (dx9BugWorkaround == -1)
            {
                var pf = Application.platform;
#if !UNITY_5_5_OR_NEWER
			dx9BugWorkaround = ((pf == RuntimePlatform.WindowsPlayer || pf == RuntimePlatform.XBOX360) &&
#else
                dx9BugWorkaround = ((pf == RuntimePlatform.WindowsPlayer) &&
#endif
                SystemInfo.graphicsShaderLevel < 40 && SystemInfo.graphicsDeviceVersion.Contains("Direct3D")) ? 1 : 0;
            }

            if (ClipRange == null)
            {
                ClipRange = new int[]
                {
                Shader.PropertyToID("_ClipRange0"),
                Shader.PropertyToID("_ClipRange1"),
                Shader.PropertyToID("_ClipRange2"),
                Shader.PropertyToID("_ClipRange4"),
                };
            }

            if (ClipArgs == null)
            {
                ClipArgs = new int[]
                {
                Shader.PropertyToID("_ClipArgs0"),
                Shader.PropertyToID("_ClipArgs1"),
                Shader.PropertyToID("_ClipArgs2"),
                Shader.PropertyToID("_ClipArgs3"),
                };
            }
        }

        /// <summary>
        /// The material should be rebuilt when the draw call is enabled.
        /// draw call 启动时 material 应该被重建
        /// </summary>
        void OnEnable() { mRebuildMat = true; }

        /// <summary>
        /// Clear all references.
        /// 清除所有引用
        /// </summary>
        void OnDisable()
        {
            depthStart = int.MaxValue;
            depthEnd = int.MinValue;
            panel = null;
            manager = null;
            mMaterial = null;
            mTexture = null;
            clipTexture = null;

            if (mRenderer != null)
                mRenderer.sharedMaterials = new Material[] { };

            NGUITools.DestroyImmediate(mDynamicMat);
            mDynamicMat = null;
        }

        /// <summary>
        /// Cleanup.
        /// </summary>
        void OnDestroy()
        {
            NGUITools.DestroyImmediate(mMesh);
            mMesh = null;
        }

        /// <summary>
        /// Return an existing draw call.
        /// 返回一个现有的 draw call
        /// </summary>
        static public NGUIDrawCall Create(NGUIPanel panel, Material mat, Texture tex, Shader shader)
        {
#if UNITY_EDITOR
            string name = null;
            if (tex != null) name = tex.name;
            else if (shader != null) name = shader.name;
            else if (mat != null) name = mat.name;
            return Create(name, panel, mat, tex, shader);
#else
		return Create(null, panel, mat, tex, shader);
#endif
        }

        /// <summary>
        /// Create a new draw call, reusing an old one if possible.
        /// 创建一个 NGUIDrawCall 对象,如果可能的话,重用一个NGUIDrawCall
        /// </summary>
        static NGUIDrawCall Create(string name, NGUIPanel pan, Material mat, Texture tex, Shader shader)
        {
            NGUIDrawCall dc = Create(name);
            dc.gameObject.layer = pan.cachedGameObject.layer;
            dc.baseMaterial = mat;
            dc.mainTexture = tex;
            dc.shader = shader;
            dc.renderQueue = pan.startingRenderQueue;
            dc.sortingOrder = pan.sortingOrder;
            dc.manager = pan;

#if UNITY_EDITOR && UNITY_2018_3_OR_NEWER
            // We need to perform this check here and not in Create (string) to get to manager reference
            var prefabStage = UnityEditor.Experimental.SceneManagement.PrefabStageUtility.GetCurrentPrefabStage();
            if (prefabStage != null && dc.manager != null)
            {
                // If prefab stage exists and new daw call
                var stage = UnityEditor.SceneManagement.StageUtility.GetStageHandle(dc.manager.gameObject);
                if (stage == prefabStage.stageHandle)
                    UnityEngine.SceneManagement.SceneManager.MoveGameObjectToScene(dc.gameObject, prefabStage.scene);
            }
#endif

            return dc;
        }

        /// <summary>
        /// Create a new draw call, reusing an old one if possible.
        /// 创建一个新的draw调用，如果可能的话重用一个旧调用。
        /// </summary>
        static NGUIDrawCall Create(string name)
        {
#if SHOW_HIDDEN_OBJECTS && UNITY_EDITOR
            name = (name != null) ? "_UIDrawCall [" + name + "]" : "DrawCall";
#endif
            while (mInactiveList.Size > 0)
            {
                NGUIDrawCall dc = mInactiveList.Pop();

                if (dc != null)
                {
                    mActiveList.Add(dc);
                    if (name != null) dc.name = name;
                    NGUITools.SetActive(dc.gameObject, true);
                    return dc;
                }
            }

#if UNITY_EDITOR
            // If we're in the editor, create the game object with hide flags set right away
            GameObject go = UnityEditor.EditorUtility.CreateGameObjectWithHideFlags(name,
#if SHOW_HIDDEN_OBJECTS
        HideFlags.DontSave | HideFlags.NotEditable, typeof(NGUIDrawCall));
#else
        HideFlags.HideAndDontSave, typeof(NGUIDrawCall));
#endif
            NGUIDrawCall newDC = go.GetComponent<NGUIDrawCall>();
#else
		GameObject go = new GameObject(name);
		DontDestroyOnLoad(go);
		NGUIDrawCall newDC = go.AddComponent<NGUIDrawCall>();
#endif
            // Create the draw call
            mActiveList.Add(newDC);
            return newDC;
        }

        /// <summary>
        /// Clear all draw calls.
        /// </summary>

        static public void ClearAll()
        {
            bool playing = Application.isPlaying;

            for (int i = mActiveList.Size; i > 0;)
            {
                var dc = mActiveList.Buffer[--i];

                if (dc)
                {
#if SHOW_HIDDEN_OBJECTS && UNITY_EDITOR
                    if (UnityEditor.Selection.activeGameObject == dc.gameObject)
                        UnityEditor.Selection.activeGameObject = null;
#endif
                    if (playing) NGUITools.SetActive(dc.gameObject, false);
                    else NGUITools.DestroyImmediate(dc.gameObject);
                }
            }
            mActiveList.Clear();
        }

        /// <summary>
        /// Immediately destroy all draw calls.
        /// 立即摧毁所有抽牌。
        /// </summary>
        static public void ReleaseAll()
        {
            ClearAll();
            ReleaseInactive();//缓存 draw call
        }

        /// <summary>
        /// Immediately destroy all inactive draw calls (draw calls that have been recycled and are waiting to be re-used).
        /// 立即销毁所有未激活的draw calls(draw calls 已经回收并等待被重用的调用)。
        /// </summary>
        static public void ReleaseInactive()
        {
            for (int i = mInactiveList.Size; i > 0;)
            {
                var dc = mInactiveList.Buffer[--i];

                if (dc)
                {
#if SHOW_HIDDEN_OBJECTS && UNITY_EDITOR
                    if (UnityEditor.Selection.activeGameObject == dc.gameObject)
                        UnityEditor.Selection.activeGameObject = null;
#endif
                    NGUITools.DestroyImmediate(dc.gameObject);
                }
            }
            mInactiveList.Clear();
        }

        /// <summary>
        /// Count all draw calls managed by the specified panel.
        /// 计算指定面板管理的所有draw calls。
        /// </summary>
        static public int Count(NGUIPanel panel)
        {
            int count = 0;
            for (int i = 0; i < mActiveList.Size; ++i)
                if (mActiveList.Buffer[i].manager == panel) ++count;
            return count;
        }

        /// <summary>
        /// Destroy the specified draw call.
        /// 销毁指定的draw call。
        /// </summary>
        static public void Destroy(NGUIDrawCall dc)
        {
            if (!dc) return;
            if (dc.onCreateDrawCall != null)
            {
                NGUITools.Destroy(dc.gameObject);
                return;
            }

            dc.onRender = null;

            if (Application.isPlaying)
            {
                if (mActiveList.Remove(dc))
                {
                    NGUITools.SetActive(dc.gameObject, false);
                    mInactiveList.Add(dc);
                    dc.mIsNew = true;
                    CachedGeometries.PushToCachedGeometries(dc.verts, dc.uvs, dc.cols);
                    dc.verts = new BetterList<Vector3>();
                    dc.uvs = new BetterList<Vector2>();
                    dc.cols = new BetterList<Color32>();
                }
            }
            else
            {
                mActiveList.Remove(dc);
#if SHOW_HIDDEN_OBJECTS && UNITY_EDITOR
                if (UnityEditor.Selection.activeGameObject == dc.gameObject)
                    UnityEditor.Selection.activeGameObject = null;
#endif
                NGUITools.DestroyImmediate(dc.gameObject);
            }
        }

#if !UNITY_4_7 && !UNITY_5_0 && !UNITY_5_1 && !UNITY_5_2 && !UNITY_5_3
        /// <summary>
        /// Move all draw calls to the specified scene.
        /// http://www.tasharen.com/forum/index.php?topic=13965.0
        /// </summary>

        static public void MoveToScene(UnityEngine.SceneManagement.Scene scene)
        {
            foreach (var dc in activeList) UnityEngine.SceneManagement.SceneManager.MoveGameObjectToScene(dc.gameObject, scene);
            foreach (var dc in inactiveList) UnityEngine.SceneManagement.SceneManager.MoveGameObjectToScene(dc.gameObject, scene);
        }
#endif
    }
}