namespace NGUI
{
    using UnityEngine;
    using System.Collections.Generic;

    /// <summary>
    /// UI Panel is responsible for collecting, sorting and updating widgets in addition to generating widgets' geometry.
    /// UIPanel 用于管理UIWidget、UIDrawCall等，实现界面的渲染裁剪、更新。收集,排序,更新 UI,以及生成几何数据
    /// 同一drawCall的widgets需满足下面两个条件:1)使用相同的材质和纹理.2)相邻两个widget的深度是连续的（即中间没有其它使用不同材质/纹理的widget）
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
    [AddComponentMenu("NGUI/UI/NGUIPanel")]
    public class NGUIPanel : NGUIRect
    {
        /// <summary>
        /// List of active panels. 被激活的 UIPanel
        /// </summary>
        static public List<NGUIPanel> list = new List<NGUIPanel>();

        [DoNotObfuscateNGUI]
        public enum RenderQueue
        {
            Automatic,
            StartAt,
            Explicit,
        }

        public delegate void OnGeometryUpdated();

        /// <summary>
        /// Notification triggered when the panel's geometry get rebuilt. It's mainly here for debugging purposes.
        /// UIPanel 的几何图形重建时触发通知。这里主要用于调试。
        /// </summary>
        public OnGeometryUpdated onGeometryUpdated;

        /// <summary>
        /// Whether this panel will show up in the panel tool (set this to 'false' for dynamically created temporary panels)
        /// 此面板是否会在面板工具中显示(将此设置为“false”用于动态创建的临时面板)
        /// </summary>
        public bool showInPanelTool = true;

        /// <summary>
        /// Whether normals and tangents will be generated for all meshes.
        /// 是否对所有网格生成法线和切线。
        /// </summary>
        public bool generateNormals = false;

        /// <summary>
        /// Whether secondary UV coordinates will be generated for all meshes.
        /// 是否为所有网格生成二次UV坐标。
        /// </summary>
        public bool generateUV2 = false;

#if !UNITY_4_7
        /// <summary>
        /// Whether generated geometry will cast shadows.
        /// 生成的几何体是否会投射阴影。
        /// </summary>
        public NGUIDrawCall.ShadowMode shadowMode = NGUIDrawCall.ShadowMode.None;
#endif

        /// <summary>
        /// Whether widgets drawn by this panel are static (won't move). This will improve performance.
        /// 由此面板绘制的小部件是否是静态的(不会移动)。设置为 true 将提高性能。
        /// </summary>
        public bool widgetsAreStatic = false;

        /// <summary>
        /// Whether widgets will be culled while the panel is being dragged.
        /// Having this on improves performance, but turning it off will reduce garbage collection.
        /// 在拖拽面板时，小部件是否会被剔除。
        /// 启用此选项可以提高性能，但关闭此选项将减少垃圾收集。
        /// </summary>
        public bool cullWhileDragging = true;

        /// <summary>
        /// Optimization flag. Makes the assumption that the panel's geometry
        /// will always be on screen and the bounds don't need to be re-calculated.
        /// 设置为 true 时 ,面板的几何图元,总是在屏幕上面,边界不需要重新计算,这将优化性能
        /// </summary>
        public bool alwaysOnScreen = false;

        /// <summary>
        /// By default, non-clipped panels use the camera's bounds, and the panel's position has no effect.
        /// If you want the panel's position to actually be used with anchors, set this field to 'true'.
        /// 默认情况下，未剪切的面板使用相机的边界，面板的位置没有影响。
        /// 如果你想让面板的位置和锚一起使用，将这个字段设置为true。
        /// </summary>
        public bool anchorOffset = false;

        /// <summary>
        /// Whether the soft border will be used as padding.
        /// 软边框是否用作填充。
        /// </summary>
        public bool softBorderPadding = true;

        /// <summary>
        /// By default all panels manage render queues of their draw calls themselves by incrementing them
        /// so that the geometry is drawn in the proper order. You can alter this behaviour.
        /// 默认情况下，所有面板通过递增它们自己的绘制调用的呈现队列来管理它们，以便几何图形按照正确的顺序绘制。
        /// </summary>
        public RenderQueue renderQueue = RenderQueue.Automatic;

        /// <summary>
        /// Render queue used by the panel. The default value of '3000' is the equivalent of "Transparent".
        /// This property is only used if 'renderQueue' is set to something other than "Automatic".
        /// 面板使用的渲染队列。默认值“3000”相当于“Transparent”。
        /// 这个属性只在“renderQueue”设置为“StartAt,Explicit”时使用。
        /// </summary>
        public int startingRenderQueue = 3000;

        /// <summary>
        /// Sorting layer used by the panel -- used when mixing NGUI with the Unity's 2D system.
        /// 排序层使用的面板 -- 当NGUI和Unity的2D系统混合时使用。
        /// Contributed by Benzino07: http://www.tasharen.com/forum/index.php?topic=6956.15
        /// </summary>
        public string sortingLayerName
        {
            get
            {
                return mSortingLayerName;
            }
            set
            {
                if (mSortingLayerName != value)
                {
                    mSortingLayerName = value;
#if UNITY_EDITOR
                    NGUITools.SetDirty(this);
#endif
                    UpdateDrawCalls(list.IndexOf(this));
                }
            }
        }

        /// <summary>
        /// List of widgets managed by this panel. Do not attempt to modify this list yourself.
        /// 此面板管理的小部件列表。不要尝试自己修改这个列表。
        /// </summary>
        [System.NonSerialized]
        public List<NGUIWidget> widgets = new List<NGUIWidget>();

        /// <summary>
        /// List of draw calls created by this panel. Do not attempt to modify this list yourself.
        /// 此面板创建的draw调用列表。不要尝试自己修改这个列表。
        /// </summary>
        [System.NonSerialized]
        public List<NGUIDrawCall> drawCalls = new List<NGUIDrawCall>();

        /// <summary>
        /// Matrix that will transform the specified world coordinates to relative-to-panel coordinates.
        /// 将指定的世界坐标转换为相对于面板坐标的矩阵。
        /// </summary>
        [System.NonSerialized]
        public Matrix4x4 worldToLocal = Matrix4x4.identity;

        /// <summary>
        /// Cached clip range passed to the draw call's shader.
        /// 缓存的剪辑范围传递到绘制调用的着色器。
        /// </summary>
        [System.NonSerialized]
        public Vector4 drawCallClipRange = new Vector4(0f, 0f, 1f, 1f);

        public delegate void OnClippingMoved(NGUIPanel panel);

        /// <summary>
        /// Event callback that's triggered when the panel's clip region gets moved.
        /// 当面板的剪辑区域被移动时触发的事件回调。
        /// </summary>
        public OnClippingMoved onClipMove;

        /// <summary>
        /// There may be cases where you will want to create a custom material per-widget in order to have unique draw calls.
        /// If that's the case, set this delegate and return your newly created material. Note that it's up to you to cache this material for the next call.
        /// 在某些情况下，你可能需要为每个小部件创建一个自定义材质，以获得独特的 draw call。
        /// 如果是这种情况，设置这个委托并返回新创建的Material。请注意，为下一次调用缓存此材料取决于您。
        /// </summary>
        public OnCreateMaterial onCreateMaterial;
        public delegate Material OnCreateMaterial(NGUIWidget widget, Material mat);

        /// <summary>
        /// Event callback that's triggered whenever the panel creates a new draw call.
        /// 每当面板创建一个新的 draw call 时触发的事件回调。
        /// </summary>
        public NGUIDrawCall.OnCreateDrawCall onCreateDrawCall;

        // Clip texture feature contributed by the community: http://www.tasharen.com/forum/index.php?topic=9268.0
        [HideInInspector] [SerializeField] Texture2D mClipTexture = null;

        // Panel's alpha (affects the alpha of all widgets) 面板的alpha(影响所有小部件的alpha)
        [HideInInspector] [SerializeField] float mAlpha = 1f;

        // Clipping rectangle  剪辑矩形
        [HideInInspector] [SerializeField] NGUIDrawCall.Clipping mClipping = NGUIDrawCall.Clipping.None;
        [HideInInspector] [SerializeField] Vector4 mClipRange = new Vector4(0f, 0f, 300f, 200f);
        [HideInInspector] [SerializeField] Vector2 mClipSoftness = new Vector2(4f, 4f);
        [HideInInspector] [SerializeField] int mDepth = 0;
        [HideInInspector] [SerializeField] int mSortingOrder = 0;
        [HideInInspector] [SerializeField] string mSortingLayerName = null;

