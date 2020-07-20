namespace NGUI
{

    using UnityEngine;
    using System.Collections.Generic;

    /// <summary>
    /// Base class for all UI components that should be derived from when creating new widget types.
    /// UIWidget是 UI 组件的基类,使用 UIGeometry 记录了顶点坐标,贴图的 UVs 和 颜色等信息
    /// 给子 UI 以及其他类,提供 widget height depth clolor alpha 等属性
    /// 提供更新 Transform 以及 UIGeometry 的数据方法  UpdateTransform、UpdateGeometry
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
    [AddComponentMenu("NGUI/UI/NGUIWidget")]
    public class NGUIWidget : NGUIRect
    {
        [DoNotObfuscateNGUI]
        public enum Pivot
        {
            TopLeft,
            Top,
            TopRight,
            Left,
            Center,
            Right,
            BottomLeft,
            Bottom,
            BottomRight,
        }

        // Cached and saved values,缓存和保存的数据
        [HideInInspector] [SerializeField] protected Color mColor = Color.white;
        [HideInInspector] [SerializeField] protected Pivot mPivot = Pivot.Center;
        [HideInInspector] [SerializeField] protected int mWidth = 100;
        [HideInInspector] [SerializeField] protected int mHeight = 100;
        [HideInInspector] [SerializeField] protected int mDepth = 0;

        [Tooltip("Custom material, if desired")]
        [HideInInspector]
        [SerializeField]
        protected Material mMat;

        /// <summary>
        /// Notification triggered when the widget's dimensions or position changes.
        /// 当小部件的尺寸或位置发生变化时，会触发通知。
        /// </summary>
        public OnDimensionsChanged onChange;

        public delegate void OnDimensionsChanged();

        /// <summary>
        /// Notification triggered after the widget's buffer has been filled.
        /// 在小部件的缓冲区被填充后触发通知。
        /// </summary>
        public OnPostFillCallback onPostFill;

        public delegate void OnPostFillCallback(NGUIWidget widget, int bufferOffset, BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols);

        /// <summary>
        /// Callback triggered when the widget is about to be renderered (OnWillRenderObject).
        /// NOTE: This property is only exposed for the sake of speed to avoid property execution.
        /// In most cases you will want to use NGUIWidget.onRender instead.
        /// 当小部件即将呈现时触发回调(OnWillRenderObject)。
        /// 注意:为了避免属性执行，此属性只暴露在速度上。
        /// 在大多数情况下，您会希望使用NGUIWidget。onRender代替。
        /// </summary>
        public NGUIDrawCall.OnRenderCallback mOnRender;

        /// <summary>
        /// Set the callback that will be triggered when the widget is being rendered (OnWillRenderObject).
        /// This is where you would set material properties and shader values.
        /// 设置widget被渲染时触发的回调(OnWillRenderObject)。
        /// 这是你设置材质属性和材质值的地方。
        /// </summary>
        public NGUIDrawCall.OnRenderCallback onRender
        {
            get { return mOnRender; }
            set
            {
#if UNITY_FLASH
			if (!(mOnRender == value))
#else
                if (mOnRender != value)
#endif
                {
#if !UNITY_FLASH
                    if (drawCall != null && drawCall.onRender != null && mOnRender != null)
                        drawCall.onRender -= mOnRender;
#endif
                    mOnRender = value;
                    if (drawCall != null) drawCall.onRender += value;
                }
            }
        }

        /// <summary>
        /// If set to 'true', the box collider's dimensions will be adjusted to always match the widget whenever it resizes.
        /// 如果设置为“true”，当小部件调整大小时，对话框碰撞器的尺寸将被调整为始终匹配小部件。
        /// </summary>
        public bool autoResizeBoxCollider = false;

        /// <summary>
        /// Hide the widget if it happens to be off-screen.
        /// 如果小部件恰好不在屏幕上，则隐藏它。
        /// </summary>
        public bool hideIfOffScreen = false;

        [DoNotObfuscateNGUI]
        public enum AspectRatioSource //长宽比
        {
            Free,
            BasedOnWidth,
            BasedOnHeight,
        }

        /// <summary>
        /// Whether the rectangle will attempt to maintain a specific aspect ratio.
        /// 矩形是否试图保持特定的长宽比。
        /// </summary>
        public AspectRatioSource keepAspectRatio = AspectRatioSource.Free;

        /// <summary>
        /// If you want the anchored rectangle to keep a specific aspect ratio, set this value.
        /// 如果您希望锚定的矩形保持特定的长宽比，请设置此值。 
        /// </summary>
        public float aspectRatio = 1f;

        public delegate bool HitCheck(Vector3 worldPos);

        /// <summary>
        /// Custom hit check function. If set, all hit checks (including events) will call this function,
        /// passing the world position. Return 'true' if it's within the bounds of your choice, 'false' otherwise.
        /// 自定义点击检查功能。如果设置，所有命中检查(包括事件)将调用此函数，传递世界位置。如果它在你的选择范围内，返回“真”，否则返回“假”。
        /// </summary>
        public HitCheck hitCheck;

        /// <summary>
        /// Panel that's managing this widget.
        /// 管理此小部件的面板。
        /// </summary>
        [System.NonSerialized] public NGUIPanel panel;

        /// <summary>
        /// Widget's generated geometry.
        /// 生成小部件的几何数据。
        /// </summary>
        [System.NonSerialized] public NGUIGeometry geometry = new NGUIGeometry();

        /// <summary>
        /// If set to 'false', the widget's OnFill function will not be called, letting you define custom geometry at will.
        /// 如果设置为“false”，小部件的OnFill函数将不会被调用，从而允许您随意定义自定义几何图形。
        /// </summary>
        [System.NonSerialized] public bool fillGeometry = true;

        [System.NonSerialized] protected bool mPlayMode = true;
        [System.NonSerialized] protected Vector4 mDrawRegion = new Vector4(0f, 0f, 1f, 1f);
        [System.NonSerialized] Matrix4x4 mLocalToPanel;
        [System.NonSerialized] bool mIsVisibleByAlpha = true; // parent是否可见
        [System.NonSerialized] bool mIsVisibleByPanel = true; // panel是否可见
        [System.NonSerialized] bool mIsInFront = true;
        [System.NonSerialized] float mLastAlpha = 0f; // 上一个alpha值
        [System.NonSerialized] bool mMoved = false;

        /// <summary>
        /// Internal usage -- draw call that's drawing the widget.
        /// 内部使用——绘制小部件的draw调用。
        /// </summary>
        [System.NonSerialized] public NGUIDrawCall drawCall;

        [System.NonSerialized] protected Vector3[] mCorners = new Vector3[4];

        /// <summary>
        /// Draw region alters how the widget looks without modifying the widget's rectangle.
        /// A region is made up of 4 relative values (0-1 range). The order is Left (X), Bottom (Y), Right (Z) and Top (W).
        /// To have a widget's left edge be 30% from the left side, set X to 0.3. To have the widget's right edge be 30%
        /// from the right hand side, set Z to 0.7.
        /// 绘制区域在不修改UI矩形的情况下改变UI的外观,一个区域由 4 个相对值组成(0-1),左下右上.
        /// 要是一个 UI 的左边缘与左边的距离为 30%,请将 X 设置为 0.3.UI 小部件的右边缘与左手边的距离为 30%,将 Z 设置为 0.7
        /// 用来表示一个widget最后渲染的区域（而不改变widget本身的大小）
        /// </summary>
        public Vector4 drawRegion
        {
            get { return mDrawRegion; }
            set
            {
                if (mDrawRegion != value)
                {
                    mDrawRegion = value;
                    if (autoResizeBoxCollider) ResizeCollider();
                    MarkAsChanged(); // 这里会rebuild所属的drawCall
                }
            }
        }

        /// <summary>
        /// Pivot offset in relative coordinates. Bottom-left is (0, 0). Top-right is (1, 1).
        /// 相对坐标中的枢轴偏移量。左下为(0,0)，右上为(1,1)。
        /// </summary>
        public Vector2 pivotOffset
        {
            get { return NGUIMath.GetPivotOffset(pivot); }
        }

        /// <summary>
        /// Widget's width in pixels.
        /// 小部件的宽度(以像素为单位)。
        /// </summary>
        public int width
        {
            get { return mWidth; }
            set
            {
                int min = minWidth;
                if (value < min) value = min;

                if (mWidth != value && keepAspectRatio != AspectRatioSource.BasedOnHeight)
                {
                    if (isAnchoredHorizontally)
                    {
                        if (leftAnchor.target != null && rightAnchor.target != null)
                        {
                            if (mPivot == Pivot.BottomLeft || mPivot == Pivot.Left || mPivot == Pivot.TopLeft)
                            {
                                NGUIMath.AdjustWidget(this, 0f, 0f, value - mWidth, 0f);
                            }
                            else if (mPivot == Pivot.BottomRight || mPivot == Pivot.Right || mPivot == Pivot.TopRight)
                            {
                                NGUIMath.AdjustWidget(this, mWidth - value, 0f, 0f, 0f);
                            }
                            else
                            {
                                int diff = value - mWidth;
                                diff = diff - (diff & 1);
                                if (diff != 0) NGUIMath.AdjustWidget(this, -diff * 0.5f, 0f, diff * 0.5f, 0f);
                            }
                        }
                        else if (leftAnchor.target != null)
                        {
                            NGUIMath.AdjustWidget(this, 0f, 0f, value - mWidth, 0f);
                        }
                        else NGUIMath.AdjustWidget(this, mWidth - value, 0f, 0f, 0f);
                    }
                    else SetDimensions(value, mHeight);
                }
            }
        }

        /// <summary>
        /// Widget's height in pixels.小部件的高度(以像素为单位)。
        /// </summary>
        public int height
        {
            get { return mHeight; }
            set
            {
                int min = minHeight;
                if (value < min) value = min;

                if (mHeight != value && keepAspectRatio != AspectRatioSource.BasedOnWidth)
                {
                    if (isAnchoredVertically)
                    {
                        if (bottomAnchor.target != null && topAnchor.target != null)
                        {
                            if (mPivot == Pivot.BottomLeft || mPivot == Pivot.Bottom || mPivot == Pivot.BottomRight)
                            {
                                NGUIMath.AdjustWidget(this, 0f, 0f, 0f, value - mHeight);
                            }
                            else if (mPivot == Pivot.TopLeft || mPivot == Pivot.Top || mPivot == Pivot.TopRight)
                            {
                                NGUIMath.AdjustWidget(this, 0f, mHeight - value, 0f, 0f);
                            }
                            else
                            {
                                int diff = value - mHeight;
                                diff = diff - (diff & 1);
                                if (diff != 0) NGUIMath.AdjustWidget(this, 0f, -diff * 0.5f, 0f, diff * 0.5f);
                            }
                        }
                        else if (bottomAnchor.target != null)
                        {
                            NGUIMath.AdjustWidget(this, 0f, 0f, 0f, value - mHeight);
                        }
                        else NGUIMath.AdjustWidget(this, 0f, mHeight - value, 0f, 0f);
                    }
                    else SetDimensions(mWidth, value);
                }
            }
        }

        /// <summary>
        /// Color used by the widget.小部件使用的颜色。
        /// </summary>
        public Color color
        {
            get { return mColor; }
            set
            {
                if (mColor != value)
                {
                    bool alphaChange = (mColor.a != value.a);
                    mColor = value;
                    Invalidate(alphaChange);
                }
            }
        }

        /// <summary>
        /// Change the color without affecting the alpha.
        /// 改变颜色而不影响alpha。
        /// </summary>
        public void SetColorNoAlpha(Color c)
        {
            if (mColor.r != c.r || mColor.g != c.g || mColor.b != c.b)
            {
                mColor.r = c.r;
                mColor.g = c.g;
                mColor.b = c.b;
                Invalidate(false);
            }
        }

        /// <summary>
        /// Widget's alpha -- a convenience method.
        /// 小部件的alpha——一个方便的方法。
        /// </summary>
        public override float alpha
        {
            get { return mColor.a; }
            set
            {
                if (mColor.a != value)
                {
                    mColor.a = value;
                    Invalidate(true);
#if UNITY_EDITOR
                    NGUITools.SetDirty(this);
#endif
                }
            }
        }

        /// <summary>
        /// Whether the widget is currently visible.
        /// 一个Widget最终是否可见
        /// </summary>
        public bool isVisible
        {
            get
            {
                return mIsVisibleByPanel && mIsVisibleByAlpha && mIsInFront && finalAlpha > 0.001f &&
                       NGUITools.GetActive(this);
            }
        }

        /// <summary>
        /// Whether the widget has vertices to draw.小部件是否有要绘制的顶点。
        /// </summary>
        public bool hasVertices
        {
            get { return geometry != null && geometry.hasVertices; }
        }

        /// <summary>
        /// Change the pivot point and do not attempt to keep the widget in the same place by adjusting its transform.
        /// 更改轴心点，不要试图通过调整转换将小部件保持在同一位置。
        /// </summary>
        public Pivot rawPivot
        {
            get { return mPivot; }
            set
            {
                if (mPivot != value)
                {
                    mPivot = value;
                    if (autoResizeBoxCollider) ResizeCollider();
                    MarkAsChanged();
                }
            }
        }

        /// <summary>
        /// Set or get the value that specifies where the widget's pivot point should be.
        /// 设置或获取指定小部件轴心点位置的值。
        /// </summary>
        public Pivot pivot
        {
            get { return mPivot; }
            set
            {
                if (mPivot != value)
                {
                    Vector3 before = worldCorners[0];

                    mPivot = value;
                    mChanged = true;

                    Vector3 after = worldCorners[0];

                    Transform t = cachedTransform;
                    Vector3 pos = t.position;
                    float z = t.localPosition.z;
                    pos.x += (before.x - after.x);
                    pos.y += (before.y - after.y);
                    cachedTransform.position = pos;

                    pos = cachedTransform.localPosition;
                    pos.x = Mathf.Round(pos.x);
                    pos.y = Mathf.Round(pos.y);
                    pos.z = z;
                    cachedTransform.localPosition = pos;
                }
            }
        }

        /// <summary>
        /// Depth controls the rendering order -- lowest to highest.
        /// 深度控制渲染顺序——从低到高。不建议在运行时修改 depth
        /// </summary>
        public int depth
        {
            get
            {
                // Experiment with a transform-based depth, uGUI style
                //if (mDepth == int.MinValue)
                //{
                //    int val = cachedTransform.GetSiblingIndex();
                //    NGUIWidget pt = parent as NGUIWidget;
                //    if (pt != null) val += pt.depth;
                //    return val;
                //}
                return mDepth;
            }
            set
            {
                if (mDepth != value)
                {
                    if (panel != null) panel.RemoveWidget(this);
                    mDepth = value;

                    if (panel != null)
                    {
                        panel.AddWidget(this); //每次设置深度,会将该 Widget 重新添加到所属的 panel 中

                        if (!Application.isPlaying)
                        {
                            panel.SortWidgets();
                            panel.RebuildAllDrawCalls();//这个地方会重新生成 drawcall ,在编辑器模式下没关系,但是在运行时,就会非常耗费资源,不建议在运行时修改 depth
                        }
                    }
#if UNITY_EDITOR
                    NGUITools.SetDirty(this);
#endif
                }
            }
        }

        /// <summary>
        /// Raycast depth order on widgets takes the depth of their panel into consideration.
        /// This functionality is used to determine the "final" depth of the widget for drawing and raycasts.
        /// 组件的Raycast深度顺序考虑到面板的深度。
        /// 此功能用于确定绘制和raycast的小部件的“最终”深度。
        /// </summary>
        public int raycastDepth
        {
            get
            {
                if (panel == null) CreatePanel();
                return (panel != null) ? mDepth + panel.depth * 1000 : mDepth;
            }
        }

        /// <summary>
        /// Local space corners of the widget. The order is bottom-left, top-left, top-right, bottom-right.
        /// 小部件的本地空格角。顺序是左下、左上、右上、右下。
        /// </summary>
        public override Vector3[] localCorners
        {
            get
            {
                Vector2 offset = pivotOffset;

                float x0 = -offset.x * mWidth;
                float y0 = -offset.y * mHeight;
                float x1 = x0 + mWidth;
                float y1 = y0 + mHeight;

                mCorners[0] = new Vector3(x0, y0);
                mCorners[1] = new Vector3(x0, y1);
                mCorners[2] = new Vector3(x1, y1);
                mCorners[3] = new Vector3(x1, y0);

                return mCorners;
            }
        }

        /// <summary>
        /// Local width and height of the widget in pixels.
        /// 小部件的本地宽度和高度(以像素为单位)。
        /// </summary>
        public virtual Vector2 localSize
        {
            get
            {
                Vector3[] cr = localCorners;
                return cr[2] - cr[0];
            }
        }

        /// <summary>
        /// Widget's center in local coordinates. Don't forget to transform by the widget's transform.
        /// 小部件的中心在本地坐标中。不要忘记通过小部件的转换进行转换。
        /// </summary>
        public Vector3 localCenter
        {
            get
            {
                Vector3[] cr = localCorners;
                return Vector3.Lerp(cr[0], cr[2], 0.5f);
            }
        }

        /// <summary>
        /// World-space corners of the widget. The order is bottom-left, top-left, top-right, bottom-right.
        /// 小部件的世界空间角。顺序是左下、左上、右上、右下。
        /// </summary>
        public override Vector3[] worldCorners
        {
            get
            {
                Vector2 offset = pivotOffset;

                float x0 = -offset.x * mWidth;
                float y0 = -offset.y * mHeight;
                float x1 = x0 + mWidth;
                float y1 = y0 + mHeight;

                Transform wt = cachedTransform;

                mCorners[0] = wt.TransformPoint(x0, y0, 0f);
                mCorners[1] = wt.TransformPoint(x0, y1, 0f);
                mCorners[2] = wt.TransformPoint(x1, y1, 0f);
                mCorners[3] = wt.TransformPoint(x1, y0, 0f);

                return mCorners;
            }
        }

        /// <summary>
        /// World-space center of the widget.
        /// 小部件的世界空间中心。
        /// </summary>
        public Vector3 worldCenter
        {
            get { return cachedTransform.TransformPoint(localCenter); }
        }

        /// <summary>
        /// Local space region where the actual drawing will take place.
        /// X = left, Y = bottom, Z = right, W = top.
        /// 实际绘制的局部空间区域。X =左，Y =下，Z =右，W =上。
        /// </summary>
        public virtual Vector4 drawingDimensions
        {
            get
            {
                var offset = pivotOffset;
                var x0 = -offset.x * mWidth;
                var y0 = -offset.y * mHeight;
                var x1 = x0 + mWidth;
                var y1 = y0 + mHeight;

                return new Vector4(
                                   mDrawRegion.x == 0f ? x0 : Mathf.Lerp(x0, x1, mDrawRegion.x),
                                   mDrawRegion.y == 0f ? y0 : Mathf.Lerp(y0, y1, mDrawRegion.y),
                                   mDrawRegion.z == 1f ? x1 : Mathf.Lerp(x0, x1, mDrawRegion.z),
                                   mDrawRegion.w == 1f ? y1 : Mathf.Lerp(y0, y1, mDrawRegion.w));
            }
        }

        /// <summary>
        /// Custom material associated with the widget, if any.
        /// 自定义与小部件关联的材质(如果有的话)。
        /// </summary>
        public virtual Material material
        {
            get { return mMat; }
            set
            {
                if (mMat != value)
                {
                    RemoveFromPanel();
                    mMat = value;
                    MarkAsChanged();
                }
            }
        }

        /// <summary>
        /// Texture used by the widget.
        /// 小部件使用的纹理。
        /// </summary>
        public virtual Texture mainTexture
        {
            get
            {
                Material mat = material;
                return (mat != null) ? mat.mainTexture : null;
            }
            set { throw new System.NotImplementedException(GetType() + " has no mainTexture setter"); }
        }

        /// <summary>
        /// Shader is used to create a dynamic material if the widget has no material to work with.
        /// 着色器用于创建一个动态材质，如果小部件没有材质可以使用。
        /// </summary>
        public virtual Shader shader
        {
            get
            {
                Material mat = material;
                return (mat != null) ? mat.shader : null;
            }
            set { throw new System.NotImplementedException(GetType() + " has no shader setter"); }
        }

        /// <summary>
        /// Convenience function that returns 'true' if the widget has a box collider.
        /// 方便函数，如果小部件有一个框碰撞器，它将返回'true'。
        /// </summary>
        public bool hasBoxCollider
        {
            get
            {
#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
			BoxCollider box = collider as BoxCollider;
#else
                BoxCollider box = GetComponent<Collider>() as BoxCollider;
#endif
                if (box != null) return true;
                return GetComponent<BoxCollider2D>() != null;
            }
        }

        /// <summary>
        /// Adjust the widget's dimensions without going through the anchor validation logic.
        /// 在不经过锚验证逻辑的情况下调整小部件的维度。
        /// </summary>
        public void SetDimensions(int w, int h)
        {
            if (mWidth != w || mHeight != h)
            {
                mWidth = w;
                mHeight = h;

                if (keepAspectRatio == AspectRatioSource.BasedOnWidth)
                    mHeight = Mathf.RoundToInt(mWidth / aspectRatio);
                else if (keepAspectRatio == AspectRatioSource.BasedOnHeight)
                    mWidth = Mathf.RoundToInt(mHeight * aspectRatio);
                else if (keepAspectRatio == AspectRatioSource.Free)
                    aspectRatio = mWidth / (float)mHeight;

                mMoved = true;
                if (autoResizeBoxCollider) ResizeCollider();
                MarkAsChanged();
            }
        }

        /// <summary>
        /// Get the sides of the rectangle relative to the specified transform.
        /// The order is left, top, right, bottom.
        /// 获得相对于指定变换的矩形的边。顺序是左、上、右、下。
        /// </summary>
        public override Vector3[] GetSides(Transform relativeTo)
        {
            Vector2 offset = pivotOffset;

            float x0 = -offset.x * mWidth;
            float y0 = -offset.y * mHeight;
            float x1 = x0 + mWidth;
            float y1 = y0 + mHeight;
            float cx = (x0 + x1) * 0.5f;
            float cy = (y0 + y1) * 0.5f;

            Transform trans = cachedTransform;
            mCorners[0] = trans.TransformPoint(x0, cy, 0f);
            mCorners[1] = trans.TransformPoint(cx, y1, 0f);
            mCorners[2] = trans.TransformPoint(x1, cy, 0f);
            mCorners[3] = trans.TransformPoint(cx, y0, 0f);

            if (relativeTo != null)
            {
                for (int i = 0; i < 4; ++i)
                    mCorners[i] = relativeTo.InverseTransformPoint(mCorners[i]);
            }

            return mCorners;
        }

        [System.NonSerialized] int mAlphaFrameID = -1;

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
                UpdateFinalAlpha(frameID);
            }

            return finalAlpha;
        }

        /// <summary>
        /// Force-calculate the final alpha value.
        /// 计算最终的alpha值。最终的alpha值用的是混合的值,如果可见
        /// </summary>
        protected void UpdateFinalAlpha(int frameID)
        {
            if (!mIsVisibleByAlpha || !mIsInFront)
            {
                finalAlpha = 0f;
            }
            else
            {
                NGUIRect pt = parent;
                finalAlpha = (pt != null) ? pt.CalculateFinalAlpha(frameID) * mColor.a : mColor.a;
            }
        }

        /// <summary>
        /// Update the widget's visibility and final alpha.
        /// 更新所有的小部件的可见性和最终alpha。
        /// </summary>
        public override void Invalidate(bool includeChildren)
        {
            mChanged = true;
            mAlphaFrameID = -1;

            if (panel != null)//
            {
                //计算所属的 panel 是否可见
                bool vis = (hideIfOffScreen || panel.hasCumulativeClipping) ? panel.IsVisible(this) : true;
                bool pActive = CalculateCumulativeAlpha(Time.frameCount) > 0.001f;//获取父对象的 alpha 值是否可见
                UpdateVisibility(pActive, vis);//根据父对象以及 Panel对象是否可见,如果可见性改变,会将 mChange 设置为 false,表示需要重新填充 gepmetry
                UpdateFinalAlpha(Time.frameCount);//计算自身最终的 alpha 值,如果最终的 alpha 值发生改变,也会将 mChange 设置为 false,表示需要重新填充 gepmetry
                if (includeChildren) base.Invalidate(true);//如果有需要,调用children的Invalidate。
            }
        }

        /// <summary>
        /// Same as final alpha, except it doesn't take own visibility into consideration. Used by panels.
        /// 和最终alpha一样，只是它不考虑自身的可见性。所使用的面板。
        /// </summary>
        public float CalculateCumulativeAlpha(int frameID)
        {
            NGUIRect pt = parent;
            return (pt != null) ? pt.CalculateFinalAlpha(frameID) * mColor.a : mColor.a;
        }

        /// <summary>
        /// Set the widget's rectangle. XY is the bottom-left corner.
        /// 设置小部件的矩形。XY是左下角。
        /// </summary>
        public override void SetRect(float x, float y, float width, float height)
        {
            Vector2 po = pivotOffset;

            float fx = Mathf.Lerp(x, x + width, po.x);
            float fy = Mathf.Lerp(y, y + height, po.y);

            int finalWidth = Mathf.FloorToInt(width + 0.5f);
            int finalHeight = Mathf.FloorToInt(height + 0.5f);

            if (po.x == 0.5f) finalWidth = ((finalWidth >> 1) << 1);
            if (po.y == 0.5f) finalHeight = ((finalHeight >> 1) << 1);

            Transform t = cachedTransform;
            Vector3 pos = t.localPosition;
            pos.x = Mathf.Floor(fx + 0.5f);
            pos.y = Mathf.Floor(fy + 0.5f);

            if (finalWidth < minWidth) finalWidth = minWidth;
            if (finalHeight < minHeight) finalHeight = minHeight;

            t.localPosition = pos;
            this.width = finalWidth;
            this.height = finalHeight;

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
        /// Adjust the widget's collider size to match the widget's dimensions.
        /// 调整小部件的碰撞器大小以匹配小部件的尺寸。
        /// </summary>
        public void ResizeCollider()
        {
            var bc = GetComponent<BoxCollider>();
            if (bc != null) NGUITools.UpdateWidgetCollider(this, bc);
            else NGUITools.UpdateWidgetCollider(this, GetComponent<BoxCollider2D>());
        }

        /// <summary>
        /// Static widget comparison function used for depth sorting.
        /// 用于深度排序的静态小部件比较函数。
        /// </summary>
        [System.Diagnostics.DebuggerHidden]
        [System.Diagnostics.DebuggerStepThrough]
        static public int FullCompareFunc(NGUIWidget left, NGUIWidget right)
        {
            int val = NGUIPanel.CompareFunc(left.panel, right.panel);
            return (val == 0) ? PanelCompareFunc(left, right) : val;
        }

        /// <summary>
        /// Static widget comparison function used for inter-panel depth sorting.
        /// 用于面板间深度排序的静态小部件比较函数。
        /// </summary>
        [System.Diagnostics.DebuggerHidden]
        [System.Diagnostics.DebuggerStepThrough]
        static public int PanelCompareFunc(NGUIWidget left, NGUIWidget right)
        {
            if (left.mDepth < right.mDepth) return -1;
            if (left.mDepth > right.mDepth) return 1;

            Material leftMat = left.material;
            Material rightMat = right.material;

            if (leftMat == rightMat) return 0;
            if (leftMat == null) return 1;
            if (rightMat == null) return -1;

            return (leftMat.GetInstanceID() < rightMat.GetInstanceID()) ? -1 : 1;
        }

        /// <summary>
        /// Calculate the widget's bounds, optionally making them relative to the specified transform.
        /// 计算小部件的边界，可以选择使其相对于指定的转换。
        /// </summary>
        public Bounds CalculateBounds()
        {
            return CalculateBounds(null);
        }

        /// <summary>
        /// Calculate the widget's bounds, optionally making them relative to the specified transform.
        /// 计算小部件的边界，可以选择使其相对于指定的转换。
        /// </summary>
        public Bounds CalculateBounds(Transform relativeParent)
        {
            if (relativeParent == null)
            {
                Vector3[] corners = localCorners;
                Bounds b = new Bounds(corners[0], Vector3.zero);
                for (int j = 1; j < 4; ++j) b.Encapsulate(corners[j]);
                return b;
            }
            else
            {
                Matrix4x4 toLocal = relativeParent.worldToLocalMatrix;
                Vector3[] corners = worldCorners;
                Bounds b = new Bounds(toLocal.MultiplyPoint3x4(corners[0]), Vector3.zero);
                for (int j = 1; j < 4; ++j) b.Encapsulate(toLocal.MultiplyPoint3x4(corners[j]));
                return b;
            }
        }

        /// <summary>
        /// Mark the widget as changed so that the geometry can be rebuilt.
        /// 将小部件标记为已更改，以便可以重新构建几何图形。
        /// </summary>
        public void SetDirty()
        {
            if (drawCall != null)
            {
                drawCall.isDirty = true;
            }
            else if (isVisible && hasVertices)
            {
                CreatePanel();
            }
        }

        /// <summary>
        /// Remove this widget from the panel.
        /// 从面板中删除此小部件。
        /// </summary>
        public void RemoveFromPanel()
        {
            if (panel != null)
            {
                panel.RemoveWidget(this);
                panel = null;
            }

            drawCall = null;
#if UNITY_EDITOR
            mOldTex = null;
            mOldShader = null;
#endif
        }

#if UNITY_EDITOR
        [System.NonSerialized] Texture mOldTex;
        [System.NonSerialized] Shader mOldShader;

        /// <summary>
        /// This callback is sent inside the editor notifying us that some property has changed.
        /// 这个回调在编辑器中发送，通知我们一些属性已经改变。
        /// </summary>
        protected override void OnValidate()
        {
            if (NGUITools.GetActive(this))
            {
                base.OnValidate();

                if (mWidth < minWidth) mWidth = minWidth;
                if (mHeight < minHeight) mHeight = minHeight;
                if (autoResizeBoxCollider) ResizeCollider();

                // If the texture is changing, we need to make sure to rebuild the draw calls
                if (mOldTex != mainTexture || mOldShader != shader)
                {
                    mOldTex = mainTexture;
                    mOldShader = shader;
                }

                aspectRatio = (keepAspectRatio == AspectRatioSource.Free)
                                  ? (float)mWidth / mHeight
                                  : Mathf.Max(0.01f, aspectRatio);

                if (keepAspectRatio == AspectRatioSource.BasedOnHeight)
                {
                    mWidth = Mathf.RoundToInt(mHeight * aspectRatio);
                }
                else if (keepAspectRatio == AspectRatioSource.BasedOnWidth)
                {
                    mHeight = Mathf.RoundToInt(mWidth / aspectRatio);
                }

                if (!Application.isPlaying)
                {
                    if (panel != null)
                    {
                        panel.RemoveWidget(this);
                        panel = null;
                    }

                    CreatePanel();
                }
            }
            else
            {
                if (mWidth < minWidth) mWidth = minWidth;
                if (mHeight < minHeight) mHeight = minHeight;
            }
        }
#endif

        /// <summary>
        /// Tell the panel responsible for the widget that something has changed and the buffers need to be rebuilt.
        /// 告诉负责该小部件的面板有更改，需要重新构建缓冲区。
        /// </summary>
        public virtual void MarkAsChanged()
        {
            if (NGUITools.GetActive(this))
            {
                mChanged = true;
#if UNITY_EDITOR
                NGUITools.SetDirty(this);
#endif
                // If we're in the editor, update the panel right away so its geometry gets updated.
                if (panel != null && enabled && NGUITools.GetActive(gameObject) && !mPlayMode)
                {
                    SetDirty();
                    CheckLayer();
#if UNITY_EDITOR
                    // Mark the panel as dirty so it gets updated
                    if (material != null) NGUITools.SetDirty(panel.gameObject);
#endif
                }
            }
        }

        /// <summary>
        /// Ensure we have a panel referencing this widget.
        /// 确保我们有一个引用这个UIWidget的UIPanel。
        /// </summary>
        public NGUIPanel CreatePanel()
        {
            if (mStarted && panel == null && enabled && NGUITools.GetActive(gameObject))
            {
                panel = NGUIPanel.Find(cachedTransform, true, cachedGameObject.layer);

                if (panel != null)
                {
                    mParentFound = false;
                    panel.AddWidget(this);
                    CheckLayer();
                    Invalidate(true);
                }
            }

            return panel;
        }

        /// <summary>
        /// Check to ensure that the widget resides on the same layer as its panel.
        /// 检查以确保小部件与其面板位于同一层。
        /// </summary>
        public void CheckLayer()
        {
            if (panel != null && panel.gameObject.layer != gameObject.layer)
            {
                Debug.LogWarning("You can't place widgets on a layer different than the NGUIPanel that manages them.\n" +
                                 "If you want to move widgets to a different layer, parent them to a new panel instead.",
                                 this);
                gameObject.layer = panel.gameObject.layer;
            }
        }

        /// <summary>
        /// Checks to ensure that the widget is still parented to the right panel.
        /// 检查以确保小部件仍然是右面板的父组件。
        /// </summary>
        public override void ParentHasChanged()
        {
            base.ParentHasChanged();

            if (panel != null)
            {
                NGUIPanel p = NGUIPanel.Find(cachedTransform, true, cachedGameObject.layer);

                if (panel != p)
                {
                    RemoveFromPanel();
                    CreatePanel();
                }
            }
        }

        /// <summary>
        /// Remember whether we're in play mode.
        /// 记住我们是否处于游戏模式。
        /// </summary>
        protected override void Awake()
        {
            base.Awake();
            mPlayMode = Application.isPlaying;
        }

        /// <summary>
        /// Mark the widget and the panel as having been changed.
        /// 将小部件和面板标记为已更改。
        /// </summary>
        protected override void OnInit()
        {
            base.OnInit();
            RemoveFromPanel();
            mMoved = true;
            Update();
        }

        /// <summary>
        /// Facilitates upgrading from NGUI 2.6.5 or earlier versions.
        /// 方便从NGUI 2.6.5或更早的版本升级。
        /// </summary>
        protected virtual void UpgradeFrom265()
        {
            Vector3 scale = cachedTransform.localScale;
            mWidth = Mathf.Abs(Mathf.RoundToInt(scale.x));
            mHeight = Mathf.Abs(Mathf.RoundToInt(scale.y));
            NGUITools.UpdateWidgetCollider(gameObject, true);
        }

        /// <summary>
        /// Virtual Start() functionality for widgets.
        /// 小部件的Virtual Start()功能
        /// </summary>
        protected override void OnStart()
        {
#if UNITY_EDITOR
            if (GetComponent<NGUIPanel>() != null)
            {
                Debug.LogError("Widgets and panels should not be on the same object! Widget must be a child of the panel.",
                               this);
            }
            else if (!Application.isPlaying && GetComponents<NGUIWidget>().Length > 1)
            {
                Debug.LogError("You should not place more than one widget on the same object. Weird stuff will happen!",
                               this);
            }
#endif
            CreatePanel();
        }

        /// <summary>
        /// Update the anchored edges and ensure the widget is registered with a panel.
        /// 更新锚定的边缘并确保小部件注册到面板中。
        /// </summary>
        protected override void OnAnchor()
        {
            float lt, bt, rt, tt;
            Transform trans = cachedTransform;
            Transform parent = trans.parent;
            Vector3 pos = trans.localPosition;
            Vector2 pvt = pivotOffset;

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
                    mIsInFront = true;
                }
                else
                {
                    // Anchored to a single transform
                    Vector3 lp = GetLocalPos(leftAnchor, parent);
                    lt = lp.x + leftAnchor.absolute;
                    bt = lp.y + bottomAnchor.absolute;
                    rt = lp.x + rightAnchor.absolute;
                    tt = lp.y + topAnchor.absolute;
                    mIsInFront = (!hideIfOffScreen || lp.z >= 0f);
                }
            }
            else
            {
                mIsInFront = true;

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
                else lt = pos.x - pvt.x * mWidth;

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
                else rt = pos.x - pvt.x * mWidth + mWidth;

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
                else bt = pos.y - pvt.y * mHeight;

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
                else tt = pos.y - pvt.y * mHeight + mHeight;
            }

            // Calculate the new position, width and height
            Vector3 newPos = new Vector3(Mathf.Lerp(lt, rt, pvt.x), Mathf.Lerp(bt, tt, pvt.y), pos.z);
            newPos.x = Mathf.Round(newPos.x);
            newPos.y = Mathf.Round(newPos.y);

            int w = Mathf.FloorToInt(rt - lt + 0.5f);
            int h = Mathf.FloorToInt(tt - bt + 0.5f);

            // Maintain the aspect ratio if requested and possible
            if (keepAspectRatio != AspectRatioSource.Free && aspectRatio != 0f)
            {
                if (keepAspectRatio == AspectRatioSource.BasedOnHeight)
                {
                    w = Mathf.RoundToInt(h * aspectRatio);
                }
                else h = Mathf.RoundToInt(w / aspectRatio);
            }

            // Don't let the width and height get too small
            if (w < minWidth) w = minWidth;
            if (h < minHeight) h = minHeight;

            // Update the position if it has changed
            if (Vector3.SqrMagnitude(pos - newPos) > 0.001f)
            {
                cachedTransform.localPosition = newPos;
                if (mIsInFront) mChanged = true;
            }

            // Update the width and height if it has changed
            if (mWidth != w || mHeight != h)
            {
                mWidth = w;
                mHeight = h;
                if (mIsInFront) mChanged = true;
                if (autoResizeBoxCollider) ResizeCollider();
            }
        }

        /// <summary>
        /// Ensure we have a panel to work with.
        /// 确保有一个 UIPanel 在工作
        /// </summary>
        protected override void OnUpdate()
        {
            if (panel == null) CreatePanel();
#if UNITY_EDITOR
            else if (!mPlayMode) ParentHasChanged();
#endif
        }

