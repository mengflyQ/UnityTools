namespace NGUI
{
    using UnityEngine;

    /// <summary>
    /// Abstract UI rectangle containing functionality common to both panels and widgets.
    /// A UI rectangle contains 4 anchor points (one for each side), and it ensures that they are updated in the proper order.
    /// 抽象的UI矩形，包含面板和小部件共同的功能,更新所有 UI 的位置,相对位置等信息
    /// 一个UI矩形包含4个锚点(每边一个)，它确保它们按适当的顺序更新。
    /// </summary>

    public abstract class NGUIRect : MonoBehaviour
    {
        /// <summary>
        /// 锚点
        /// </summary>
        [System.Serializable]
        public class AnchorPoint
        {
            public Transform target;
            public float relative = 0f;
            public int absolute = 0;

            [System.NonSerialized] public NGUIRect rect;

            [System.NonSerialized] public Camera targetCam;

            public AnchorPoint()
            {
            }

            public AnchorPoint(float relative)
            {
                this.relative = relative;
            }

            /// <summary>
            /// Convenience function that sets the anchor's values.
            /// 设定锚点的值 0,0.5,1
            /// </summary>
            public void Set(float relative, float absolute)
            {
                this.relative = relative;
                this.absolute = Mathf.FloorToInt(absolute + 0.5f);
            }

            /// <summary>
            /// Convenience function that sets the anchor's values.
            /// </summary>
            public void Set(Transform target, float relative, float absolute)
            {
                this.target = target;
                this.relative = relative;
                this.absolute = Mathf.FloorToInt(absolute + 0.5f);
            }

            /// <summary>
            /// Set the anchor's value to the nearest of the 3 possible choices of (left, center, right) or (bottom, center, top).
            /// 将锚定值设置为3个可能选项(左、中、右)或(底、中、上)中最近的值。
            /// </summary>
            public void SetToNearest(float abs0, float abs1, float abs2)
            {
                SetToNearest(0f, 0.5f, 1f, abs0, abs1, abs2);
            }

            /// <summary>
            /// Set the anchor's value given the 3 possible anchor combinations. Chooses the one with the smallest absolute offset.
            /// 给定3种可能的锚组合，设置锚的值。选择具有最小的绝对偏移量。
            /// </summary>
            public void SetToNearest(float rel0, float rel1, float rel2, float abs0, float abs1, float abs2)
            {
                float a0 = Mathf.Abs(abs0);
                float a1 = Mathf.Abs(abs1);
                float a2 = Mathf.Abs(abs2);

                if (a0 < a1 && a0 < a2) Set(rel0, abs0);
                else if (a1 < a0 && a1 < a2) Set(rel1, abs1);
                else Set(rel2, abs2);
            }

            /// <summary>
            /// Set the anchor's absolute coordinate relative to the specified parent, keeping the relative setting intact.
            /// 设置锚点相对于指定父节点的绝对坐标，保持相对设置不变。
            /// </summary>
            public void SetHorizontal(Transform parent, float localPos)
            {
                if (rect)
                {
                    Vector3[] sides = rect.GetSides(parent);
                    float targetPos = Mathf.Lerp(sides[0].x, sides[2].x, relative);
                    absolute = Mathf.FloorToInt(localPos - targetPos + 0.5f);
                }
                else
                {
                    Vector3 targetPos = target.position;
                    if (parent != null) targetPos = parent.InverseTransformPoint(targetPos);
                    absolute = Mathf.FloorToInt(localPos - targetPos.x + 0.5f);
                }
            }

            /// <summary>
            /// Set the anchor's absolute coordinate relative to the specified parent, keeping the relative setting intact.
            /// 设置锚点相对于指定父节点的绝对坐标，保持相对设置不变。
            /// </summary>
            public void SetVertical(Transform parent, float localPos)
            {
                if (rect)
                {
                    Vector3[] sides = rect.GetSides(parent);
                    float targetPos = Mathf.Lerp(sides[3].y, sides[1].y, relative);
                    absolute = Mathf.FloorToInt(localPos - targetPos + 0.5f);
                }
                else
                {
                    Vector3 targetPos = target.position;
                    if (parent != null) targetPos = parent.InverseTransformPoint(targetPos);
                    absolute = Mathf.FloorToInt(localPos - targetPos.y + 0.5f);
                }
            }

            /// <summary>
            /// Convenience function that returns the sides the anchored point is anchored to.
            /// 方便函数，返回锚点所锚定的边。
            /// </summary>
            public Vector3[] GetSides(Transform relativeTo)
            {
                if (target != null)
                {
                    if (rect != null) return rect.GetSides(relativeTo);
#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
				if (target.camera != null) return target.camera.GetSides(relativeTo);
#else
                    var cam = target.GetComponent<Camera>();
                    if (cam != null) return cam.GetSides(relativeTo);
#endif
                }

                return null;
            }
        }

        /// <summary>
        /// Left side anchor.
        /// 左锚。
        /// </summary>
        public AnchorPoint leftAnchor = new AnchorPoint();

        /// <summary>
        /// Right side anchor.
        /// 右锚。
        /// </summary>
        public AnchorPoint rightAnchor = new AnchorPoint(1f);

        /// <summary>
        /// Bottom side anchor.
        /// 下锚
        /// </summary>
        public AnchorPoint bottomAnchor = new AnchorPoint();

        /// <summary>
        /// Top side anchor.
        /// 上锚
        /// </summary>
        public AnchorPoint topAnchor = new AnchorPoint(1f);

        [DoNotObfuscateNGUI]
        public enum AnchorUpdate
        {
            OnEnable,
            OnUpdate,
            OnStart,
        }

        /// <summary>
        /// Whether anchors will be recalculated on every update.
        /// 是否在每次更新时重新计算锚。
        /// </summary>
        public AnchorUpdate updateAnchors = AnchorUpdate.OnUpdate;

        [System.NonSerialized] protected GameObject mGo;
        [System.NonSerialized] protected Transform mTrans;
        [System.NonSerialized] protected BetterList<NGUIRect> mChildren = new BetterList<NGUIRect>();
        [System.NonSerialized] protected bool mChanged = true;
        [System.NonSerialized] protected bool mParentFound = false;
        [System.NonSerialized] bool mUpdateAnchors = true;
        [System.NonSerialized] int mUpdateFrame = -1;
        [System.NonSerialized] bool mAnchorsCached = false;
        [System.NonSerialized] NGUIRoot mRoot;
        [System.NonSerialized] NGUIRect mParent;
        [System.NonSerialized] bool mRootSet = false;
        [System.NonSerialized] protected Camera mCam;

        // Marking it as NonSerialized will cause widgets to disappear when code recompiles in edit mode
        protected bool mStarted = false;

        /// <summary>
        /// Final calculated alpha.
        /// 最后计算出透明值。
        /// </summary>
        [System.NonSerialized] public float finalAlpha = 1f; // 最终的alpha值，不等同于localAlpha

        /// <summary>
        /// Game object gets cached for speed. Can't simply return 'mGo' set in Awake because this function may be called on a prefab.
        /// 缓存对象
        /// </summary>
        public GameObject cachedGameObject
        {
            get
            {
                if (mGo == null) mGo = gameObject;
                return mGo;
            }
        }

        /// <summary>
        /// Transform gets cached for speed. Can't simply return 'mTrans' set in Awake because this function may be called on a prefab.
        /// 缓存对象的Transform
        /// </summary>
        public Transform cachedTransform
        {
            get
            {
                if (mTrans == null) mTrans = transform;
                return mTrans;
            }
        }

        /// <summary>
        /// Camera used by anchors.
        /// 锚点相机
        /// </summary>
        public Camera anchorCamera
        {
            get
            {
                if (!mCam || !mAnchorsCached) ResetAnchors();
                return mCam;
            }
        }

        /// <summary>
        /// Whether the rectangle is currently anchored fully on all sides.
        /// 矩形当前是否全部锚定。
        /// </summary>
        public bool isFullyAnchored
        {
            get { return leftAnchor.target && rightAnchor.target && topAnchor.target && bottomAnchor.target; }
        }

        /// <summary>
        /// Whether the rectangle is anchored horizontally.
        /// 矩形是否水平锚定。
        /// </summary>
        public virtual bool isAnchoredHorizontally
        {
            get { return leftAnchor.target || rightAnchor.target; }
        }

        /// <summary>
        /// Whether the rectangle is anchored vertically.
        /// 矩形是否垂直锚定。
        /// </summary>
        public virtual bool isAnchoredVertically
        {
            get { return bottomAnchor.target || topAnchor.target; }
        }

        /// <summary>
        /// Whether the rectangle can be anchored.
        /// 该矩形是否可以锚定。
        /// </summary>
        public virtual bool canBeAnchored
        {
            get { return true; }
        }

        /// <summary>
        /// Get the rectangle's parent, if any.
        /// 获取矩形的父元素(如果有的话)。
        /// </summary>
        public NGUIRect parent
        {
            get
            {
                if (!mParentFound)
                {
                    mParentFound = true;
                    mParent = NGUITools.FindInParents<NGUIRect>(cachedTransform.parent);
                }

                return mParent;
            }
        }

        /// <summary>
        /// Get the root object, if any.
        /// 如果有的话，获取根对象。
        /// </summary>
        public NGUIRoot root
        {
            get
            {
                if (parent != null) return mParent.root;

                if (!mRootSet)
                {
                    mRootSet = true;
                    mRoot = NGUITools.FindInParents<NGUIRoot>(cachedTransform);
                }

                return mRoot;
            }
        }

        /// <summary>
        /// Returns 'true' if the widget is currently anchored on any side.
        /// 如果小部件当前锚定在任何一边，则返回“true”。
        /// </summary>
        public bool isAnchored
        {
            get
            {
                return (leftAnchor.target || rightAnchor.target || topAnchor.target || bottomAnchor.target) &&
                       canBeAnchored;
            }
        }

        /// <summary>
        /// Local alpha, not relative to anything.
        /// 局部alpha，不是相对于任何东西。
        /// </summary>
        public abstract float alpha { get; set; }

        /// <summary>
        /// Get the final cumulative alpha.
        /// 得到最终的累积alpha。
        /// </summary>
        public abstract float CalculateFinalAlpha(int frameID);

        /// <summary>
        /// Local-space corners of the UI rectangle. The order is bottom-left, top-left, top-right, bottom-right.
        /// UI矩形的局部空间角。顺序是左下、左上、右上、右下。
        /// </summary>
        public abstract Vector3[] localCorners { get; }

        /// <summary>
        /// World-space corners of the UI rectangle. The order is bottom-left, top-left, top-right, bottom-right.
        /// UI矩形的世界空间角。顺序是左下、左上、右上、右下。
        /// </summary>
        public abstract Vector3[] worldCorners { get; }

        /// <summary>
        /// Helper function that returns the distance to the camera's directional vector hitting the panel's plane.
        /// 帮助函数，返回相机的方向向量击中面板平面的距离。
        /// </summary>
        protected float cameraRayDistance
        {
            get
            {
                if (anchorCamera == null) return 0f;

#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
			if (!mCam.isOrthoGraphic)
#else
                if (!mCam.orthographic)
#endif
                {
                    Transform t = cachedTransform;
                    Transform ct = mCam.transform;
                    Plane p = new Plane(t.rotation * Vector3.back, t.position);
                    Ray ray = new Ray(ct.position, ct.rotation * Vector3.forward);
                    float dist;
                    if (p.Raycast(ray, out dist)) return dist;
                }

                return Mathf.Lerp(mCam.nearClipPlane, mCam.farClipPlane, 0.5f);
            }
        }

        /// <summary>
        /// Sets the local 'changed' flag, indicating that some parent value(s) are now be different, such as alpha for example.
        /// 设置本地的“changed”标志，表示一些父值现在是不同的，比如alpha。
        /// </summary>
        public virtual void Invalidate(bool includeChildren)
        {
            mChanged = true;
            if (includeChildren)
                for (int i = 0; i < mChildren.Size; ++i)
                    mChildren.Buffer[i].Invalidate(true);
        }

        // Temporary variable to avoid GC allocation,临时变量，以避免GC分配
        static protected Vector3[] mSides = new Vector3[4];

        /// <summary>
        /// Get the sides of the rectangle relative to the specified transform.
        /// The order is left, top, right, bottom.
        /// 获得相对于指定变换的矩形的边。
        /// 顺序是左、上、右、下。
        /// </summary>
        public virtual Vector3[] GetSides(Transform relativeTo)
        {
            if (anchorCamera != null) return mCam.GetSides(cameraRayDistance, relativeTo);

            Vector3 pos = cachedTransform.position;
            for (int i = 0; i < 4; ++i)
                mSides[i] = pos;

            if (relativeTo != null)
            {
                for (int i = 0; i < 4; ++i)
                    mSides[i] = relativeTo.InverseTransformPoint(mSides[i]);
            }

            return mSides;
        }

        /// <summary>
        /// Helper function that gets the specified anchor's position relative to the chosen transform.
        /// 获取指定锚点相对于所选转换的位置的辅助函数。
        /// </summary>
        protected Vector3 GetLocalPos(AnchorPoint ac, Transform trans)
        {
            if (ac.targetCam == null) FindCameraFor(ac);
            if (anchorCamera == null || ac.targetCam == null)
                return cachedTransform.localPosition;

            Rect rect = ac.targetCam.rect;
            Vector3 viewPos = ac.targetCam.WorldToViewportPoint(ac.target.position);
            Vector3 pos = new Vector3((viewPos.x * rect.width) + rect.x, (viewPos.y * rect.height) + rect.y,
                                          viewPos.z);
            pos = mCam.ViewportToWorldPoint(pos);
            if (trans != null) pos = trans.InverseTransformPoint(pos);
            pos.x = Mathf.Floor(pos.x + 0.5f);
            pos.y = Mathf.Floor(pos.y + 0.5f);
            return pos;
        }

#if UNITY_EDITOR
        [System.NonSerialized] bool mEnabled = false;
#endif

        /// <summary>
        /// Automatically find the parent rectangle.
        /// 自动找到父矩形。
        /// </summary>
        protected virtual void OnEnable()
        {
#if UNITY_EDITOR
            mEnabled = true;
#endif
            mUpdateFrame = -1;

            if (updateAnchors == AnchorUpdate.OnEnable)
            {
                mAnchorsCached = false;
                mUpdateAnchors = true;
            }

            if (mStarted) OnInit();
            mUpdateFrame = -1;
        }

        /// <summary>
        /// Automatically find the parent rectangle.
        /// 自动找到父矩形。
        /// </summary>
        protected virtual void OnInit()
        {
            mChanged = true;
            mRootSet = false;
            mParentFound = false;
            if (parent != null) mParent.mChildren.Add(this);
        }

        /// <summary>
        /// Clear the parent rectangle reference.
        /// 清除父矩形引用。
        /// </summary>
        protected virtual void OnDisable()
        {
#if UNITY_EDITOR
            mEnabled = false;
#endif
            if (mParent) mParent.mChildren.Remove(this);
            mParent = null;
            mRoot = null;
            mRootSet = false;
            mParentFound = false;
        }

        /// <summary>
        /// Reset 'mStarted' as Unity remembers its value. It can't be marked as [NonSerialized] because then
        /// Unity edit mode stops working properly and code recompile causes widgets to disappear.
        /// 重置'mStarted'，因为Unity会记住它的值。它不能被标记为[非序列化]，因为这样Unity编辑模式就会停止正常工作，代码重新编译会导致小部件消失。
        /// </summary>
        protected virtual void Awake()
        {
#if UNITY_2018_3_OR_NEWER
            NGUITools.CheckForPrefabStage(gameObject);
#endif

            mStarted = false;
            mGo = gameObject;
            mTrans = transform;
        }

        /// <summary>
        /// Set anchor rect references on start.
        /// 在开始时设置锚点rect引用。
        /// </summary>
        protected void Start()
        {
            mStarted = true;
            OnInit();
            OnStart();
        }

        /// <summary>
        /// Rectangles need to update in a specific order -- parents before children.
        /// When deriving from this class, override its OnUpdate() function instead.
        /// 矩形需要按照特定的顺序更新——父元素在子元素之前。从这个类派生时，重写它的OnUpdate()函数。
        /// </summary>
        public void Update()
        {
            if (!mCam)
            {
                ResetAndUpdateAnchors();
                mUpdateFrame = -1;
            }
            else if (!mAnchorsCached) ResetAnchors();

            int frame = Time.frameCount;

#if UNITY_EDITOR
            if (mUpdateFrame != frame || !Application.isPlaying)
#else
		if (mUpdateFrame != frame)
#endif
            {
#if UNITY_EDITOR
                if (updateAnchors == AnchorUpdate.OnUpdate || mUpdateAnchors || !Application.isPlaying)
#else
			if (updateAnchors == AnchorUpdate.OnUpdate || mUpdateAnchors)
#endif
                    UpdateAnchorsInternal(frame);

                // Continue with the update
                OnUpdate();
            }
        }

        /// <summary>
        /// Update anchors.
        /// 更新锚点
        /// </summary>
        protected void UpdateAnchorsInternal(int frame)
        {
            mUpdateFrame = frame;
            mUpdateAnchors = false;

            bool anchored = false;

            if (leftAnchor.target)
            {
                anchored = true;
                if (leftAnchor.rect != null && leftAnchor.rect.mUpdateFrame != frame)
                    leftAnchor.rect.Update();
            }

            if (bottomAnchor.target)
            {
                anchored = true;
                if (bottomAnchor.rect != null && bottomAnchor.rect.mUpdateFrame != frame)
                    bottomAnchor.rect.Update();
            }

            if (rightAnchor.target)
            {
                anchored = true;
                if (rightAnchor.rect != null && rightAnchor.rect.mUpdateFrame != frame)
                    rightAnchor.rect.Update();
            }

            if (topAnchor.target)
            {
                anchored = true;
                if (topAnchor.rect != null && topAnchor.rect.mUpdateFrame != frame)
                    topAnchor.rect.Update();
            }

            // Update the dimensions using anchors
            if (anchored) OnAnchor();
        }

        /// <summary>
        /// Manually update anchored sides.
        /// 手动更新锚定的边。
        /// </summary>
        public void UpdateAnchors()
        {
            if (isAnchored)
            {
                mUpdateFrame = -1;
                mUpdateAnchors = true;
                UpdateAnchorsInternal(Time.frameCount);
            }
        }

        /// <summary>
        /// Update the dimensions of the rectangle using anchor points.
        /// 使用定位点更新矩形的尺寸。
        /// </summary>
        protected abstract void OnAnchor();

        /// <summary>
        /// Anchor this rectangle to the specified transform.
        /// Note that this function will not keep the rectangle's current dimensions, but will instead assume the target's dimensions.
        /// 将此矩形固定到指定的转换。注意，此函数不会保留矩形的当前维度，而是假设目标的维度。
        /// </summary>
        public void SetAnchor(Transform t)
        {
            leftAnchor.target = t;
            rightAnchor.target = t;
            topAnchor.target = t;
            bottomAnchor.target = t;

            ResetAnchors();
            UpdateAnchors();
        }

        /// <summary>
        /// Anchor this rectangle to the specified transform.
        /// Note that this function will not keep the rectangle's current dimensions, but will instead assume the target's dimensions.
        /// ///将此矩形固定到指定的转换。
        ///注意，此函数不会保留矩形的当前维度，而是假设目标的维度。
        /// </summary>
        public void SetAnchor(GameObject go)
        {
            Transform t = (go != null) ? go.transform : null;

            leftAnchor.target = t;
            rightAnchor.target = t;
            topAnchor.target = t;
            bottomAnchor.target = t;

            ResetAnchors();
            UpdateAnchors();
        }

        /// <summary>
        /// Anchor this rectangle to the specified transform.
        /// 将此矩形锚定到指定的转换。
        /// </summary>
        public void SetAnchor(GameObject go, int left, int bottom, int right, int top)
        {
            Transform t = (go != null) ? go.transform : null;

            leftAnchor.target = t;
            rightAnchor.target = t;
            topAnchor.target = t;
            bottomAnchor.target = t;

            leftAnchor.relative = 0f;
            rightAnchor.relative = 1f;
            bottomAnchor.relative = 0f;
            topAnchor.relative = 1f;

            leftAnchor.absolute = left;
            rightAnchor.absolute = right;
            bottomAnchor.absolute = bottom;
            topAnchor.absolute = top;

            ResetAnchors();
            UpdateAnchors();
        }

        /// <summary>
        /// Anchor this rectangle to the specified transform.
        /// 将此矩形锚定到指定的转换。
        /// </summary>
        public void SetAnchor(GameObject go, float left, float bottom, float right, float top)
        {
            Transform t = (go != null) ? go.transform : null;

            leftAnchor.target = t;
            rightAnchor.target = t;
            topAnchor.target = t;
            bottomAnchor.target = t;

            leftAnchor.relative = left;
            rightAnchor.relative = right;
            bottomAnchor.relative = bottom;
            topAnchor.relative = top;

            leftAnchor.absolute = 0;
            rightAnchor.absolute = 0;
            bottomAnchor.absolute = 0;
            topAnchor.absolute = 0;

            ResetAnchors();
            UpdateAnchors();
        }

        /// <summary>
        /// Anchor this rectangle to the specified transform.
        /// 将此矩形锚定到指定的转换。
        /// </summary>
        public void SetAnchor(GameObject go,
                              float left, int leftOffset,
                              float bottom, int bottomOffset,
                              float right, int rightOffset,
                              float top, int topOffset)
        {
            Transform t = (go != null) ? go.transform : null;

            leftAnchor.target = t;
            rightAnchor.target = t;
            topAnchor.target = t;
            bottomAnchor.target = t;

            leftAnchor.relative = left;
            rightAnchor.relative = right;
            bottomAnchor.relative = bottom;
            topAnchor.relative = top;

            leftAnchor.absolute = leftOffset;
            rightAnchor.absolute = rightOffset;
            bottomAnchor.absolute = bottomOffset;
            topAnchor.absolute = topOffset;

            ResetAnchors();
            UpdateAnchors();
        }

        /// <summary>
        /// Anchor this rectangle to the specified transform.
        /// 将此矩形锚定到指定的转换。
        /// </summary>
        public void SetAnchor(
            float left, int leftOffset,
            float bottom, int bottomOffset,
            float right, int rightOffset,
            float top, int topOffset)
        {
            Transform t = cachedTransform.parent;

            leftAnchor.target = t;
            rightAnchor.target = t;
            topAnchor.target = t;
            bottomAnchor.target = t;

            leftAnchor.relative = left;
            rightAnchor.relative = right;
            bottomAnchor.relative = bottom;
            topAnchor.relative = top;

            leftAnchor.absolute = leftOffset;
            rightAnchor.absolute = rightOffset;
            bottomAnchor.absolute = bottomOffset;
            topAnchor.absolute = topOffset;

            ResetAnchors();
            UpdateAnchors();
        }

        /// <summary>
        /// Set the rect of the widget to the specified X, Y, width and height, anchored to the top-left corner of the screen.
        /// Convenience function for those familiar with GUI.Draw.
        /// 将小部件的矩形设置为指定的X、Y、宽度和高度，锚定在屏幕左上角。方便熟悉GUI.Draw的人使用。
        /// </summary>
        public void SetScreenRect(int left, int top, int width, int height)
        {
            SetAnchor(0f, left, 1f, -top - height, 0f, left + width, 1f, -top);
        }

        /// <summary>
        /// Ensure that all rect references are set correctly on the anchors.
        /// 确保在锚上正确设置了所有rect引用。
        /// </summary>
        public void ResetAnchors()
        {
            mAnchorsCached = true;

            leftAnchor.rect = (leftAnchor.target) ? leftAnchor.target.GetComponent<NGUIRect>() : null;
            bottomAnchor.rect = (bottomAnchor.target) ? bottomAnchor.target.GetComponent<NGUIRect>() : null;
            rightAnchor.rect = (rightAnchor.target) ? rightAnchor.target.GetComponent<NGUIRect>() : null;
            topAnchor.rect = (topAnchor.target) ? topAnchor.target.GetComponent<NGUIRect>() : null;

            mCam = NGUITools.FindCameraForLayer(cachedGameObject.layer);

            FindCameraFor(leftAnchor);
            FindCameraFor(bottomAnchor);
            FindCameraFor(rightAnchor);
            FindCameraFor(topAnchor);

            mUpdateAnchors = true;
        }

        /// <summary>
        /// Convenience method that resets and updates the anchors, all at once.
        /// 一次性重置和更新锚的方便方法。
        /// </summary>
        public void ResetAndUpdateAnchors()
        {
            ResetAnchors();
            UpdateAnchors();
        }

        /// <summary>
        /// Set the rectangle manually. XY is the bottom-left corner.
        /// 手动设置矩形。XY是左下角。
        /// </summary>
        public abstract void SetRect(float x, float y, float width, float height);

        /// <summary>
        /// Helper function -- attempt to find the camera responsible for the specified anchor.
        /// 尝试查找负责指定锚点的摄像机
        /// </summary>
        void FindCameraFor(AnchorPoint ap)
        {
            // If we don't have a target or have a rectangle to work with, camera isn't needed
            if (ap.target == null || ap.rect != null)
            {
                ap.targetCam = null;
            }
            else
            {
                // Find the camera responsible for the target object
                ap.targetCam = NGUITools.FindCameraForLayer(ap.target.gameObject.layer);
            }
        }

        /// <summary>
        /// Call this function when the rectangle's parent has changed.
        /// 当矩形的父元素发生变化时，调用此函数。
        /// </summary>
        public virtual void ParentHasChanged()
        {
            mParentFound = false;
            NGUIRect pt = NGUITools.FindInParents<NGUIRect>(cachedTransform.parent);

            if (mParent != pt)
            {
                if (mParent) mParent.mChildren.Remove(this);
                mParent = pt;
                if (mParent) mParent.mChildren.Add(this);
                mRootSet = false;
            }
        }

        /// <summary>
        /// Abstract start functionality, ensured to happen after the anchor rect references have been set.
        /// 抽象的start功能，确保在锚的rect引用被设置后发生。
        /// </summary>
        protected abstract void OnStart();

        /// <summary>
        /// Abstract update functionality, ensured to happen after the targeting anchors have been updated.
        /// 抽象更新功能，确保在目标锚被更新后发生。
        /// </summary>
        protected virtual void OnUpdate()
        {
        }

#if UNITY_EDITOR
        /// <summary>
        /// This callback is sent inside the editor notifying us that some property has changed.
        /// 这个回调在编辑器中发送，通知我们一些属性已经改变。
        /// </summary>
        protected virtual void OnValidate()
        {
            if (mEnabled && NGUITools.GetActive(this))
            {
                if (!Application.isPlaying) ResetAnchors();
                Invalidate(true);
            }
        }
#endif
    }
}