        // Whether a full rebuild of geometry buffers is required  是否需要完全重新构建几何缓冲区 
        bool mRebuild = false;
        bool mResized = false;

        [SerializeField] Vector2 mClipOffset = Vector2.zero;

        int mMatrixFrame = -1;
        int mAlphaFrameID = 0;
        int mLayer = -1;

        // Values used for visibility checks 用于可见性检查的值
        static float[] mTemp = new float[4];
        Vector2 mMin = Vector2.zero;
        Vector2 mMax = Vector2.zero;
#if !UNITY_5_5_OR_NEWER
	bool mHalfPixelOffset = false;
#endif
        bool mSortWidgets = false;
        bool mUpdateScroll = false;

        /// <summary>
        /// Helper property that returns the first unused depth value.
        /// 返回第一个未使用的深度值
        /// </summary>
        static public int nextUnusedDepth
        {
            get
            {
                int highest = int.MinValue;
                for (int i = 0, imax = list.Count; i < imax; ++i)
                    highest = Mathf.Max(highest, list[i].depth);
                return (highest == int.MinValue) ? 0 : highest + 1;
            }
        }

        /// <summary>
        /// Whether the rectangle can be anchored.该矩形是否可以锚定。
        /// </summary>
        public override bool canBeAnchored { get { return mClipping != NGUIDrawCall.Clipping.None; } }

        /// <summary>
        /// Panel's alpha affects everything drawn by the panel.面板的alpha影响面板绘制的所有内容。
        /// </summary>
        public override float alpha
        {
            get
            {
                return mAlpha;
            }
            set
            {
                float val = Mathf.Clamp01(value);

                if (mAlpha != val)
                {
                    bool wasVisible = mAlpha > 0.001f;
                    mAlphaFrameID = -1;
                    mResized = true;
                    mAlpha = val;
                    for (int i = 0, imax = drawCalls.Count; i < imax; ++i) drawCalls[i].isDirty = true;
                    Invalidate(!wasVisible && mAlpha > 0.001f);
#if UNITY_EDITOR
                    NGUITools.SetDirty(this);
#endif
                }
            }
        }

        /// <summary>
        /// Panels can have their own depth value that will change the order with which everything they manage gets drawn.
        /// 面板可以有自己的深度值，这将改变它们所管理的所有内容的绘制顺序。
        /// </summary>
        public int depth
        {
            get
            {
                return mDepth;
            }
            set
            {
                if (mDepth != value)
                {
                    mDepth = value;
#if UNITY_EDITOR
                    NGUITools.SetDirty(this);
#endif
                    list.Sort(CompareFunc);
                }
            }
        }

        /// <summary>
        /// Whether sorting order will be used or not. Sorting order is used with Unity's 2D system.
        /// 是否使用排序顺序。排序顺序在Unity的2D系统中使用。
        /// </summary>
        public bool useSortingOrder = false;

        /// <summary>
        /// Sorting order value for the panel's draw calls, to be used with Unity's 2D system.
        /// 排序顺序值的面板的draw call，将与Unity的2D系统使用。
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
#if UNITY_EDITOR
                    NGUITools.SetDirty(this);
#endif
                    UpdateDrawCalls(list.IndexOf(this));
                }
            }
        }

        /// <summary>
        /// Function that can be used to depth-sort panels.
        /// 可用于对面板进行深度排序的函数。
        /// </summary>
        static public int CompareFunc(NGUIPanel a, NGUIPanel b)
        {
            if (a != b && a != null && b != null)
            {
                if (a.mDepth < b.mDepth) return -1;
                if (a.mDepth > b.mDepth) return 1;
                return (a.GetInstanceID() < b.GetInstanceID()) ? -1 : 1;
            }
            return 0;
        }

        /// <summary>
        /// Panel's width in pixels.
        /// 面板宽度(以像素为单位)。
        /// </summary>
        public float width { get { return GetViewSize().x; } }

        /// <summary>
        /// Panel's height in pixels.
        /// 面板的高度(像素)。
        /// </summary>
        public float height { get { return GetViewSize().y; } }

        /// <summary>
        /// Whether the panel's drawn geometry needs to be offset by a half-pixel.
        /// 面板绘制的几何图形是否需要偏移半像素。
        /// </summary>
        public bool halfPixelOffset
        {
            get
            {
#if UNITY_5_5_OR_NEWER
                return false;
#else
			return mHalfPixelOffset;
#endif
            }
        }

        /// <summary>
        /// Whether the camera is used to draw UI geometry.
        /// 摄像机是否用于绘制UI几何图形。
        /// </summary>
#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
	public bool usedForUI { get { return (anchorCamera != null && mCam.isOrthoGraphic); } }
#else
        public bool usedForUI { get { return (anchorCamera != null && mCam.orthographic); } }