#if !UNITY_EDITOR
	/// <summary>
	/// Mark the UI as changed when returning from paused state.
	/// </summary>

	void OnApplicationPause (bool paused) { if (!paused) MarkAsChanged(); }
#endif

        /// <summary>
        /// Clear references.
        /// 清空引用
        /// </summary>
        protected override void OnDisable()
        {
            RemoveFromPanel();
            base.OnDisable();
        }

        /// <summary>
        /// Unregister this widget.
        /// 注销这个小部件。
        /// </summary>
        void OnDestroy()
        {
            if (geometry.verts.Buffer != null && geometry.verts.Buffer.Length > 0)
            {
                CachedGeometries.PushToCachedGeometries(geometry);
            }
            RemoveFromPanel();
        }

#if UNITY_EDITOR
        static int mHandles = -1;

        /// <summary>
        /// Whether widgets will show handles with the Move Tool, or just the View Tool.
        /// 小部件是通过移动工具显示手柄，还是仅仅通过视图工具显示。
        /// </summary>
        static public bool showHandlesWithMoveTool
        {
            get
            {
                if (mHandles == -1)
                {
                    mHandles = UnityEditor.EditorPrefs.GetInt("NGUI Handles", 1);
                }

                return (mHandles == 1);
            }
            set
            {
                int val = value ? 1 : 0;

                if (mHandles != val)
                {
                    mHandles = val;
                    UnityEditor.EditorPrefs.SetInt("NGUI Handles", mHandles);
                }
            }
        }

        /// <summary>
        /// Whether the widget should have some form of handles shown.
        /// 小部件是否应该显示某种形式的句柄。
        /// </summary>
        static public bool showHandles
        {
            get
            {
#if UNITY_4_3 || UNITY_4_5
			if (showHandlesWithMoveTool)
			{
				return UnityEditor.Tools.current == UnityEditor.Tool.Move;
			}
			return UnityEditor.Tools.current == UnityEditor.Tool.View;
#else
                return UnityEditor.Tools.current == UnityEditor.Tool.Rect;
#endif
            }
        }

        /// <summary>
        /// Draw some selectable gizmos.
        /// 画一些可选择的线框。
        /// </summary>
        void OnDrawGizmos()
        {
            if (isVisible && NGUITools.GetActive(this))
            {
                if (UnityEditor.Selection.activeGameObject == gameObject && showHandles) return;

                Color outline = new Color(1f, 1f, 1f, 0.2f);

                float adjustment = (root != null) ? 0.05f : 0.001f;
                Vector2 offset = pivotOffset;
                Vector3 center = new Vector3(mWidth * (0.5f - offset.x), mHeight * (0.5f - offset.y),
                                             -mDepth * adjustment);
                Vector3 size = new Vector3(mWidth, mHeight, 1f);

                // Draw the gizmo
                Gizmos.matrix = cachedTransform.localToWorldMatrix;
                Gizmos.color = (UnityEditor.Selection.activeGameObject == gameObject) ? Color.white : outline;
                Gizmos.DrawWireCube(center, size);

                // Make the widget selectable
                size.z = 0.01f;
                Gizmos.color = Color.clear;
                Gizmos.DrawCube(center, size);
            }
        }