#endif

        /// <summary>
        /// Directx9 pixel offset, used for drawing.
        /// Directx9像素偏移，用于绘图。
        /// </summary>
        public Vector3 drawCallOffset
        {
            get
            {
#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
			if (anchorCamera != null && mCam.isOrthoGraphic)
#else
                if (anchorCamera != null && mCam.orthographic)
#endif
                {
                    Vector2 size = GetWindowSize();
                    float pixelSize = (root != null) ? root.pixelSizeAdjustment : 1f;
                    float mod = (pixelSize / size.y) / mCam.orthographicSize;

#if UNITY_5_5_OR_NEWER
                    bool x = false, y = false;
#else
				bool x = mHalfPixelOffset, y = mHalfPixelOffset;
#endif
                    if ((Mathf.RoundToInt(size.x) & 1) == 1) x = !x;
                    if ((Mathf.RoundToInt(size.y) & 1) == 1) y = !y;

                    return new Vector3(x ? -mod : 0f, y ? mod : 0f);
                }
                return Vector3.zero;
            }
        }

        /// <summary>
        /// Clipping method used by all draw calls.
        /// draw calls 使用的剪切方法。
        /// </summary>
        public NGUIDrawCall.Clipping clipping
        {
            get
            {
                return mClipping;
            }
            set
            {
                if (mClipping != value)
                {
                    mResized = true;
                    mClipping = value;
                    mMatrixFrame = -1;
#if UNITY_EDITOR
                    if (!Application.isPlaying) UpdateDrawCalls(list.IndexOf(this));
#endif
                }
            }
        }

        NGUIPanel mParentPanel = null;

        /// <summary>
        /// Reference to the parent panel, if any.父面板
        /// </summary>
        public NGUIPanel parentPanel { get { return mParentPanel; } }

        /// <summary>
        /// Number of times the panel's contents get clipped.面板内容被裁剪的次数。
        /// </summary>
        public int clipCount
        {
            get
            {
                int count = 0;
                NGUIPanel p = this;

                while (p != null)
                {
                    if (p.mClipping == NGUIDrawCall.Clipping.SoftClip || p.mClipping == NGUIDrawCall.Clipping.TextureMask) ++count;
                    p = p.mParentPanel;
                }
                return count;
            }
        }

        /// <summary>
        /// Whether the panel will actually perform clipping of children.面板是否会实际执行子元素的剪裁。
        /// </summary>
        public bool hasClipping { get { return mClipping == NGUIDrawCall.Clipping.SoftClip || mClipping == NGUIDrawCall.Clipping.TextureMask; } }

        /// <summary>
        /// Whether the panel will actually perform clipping of children.
        /// 面板是否会实际执行子元素的剪裁。
        /// </summary>
        public bool hasCumulativeClipping { get { return clipCount != 0; } }
        

        /// <summary>
        /// Clipping area offset used to make it possible to move clipped panels (scroll views) efficiently.
        /// Scroll views move by adjusting the clip offset by one value, and the transform position by the inverse.
        /// This makes it possible to not have to rebuild the geometry, greatly improving performance.
        /// 剪切区域偏移量用于有效地移动剪切的面板(滚动视图)。
        /// 滚动视图通过按一个值调整剪辑偏移量和按反向调整变换位置来移动。
        /// 这使得不必重建几何图形成为可能，大大提高了性能。
        /// </summary>
        public Vector2 clipOffset
        {
            get
            {
                return mClipOffset;
            }
            set
            {
                if (Mathf.Abs(mClipOffset.x - value.x) > 0.001f ||
                    Mathf.Abs(mClipOffset.y - value.y) > 0.001f)
                {
                    mClipOffset = value;
                    InvalidateClipping();

                    // Call the event delegate
                    if (onClipMove != null) onClipMove(this);
#if UNITY_EDITOR
                    if (!Application.isPlaying) UpdateDrawCalls(list.IndexOf(this));
#endif
                }
            }
        }

        /// <summary>
        /// Invalidate the panel's clipping, calling child panels in turn.
        /// 使面板的剪切失效，依次调用子面板。
        /// </summary>
        void InvalidateClipping()
        {
            mResized = true;
            mMatrixFrame = -1;

            for (int i = 0, imax = list.Count; i < imax; ++i)
            {
                NGUIPanel p = list[i];
                if (p != this && p.parentPanel == this)
                    p.InvalidateClipping();
            }
        }

        /// <summary>
        /// Texture used to clip the region.用于剪辑区域的纹理。
        /// </summary>
        public Texture2D clipTexture
        {
            get
            {
                return mClipTexture;
            }
            set
            {
                if (mClipTexture != value)
                {
                    mClipTexture = value;
#if UNITY_EDITOR
                    if (!Application.isPlaying) UpdateDrawCalls(list.IndexOf(this));
#endif
                }
            }
        }

        /// <summary>
        /// Clipping position (XY) and size (ZW).剪切位置(XY)和大小(ZW)。
        /// Note that you should not be modifying this property at run-time to reposition the clipping. Adjust clipOffset instead.
        /// 请注意，您不应该在运行时修改此属性以重新定位剪裁。使用 调整clipOffset 来代替。
        /// </summary>
        public Vector4 baseClipRegion
        {
            get
            {
                return mClipRange;
            }
            set
            {
                if (Mathf.Abs(mClipRange.x - value.x) > 0.001f ||
                    Mathf.Abs(mClipRange.y - value.y) > 0.001f ||
                    Mathf.Abs(mClipRange.z - value.z) > 0.001f ||
                    Mathf.Abs(mClipRange.w - value.w) > 0.001f)
                {
                    mResized = true;
                    mClipRange = value;
                    mMatrixFrame = -1;

                    UIScrollView sv = GetComponent<UIScrollView>();
                    if (sv != null) sv.UpdatePosition();
                    if (onClipMove != null) onClipMove(this);
#if UNITY_EDITOR
                    if (!Application.isPlaying) UpdateDrawCalls(list.IndexOf(this));
#endif
                }
            }
        }

        /// <summary>
        /// Final clipping region after the offset has been taken into consideration. XY = center, ZW = size.
        /// 最后的裁剪区域后的偏移已被考虑。XY =中心，ZW =大小。
        /// </summary>
        public Vector4 finalClipRegion
        {
            get
            {
                Vector2 size = GetViewSize();

                if (mClipping != NGUIDrawCall.Clipping.None)
                {
                    return new Vector4(mClipRange.x + mClipOffset.x, mClipRange.y + mClipOffset.y, size.x, size.y);
                }
                else
                {
                    var v = new Vector4(0f, 0f, size.x, size.y);
                    var offset = anchorCamera.WorldToScreenPoint(cachedTransform.position);
                    offset.x -= size.x * 0.5f;
                    offset.y -= size.y * 0.5f;
                    v.x -= offset.x;
                    v.y -= offset.y;
                    return v;
                }
            }
        }

        /// <summary>
        /// Clipping softness is used if the clipped style is set to "Soft".
        /// 如果剪切样式设置为“Soft”，则使用剪切Soft类型。
        /// </summary>
        public Vector2 clipSoftness
        {
            get
            {
                return mClipSoftness;
            }
            set
            {
                if (mClipSoftness != value)
                {
                    mClipSoftness = value;
#if UNITY_EDITOR
                    if (!Application.isPlaying) UpdateDrawCalls(list.IndexOf(this));
#endif
                }
            }
        }

        // Temporary variable to avoid GC allocation,临时变量，以避免GC分配
        static Vector3[] mCorners = new Vector3[4];

        /// <summary>
        /// Local-space corners of the panel's clipping rectangle. The order is bottom-left, top-left, top-right, bottom-right.
        /// 面板剪切矩形的局部空间角。顺序是左下、左上、右上、右下。
        /// </summary>
        public override Vector3[] localCorners
        {
            get
            {
                if (mClipping == NGUIDrawCall.Clipping.None)
                {
                    Vector3[] corners = worldCorners;
                    Transform wt = cachedTransform;
                    for (int i = 0; i < 4; ++i) corners[i] = wt.InverseTransformPoint(corners[i]);
                    return corners;
                }
                else
                {
                    float x0 = mClipOffset.x + mClipRange.x - 0.5f * mClipRange.z;
                    float y0 = mClipOffset.y + mClipRange.y - 0.5f * mClipRange.w;
                    float x1 = x0 + mClipRange.z;
                    float y1 = y0 + mClipRange.w;

                    mCorners[0] = new Vector3(x0, y0);
                    mCorners[1] = new Vector3(x0, y1);
                    mCorners[2] = new Vector3(x1, y1);
                    mCorners[3] = new Vector3(x1, y0);
                }
                return mCorners;
            }
        }

        /// <summary>
        /// World-space corners of the panel's clipping rectangle. The order is bottom-left, top-left, top-right, bottom-right.
        /// 面板剪切矩形的世界空间角。顺序是左下、左上、右上、右下。
        /// </summary>
        public override Vector3[] worldCorners
        {
            get
            {
                if (mClipping != NGUIDrawCall.Clipping.None)
                {
                    float x0 = mClipOffset.x + mClipRange.x - 0.5f * mClipRange.z;
                    float y0 = mClipOffset.y + mClipRange.y - 0.5f * mClipRange.w;
                    float x1 = x0 + mClipRange.z;
                    float y1 = y0 + mClipRange.w;

                    Transform wt = cachedTransform;

                    mCorners[0] = wt.TransformPoint(x0, y0, 0f);
                    mCorners[1] = wt.TransformPoint(x0, y1, 0f);
                    mCorners[2] = wt.TransformPoint(x1, y1, 0f);
                    mCorners[3] = wt.TransformPoint(x1, y0, 0f);
                }
                else if (anchorCamera != null)
                {
                    Vector3[] corners = mCam.GetWorldCorners(cameraRayDistance);

                    //if (anchorOffset && (mCam == null || mCam.transform.parent != cachedTransform))
                    //{
                    //	  Vector3 off = cachedTransform.position;
                    //	  for (int i = 0; i < 4; ++i)
                    //		  corners[i] += off;
                    //}
                    return corners;
                }
                else
                {
                    Vector2 size = GetViewSize();

                    float x0 = -0.5f * size.x;
                    float y0 = -0.5f * size.y;
                    float x1 = x0 + size.x;
                    float y1 = y0 + size.y;

                    mCorners[0] = new Vector3(x0, y0);
                    mCorners[1] = new Vector3(x0, y1);
                    mCorners[2] = new Vector3(x1, y1);
                    mCorners[3] = new Vector3(x1, y0);

                    if (anchorOffset && (mCam == null || mCam.transform.parent != cachedTransform))
                    {
                        Vector3 off = cachedTransform.position;
                        for (int i = 0; i < 4; ++i)
                            mCorners[i] += off;
                    }
                }
                return mCorners;
            }
        }

        /// <summary>
        /// Get the sides of the rectangle relative to the specified transform.
        /// The order is left, top, right, bottom.
        /// 获得相对于指定变换的矩形的边。顺序是左、上、右、下。
        /// </summary>
        public override Vector3[] GetSides(Transform relativeTo)
        {
            if (mClipping != NGUIDrawCall.Clipping.None)
            {
                float x0 = mClipOffset.x + mClipRange.x - 0.5f * mClipRange.z;
                float y0 = mClipOffset.y + mClipRange.y - 0.5f * mClipRange.w;
                float x1 = x0 + mClipRange.z;
                float y1 = y0 + mClipRange.w;
                float hx = (x0 + x1) * 0.5f;
                float hy = (y0 + y1) * 0.5f;

                Transform wt = cachedTransform;

                mSides[0] = wt.TransformPoint(x0, hy, 0f);
                mSides[1] = wt.TransformPoint(hx, y1, 0f);
                mSides[2] = wt.TransformPoint(x1, hy, 0f);
                mSides[3] = wt.TransformPoint(hx, y0, 0f);

                if (relativeTo != null)
                {
                    for (int i = 0; i < 4; ++i)
                        mSides[i] = relativeTo.InverseTransformPoint(mSides[i]);
                }
                return mSides;
            }
            else if (anchorCamera != null && anchorOffset)
            {
                Vector3[] sides = mCam.GetSides(cameraRayDistance);
                Vector3 off = cachedTransform.position;
                for (int i = 0; i < 4; ++i)
                    sides[i] += off;

                if (relativeTo != null)
                {
                    for (int i = 0; i < 4; ++i)
                        sides[i] = relativeTo.InverseTransformPoint(sides[i]);
                }
                return sides;
            }
            return base.GetSides(relativeTo);
        }

        /// <summary>
        /// Invalidating the panel should reset its alpha.
        /// 无效的面板应该重置它的alpha值。
        /// </summary>
        public override void Invalidate(bool includeChildren)
        {
            mAlphaFrameID = -1;
            base.Invalidate(includeChildren);
        }

        /// <summary>
        /// Widget's final alpha, after taking the panel's alpha into account.
        /// 小部件的最终alpha，在考虑了面板的alpha之后。
        /// </summary>
        public override float CalculateFinalAlpha(int frameID)
        {
#if UNITY_EDITOR
            if (mAlphaFrameID != frameID || !Application.isPlaying)
#else
		if (mAlphaFrameID != frameID)
#endif
            {
                mAlphaFrameID = frameID;
                NGUIRect pt = parent;
                finalAlpha = (parent != null) ? pt.CalculateFinalAlpha(frameID) * mAlpha : mAlpha;
            }
            return finalAlpha;
        }

        /// <summary>
        /// Set the panel's rectangle.
        /// 设置面板的矩形。
        /// </summary>
        public override void SetRect(float x, float y, float width, float height)
        {
            int finalWidth = Mathf.FloorToInt(width + 0.5f);
            int finalHeight = Mathf.FloorToInt(height + 0.5f);

            finalWidth = ((finalWidth >> 1) << 1);
            finalHeight = ((finalHeight >> 1) << 1);

            Transform t = cachedTransform;
            Vector3 pos = t.localPosition;
            pos.x = Mathf.Floor(x + 0.5f);
            pos.y = Mathf.Floor(y + 0.5f);

            if (finalWidth < 2) finalWidth = 2;
            if (finalHeight < 2) finalHeight = 2;

            baseClipRegion = new Vector4(pos.x, pos.y, finalWidth, finalHeight);

            if (isAnchored)
            {
                t = t.parent;

                if (leftAnchor.target) leftAnchor.SetHorizontal(t, x);
                if (rightAnchor.target) rightAnchor.SetHorizontal(t, x + width);
                if (bottomAnchor.target) bottomAnchor.SetVertical(t, y);
                if (topAnchor.target) topAnchor.SetVertical(t, y + height);
#if UNITY_EDITOR
                NGUITools.SetDirty(this);
#endif
            }
        }

        /// <summary>
        /// Returns whether the specified rectangle is visible by the panel. The coordinates must be in world space.
        /// 返回指定的矩形对面板是否可见。坐标必须在世界空间中。
        /// </summary>