#endif // UNITY_EDITOR

        /// <summary>
        /// Update the widget's visibility state.
        /// 更新小部件的可见性状态。
        /// </summary>
        public bool UpdateVisibility(bool visibleByAlpha, bool visibleByPanel)
        {
            if (mIsVisibleByAlpha != visibleByAlpha || mIsVisibleByPanel != visibleByPanel)
            {
                mChanged = true;
                mIsVisibleByAlpha = visibleByAlpha;
                mIsVisibleByPanel = visibleByPanel;
                return true;
            }

            return false;
        }

        int mMatrixFrame = -1;
        Vector3 mOldV0;
        Vector3 mOldV1;

        /// <summary>
        /// Check to see if the widget has moved relative to the panel that manages it
        /// 检查小部件是否相对于管理它的面板移动了.
        /// 判断 widget 相对于所属的 panel 是否发生移动,
        /// 如果发生移动需要重新填充顶点信息,或者说更新 widget 到 panel 的顶点变换矩阵,对应的是geometry.ApplyTransform,在UpdateGeometry中实现
        /// </summary>
        public bool UpdateTransform(int frame)
        {
            Transform trans = cachedTransform;
            mPlayMode = Application.isPlaying;

#if UNITY_EDITOR
            if (mMoved || !mPlayMode)
#else
		if (mMoved)
#endif
            {
                mMoved = true;//表示发生了位移
                mMatrixFrame = -1;
                trans.hasChanged = false;
                Vector2 offset = pivotOffset;

                float x0 = -offset.x * mWidth;
                float y0 = -offset.y * mHeight;
                float x1 = x0 + mWidth;
                float y1 = y0 + mHeight;

                mOldV0 = panel.worldToLocal.MultiplyPoint3x4(trans.TransformPoint(x0, y0, 0f));
                mOldV1 = panel.worldToLocal.MultiplyPoint3x4(trans.TransformPoint(x1, y1, 0f));
            }
            else if (!panel.widgetsAreStatic && trans.hasChanged)//transform.hasChanged为true（transform发生改变），并且位移量（世界坐标）超过0.000001f
            {
                mMatrixFrame = -1;
                trans.hasChanged = false;
                Vector2 offset = pivotOffset;

                float x0 = -offset.x * mWidth;
                float y0 = -offset.y * mHeight;
                float x1 = x0 + mWidth;
                float y1 = y0 + mHeight;

                Vector3 v0 = panel.worldToLocal.MultiplyPoint3x4(trans.TransformPoint(x0, y0, 0f));
                Vector3 v1 = panel.worldToLocal.MultiplyPoint3x4(trans.TransformPoint(x1, y1, 0f));
                
                if (Vector3.SqrMagnitude(mOldV0 - v0) > 0.000001f ||
                    Vector3.SqrMagnitude(mOldV1 - v1) > 0.000001f)
                {
                    mMoved = true;
                    mOldV0 = v0;
                    mOldV1 = v1;
                }
            }

            // Notify the listeners
            if (mMoved && onChange != null) onChange();
            return mMoved || mChanged;//mMoved = true;//表示发生了位移
        }

        /// <summary>
        /// Update the widget and fill its geometry if necessary. Returns whether something was changed.
        /// 如果需要，更新小部件并填充其几何图形数据。返回是否更改了某些内容。
        /// UIWidget 最重要的方法,更新并缓存几何信息,顶点,UV,颜色
        /// </summary>
        public bool UpdateGeometry(int frame)
        {
            // Has the alpha changed? 计算透明值
            float finalAlpha = CalculateFinalAlpha(frame);
            if (mIsVisibleByAlpha && mLastAlpha != finalAlpha) mChanged = true;
            mLastAlpha = finalAlpha;

            if (mChanged)//需要判断widget 最终是否可见
            {
                if (mIsVisibleByAlpha && finalAlpha > 0.001f && shader != null)
                {
                    bool hadVertices = geometry.hasVertices;

                    if (fillGeometry)//用于控制是否由子 UI 填充几何信息
                    {
                        geometry.Clear();
                        OnFill(geometry.verts, geometry.uvs, geometry.cols);//（填充顶点、uv和颜色）
                    }

                    if (geometry.hasVertices)
                    {
                        // Want to see what's being filled? Uncomment this line.想看看填满了什么吗?
                        //Debug.Log("Fill " + name + " (" + Time.frameCount + ")");

                        if (mMatrixFrame != frame)
                        {
                            mLocalToPanel = panel.worldToLocal * cachedTransform.localToWorldMatrix;
                            mMatrixFrame = frame;
                        }

                        geometry.ApplyTransform(mLocalToPanel, panel.generateNormals);
                        mMoved = false;
                        mChanged = false;
                        return true;
                    }

                    mChanged = false;
                    return hadVertices;
                }
                else if (geometry.hasVertices)
                {
                    if (fillGeometry) geometry.Clear();
                    mMoved = false;
                    mChanged = false;
                    return true;
                }
            }
            else if (mMoved && geometry.hasVertices)//当前 windget 只变换了移动,则重新缓存移动的顶点数据信息
            {
                // Want to see what's being moved? Uncomment this line.
                //Debug.Log("Moving " + name + " (" + Time.frameCount + ")");

                if (mMatrixFrame != frame)
                {
                    mLocalToPanel = panel.worldToLocal * cachedTransform.localToWorldMatrix;
                    mMatrixFrame = frame;
                }

                geometry.ApplyTransform(mLocalToPanel, panel.generateNormals);//更新顶点变换矩阵
                mMoved = false;
                mChanged = false;
                return true;
            }

            mMoved = false;
            mChanged = false;
            return false;
        }

        /// <summary>
        /// Append the local geometry buffers to the specified ones.
        /// 将本地几何缓冲区附加到指定的缓冲区。
        /// </summary>
        public void WriteToBuffers(BetterList<Vector3> v, BetterList<Vector2> u, BetterList<Color32> c, BetterList<Vector3> n, BetterList<Vector4> t,
                                   BetterList<Vector4> u2)
        {
            geometry.WriteToBuffers(v, u, c, n, t, u2);
        }

        /// <summary>
        /// Make the widget pixel-perfect.
        /// 让小部件像素完美。
        /// </summary>
        virtual public void MakePixelPerfect()
        {
            Vector3 pos = cachedTransform.localPosition;
            pos.z = Mathf.Round(pos.z);
            pos.x = Mathf.Round(pos.x);
            pos.y = Mathf.Round(pos.y);
            cachedTransform.localPosition = pos;

            Vector3 ls = cachedTransform.localScale;
            cachedTransform.localScale = new Vector3(Mathf.Sign(ls.x), Mathf.Sign(ls.y), 1f);
        }

        /// <summary>
        /// Minimum allowed width for this widget.
        /// 此小部件允许的最小宽度。
        /// </summary>
        virtual public int minWidth
        {
            get { return 2; }
        }

        /// <summary>
        /// Minimum allowed height for this widget.
        /// 此小部件允许的最小高度。
        /// </summary>
        virtual public int minHeight
        {
            get { return 2; }
        }

        /// <summary>
        /// Dimensions of the sprite's border, if any.
        /// 精灵的边界尺寸(如果有的话)。
        /// </summary>
        virtual public Vector4 border
        {
            get { return Vector4.zero; }
            set { }
        }

        /// <summary>
        /// Virtual function called by the NGUIPanel that fills the buffers.
        /// 由NGUIPanel调用的填充缓冲区的虚函数。
        /// </summary>
        virtual public void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color32> cols)
        {
            // Call this in your derived classes:
            //if (onPostFill != null)
            //	onPostFill(this, verts.size, verts, uvs, cols);
        }
    }
}