#if UNITY_FLASH
	public bool IsVisible (Vector3 aa, Vector3 bb, Vector3 cc, Vector3 dd)
#else
        public bool IsVisible(Vector3 a, Vector3 b, Vector3 c, Vector3 d)
#endif
        {
            UpdateTransformMatrix();

            // Transform the specified points from world space to local space 将指定的点从世界空间转换为局部空间
#if UNITY_FLASH
		// http://www.tasharen.com/forum/index.php?topic=11390.0
		Vector3 a = worldToLocal.MultiplyPoint3x4(aa);
		Vector3 b = worldToLocal.MultiplyPoint3x4(bb);
		Vector3 c = worldToLocal.MultiplyPoint3x4(cc);
		Vector3 d = worldToLocal.MultiplyPoint3x4(dd);
#else
            a = worldToLocal.MultiplyPoint3x4(a);
            b = worldToLocal.MultiplyPoint3x4(b);
            c = worldToLocal.MultiplyPoint3x4(c);
            d = worldToLocal.MultiplyPoint3x4(d);
#endif
            mTemp[0] = a.x;
            mTemp[1] = b.x;
            mTemp[2] = c.x;
            mTemp[3] = d.x;

            float minX = Mathf.Min(mTemp);
            float maxX = Mathf.Max(mTemp);

            mTemp[0] = a.y;
            mTemp[1] = b.y;
            mTemp[2] = c.y;
            mTemp[3] = d.y;

            float minY = Mathf.Min(mTemp);
            float maxY = Mathf.Max(mTemp);

            if (maxX < mMin.x) return false;
            if (maxY < mMin.y) return false;
            if (minX > mMax.x) return false;
            if (minY > mMax.y) return false;

            return true;
        }

        /// <summary>
        /// Returns whether the specified world position is within the panel's bounds determined by the clipping rect.
        /// 返回指定的世界位置是否在由剪切矩形确定的面板边界内。
        /// </summary>
        public bool IsVisible(Vector3 worldPos)
        {
            if (mAlpha < 0.001f) return false;
            if (mClipping == NGUIDrawCall.Clipping.None ||
                mClipping == NGUIDrawCall.Clipping.ConstrainButDontClip) return true;

            UpdateTransformMatrix();

            Vector3 pos = worldToLocal.MultiplyPoint3x4(worldPos);
            if (pos.x < mMin.x) return false;
            if (pos.y < mMin.y) return false;
            if (pos.x > mMax.x) return false;
            if (pos.y > mMax.y) return false;
            return true;
        }

        /// <summary>
        /// Returns whether the specified widget is visible by the panel.
        /// 返回指定的小部件在面板上是否可见。
        /// </summary>
        public bool IsVisible(NGUIWidget w)
        {
            NGUIPanel p = this;
            Vector3[] corners = null;

            while (p != null)
            {
                if ((p.mClipping == NGUIDrawCall.Clipping.None || p.mClipping == NGUIDrawCall.Clipping.ConstrainButDontClip) && !w.hideIfOffScreen)
                {
                    p = p.mParentPanel;
                    continue;
                }

                if (corners == null) corners = w.worldCorners;
                if (!p.IsVisible(corners[0], corners[1], corners[2], corners[3])) return false;
                p = p.mParentPanel;
            }
            return true;
        }

        /// <summary>
        /// Whether the specified widget is going to be affected by this panel in any way.
        /// 指定的小部件是否会受到此面板的影响。
        /// </summary>
        public bool Affects(NGUIWidget w)
        {
            if (w == null) return false;

            NGUIPanel expected = w.panel;
            if (expected == null) return false;

            NGUIPanel p = this;

            while (p != null)
            {
                if (p == expected) return true;
                if (!p.hasCumulativeClipping) return false;
                p = p.mParentPanel;
            }
            return false;
        }

        /// <summary>
        /// Causes all draw calls to be re-created on the next update.
        /// 导致在下一次更新时重新创建所有draw调用。
        /// </summary>
        [ContextMenu("Force Refresh")]
        public void RebuildAllDrawCalls() { mRebuild = true; }

        /// <summary>
        /// Invalidate the panel's draw calls, forcing them to be rebuilt on the next update.
        /// This call also affects all children.
        /// 使面板的draw calls无效，迫使它们在下一次更新时重新构建。这个调用也影响到所有的子控件。
        /// </summary>
        public void SetDirty()
        {
            for (int i = 0, imax = drawCalls.Count; i < imax; ++i)
                drawCalls[i].isDirty = true;
            Invalidate(true);
        }

        /// <summary>
        /// Cache components.
        /// </summary>
        protected override void Awake()
        {
            base.Awake();

#if !UNITY_5_5_OR_NEWER
		mHalfPixelOffset = (Application.platform == RuntimePlatform.WindowsPlayer ||
#if !UNITY_5_4
			Application.platform == RuntimePlatform.WindowsWebPlayer ||
#endif
			Application.platform == RuntimePlatform.WindowsEditor) &&
			SystemInfo.graphicsDeviceVersion.Contains("Direct3D") &&
			SystemInfo.graphicsShaderLevel < 40;
#endif
        }

        /// <summary>
        /// Find the parent panel, if we have one.
        /// </summary>
        void FindParent()
        {
            Transform parent = cachedTransform.parent;
            mParentPanel = (parent != null) ? NGUITools.FindInParents<NGUIPanel>(parent.gameObject) : null;
        }

        /// <summary>
        /// Find the parent panel, if we have one.
        /// </summary>
        public override void ParentHasChanged()
        {
            base.ParentHasChanged();
            FindParent();
        }

        /// <summary>
        /// Layer is used to ensure that if it changes, widgets get moved as well.
        /// 层是用来确保如果它改变，小部件也被移动。
        /// </summary>
        protected override void OnStart()
        {
            mLayer = cachedGameObject.layer;
        }

        /// <summary>
        /// Reset the frame IDs.
        /// 重置帧id。
        /// </summary>
        protected override void OnEnable()
        {
            mRebuild = true;
            mAlphaFrameID = -1;
            mMatrixFrame = -1;
            OnStart();
            base.OnEnable();
            mMatrixFrame = -1;
        }

        /// <summary>
        /// Mark all widgets as having been changed so the draw calls get re-created.
        /// 将所有小部件标记为已更改，以便重新创建draw调用。
        /// </summary>
        protected override void OnInit()
        {
            if (list.Contains(this)) return;
            base.OnInit();
            FindParent();

            // Apparently having a rigidbody helps
#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
		if (rigidbody == null && mParentPanel == null)
#else
            if (GetComponent<Rigidbody>() == null && mParentPanel == null)
#endif
            {
                NGUICamera uic = (anchorCamera != null) ? mCam.GetComponent<NGUICamera>() : null;

                if (uic != null)
                {
                    if (uic.eventType == NGUICamera.EventType.UI_3D || uic.eventType == NGUICamera.EventType.World_3D)
                    {
                        Rigidbody rb = gameObject.AddComponent<Rigidbody>();
                        rb.isKinematic = true;
                        rb.useGravity = false;
                    }
                    // It's unclear if this helps 2D physics or not, so leaving it disabled for now.
                    // Note that when enabling this, the 'if (rigidbody == null)' statement above should be adjusted as well.
                    //else
                    //{
                    //	  Rigidbody2D rb = gameObject.AddComponent<Rigidbody2D>();
                    //	  rb.isKinematic = true;
                    //}
                }
            }

            mRebuild = true;
            mAlphaFrameID = -1;
            mMatrixFrame = -1;

            list.Add(this);
            list.Sort(CompareFunc);
        }

        /// <summary>
        /// Destroy all draw calls we've created when this script gets disabled.
        /// 当此脚本被禁用时，销毁我们创建的所有 draw calls。
        /// </summary>
        protected override void OnDisable()
        {
            for (int i = 0, imax = drawCalls.Count; i < imax; ++i)
            {
                NGUIDrawCall dc = drawCalls[i];
                if (dc != null) NGUIDrawCall.Destroy(dc);
            }

            drawCalls.Clear();
            list.Remove(this);

            mAlphaFrameID = -1;
            mMatrixFrame = -1;

            if (list.Count == 0)
            {
                NGUIDrawCall.ReleaseAll();
                mUpdateFrame = -1;
            }
            base.OnDisable();
        }

        /// <summary>
        /// Update the world-to-local transform matrix as well as clipping bounds.
        /// 更新世界到局部变换矩阵以及裁剪边界。
        /// </summary>
        void UpdateTransformMatrix()
        {
            int fc = Time.frameCount;

            if (mHasMoved || mMatrixFrame != fc)
            {
                mMatrixFrame = fc;
                worldToLocal = cachedTransform.worldToLocalMatrix;

                Vector2 size = GetViewSize() * 0.5f;

                float x = mClipOffset.x + mClipRange.x;
                float y = mClipOffset.y + mClipRange.y;

                mMin.x = x - size.x;
                mMin.y = y - size.y;
                mMax.x = x + size.x;
                mMax.y = y + size.y;
            }
        }

        /// <summary>
        /// Update the edges after the anchors have been updated.
        /// 在锚被更新后更新边缘。
        /// </summary>
        protected override void OnAnchor()
        {
            // No clipping = no edges to anchor
            if (mClipping == NGUIDrawCall.Clipping.None) return;

            Transform trans = cachedTransform;
            Transform parent = trans.parent;

            Vector2 size = GetViewSize();
            Vector2 offset = trans.localPosition;

            float lt, bt, rt, tt;

            // Attempt to fast-path if all anchors match
            if (leftAnchor.target == bottomAnchor.target &&
                leftAnchor.target == rightAnchor.target &&
                leftAnchor.target == topAnchor.target)
            {
                Vector3[] sides = leftAnchor.GetSides(parent);

                if (sides != null)
                {
                    lt = NGUIMath.Lerp(sides[0].x, sides[2].x, leftAnchor.relative) + leftAnchor.absolute;
                    rt = NGUIMath.Lerp(sides[0].x, sides[2].x, rightAnchor.relative) + rightAnchor.absolute;
                    bt = NGUIMath.Lerp(sides[3].y, sides[1].y, bottomAnchor.relative) + bottomAnchor.absolute;
                    tt = NGUIMath.Lerp(sides[3].y, sides[1].y, topAnchor.relative) + topAnchor.absolute;
                }
                else
                {
                    // Anchored to a single transform
                    Vector2 lp = GetLocalPos(leftAnchor, parent);
                    lt = lp.x + leftAnchor.absolute;
                    bt = lp.y + bottomAnchor.absolute;
                    rt = lp.x + rightAnchor.absolute;
                    tt = lp.y + topAnchor.absolute;
                }
            }
            else
            {
                // Left anchor point
                if (leftAnchor.target)
                {
                    Vector3[] sides = leftAnchor.GetSides(parent);

                    if (sides != null)
                    {
                        lt = NGUIMath.Lerp(sides[0].x, sides[2].x, leftAnchor.relative) + leftAnchor.absolute;
                    }
                    else
                    {
                        lt = GetLocalPos(leftAnchor, parent).x + leftAnchor.absolute;
                    }
                }
                else lt = mClipRange.x - 0.5f * size.x;

                // Right anchor point
                if (rightAnchor.target)
                {
                    Vector3[] sides = rightAnchor.GetSides(parent);

                    if (sides != null)
                    {
                        rt = NGUIMath.Lerp(sides[0].x, sides[2].x, rightAnchor.relative) + rightAnchor.absolute;
                    }
                    else
                    {
                        rt = GetLocalPos(rightAnchor, parent).x + rightAnchor.absolute;
                    }
                }
                else rt = mClipRange.x + 0.5f * size.x;

                // Bottom anchor point
                if (bottomAnchor.target)
                {
                    Vector3[] sides = bottomAnchor.GetSides(parent);

                    if (sides != null)
                    {
                        bt = NGUIMath.Lerp(sides[3].y, sides[1].y, bottomAnchor.relative) + bottomAnchor.absolute;
                    }
                    else
                    {
                        bt = GetLocalPos(bottomAnchor, parent).y + bottomAnchor.absolute;
                    }
                }
                else bt = mClipRange.y - 0.5f * size.y;

                // Top anchor point
                if (topAnchor.target)
                {
                    Vector3[] sides = topAnchor.GetSides(parent);

                    if (sides != null)
                    {
                        tt = NGUIMath.Lerp(sides[3].y, sides[1].y, topAnchor.relative) + topAnchor.absolute;
                    }
                    else
                    {
                        tt = GetLocalPos(topAnchor, parent).y + topAnchor.absolute;
                    }
                }
                else tt = mClipRange.y + 0.5f * size.y;
            }

            // Take the offset into consideration
            lt -= offset.x + mClipOffset.x;
            rt -= offset.x + mClipOffset.x;
            bt -= offset.y + mClipOffset.y;
            tt -= offset.y + mClipOffset.y;

            // Calculate the new position, width and height
            float newX = Mathf.Lerp(lt, rt, 0.5f);
            float newY = Mathf.Lerp(bt, tt, 0.5f);
            float w = rt - lt;
            float h = tt - bt;

            float minx = Mathf.Max(2f, mClipSoftness.x);
            float miny = Mathf.Max(2f, mClipSoftness.y);

            if (w < minx) w = minx;
            if (h < miny) h = miny;

            // Update the clipping range
            baseClipRegion = new Vector4(newX, newY, w, h);
        }

        static int mUpdateFrame = -1;

        /// <summary>
        /// Update all panels and draw calls.更新所有面板并抽取呼叫。
        /// </summary>
        void LateUpdate()
        {
#if UNITY_EDITOR && !UNITY_5_5_OR_NEWER
		if (mUpdateFrame != Time.frameCount || !Application.isPlaying)
#else
            if (mUpdateFrame != Time.frameCount)
#endif
            {
                mUpdateFrame = Time.frameCount;

                // Update each panel in order 按顺序更新每个面板
                for (int i = 0, imax = list.Count; i < imax; ++i)
                    list[i].UpdateSelf();

                int rq = 3000;

                // Update all draw calls, making them draw in the right order 更新所有的draw calls，使他们在正确的顺序绘制
                for (int i = 0, imax = list.Count; i < imax; ++i)
                {
                    NGUIPanel p = list[i];

                    if (p.renderQueue == RenderQueue.Automatic)
                    {
                        p.startingRenderQueue = rq;
                        p.UpdateDrawCalls(i);
                        rq += p.drawCalls.Count;
                    }
                    else if (p.renderQueue == RenderQueue.StartAt)
                    {
                        p.UpdateDrawCalls(i);
                        if (p.drawCalls.Count != 0)
                            rq = Mathf.Max(rq, p.startingRenderQueue + p.drawCalls.Count);
                    }
                    else // Explicit
                    {
                        p.UpdateDrawCalls(i);
                        if (p.drawCalls.Count != 0)
                            rq = Mathf.Max(rq, p.startingRenderQueue + 1);
                    }
                }
            }
        }

        [System.NonSerialized]
        bool mHasMoved = false;

        /// <summary>
        /// Update the panel, all of its widgets and draw calls.
        /// 更新面板，它的 所有小部件 和 有可能的情况下会重建draw calls。
        /// </summary>
        void UpdateSelf()
        {
            mHasMoved = cachedTransform.hasChanged;

            UpdateTransformMatrix();
            UpdateLayers();
            UpdateWidgets();

            if (mRebuild)
            {
                mRebuild = false;
                FillAllDrawCalls();
            }
            else
            {
                var needsCulling = (mCam == null || mCam.useOcclusionCulling);

                for (int i = 0; i < drawCalls.Count;)
                {
                    NGUIDrawCall dc = drawCalls[i];

                    if (dc.isDirty && !FillDrawCall(dc, needsCulling))
                    {
                        NGUIDrawCall.Destroy(dc);
                        drawCalls.RemoveAt(i);
                        continue;
                    }
                    ++i;
                }
            }

            if (mUpdateScroll)
            {
                mUpdateScroll = false;
                UIScrollView sv = GetComponent<UIScrollView>();
                if (sv != null) sv.UpdateScrollbars();
            }

            if (mHasMoved)
            {
                mHasMoved = false;
                mTrans.hasChanged = false;
            }
        }

        /// <summary>
        /// Immediately sort all child widgets.立即对所有子部件进行排序。
        /// </summary>
        public void SortWidgets()
        {
            mSortWidgets = false;
            widgets.Sort(NGUIWidget.PanelCompareFunc);
        }

        static List<NGUIWidget> widgetsInDrawCall = new List<NGUIWidget>();
        void FillDrawCallBuffers(NGUIDrawCall dc, int verticesCount)
        {
            //dc.verts.GrowIfMust(verticesCount);
            //dc.uvs.GrowIfMust(verticesCount);
            //dc.cols.GrowIfMust(verticesCount);
            BetterList<Vector3> notUsed = null;
            CachedGeometries.PullFromCachedGeometries(verticesCount, ref dc.verts, ref dc.uvs, ref dc.cols, ref notUsed);
            foreach (var w in widgetsInDrawCall)
            {
                if (generateNormals)
                {
                     w.WriteToBuffers(dc.verts, dc.uvs, dc.cols, dc.norms, dc.tans, generateUV2 ? dc.uv2 : null);
                }
                else
                {
                     w.WriteToBuffers(dc.verts, dc.uvs, dc.cols, null, null, generateUV2 ? dc.uv2 : null);
                }
            }
            widgetsInDrawCall.Clear();
        }


        /// <summary>
        /// Fill the geometry fully, processing all widgets and re-creating all draw calls.
        /// 充分填充几何图形，处理所有小部件并重新创建所有draw calls。
        /// </summary>
        void FillAllDrawCalls()
        {
            for (int i = 0; i < drawCalls.Count; ++i)
                NGUIDrawCall.Destroy(drawCalls[i]);
            drawCalls.Clear();

            Material mat = null;
            Texture tex = null;
            Shader sdr = null;
            NGUIDrawCall dc = null;
            int verticesCount = 0;
            int count = 0;
            var needsCulling = (mCam == null || mCam.useOcclusionCulling);

            if (mSortWidgets) SortWidgets();

            for (int i = 0; i < widgets.Count; ++i)
            {
                NGUIWidget w = widgets[i];

                if (w.isVisible && w.hasVertices)
                {
                    Material mt = w.material;

                    if (onCreateMaterial != null) mt = onCreateMaterial(w, mt);

                    Texture tx = w.mainTexture;
                    Shader sd = w.shader;

                    if (mat != mt || tex != tx || sdr != sd)
                    {
                        if (dc != null && verticesCount != 0)
                        {
                            drawCalls.Add(dc);
                            FillDrawCallBuffers(dc, verticesCount);
                            verticesCount = 0;
                            dc.UpdateGeometry(count, needsCulling);
                            dc.onRender = mOnRender;
                            mOnRender = null;
                            count = 0;
                            dc = null;
                        }

                        mat = mt;
                        tex = tx;
                        sdr = sd;
                    }

                    if (mat != null || sdr != null || tex != null)
                    {
                        if (dc == null)
                        {
                            bool safeToDraw = true;
#if UNITY_EDITOR && UNITY_2018_3_OR_NEWER
                            if (!Application.isPlaying)
                            {
                                var prefabStage = UnityEditor.Experimental.SceneManagement.PrefabStageUtility.GetCurrentPrefabStage();

                                if (prefabStage != null)
                                {
                                    var prefabStageHandle = prefabStage.stageHandle;
                                    var currentStageHandle = UnityEditor.SceneManagement.StageUtility.GetStageHandle(gameObject);
                                    if (currentStageHandle != prefabStageHandle) safeToDraw = false;
                                }
                            }
#endif
                            if (safeToDraw)
                            {
                                dc = NGUIDrawCall.Create(this, mat, tex, sdr);
                                dc.depthStart = w.depth;
                                dc.depthEnd = dc.depthStart;
                                dc.panel = this;
                                dc.onCreateDrawCall = onCreateDrawCall;
                            }
                        }
                        else
                        {
                            int rd = w.depth;
                            if (rd < dc.depthStart) dc.depthStart = rd;
                            if (rd > dc.depthEnd) dc.depthEnd = rd;
                        }

                        w.drawCall = dc;

                        // Important to check this since it can very well be null due to earlier safeToDraw condition
                        if (dc != null)
                        {
                            ++count;
                            //if (generateNormals) w.WriteToBuffers(dc.verts, dc.uvs, dc.cols, dc.norms, dc.tans, generateUV2 ? dc.uv2 : null);
                            //else w.WriteToBuffers(dc.verts, dc.uvs, dc.cols, null, null, generateUV2 ? dc.uv2 : null);
                            widgetsInDrawCall.Add(w);
                            verticesCount += w.geometry.verts.Size;
                            if (w.mOnRender != null)
                            {
                                if (mOnRender == null) mOnRender = w.mOnRender;
                                else mOnRender += w.mOnRender;
                            }
                        }
                    }
                }
                else w.drawCall = null;
            }

            if (dc != null && verticesCount != 0)
            {
                drawCalls.Add(dc);
                FillDrawCallBuffers(dc, verticesCount);
                dc.UpdateGeometry(count, needsCulling);
                dc.onRender = mOnRender;
                mOnRender = null;
            }
        }

        NGUIDrawCall.OnRenderCallback mOnRender;

        /// <summary>
        /// Fill the geometry for the specified draw call.
        /// 填充指定的 draw call 的几何图形。
        /// </summary>
        public bool FillDrawCall(NGUIDrawCall dc)
        {
            var needsCulling = (mCam == null || mCam.useOcclusionCulling);
            return FillDrawCall(dc, needsCulling);
        }

        /// <summary>
        /// Fill the geometry for the specified draw call.
        /// 填充指定的 draw call 的几何图形。
        /// </summary>
        public bool FillDrawCall(NGUIDrawCall dc, bool needsCulling)
        {
            if (dc == null) return false;

            dc.isDirty = false;
            int verticesCount = 0;
            int count = 0;
            for (int i = 0; i < widgets.Count;)
            {
                NGUIWidget w = widgets[i];

                if (w == null)
                {
#if UNITY_EDITOR
                    Debug.LogError("This should never happen");
#endif
                    widgets.RemoveAt(i);
                    continue;
                }

                if (w.drawCall == dc)
                {
                    if (w.isVisible && w.hasVertices)
                    {
                        ++count;

                        //if (generateNormals) w.WriteToBuffers(dc.verts, dc.uvs, dc.cols, dc.norms, dc.tans, generateUV2 ? dc.uv2 : null);
                        //else w.WriteToBuffers(dc.verts, dc.uvs, dc.cols, null, null, generateUV2 ? dc.uv2 : null);
                        widgetsInDrawCall.Add(w);
                        verticesCount += w.geometry.verts.Size;

                        if (w.mOnRender != null)
                        {
                            if (mOnRender == null) mOnRender = w.mOnRender;
                            else mOnRender += w.mOnRender;
                        }
                    }
                    else w.drawCall = null;
                }
                ++i;
            }

            if (verticesCount != 0)
            {
                FillDrawCallBuffers(dc, verticesCount);
                dc.UpdateGeometry(count, needsCulling);
                dc.onRender = mOnRender;
                mOnRender = null;
                return true;
            }
            return false;
        }

        /// <summary>
        /// Update all draw calls associated with the panel.
        /// 更新与面板相关的所有draw调用。
        /// </summary>
        void UpdateDrawCalls(int sortOrder)
        {
            Transform trans = cachedTransform;
            bool isUI = usedForUI;

            if (clipping != NGUIDrawCall.Clipping.None)
            {
                drawCallClipRange = finalClipRegion;
                drawCallClipRange.z *= 0.5f;
                drawCallClipRange.w *= 0.5f;
            }
            else drawCallClipRange = Vector4.zero;

            int w = Screen.width;
            int h = Screen.height;

            // Legacy functionality
            if (drawCallClipRange.z == 0f) drawCallClipRange.z = w * 0.5f;
            if (drawCallClipRange.w == 0f) drawCallClipRange.w = h * 0.5f;

            // DirectX 9 half-pixel offset
            if (halfPixelOffset)
            {
                drawCallClipRange.x -= 0.5f;
                drawCallClipRange.y += 0.5f;
            }

            Vector3 pos;

            if (isUI)
            {
                Transform parent = cachedTransform.parent;
                pos = cachedTransform.localPosition;

                if (clipping != NGUIDrawCall.Clipping.None)
                {
                    pos.x = Mathf.RoundToInt(pos.x);
                    pos.y = Mathf.RoundToInt(pos.y);
                }

                if (parent != null) pos = parent.TransformPoint(pos);
                pos += drawCallOffset;
            }
            else pos = trans.position;

            Quaternion rot = trans.rotation;
            Vector3 scale = trans.lossyScale;

            for (int i = 0; i < drawCalls.Count; ++i)
            {
                NGUIDrawCall dc = drawCalls[i];

                Transform t = dc.cachedTransform;
                t.position = pos;
                t.rotation = rot;
                t.localScale = scale;

                dc.renderQueue = (renderQueue == RenderQueue.Explicit) ? startingRenderQueue : startingRenderQueue + i;
                dc.alwaysOnScreen = alwaysOnScreen &&
                    (mClipping == NGUIDrawCall.Clipping.None || mClipping == NGUIDrawCall.Clipping.ConstrainButDontClip);
                dc.sortingOrder = useSortingOrder ? ((mSortingOrder == 0 && renderQueue == RenderQueue.Automatic) ? sortOrder : mSortingOrder) : 0;
                dc.sortingLayerName = useSortingOrder ? mSortingLayerName : null;
                dc.clipTexture = mClipTexture;
#if !UNITY_4_7
                dc.shadowMode = shadowMode;
#endif
            }
        }

        /// <summary>
        /// Update the widget layers if the panel's layer has changed.
        /// 如果面板的层发生了更改，则更新小部件层。
        /// </summary>
        void UpdateLayers()
        {
            // Always move widgets to the panel's layer
            if (mLayer != cachedGameObject.layer)
            {
                mLayer = mGo.layer;

                for (int i = 0, imax = widgets.Count; i < imax; ++i)
                {
                    NGUIWidget w = widgets[i];
                    if (w && w.parent == this) w.gameObject.layer = mLayer;
                }

                ResetAnchors();

                for (int i = 0; i < drawCalls.Count; ++i)
                    drawCalls[i].gameObject.layer = mLayer;
            }
        }

        bool mForced = false;

        /// <summary>
        /// Update all of the widgets belonging to this panel.
        /// 更新属于此面板的所有小部件。
        /// </summary>
        void UpdateWidgets()
        {
            bool changed = false;
            bool forceVisible = false;
            bool clipped = hasCumulativeClipping;

            if (!cullWhileDragging)
            {
                for (int i = 0; i < UIScrollView.list.Size; ++i)
                {
                    UIScrollView sv = UIScrollView.list.Buffer[i];
                    if (sv.panel == this && sv.isDragging) forceVisible = true;
                }
            }

            if (mForced != forceVisible)
            {
                mForced = forceVisible;
                mResized = true;
            }

            // Update all widgets
            int frame = Time.frameCount;
            for (int i = 0, imax = widgets.Count; i < imax; ++i)
            {
                NGUIWidget w = widgets[i];

                // If the widget is visible, update it
                if (w.panel == this && w.enabled)
                {
#if UNITY_EDITOR
                    // When an object is dragged from Project view to Scene view, its Z is...
                    // odd, to say the least. Force it if possible.
                    if (!Application.isPlaying)
                    {
                        Transform t = w.cachedTransform;

                        if (t.hideFlags != HideFlags.HideInHierarchy)
                        {
                            t = (t.parent != null && t.parent.hideFlags == HideFlags.HideInHierarchy) ?
                                t.parent : null;
                        }

                        if (t != null)
                        {
                            for (; ; )
                            {
                                if (t.parent == null) break;
                                if (t.parent.hideFlags == HideFlags.HideInHierarchy) t = t.parent;
                                else break;
                            }

                            if (t != null)
                            {
                                Vector3 pos = t.localPosition;
                                pos.x = Mathf.Round(pos.x);
                                pos.y = Mathf.Round(pos.y);
                                pos.z = 0f;

                                if (Vector3.SqrMagnitude(t.localPosition - pos) > 0.0001f)
                                    t.localPosition = pos;
                            }
                        }
                    }
#endif
                    // First update the widget's transform
                    if (w.UpdateTransform(frame) || mResized || (mHasMoved && !alwaysOnScreen))
                    {
                        // Only proceed to checking the widget's visibility if it actually moved
                        bool vis = forceVisible || (w.CalculateCumulativeAlpha(frame) > 0.001f);
                        w.UpdateVisibility(vis, forceVisible || alwaysOnScreen || ((clipped || w.hideIfOffScreen) ? IsVisible(w) : true));
                    }

                    // Update the widget's geometry if necessary
                    if (w.UpdateGeometry(frame))
                    {
                        changed = true;
                        //Debug.Log("Geometry changed: " + w.name + " " + frame, w);

                        if (!mRebuild)
                        {
                            // Find an existing draw call, if possible
                            if (w.drawCall != null) w.drawCall.isDirty = true;
                            else FindDrawCall(w);
                        }
                    }
                }
            }

            // Inform the changed event listeners
            if (changed && onGeometryUpdated != null) onGeometryUpdated();
            mResized = false;
        }

        /// <summary>
        /// Insert the specified widget into one of the existing draw calls if possible.
        /// If it's not possible, and a new draw call is required, 'null' is returned
        /// because draw call creation is a delayed operation.
        ///如果可能，将指定的小部件插入现有的draw calls之一。
        ///如果不可能，并且需要一个新的draw call，则返回'null'
        ///因为draw调用创建是一个延迟操作。
        /// </summary>
        public NGUIDrawCall FindDrawCall(NGUIWidget w)
        {
            var mat = w.material;
            var tex = w.mainTexture;
            var shader = w.shader;
            var depth = w.depth;

            for (int i = 0; i < drawCalls.Count; ++i)
            {
                NGUIDrawCall dc = drawCalls[i];
                int dcStart = (i == 0) ? int.MinValue : drawCalls[i - 1].depthEnd + 1;
                int dcEnd = (i + 1 == drawCalls.Count) ? int.MaxValue : drawCalls[i + 1].depthStart - 1;

                if (dcStart <= depth && dcEnd >= depth)
                {
                    if (dc.baseMaterial == mat && dc.shader == shader && dc.mainTexture == tex)
                    {
                        if (w.isVisible)
                        {
                            w.drawCall = dc;
                            if (w.hasVertices) dc.isDirty = true;
                            return dc;
                        }
                    }
                    else mRebuild = true;
                    return null;
                }
            }
            mRebuild = true;
            return null;
        }

        /// <summary>
        /// Make the following widget be managed by the panel.
        /// 使以下小部件由面板管理。
        /// </summary>
        public void AddWidget(NGUIWidget w)
        {
            mUpdateScroll = true;

            if (widgets.Count == 0)
            {
                widgets.Add(w);
            }
            else if (mSortWidgets)
            {
                widgets.Add(w);
                SortWidgets();
            }
            else if (NGUIWidget.PanelCompareFunc(w, widgets[0]) == -1)
            {
                widgets.Insert(0, w);
            }
            else
            {
                for (int i = widgets.Count; i > 0;)
                {
                    if (NGUIWidget.PanelCompareFunc(w, widgets[--i]) == -1) continue;
                    widgets.Insert(i + 1, w);
                    break;
                }
            }
            FindDrawCall(w);
        }

        /// <summary>
        /// Remove the widget from its current draw call, invalidating everything as needed.
        /// 从当前的draw调用中删除小部件，必要时使所有内容无效。
        /// </summary>
        public void RemoveWidget(NGUIWidget w)
        {
            if (widgets.Remove(w) && w.drawCall != null)
            {
                int depth = w.depth;
                if (depth == w.drawCall.depthStart || depth == w.drawCall.depthEnd)
                    mRebuild = true;

                w.drawCall.isDirty = true;
                w.drawCall = null;
            }
        }

        /// <summary>
        /// Immediately refresh the panel.立即刷新面板。
        /// </summary>
        public void Refresh()
        {
            mRebuild = true;
            mUpdateFrame = -1;
            if (list.Count > 0) list[0].LateUpdate();
        }

        /// <summary>
        /// Calculate the offset needed to be constrained within the panel's bounds.
        /// 计算需要在面板边界内约束的偏移量。
        /// </summary>
        public virtual Vector3 CalculateConstrainOffset(Vector2 min, Vector2 max)
        {
            Vector4 cr = finalClipRegion;

            float offsetX = cr.z * 0.5f;
            float offsetY = cr.w * 0.5f;

            Vector2 minRect = new Vector2(min.x, min.y);
            Vector2 maxRect = new Vector2(max.x, max.y);
            Vector2 minArea = new Vector2(cr.x - offsetX, cr.y - offsetY);
            Vector2 maxArea = new Vector2(cr.x + offsetX, cr.y + offsetY);

            if (softBorderPadding && clipping == NGUIDrawCall.Clipping.SoftClip)
            {
                minArea.x += mClipSoftness.x;
                minArea.y += mClipSoftness.y;
                maxArea.x -= mClipSoftness.x;
                maxArea.y -= mClipSoftness.y;
            }
            return NGUIMath.ConstrainRect(minRect, maxRect, minArea, maxArea);
        }

        /// <summary>
        /// Constrain the current target position to be within panel bounds.
        /// 约束当前目标位置在面板范围内。
        /// </summary>
        public bool ConstrainTargetToBounds(Transform target, ref Bounds targetBounds, bool immediate)
        {
            Vector3 min = targetBounds.min;
            Vector3 max = targetBounds.max;

            float ps = 1f;

            if (mClipping == NGUIDrawCall.Clipping.None)
            {
                NGUIRoot rt = root;
                if (rt != null) ps = rt.pixelSizeAdjustment;
            }

            if (ps != 1f)
            {
                min /= ps;
                max /= ps;
            }

            Vector3 offset = CalculateConstrainOffset(min, max) * ps;

            if (offset.sqrMagnitude > 0f)
            {
                if (immediate)
                {
                    target.localPosition += offset;
                    targetBounds.center += offset;
                    SpringPosition sp = target.GetComponent<SpringPosition>();
                    if (sp != null) sp.enabled = false;
                }
                else
                {
                    SpringPosition sp = SpringPosition.Begin(target.gameObject, target.localPosition + offset, 13f);
                    sp.ignoreTimeScale = true;
                    sp.worldSpace = false;
                }
                return true;
            }
            return false;
        }

        /// <summary>
        /// Constrain the specified target to be within the panel's bounds.
        /// 将指定的目标约束在面板的边界内。
        /// </summary>
        public bool ConstrainTargetToBounds(Transform target, bool immediate)
        {
            Bounds bounds = NGUIMath.CalculateRelativeWidgetBounds(cachedTransform, target);
            return ConstrainTargetToBounds(target, ref bounds, immediate);
        }

        /// <summary>
        /// Find the NGUIPanel responsible for handling the specified transform.
        /// 找到负责处理指定转换的NGUIPanel。
        /// </summary>
        static public NGUIPanel Find(Transform trans) { return Find(trans, false, -1); }

        /// <summary>
        /// Find the NGUIPanel responsible for handling the specified transform.
        /// 找到负责处理指定转换的NGUIPanel。
        /// </summary>
        static public NGUIPanel Find(Transform trans, bool createIfMissing) { return Find(trans, createIfMissing, -1); }

        /// <summary>
        /// Find the NGUIPanel responsible for handling the specified transform.
        /// 找到负责处理指定转换的NGUIPanel。
        /// </summary>
        static public NGUIPanel Find(Transform trans, bool createIfMissing, int layer)
        {
            NGUIPanel panel = NGUITools.FindInParents<NGUIPanel>(trans);
            if (panel != null) return panel;
            while (trans.parent != null) trans = trans.parent;
            return createIfMissing ? NGUITools.CreateUI(trans, false, layer) : null;
        }

        /// <summary>
        /// Get the size of the game window in pixels.
        /// 获取游戏窗口的像素大小。
        /// </summary>
        public Vector2 GetWindowSize()
        {
            NGUIRoot rt = root;
            Vector2 size = NGUITools.screenSize;
            if (rt != null) size *= rt.GetPixelSizeAdjustment(Mathf.RoundToInt(size.y));
            return size;
        }

        /// <summary>
        /// Panel's size -- which is either the clipping rect, or the screen dimensions.
        /// 面板的大小——或者是剪切矩形，或者是屏幕尺寸。
        /// </summary>
        public Vector2 GetViewSize()
        {
            if (mClipping != NGUIDrawCall.Clipping.None)
                return new Vector2(mClipRange.z, mClipRange.w);

            Vector2 size = NGUITools.screenSize;
            //NGUIRoot rt = root;
            //if (rt != null) size *= rt.pixelSizeAdjustment;
            return size;
        }

#if UNITY_EDITOR
        /// <summary>
        /// Draw a visible pink outline for the clipped area.
        /// 为修剪区域画一个可见的粉红色轮廓。
        /// </summary>
        void OnDrawGizmos()
        {
            if (anchorCamera == null) return;

#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
		if (!mCam.isOrthoGraphic) return;
#else
            if (!mCam.orthographic) return;
#endif
            bool clip = (mClipping != NGUIDrawCall.Clipping.None);
            Transform t = clip ? transform : mCam.transform;

            Vector3[] corners = worldCorners;
            for (int i = 0; i < 4; ++i) corners[i] = t.InverseTransformPoint(corners[i]);
            Vector3 pos = Vector3.Lerp(corners[0], corners[2], 0.5f);
            Vector3 size = corners[2] - corners[0];

            GameObject go = UnityEditor.Selection.activeGameObject;
            bool isUsingThisPanel = (go != null) && (NGUITools.FindInParents<NGUIPanel>(go) == this);
            bool isSelected = (UnityEditor.Selection.activeGameObject == gameObject);
            bool detailedView = (isSelected && isUsingThisPanel);
            bool detailedClipped = detailedView && mClipping == NGUIDrawCall.Clipping.SoftClip;

            Gizmos.matrix = t.localToWorldMatrix;

            if (isUsingThisPanel && !clip)
            {
                NGUIRoot rt = root;

                if (rt != null && rt.scalingStyle != NGUIRoot.Scaling.Flexible)
                {
                    float width = rt.manualWidth;
                    float height = rt.manualHeight;

                    float x0 = -0.5f * width;
                    float y0 = -0.5f * height;
                    float x1 = x0 + width;
                    float y1 = y0 + height;

                    corners[0] = new Vector3(x0, y0);
                    corners[1] = new Vector3(x0, y1);
                    corners[2] = new Vector3(x1, y1);
                    corners[3] = new Vector3(x1, y0);

                    Vector3 szPos = Vector3.Lerp(corners[0], corners[2], 0.5f);
                    Vector3 szSize = corners[2] - corners[0];

                    Gizmos.color = new Color(0f, 0.75f, 1f);
                    Gizmos.DrawWireCube(szPos, szSize);
                }
            }

            Gizmos.color = (isUsingThisPanel && !detailedClipped) ? new Color(1f, 0f, 0.5f) : new Color(0.5f, 0f, 0.5f);
            Gizmos.DrawWireCube(pos, size);

            if (detailedView && detailedClipped)
            {
                Gizmos.color = new Color(1f, 0f, 0.5f);
                size.x -= mClipSoftness.x * 2f;
                size.y -= mClipSoftness.y * 2f;
                Gizmos.DrawWireCube(pos, size);
            }
        }
#endif // UNITY_EDITOR
    }
}