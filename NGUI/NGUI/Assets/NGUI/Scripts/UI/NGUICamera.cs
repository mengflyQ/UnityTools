namespace NGUI
{

    using UnityEngine;
    using System.Collections.Generic;

#if UNITY_EDITOR
    using UnityEditor;
#endif

    /// <summary>
    /// This script should be attached to each camera that's used to draw the objects with
    /// UI components on them.
    /// 这个脚本附加在用于绘制 UI 的每个相机上面.
    /// This may mean only one camera (main camera or your UI camera),
    /// or multiple cameras if you happen to have multiple viewports. Failing to attach this
    /// script simply means that objects drawn by this camera won't receive UI notifications:
    /// 如果相机没有附加此脚本,那么这个相机绘制的 UI 不会受到下面的 UI 通知
    /// 
    /// * OnHover (isOver) is sent when the mouse hovers over a collider or moves away.
    /// 当鼠标悬停在碰撞器上或离开时发送OnHover (isOver)。
    /// * OnPress (isDown) is sent when a mouse button gets pressed on the collider.
    /// OnPress (isDown)在碰撞器上按下鼠标按钮时发送。
    /// * OnSelect (selected) is sent when a mouse button is first pressed on an object. Repeated presses won't result in an OnSelect(true).
    /// 当鼠标按钮第一次按在一个对象上时发送OnSelect (selected)。重复按压不会产生OnSelect(true)。
    /// * OnClick () is sent when a mouse is pressed and released on the same object.
    ///   NGUICamera.currentTouchID tells you which button was clicked.
    /// 当鼠标在同一个对象上按下和释放时发送OnClick()。 NGUICamera。currentTouchID告诉您单击了哪个按钮。
    /// * OnDoubleClick () is sent when the click happens twice within a fourth of a second.
    /// 当单击在四分之一秒内发生两次时发送OnDoubleClick()。
    ///   NGUICamera.currentTouchID tells you which button was clicked.
    /// NGUICamera。currentTouchID告诉您单击了哪个按钮。
    ///
    /// * OnDragStart () is sent to a game object under the touch just before the OnDrag() notifications begin.
    /// OnDragStart()在OnDrag()通知开始之前被发送到触摸下的游戏对象。
    /// * OnDrag (delta) is sent to an object that's being dragged.
    /// OnDrag (delta)被发送到一个被拖动的对象。
    /// * OnDragOver (draggedObject) is sent to a game object when another object is dragged over its area.
    /// OnDragOver (draggedObject)是在将另一个对象拖过其区域时发送给游戏对象的。
    /// * OnDragOut (draggedObject) is sent to a game object when another object is dragged out of its area.
    /// 当另一个对象被拖出它的区域时，OnDragOut (draggedObject)被发送到一个游戏对象。
    /// * OnDragEnd () is sent to a dragged object when the drag event finishes.
    /// 当拖放事件结束时，OnDragEnd()被发送给被拖放的对象。
    ///
    /// * OnTooltip (show) is sent when the mouse hovers over a collider for some time without moving.
    /// 当鼠标悬停在碰撞器上一段时间而没有移动时发送OnTooltip (show)。
    /// * OnScroll (float delta) is sent out when the mouse scroll wheel is moved.
    /// OnScroll(浮动delta)在移动鼠标滚轮时发送。
    /// * OnNavigate (KeyCode key) is sent when horizontal or vertical navigation axes are moved.
    /// 当水平或垂直导航轴被移动时发送onnavigation (KeyCode key)。
    /// * OnPan (Vector2 delta) is sent when when horizontal or vertical panning axes are moved.
    /// 当水平或垂直平移轴被移动时发送OnPan (Vector2 delta)。
    /// * OnKey (KeyCode key) is sent when keyboard or controller input is used.
    /// OnKey (KeyCode key)在使用键盘或控制器输入时发送。
    /// </summary>

    [ExecuteInEditMode]
    [AddComponentMenu("NGUI/UI/NGUICamera")]
    [RequireComponent(typeof(Camera))]
    public class NGUICamera : MonoBehaviour
    {
        [DoNotObfuscateNGUI]
        public enum ControlScheme
        {
            Mouse,// 鼠标
            Touch,// 触摸
            Controller,// 键盘/实物摇杆
        }

        /// <summary>
        /// Whether the touch event will be sending out the OnClick notification at the end.
        /// 触摸事件是否会在结束时发送OnClick通知。
        /// </summary>
        [DoNotObfuscateNGUI]
        public enum ClickNotification
        {
            None,
            Always,
            BasedOnDelta,
        }

        /// <summary>
        /// Ambiguous mouse, touch, or controller event.
        /// 鼠标、触摸,键盘,手柄等事件。里面包含,最后一次鼠标、触摸,键盘,手柄的记录,当前被触发的游戏对象,增量,时间等等
        /// </summary>
        public class MouseOrTouch
        {
            public KeyCode key = KeyCode.None;
            public Vector2 pos;        // Current position of the mouse or touch event,鼠标或触摸事件的当前位置
            public Vector2 lastPos;    // Previous position of the mouse or touch event,鼠标或触摸事件以前的位置
            public Vector2 delta;      // Delta since last update,上次更新后的增量(移动的像素)
            public Vector2 totalDelta; // Delta since the event started being tracked,事件开始跟踪以来的增量(总的移动的像素)

            public Camera pressedCam; // Camera that the OnPress(true) was fired with,哪个照相机触发了OnPress(true)方法

            public GameObject last;        // Last object under the touch or mouse,触摸或鼠标下的最后一个对象
            public GameObject current;     // Current game object under the touch or mouse,触摸或鼠标下的当前游戏对象
            public GameObject pressed;     // Last game object to receive OnPress,接收OnPress方法的最后一个游戏对象
            public GameObject dragged;     // Game object that's being dragged,被拖动的游戏对象
            public GameObject lastClickGO; // Last game object that received a click event (used for double click),最后一个接收到点击事件的游戏对象(用于双击)

            public float pressTime = 0f; // When the touch event started,触摸事件开始时的时间
            public float clickTime = 0f; // The last time a click event was sent out,最后一次发送单击事件的时间

            public ClickNotification clickNotification = ClickNotification.Always;
            public bool touchBegan = true;
            public bool pressStarted = false;
            public bool dragStarted = false;
            public int ignoreDelta = 0;

            /// <summary>
            /// Delta time since the touch operation started.
            /// 触摸操作开始后的增量时间。
            /// </summary>
            public float deltaTime
            {
                get { return RealTime.time - pressTime; }
            }

            /// <summary>
            /// Returns whether this touch is currently over a UI element.
            /// 这个触摸当前是否在UI元素上
            /// </summary>
            public bool isOverUI
            {
                get
                {
                    return current != null && current != fallThrough &&
                           NGUITools.FindInParents<NGUIRoot>(current) != null;
                }
            }
        }

        /// <summary>
        /// Camera type controls how raycasts are handled by the NGUICamera.
        /// 如何处理 raycast,分为 4 种情况
        /// </summary>
        [DoNotObfuscateNGUI]
        public enum EventType : int
        {
            World_3D, // Perform a Physics.Raycast and sort by distance to the point that was hit.物理检测,Raycast按到点的距离进行排序击中
            UI_3D,    // Perform a Physics.Raycast and sort by widget depth.物理检测,Raycast按 UI 元素的深度进行排序击中
            World_2D, // Perform a Physics2D.OverlapPoint.2D物理检测,执行方法Physics2D.OverlapPoint,按照到点的距离进行排序击中
            UI_2D,    // Physics2D.OverlapPoint then sort by widget depth,2D物理检测,执行方法Physics2D.OverlapPoint,按 UI 元素的深度进行排序击中
        }

        /// <summary>
        /// List of all active cameras in the scene.
        /// 在场景中所有被激活的摄像机的列表。
        /// </summary>
        static public BetterList<NGUICamera> list = new BetterList<NGUICamera>();

        public delegate bool GetKeyStateFunc(KeyCode key);

        public delegate float GetAxisFunc(string name);

        public delegate bool GetAnyKeyFunc();

        public delegate MouseOrTouch GetMouseDelegate(int button);

        public delegate MouseOrTouch GetTouchDelegate(int id, bool createIfMissing);

        public delegate void RemoveTouchDelegate(int id);

        /// <summary>
        /// GetKeyDown function -- return whether the specified key was pressed this Update().
        /// 返回指定的键是否按下了
        /// </summary>
        static public GetKeyStateFunc GetKeyDown = delegate (KeyCode key)
                                                   {
                                                       if (key >= KeyCode.JoystickButton0 && ignoreControllerInput)
                                                           return false;
                                                       return Input.GetKeyDown(key);
                                                   };

        /// <summary>
        /// GetKeyDown function -- return whether the specified key was released this Update().
        /// 返回指定的键是否被(按下之后又)释放
        /// </summary>
        static public GetKeyStateFunc GetKeyUp = delegate (KeyCode key)
                                                 {
                                                     if (key >= KeyCode.JoystickButton0 && ignoreControllerInput)
                                                         return false;
                                                     return Input.GetKeyUp(key);
                                                 };

        /// <summary>
        /// GetKey function -- return whether the specified key is currently held.
        /// 返回当前是否一直在按着某个键
        /// </summary>
        static public GetKeyStateFunc GetKey = delegate (KeyCode key)
                                               {
                                                   if (key >= KeyCode.JoystickButton0 && ignoreControllerInput)
                                                       return false;
                                                   return Input.GetKey(key);
                                               };

        /// <summary>
        /// GetAxis function -- return the state of the specified axis.
        /// 返回按下的指定轴
        /// </summary>
        static public GetAxisFunc GetAxis = delegate (string axis)
                                            {
                                                if (ignoreControllerInput) return 0f;
                                                return Input.GetAxis(axis);
                                            };

        /// <summary>
        /// User-settable Input.anyKeyDown
        /// </summary>
        static public GetAnyKeyFunc GetAnyKeyDown;

        /// <summary>
        /// Get the details of the specified mouse button.
        /// 获取指定鼠标按钮的详细信息。
        /// </summary>
        static public GetMouseDelegate GetMouse = delegate (int button) { return mMouse[button]; };

        /// <summary>
        /// Get or create a touch event. If you are trying to iterate through a list of active touches, use activeTouches instead.
        /// 获取或创建一个触摸事件。如果想得到一个触摸列表,请遍历 activeTouches
        /// </summary>
        static public GetTouchDelegate GetTouch = delegate (int id, bool createIfMissing)
                                                  {
                                                      if (id < 0) return GetMouse(-id - 1);

                                                      for (int i = 0, imax = mTouchIDs.Count; i < imax; ++i)
                                                          if (mTouchIDs[i] == id)
                                                              return activeTouches[i];

                                                      if (createIfMissing)
                                                      {
                                                          MouseOrTouch touch = new MouseOrTouch();
                                                          touch.pressTime = RealTime.time;
                                                          touch.touchBegan = true;
                                                          activeTouches.Add(touch);
                                                          mTouchIDs.Add(id);
                                                          return touch;
                                                      }

                                                      return null;
                                                  };

        /// <summary>
        /// Remove a touch event from the list.
        /// 从列表中删除一个触摸事件。
        /// </summary>
        static public RemoveTouchDelegate RemoveTouch = delegate (int id)
                                                        {
                                                            for (int i = 0, imax = mTouchIDs.Count; i < imax; ++i)
                                                            {
                                                                if (mTouchIDs[i] == id)
                                                                {
                                                                    mTouchIDs.RemoveAt(i);
                                                                    activeTouches.RemoveAt(i);
                                                                    return;
                                                                }
                                                            }
                                                        };

        /// <summary>
        /// Delegate triggered when the screen size changes for any reason.当屏幕大小因任何原因改变时，委托被触发。
        /// Subscribe to it if you don't want to compare Screen.width and Screen.height each frame.如果你不想每一帧都比较宽或高，请实现它
        /// </summary>
        static public OnScreenResize onScreenResize;

        public delegate void OnScreenResize();

        /// <summary>
        /// Event type -- use "UI" for your user interfaces, and "World" for your game camera.事件类型——用户界面使用“UI”，游戏摄像头使用“World”。
        /// This setting changes how raycasts are handled. Raycasts have to be more complicated for UI cameras.这个设置改变了raycast的处理方式。对于UI相机，raycast必须更加复杂。
        /// </summary>
        public EventType eventType = EventType.UI_3D;//默认按照 Depth 进行 触发事件 的分发

        /// <summary>
        /// By default, events will go to rigidbodies when the Event Type is not UI.默认情况下，当事件类型不是UI时，事件将转到rigidbody。
        /// You can change this behaviour back to how it was pre-3.7.0 using this flag.
        /// </summary>
        public bool eventsGoToColliders = false;

        /// <summary>
        /// Which layers will receive events.
        /// 哪些层将接收事件。
        /// </summary>
        public LayerMask eventReceiverMask = -1;
        
        /// <summary>
        /// 在哪个方法里面接收事件
        /// </summary>
        [DoNotObfuscateNGUI]
        public enum ProcessEventsIn
        {
            Update,
            LateUpdate,
        }

        /// <summary>
        /// When events will be processed.
        /// 默认在 Update 方法里面处理事件
        /// </summary>
        public ProcessEventsIn processEventsIn = ProcessEventsIn.Update;

        /// <summary>
        /// If 'true', currently hovered object will be shown in the top left corner.
        /// 在右上角,快速找出当前鼠标在哪个 UI 上面,输出 UI 的路径
        /// </summary>
        public bool debug = false;

        /// <summary>
        /// Whether the mouse input is used.
        /// 是否使用了鼠标输入
        /// </summary>
        public bool useMouse = true;

        /// <summary>
        /// Whether the touch-based input is used.
        /// 是否使用基于触摸的输入。
        /// </summary>
        public bool useTouch = true;

        /// <summary>
        /// Whether multi-touch is allowed.
        /// 是否允许多点触摸。
        /// </summary>
        public bool allowMultiTouch = true;

        /// <summary>
        /// Whether the keyboard events will be processed.
        /// 键盘事件是否被处理。
        /// </summary>
        public bool useKeyboard = true;

        /// <summary>
        /// Whether the joystick and controller events will be processed.
        /// 操纵杆和控制器事件是否被处理。
        /// </summary>
        public bool useController = true;
        

        /// <summary>
        /// Whether the tooltip will disappear as soon as the mouse moves (false) or only if the mouse moves outside of the widget's area (true).
        /// 当鼠标移动时工具提示是否会消失(false)，或者仅当鼠标移动到部件区域之外时工具提示才会消失(true)。
        /// </summary>
        public bool stickyTooltip = true;

        /// <summary>
        /// How long of a delay to expect before showing the tooltip.
        /// 在显示工具提示之前需要多长时间的延迟。
        /// </summary>
        public float tooltipDelay = 1f;

        /// <summary>
        /// If enabled, a tooltip will be shown after touch gets pressed on something and held for more than "tooltipDelay" seconds.
        /// 如果启用，当触摸被按在某物上并保持超过“工具提示延迟”秒后，工具提示将会显示。
        /// </summary>
        public bool longPressTooltip = false;

        /// <summary>
        /// How much the mouse has to be moved after pressing a button before it starts to send out drag events.
        /// 在按下按钮后，鼠标在开始发送拖动事件之前需要移动多少像素。
        /// </summary>
        public float mouseDragThreshold = 4f;

        /// <summary>
        /// How far the mouse is allowed to move in pixels before it's no longer considered for click events, if the click notification is based on delta.
        /// 如果基于增量进行鼠标点击通知,它不再被考虑为单击事件,鼠标需要移动 xx 像素被认为点击事件.
        /// </summary>
        public float mouseClickThreshold = 10f;

        /// <summary>
        /// How much the mouse has to be moved after pressing a button before it starts to send out drag events.
        /// 在按下按钮后，触摸在开始发送拖动事件之前需要移动多少。
        /// </summary>
        public float touchDragThreshold = 40f;

        /// <summary>
        /// How far the touch is allowed to move in pixels before it's no longer considered for click events, if the click notification is based on delta.
        /// 如果基于增量进行触摸点击通知,它不再被考虑为单击事件,以像素为单位，触摸允许移动 xx 像素认为是点击事件
        /// </summary>
        public float touchClickThreshold = 40f;

        /// <summary>
        /// Raycast range distance. By default it's as far as the camera can see.
        /// Raycast距离范围。默认情况下，它是相机所能看到的最远距离。
        /// </summary>
        public float rangeDistance = -1f;

        /// <summary>
        /// Name of the axis used to send left and right key events.
        /// 用于发送左右键事件的轴的名称。
        /// </summary>
        public string horizontalAxisName = "Horizontal";

        /// <summary>
        /// Name of the axis used to send up and down key events.
        /// 用于发送向上和向下键事件的轴的名称。
        /// </summary>
        public string verticalAxisName = "Vertical";

        /// <summary>
        /// Name of the horizontal axis used to move scroll views and sliders around.
        /// 用于移动滚动视图和滑块的水平轴的名称。
        /// </summary>
        public string horizontalPanAxisName = null;

        /// <summary>
        /// Name of the vertical axis used to move scroll views and sliders around.
        /// 用于移动滚动视图和滑块的垂直轴的名称。
        /// </summary>
        public string verticalPanAxisName = null;

        /// <summary>
        /// Name of the axis used for scrolling.
        /// 用于滚动的轴的名称。
        /// </summary>
        public string scrollAxisName = "Mouse ScrollWheel";

        /// <summary>
        /// Simulate a right-click on OSX when the Command key is held and a left-click is used (for trackpad).
        /// 模拟在OSX上右键单击命令键并使用左键单击(用于轨迹板)。
        /// </summary>
        [Tooltip("If enabled, command-click will result in a right-click event on OSX")]
        public bool commandClick = true;

        /// <summary>
        /// Various keys used by the camera.
        /// </summary>
        public KeyCode submitKey0 = KeyCode.Return;

        public KeyCode submitKey1 = KeyCode.JoystickButton0;
        public KeyCode cancelKey0 = KeyCode.Escape;
        public KeyCode cancelKey1 = KeyCode.JoystickButton1;

        /// <summary>
        /// Whether NGUI will automatically hide the mouse cursor when controller or touch input is detected.
        /// 当检测到控制器或触摸输入时，NGUI是否会自动隐藏鼠标光标。
        /// </summary>
        public bool autoHideCursor = true;

        public delegate void OnCustomInput();

        /// <summary>
        /// Custom input processing logic, if desired. For example: WP7 touches.
        /// 如果需要，自定义输入处理逻辑。例如:WP7 touch。
        /// Use NGUICamera.current to get the current camera.
        /// 使用NGUICamera。获取当前相机的电流。
        /// </summary>
        static public OnCustomInput onCustomInput;

        /// <summary>
        /// Whether tooltips will be shown or not.
        /// 是否显示工具提示。
        /// </summary>
        static public bool showTooltips = true;

        /// <summary>
        /// Whether controller input will be temporarily disabled or not.控制器输入是否将暂时禁用。
        /// It's useful to be able to turn off controller interaction and only turn it on when the UI is actually visible.
        /// 能够关闭控制器交互，并且只有在UI实际可见时才打开它是很有用的。
        /// </summary>
        static public bool disableController
        {
            get { return mDisableController && !UIPopupList.isOpen; }
            set { mDisableController = value; }
        }

        /// <summary>
        /// If set to 'true', all events will be ignored until set to 'true'.
        /// 如果设置为true，所有事件将被忽略
        /// </summary>
        static public bool ignoreAllEvents = false;

        /// <summary>
        /// If set to 'true', controller input will be flat-out ignored. Permanently, for all cameras.
        /// 如果设置为true，控制器输入将被完全忽略。永久性的，适用于所有的相机。
        /// </summary>
        static public bool ignoreControllerInput = false;

        static bool mDisableController = false;
        static Vector2 mLastPos = Vector2.zero;//最后的位置。

        /// <summary>
        /// Position of the last touch (or mouse) event.
        /// 在UI类型上,最后一次触摸(或鼠标)事件的位置。
        /// </summary>
        static public Vector2 lastEventPosition
        {
            get
            {
                NGUICamera.ControlScheme scheme = NGUICamera.currentScheme;

                if (scheme == NGUICamera.ControlScheme.Controller)
                {
                    GameObject go = hoveredObject;

                    if (go != null)
                    {
                        Bounds b = NGUIMath.CalculateAbsoluteWidgetBounds(go.transform);
                        Camera cam = NGUITools.FindCameraForLayer(go.layer);
                        return cam.WorldToScreenPoint(b.center);
                    }
                }

                return mLastPos;
            }
            set { mLastPos = value; }
        }

        /// <summary>
        /// Position of the last touch (or mouse) event in the world.
        /// 在世界空间类型上,最后一次触摸(或鼠标)事件的位置。
        /// </summary>
        static public Vector3 lastWorldPosition = Vector3.zero;

        /// <summary>
        /// 最后一束射入世界空间的光线。
        /// </summary>
        static public Ray lastWorldRay = new Ray();

        /// <summary>
        /// Last raycast hit prior to sending out the event. This is useful if you want detailed information
        /// about what was actually hit in your OnClick, OnHover, and other event functions.
        /// Note that this is not going to be valid if you're using 2D colliders.
        /// 在发送事件之前的最后一次raycast命中。如果您想要了解OnClick、OnHover和其他事件函数中实际击中了什么内容的详细信息，这将非常有用.注意，如果你使用2D碰撞器，这是无效的。
        /// </summary>
        static public RaycastHit lastHit;

        /// <summary>
        /// NGUICamera that sent out the event.
        /// 是NGUICamera组织发出事件的
        /// </summary>
        static public NGUICamera current = null;

        /// <summary>
        /// NGUI event system that will be handling all events.
        /// 将处理所有事件的NGUI事件系统。
        /// </summary>
        static public NGUICamera first
        {
            get
            {
                if (list == null || list.Size == 0) return null;
                return list.Buffer[0];
            }
        }

        /// <summary>
        /// Last camera active prior to sending out the event. This will always be the camera that actually sent out the event.
        /// 在发送事件之前的最后一个相机活动。这总是实际发送事件的相机。
        /// </summary>
        static public Camera currentCamera = null;

        public delegate void OnSchemeChange();

        /// <summary>
        /// Delegate called when the control scheme changes.
        /// 当事件控制方案更改时调用。
        /// </summary>
        static public OnSchemeChange onSchemeChange;

        static ControlScheme mLastScheme = ControlScheme.Mouse;

        /// <summary>
        /// Current control scheme. Derived from the last event to arrive.
        /// 当前的事件触发的控制方案,手柄/键盘/触摸/鼠标。从最后到达的事件派生。
        /// </summary>
        static public ControlScheme currentScheme
        {
            get
            {
                if (mCurrentKey == KeyCode.None) return ControlScheme.Touch;
                if (mCurrentKey >= KeyCode.JoystickButton0) return ControlScheme.Controller;

                if (current != null)
                {
                    if (mLastScheme == ControlScheme.Controller &&
                        (mCurrentKey == current.submitKey0 || mCurrentKey == current.submitKey1))
                        return ControlScheme.Controller;

                    if (current.useMouse) return ControlScheme.Mouse;
                    if (current.useTouch) return ControlScheme.Touch;
                    return ControlScheme.Controller;
                }

                return ControlScheme.Mouse;
            }
            set
            {
                if (mLastScheme != value)
                {
                    if (value == ControlScheme.Mouse)
                    {
                        currentKey = KeyCode.Mouse0;
                    }
                    else if (value == ControlScheme.Controller)
                    {
                        currentKey = KeyCode.JoystickButton0;
                    }
                    else if (value == ControlScheme.Touch)
                    {
                        currentKey = KeyCode.None;
                    }
                    else currentKey = KeyCode.Alpha0;

                    mLastScheme = value;
                }
            }
        }

        /// <summary>
        /// 在发送事件之前，触摸或鼠标操作的ID。
        /// 鼠标ID为“-1”表示鼠标左键，“-2”表示鼠标右键，“-3”表示鼠标中间。
        /// </summary>
        static public int currentTouchID = -100;

        static KeyCode mCurrentKey = KeyCode.Alpha0;

        /// <summary>
        /// Key that triggered the event, if any.
        /// 触发事件的键(如果有的话)。
        /// </summary>
        static public KeyCode currentKey
        {
            get { return mCurrentKey; }
            set
            {
                if (mCurrentKey != value)
                {
                    ControlScheme before = mLastScheme;
                    mCurrentKey = value;
                    mLastScheme = currentScheme;

                    if (before != mLastScheme)
                    {
                        HideTooltip();

                        if (mLastScheme == ControlScheme.Mouse)
                        {
#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
						Screen.lockCursor = false;
						Screen.showCursor = true;
#else
                            Cursor.lockState = CursorLockMode.None;
                            Cursor.visible = true;
#endif
                        }
#if UNITY_EDITOR
                        else if (mLastScheme == ControlScheme.Controller)
#else
					else
#endif
                        {
                            if (current != null && current.autoHideCursor)
                            {
#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
							Screen.showCursor = false;
							Screen.lockCursor = true;
#else
                                Cursor.visible = false;
                                Cursor.lockState = CursorLockMode.Locked;
#endif
                                // Skip the next 2 frames worth of mouse movement
                                mMouse[0].ignoreDelta = 2;
                            }
                        }

                        if (onSchemeChange != null) onSchemeChange();
                    }
                }
            }
        }

        /// <summary>
        /// Ray projected into the screen underneath the current touch.
        /// 光线投射到当前触摸下方的屏幕上。
        /// </summary>
        static public Ray currentRay
        {
            get
            {
                return (currentCamera != null && currentTouch != null)
                           ? currentCamera.ScreenPointToRay(currentTouch.pos)
                           : new Ray();
            }
        }

        /// <summary>
        /// Current touch, set before any event function gets called.
        /// 当前触摸，在任何事件函数被调用之前设置(初始化)。
        /// </summary>
        [System.NonSerialized] static public MouseOrTouch currentTouch = null;

        [System.NonSerialized] static bool mInputFocus = false;

        /// <summary>
        /// Whether an input field currently has focus.
        /// 输入字段当前是否有焦点。
        /// </summary>
        static public bool inputHasFocus
        {
            get
            {
                if (mInputFocus && mSelected && mSelected.activeInHierarchy) return true;
                return false;
            }
        }
        

        /// <summary>
        /// If events don't get handled, they will be forwarded to this game object.
        /// 如果事件没有得到处理，它们将被转发到这个游戏对象。
        /// </summary>
        [System.NonSerialized] static public GameObject fallThrough;//fall Through : 落空,失败

        public delegate void MoveDelegate(Vector2 delta);

        public delegate void VoidDelegate(GameObject go);

        public delegate void BoolDelegate(GameObject go, bool state);

        public delegate void FloatDelegate(GameObject go, float delta);

        public delegate void VectorDelegate(GameObject go, Vector2 delta);

        public delegate void ObjectDelegate(GameObject go, GameObject obj);

        public delegate void KeyCodeDelegate(GameObject go, KeyCode key);

        /// <summary>
        /// These notifications are sent out prior to the actual event going out.
        /// 这些通知会在实际事件发出之前发出。会在其他绑定事件之前发出,这些通知需要在用到的地方进行绑定
        /// </summary>

        [System.NonSerialized] static public VoidDelegate onClick;

        [System.NonSerialized] static public VoidDelegate onDoubleClick;
        [System.NonSerialized] static public BoolDelegate onHover;
        [System.NonSerialized] static public BoolDelegate onPress;
        [System.NonSerialized] static public BoolDelegate onSelect;
        [System.NonSerialized] static public FloatDelegate onScroll;
        [System.NonSerialized] static public VectorDelegate onDrag;
        [System.NonSerialized] static public VoidDelegate onDragStart;
        [System.NonSerialized] static public ObjectDelegate onDragOver;
        [System.NonSerialized] static public ObjectDelegate onDragOut;
        [System.NonSerialized] static public VoidDelegate onDragEnd;
        [System.NonSerialized] static public ObjectDelegate onDrop;
        [System.NonSerialized] static public KeyCodeDelegate onKey;
        [System.NonSerialized] static public KeyCodeDelegate onNavigate;
        [System.NonSerialized] static public VectorDelegate onPan;
        [System.NonSerialized] static public BoolDelegate onTooltip;
        [System.NonSerialized] static public MoveDelegate onMouseMove;

        // Mouse events,鼠标事件,左中右
        static MouseOrTouch[] mMouse = new MouseOrTouch[] { new MouseOrTouch(), new MouseOrTouch(), new MouseOrTouch() };

        /// <summary>
        /// Access to the mouse-related data. This is intended to be read-only.
        /// 访问与鼠标相关的数据。这是只读的。
        /// </summary>
        static public MouseOrTouch mouse0
        {
            get { return mMouse[0]; }
        }

        static public MouseOrTouch mouse1
        {
            get { return mMouse[1]; }
        }

        static public MouseOrTouch mouse2
        {
            get { return mMouse[2]; }
        }

        // Joystick/controller/keyboard event 操纵杆/控制器/键盘
        [System.NonSerialized] static public MouseOrTouch controller = new MouseOrTouch();

        /// <summary>
        /// List of all the active touches.
        /// 所有激活触摸的列表。
        /// </summary>
        [System.NonSerialized] static public List<MouseOrTouch> activeTouches = new List<MouseOrTouch>();

        // Used internally to store IDs of active touches,在内部用于存储活动触摸的id
        [System.NonSerialized] static List<int> mTouchIDs = new List<int>();

        // Used to detect screen dimension changes,用于检测屏幕尺寸的变化
        [System.NonSerialized] static int mWidth = 0;
        [System.NonSerialized] static int mHeight = 0;

        // Tooltip widget (mouse only),工具提示部件(仅限鼠标)
        [System.NonSerialized] static GameObject mTooltip = null;

        // Mouse input is turned off on iOS,在iOS上鼠标输入是关闭的
        [System.NonSerialized] Camera mCam = null;
        [System.NonSerialized] static float mTooltipTime = 0f;
        [System.NonSerialized] float mNextRaycast = 0f;

        /// <summary>
        /// Helper function that determines if this script should be handling the events.
        /// 当前脚本是否应该处理这个事件
        /// </summary>
        bool handlesEvents
        {
            get { return eventHandler == this; }
        }

        /// <summary>
        /// Caching is always preferable for performance.
        /// 对于性能来说，缓存总是更好的选择。缓存的摄像机
        /// </summary>
#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
	public Camera cachedCamera { get { if (mCam == null) mCam = camera; return mCam; } }
#else
        public Camera cachedCamera
        {
            get
            {
                if (mCam == null) mCam = GetComponent<Camera>();
                return mCam;
            }
        }
#endif
        

        /// <summary>
        /// Object that should be showing the tooltip.
        /// 该对象应该显示工具提示,鼠标放在某个控件上方,隔一段事件,显示出一个提示框
        /// </summary>
        static public GameObject tooltipObject
        {
            get { return mTooltip; }
            set { ShowTooltip(value); }
        }

#if !W2
        /// <summary>
        /// Whether this object is a part of the UI or not.
        /// 这个对象是否是 UI 的一部分
        /// </summary>
        static public bool IsPartOfUI(GameObject go)
        {
            if (go == null || go == fallThrough) return false;
            return NGUITools.FindInParents<NGUIRoot>(go) != null;
        }
#else
	// This is a simplified path I use in the Sightseer project. You are welcome to do the same if your UI is only on one layer.
	static public bool IsPartOfUI (GameObject go)
	{
		if (go == null || go == fallThrough) return false;
		if (mUILayer == -1) mUILayer = LayerMask.NameToLayer("UI");
		return go.layer == mUILayer;
	}
	static int mUILayer = -1;
#endif

        /// <summary>
        /// Whether the last raycast was over the UI.
        /// 最后一次raycast是否在UI上。
        /// </summary>
        static public bool isOverUI
        {
            get
            {
                var frame = Time.frameCount;

                if (mLastOverCheck != frame)
                {
                    mLastOverCheck = frame;

                    if (currentTouch != null)
                    {
                        if (currentTouch.pressed != null)
                        {
                            mLastOverResult = IsPartOfUI(currentTouch.pressed);
                            return mLastOverResult;
                        }

                        mLastOverResult = IsPartOfUI(currentTouch.current);
                        return mLastOverResult;
                    }

                    for (int i = 0, imax = activeTouches.Count; i < imax; ++i)
                    {
                        var touch = activeTouches[i];

                        if (IsPartOfUI(touch.pressed))
                        {
                            mLastOverResult = true;
                            return mLastOverResult;
                        }
                    }

                    for (int i = 0; i < 3; ++i)
                    {
                        var m = mMouse[i];

                        if (IsPartOfUI(m.pressed != null ? m.pressed : (i == 0 ? m.current : null)))
                        {
                            mLastOverResult = true;
                            return mLastOverResult;
                        }
                    }

                    mLastOverResult = IsPartOfUI(controller.pressed);
                }

                return mLastOverResult;
            }
        }

        /// <summary>
        /// Much like 'isOverUI', but also returns 'true' if there is currently an active mouse press on a UI element, or if a UI input has focus.
        /// 很像'isOverUI'，但也返回'true'如果当前有一个活动的鼠标按在UI元素上，或如果UI输入有焦点。
        /// </summary>
        static public bool uiHasFocus
        {
            get
            {
                var frame = Time.frameCount;

                if (mLastFocusCheck != frame)
                {
                    mLastFocusCheck = frame;

                    if (inputHasFocus)
                    {
                        mLastFocusResult = true;
                        return mLastFocusResult;
                    }

                    if (currentTouch != null)
                    {
                        mLastFocusResult = currentTouch.isOverUI;
                        return mLastFocusResult;
                    }

                    for (int i = 0, imax = activeTouches.Count; i < imax; ++i)
                    {
                        var touch = activeTouches[i];

                        if (IsPartOfUI(touch.pressed))
                        {
                            mLastFocusResult = true;
                            return mLastFocusResult;
                        }
                    }

                    var m = mMouse[0];

                    if (IsPartOfUI(m.pressed) || IsPartOfUI(m.current))
                    {
                        mLastFocusResult = true;
                        return mLastFocusResult;
                    }

                    for (int i = 1; i < 3; ++i)
                    {
                        m = mMouse[i];

                        if (IsPartOfUI(m.pressed))
                        {
                            mLastFocusResult = true;
                            return mLastFocusResult;
                        }
                    }

                    mLastFocusResult = IsPartOfUI(controller.pressed);
                }

                return mLastFocusResult;
            }
        }

        /// <summary>
        /// Whether there is a active current focus on the UI -- either input, or an active touch.
        /// UI上是否有一个活动的当前焦点——输入或活动触摸。
        /// </summary>
        static public bool interactingWithUI
        {
            get
            {
                var frame = Time.frameCount;

                if (mLastInteractionCheck != frame)
                {
                    mLastInteractionCheck = frame;

                    if (inputHasFocus)
                    {
                        mLastInteractionResult = true;
                        return mLastInteractionResult;
                    }

                    for (int i = 0, imax = activeTouches.Count; i < imax; ++i)
                    {
                        MouseOrTouch touch = activeTouches[i];

                        if (IsPartOfUI(touch.pressed))
                        {
                            mLastInteractionResult = true;
                            return mLastInteractionResult;
                        }
                    }

                    for (int i = 0; i < 3; ++i)
                    {
                        var m = mMouse[i];

                        if (IsPartOfUI(m.pressed))
                        {
                            mLastInteractionResult = true;
                            return mLastInteractionResult;
                        }
                    }

                    mLastInteractionResult = IsPartOfUI(controller.pressed);
                }

                return mLastInteractionResult;
            }
        }

        static int mLastInteractionCheck = -1;
        static bool mLastInteractionResult = false;
        static int mLastFocusCheck = -1;
        static bool mLastFocusResult = false;
        static int mLastOverCheck = -1;
        static bool mLastOverResult = false;

        static GameObject mRayHitObject;
        static GameObject mHover;
        static GameObject mSelected;

        /// <summary>
        /// The object over which the mouse is hovering over, or the object currently selected by the controller input.
        /// Mouse and controller input share the same hovered object, while touches have no hovered object at all.
        /// Checking this value from within a touch-based event will simply return the current touched object.
        /// 鼠标悬停在其上的对象，或控制器输入当前选择的对象。
        /// 鼠标和控制器输入共享相同的悬浮对象，而触摸根本没有悬浮对象。
        /// 在基于触摸的事件中检查这个值会返回当前被触摸的对象。
        /// </summary>
        static public GameObject hoveredObject
        {
            get
            {
                if (currentTouch != null && (currentScheme != ControlScheme.Mouse || currentTouch.dragStarted))
                    return currentTouch.current;
                if (mHover && mHover.activeInHierarchy) return mHover;
                mHover = null;
                return null;
            }
            set
            {
                // We already have this object highlighted
                if (mHover == value) return;

                bool statesDiffer = false;
                NGUICamera prevCamera = current;

                if (currentTouch == null)
                {
                    statesDiffer = true;
                    currentTouchID = -100;
                    currentTouch = controller;
                }

                // Hide the tooltip
                ShowTooltip(null);

                // Remove the selection
                if (mSelected && currentScheme == ControlScheme.Controller)
                {
                    Notify(mSelected, "OnSelect", false);
                    if (onSelect != null) onSelect(mSelected, false);
                    mSelected = null;
                }

                // Remove the previous hover state
                if (mHover)
                {
                    Notify(mHover, "OnHover", false);
                    if (onHover != null) onHover(mHover, false);
                }

                mHover = value;
                currentTouch.clickNotification = ClickNotification.None;

                if (mHover)
                {
                    if (mHover != controller.current)
                    {
#if UNITY_5_5_OR_NEWER
                        UnityEngine.Profiling.Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
                        if (mHover.GetComponent<UIKeyNavigation>() != null) controller.current = mHover;
                        UnityEngine.Profiling.Profiler.EndSample();
#else
					Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
					if (mHover.GetComponent<UIKeyNavigation>() != null) controller.current = mHover;
					Profiler.EndSample();
#endif
                    }

                    // Locate the appropriate camera for the new object
                    if (statesDiffer)
                    {
                        NGUICamera cam = (mHover != null) ? FindCameraForLayer(mHover.layer) : NGUICamera.list.Buffer[0];

                        if (cam != null)
                        {
                            current = cam;
                            currentCamera = cam.cachedCamera;
                        }
                    }

                    if (onHover != null) onHover(mHover, true);
                    Notify(mHover, "OnHover", true);
                }

                // Restore previous states
                if (statesDiffer)
                {
                    current = prevCamera;
                    currentCamera = (prevCamera != null) ? prevCamera.cachedCamera : null;
                    currentTouch = null;
                    currentTouchID = -100;
                }
            }
        }

        /// <summary>
        /// Currently chosen object for controller-based navigation.
        /// 当前为基于控件导航选择的对象。
        /// </summary>
        static public GameObject controllerNavigationObject
        {
            get
            {
                if (controller.current && controller.current.activeInHierarchy)
                    return controller.current;

                // Automatically update the object chosen by the controller
                if (currentScheme == ControlScheme.Controller &&
                    NGUICamera.current != null &&
                    (NGUICamera.current.useController && !ignoreControllerInput) &&
                    UIKeyNavigation.list.Size > 0)
                {
                    for (int i = 0; i < UIKeyNavigation.list.Size; ++i)
                    {
                        UIKeyNavigation nav = UIKeyNavigation.list.Buffer[i];

                        if (nav && nav.constraint != UIKeyNavigation.Constraint.Explicit && nav.startsSelected)
                        {
                            hoveredObject = nav.gameObject;
                            controller.current = mHover;
                            return mHover;
                        }
                    }

                    if (mHover == null)
                    {
                        for (int i = 0; i < UIKeyNavigation.list.Size; ++i)
                        {
                            UIKeyNavigation nav = UIKeyNavigation.list.Buffer[i];

                            if (nav && nav.constraint != UIKeyNavigation.Constraint.Explicit)
                            {
                                hoveredObject = nav.gameObject;
                                controller.current = mHover;
                                return mHover;
                            }
                        }
                    }
                }

                controller.current = null;
                return null;
            }
            set
            {
                if (controller.current != value && controller.current)
                {
                    Notify(controller.current, "OnHover", false);
                    if (onHover != null) onHover(controller.current, false);
                    controller.current = null;
                }

                hoveredObject = value;
            }
        }

        /// <summary>
        /// Selected object receives exclusive focus. An input field requires exclusive focus in order to type,
        /// for example. Any object is capable of grabbing the selection just by clicking on that object,
        /// but only one object can be selected at a time.
        /// 所选对象接收独占焦点。输入字段需要独占焦点才能输入，任何对象都可以通过点击那个对象来抓取选择，但是一次只能选择一个对象。
        /// </summary>
        static public GameObject selectedObject
        {
            get
            {
                if (mSelected && mSelected.activeInHierarchy) return mSelected;
                mSelected = null;
                return null;
            }
            set
            {
                if (mSelected == value)
                {
                    hoveredObject = value;
                    controller.current = value;
                    return;
                }

                // Hide the tooltip
                ShowTooltip(null);

                bool statesDiffer = false;
                NGUICamera prevCamera = current;
                //ControlScheme scheme = currentScheme;

                if (currentTouch == null)
                {
                    statesDiffer = true;
                    currentTouchID = -100;
                    currentTouch = controller;
                }

                // Input no longer has selection, even if it did
                mInputFocus = false;

                // Remove the selection
                if (mSelected)
                {
                    Notify(mSelected, "OnSelect", false);
                    if (onSelect != null) onSelect(mSelected, false);
                }

                // Remove the hovered state
                //if (mHover && scheme < ControlScheme.Controller)
                //{
                //    Notify(mHover, "OnHover", false);
                //    if (onHover != null) onHover(mHover, false);
                //    mHover = null;
                //}

                // Change the selection and hover
                mSelected = value;
                //if (scheme >= ControlScheme.Controller) mHover = value;
                currentTouch.clickNotification = ClickNotification.None;

                if (value != null)
                {
#if UNITY_5_5_OR_NEWER
                    UnityEngine.Profiling.Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
#else
				Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
#endif
                    UIKeyNavigation nav = value.GetComponent<UIKeyNavigation>();
                    if (nav != null) controller.current = value;
#if UNITY_5_5_OR_NEWER
                    UnityEngine.Profiling.Profiler.EndSample();
#else
				Profiler.EndSample();
#endif
                }

                // Set the camera for events
                if (mSelected && statesDiffer)
                {
                    NGUICamera cam = (mSelected != null) ? FindCameraForLayer(mSelected.layer) : NGUICamera.list.Buffer[0];

                    if (cam != null)
                    {
                        current = cam;
                        currentCamera = cam.cachedCamera;
                    }
                }

                // Set the hovered state first
                //if (mHover && currentScheme >= ControlScheme.Controller)
                //{
                //    if (onHover != null) onHover(mHover, true);
                //    Notify(mHover, "OnHover", true);
                //}

                // Set the selection
                if (mSelected)
                {
#if UNITY_5_5_OR_NEWER
                    UnityEngine.Profiling.Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
                    mInputFocus = (mSelected.activeInHierarchy && mSelected.GetComponent<NGUIInputField>() != null);
                    UnityEngine.Profiling.Profiler.EndSample();
#else
				Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
				mInputFocus = (mSelected.activeInHierarchy && mSelected.GetComponent<NGUIInputField>() != null);
				Profiler.EndSample();
#endif
                    if (onSelect != null) onSelect(mSelected, true);
                    Notify(mSelected, "OnSelect", true);
                }

                // Restore the states
                if (statesDiffer)
                {
                    current = prevCamera;
                    currentCamera = (prevCamera != null) ? prevCamera.cachedCamera : null;
                    currentTouch = null;
                    currentTouchID = -100;
                }
            }
        }

        /// <summary>
        /// Returns 'true' if any of the active touch, mouse or controller is currently holding the specified object.
        /// 当前持有指定的对象如果任何主动触摸，鼠标或控制器,返回 true。
        /// </summary>
        static public bool IsPressed(GameObject go)
        {
            for (int i = 0; i < 3; ++i)
                if (mMouse[i].pressed == go)
                    return true;
            for (int i = 0, imax = activeTouches.Count; i < imax; ++i)
            {
                MouseOrTouch touch = activeTouches[i];
                if (touch.pressed == go) return true;
            }

            if (controller.pressed == go) return true;
            return false;
        }
        

        /// <summary>
        /// Number of active touches from all sources.
        /// Note that this will include the sum of touch, mouse and controller events.
        /// If you want only touch events, use activeTouches.Count.
        /// 来自所有来源的主动触摸的数量。注意，这将包括触摸、鼠标和控制器事件的总和。如果您只想要触摸事件，请使用activeTouches.Count。
        /// </summary>
        static public int CountInputSources()
        {
            int count = 0;

            for (int i = 0, imax = activeTouches.Count; i < imax; ++i)
            {
                MouseOrTouch touch = activeTouches[i];
                if (touch.pressed != null)
                    ++count;
            }

            for (int i = 0; i < mMouse.Length; ++i)
                if (mMouse[i].pressed != null)
                    ++count;

            if (controller.pressed != null)
                ++count;

            return count;
        }

        /// <summary>
        /// Number of active drag events from all sources.
        /// 来自所有来源的活动拖动事件的数量。
        /// </summary>
        static public int dragCount
        {
            get
            {
                int count = 0;

                for (int i = 0, imax = activeTouches.Count; i < imax; ++i)
                {
                    MouseOrTouch touch = activeTouches[i];
                    if (touch.dragged != null)
                        ++count;
                }

                for (int i = 0; i < mMouse.Length; ++i)
                    if (mMouse[i].dragged != null)
                        ++count;

                if (controller.dragged != null)
                    ++count;

                return count;
            }
        }

        /// <summary>
        /// Convenience function that returns the main HUD camera.
        /// 方便的函数，返回主要的 HUD 摄像机。
        /// </summary>
        static public Camera mainCamera
        {
            get
            {
                NGUICamera mouse = eventHandler;
                return (mouse != null) ? mouse.cachedCamera : null;
            }
        }

        /// <summary>
        /// Event handler for all types of events.
        /// 用于所有类型事件的事件处理相机对象。
        /// </summary>
        static public NGUICamera eventHandler
        {
            get
            {
                for (int i = 0; i < list.Size; ++i)
                {
                    // Invalid or inactive entry -- keep going
                    NGUICamera cam = list.Buffer[i];
                    if (cam == null || !cam.enabled || !NGUITools.GetActive(cam.gameObject)) continue;
                    return cam;
                }

                return null;
            }
        }

        /// <summary>
        /// Static comparison function used for sorting.
        /// 静态比较函数用于排序。
        /// </summary>
        static int CompareFunc(NGUICamera a, NGUICamera b)
        {
            if (a.cachedCamera.depth < b.cachedCamera.depth) return 1;
            if (a.cachedCamera.depth > b.cachedCamera.depth) return -1;
            return 0;
        }

        struct DepthEntry
        {
            public int depth;
            public RaycastHit hit;
            public Vector3 point;
            public GameObject go;
        }

        static DepthEntry mHit = new DepthEntry();
        static BetterList<DepthEntry> mHits = new BetterList<DepthEntry>();

        /// <summary>
        /// Find the rigidbody on the parent, but return 'null' if a NGUIPanel is found instead.
        /// The idea is: send events to the rigidbody in the world, but to colliders in the UI.
        /// 在父节点上找到rigidbody，但是如果找到NGUIPanel，则返回null。
        /// 在世界空间中发送给刚体,在 UI lyaer 层中,发送给碰撞盒子
        /// </summary>
        static Rigidbody FindRootRigidbody(Transform trans)
        {
#if UNITY_5_5_OR_NEWER
            UnityEngine.Profiling.Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
#else
		Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
#endif

            while (trans != null)
            {
                if (trans.GetComponent<NGUIPanel>() != null) break;
#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
			Rigidbody rb = trans.rigidbody;
#else
                Rigidbody rb = trans.GetComponent<Rigidbody>();
#endif
                if (rb != null)
                {
#if UNITY_5_5_OR_NEWER
                    UnityEngine.Profiling.Profiler.EndSample();
#else
				Profiler.EndSample();
#endif
                    return rb;
                }

                trans = trans.parent;
            }
#if UNITY_5_5_OR_NEWER
            UnityEngine.Profiling.Profiler.EndSample();
#else
		Profiler.EndSample();
#endif
            return null;
        }

        /// <summary>
        /// Find the 2D rigidbody on the parent, but return 'null' if a NGUIPanel is found instead.
        /// 在父节点上找到2D rigidbody，但是如果找到NGUIPanel，则返回null。
        /// 在世界空间中发送给刚体,在 UI lyaer 层中,发送给碰撞盒子
        /// </summary>
        static Rigidbody2D FindRootRigidbody2D(Transform trans)
        {
#if UNITY_5_5_OR_NEWER
            UnityEngine.Profiling.Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
#else
		Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
#endif

            while (trans != null)
            {
                if (trans.GetComponent<NGUIPanel>() != null) break;
#if UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7
			Rigidbody2D rb = trans.rigidbody2D;
#else
                Rigidbody2D rb = trans.GetComponent<Rigidbody2D>();
#endif
                if (rb != null)
                {
#if UNITY_5_5_OR_NEWER
                    UnityEngine.Profiling.Profiler.EndSample();
#else
				Profiler.EndSample();
#endif
                    return rb;
                }

                trans = trans.parent;
            }
#if UNITY_5_5_OR_NEWER
            UnityEngine.Profiling.Profiler.EndSample();
#else
		Profiler.EndSample();
#endif
            return null;
        }

        /// <summary>
        /// Raycast into the screen underneath the touch and update its 'current' value.
        /// Raycast到屏幕下面的触摸和更新它的“当前”值。
        /// </summary>
        static public void Raycast(MouseOrTouch touch)
        {
            if (!Raycast(touch.pos)) mRayHitObject = fallThrough;
            touch.last = touch.current;
            touch.current = mRayHitObject;
            mLastPos = touch.pos;
        }

#if !UNITY_4_7
        static RaycastHit[] mRayHits;
        static Collider2D[] mOverlap;
#endif

        /// <summary>
        /// Returns the object under the specified position.
        /// 返回指定位置下的对象。
        /// </summary>
        static public bool Raycast(Vector3 inPos)
        {
            for (int i = 0; i < list.Size; ++i)
            {
                var cam = list.Buffer[i];

                // Skip inactive scripts
                if (!cam.enabled || !NGUITools.GetActive(cam.gameObject)) continue;

                // Convert to view space
                currentCamera = cam.cachedCamera;
#if !UNITY_4_7 && !UNITY_5_0 && !UNITY_5_1 && !UNITY_5_2
                if (currentCamera.targetDisplay != 0) continue;
#endif
                var pos = currentCamera.ScreenToViewportPoint(inPos);
                if (float.IsNaN(pos.x) || float.IsNaN(pos.y)) continue;

                // If it's outside the camera's viewport, do nothing
                if (pos.x < 0f || pos.x > 1f || pos.y < 0f || pos.y > 1f) continue;

                // Cast a ray into the screen
                var ray = currentCamera.ScreenPointToRay(inPos);

                // Raycast into the screen
                var mask = currentCamera.cullingMask & (int)cam.eventReceiverMask;
                var dist = (cam.rangeDistance > 0f)
                               ? cam.rangeDistance
                               : currentCamera.farClipPlane - currentCamera.nearClipPlane;

                if (cam.eventType == EventType.World_3D)
                {
                    lastWorldRay = ray;
#if UNITY_4_7
				if (Physics.Raycast(ray, out lastHit, dist, mask))
#else
                    if (Physics.Raycast(ray, out lastHit, dist, mask, QueryTriggerInteraction.Ignore))
#endif
                    {
                        lastWorldPosition = lastHit.point;
                        mRayHitObject = lastHit.collider.gameObject;

                        if (!cam.eventsGoToColliders)
                        {
                            var rb = mRayHitObject.gameObject.GetComponentInParent<Rigidbody>();
                            if (rb != null) mRayHitObject = rb.gameObject;
                        }

                        return true;
                    }

                    continue;
                }
                else if (cam.eventType == EventType.UI_3D)
                {
#if UNITY_4_7
				var mRayHits = Physics.RaycastAll(ray, dist, mask);
				var hitCount = mRayHits.Length;
#else
                    if (mRayHits == null) mRayHits = new RaycastHit[50];
                    var hitCount =
                        Physics.RaycastNonAlloc(ray, mRayHits, dist, mask, QueryTriggerInteraction.Collide);
#endif
                    if (hitCount > 1)
                    {
                        for (int b = 0; b < hitCount; ++b)
                        {
                            var go = mRayHits[b].collider.gameObject;
#if UNITY_5_5_OR_NEWER
                            UnityEngine.Profiling.Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
                            var w = go.GetComponent<NGUIWidget>();
                            UnityEngine.Profiling.Profiler.EndSample();
#else
						Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
						var w = go.GetComponent<NGUIWidget>();
						Profiler.EndSample();
#endif
                            if (w != null)
                            {
                                if (!w.isVisible) continue;

                                if (w is NGUISpriteCollection)
                                {
                                    var sc = w as NGUISpriteCollection;
                                    if (sc.GetCurrentSprite() == null) continue;
                                }

                                if (w.hitCheck != null && !w.hitCheck(mRayHits[b].point)) continue;
                            }
                            else
                            {
                                var rect = NGUITools.FindInParents<NGUIRect>(go);
                                if (rect != null && rect.finalAlpha < 0.001f) continue;
                            }

                            mHit.depth = NGUITools.CalculateRaycastDepth(go);

                            if (mHit.depth != int.MaxValue)
                            {
                                mHit.hit = mRayHits[b];
                                mHit.point = mRayHits[b].point;
                                mHit.go = mRayHits[b].collider.gameObject;
                                mHits.Add(mHit);
                            }
                        }

                        mHits.Sort(delegate (DepthEntry r1, DepthEntry r2) { return r2.depth.CompareTo(r1.depth); });

                        for (int b = 0; b < mHits.Size; ++b)
                        {
#if UNITY_FLASH
						if (IsVisible(mHits.buffer[b]))
#else
                            if (IsVisible(ref mHits.Buffer[b]))
#endif
                            {
                                lastHit = mHits.Buffer[b].hit;
                                mRayHitObject = mHits.Buffer[b].go;
                                lastWorldRay = ray;
                                lastWorldPosition = mHits.Buffer[b].point;
                                mHits.Clear();
                                return true;
                            }
                        }

                        mHits.Clear();
                    }
                    else if (hitCount == 1)
                    {
                        GameObject go = mRayHits[0].collider.gameObject;
#if UNITY_5_5_OR_NEWER
                        UnityEngine.Profiling.Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
                        NGUIWidget w = go.GetComponent<NGUIWidget>();
                        UnityEngine.Profiling.Profiler.EndSample();
#else
					Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
					NGUIWidget w = go.GetComponent<NGUIWidget>();
					Profiler.EndSample();
#endif

                        if (w != null)
                        {
                            if (!w.isVisible) continue;
                            if (w.hitCheck != null && !w.hitCheck(mRayHits[0].point)) continue;
                        }
                        else
                        {
                            NGUIRect rect = NGUITools.FindInParents<NGUIRect>(go);
                            if (rect != null && rect.finalAlpha < 0.001f) continue;
                        }

                        if (IsVisible(mRayHits[0].point, mRayHits[0].collider.gameObject))
                        {
                            lastHit = mRayHits[0];
                            lastWorldRay = ray;
                            lastWorldPosition = mRayHits[0].point;
                            mRayHitObject = lastHit.collider.gameObject;
                            return true;
                        }
                    }

                    continue;
                }
                else if (cam.eventType == EventType.World_2D)
                {
                    if (m2DPlane.Raycast(ray, out dist))
                    {
                        var point = ray.GetPoint(dist);
                        var c2d = Physics2D.OverlapPoint(point, mask);

                        if (c2d)
                        {
                            lastWorldPosition = point;
                            mRayHitObject = c2d.gameObject;

                            if (!cam.eventsGoToColliders)
                            {
                                Rigidbody2D rb = FindRootRigidbody2D(mRayHitObject.transform);
                                if (rb != null) mRayHitObject = rb.gameObject;
                            }

                            return true;
                        }
                    }

                    continue;
                }
                else if (cam.eventType == EventType.UI_2D)
                {
                    if (m2DPlane.Raycast(ray, out dist))
                    {
                        lastWorldPosition = ray.GetPoint(dist);
#if UNITY_4_7
					Collider2D[] mOverlap = Physics2D.OverlapPointAll(lastWorldPosition, mask);
					var hitCount = mOverlap.Length;
#else
                        if (mOverlap == null) mOverlap = new Collider2D[50];
                        var hitCount =
                            Physics2D.OverlapPointNonAlloc(lastWorldPosition, mOverlap, mask);
#endif
                        if (hitCount > 1)
                        {
                            for (int b = 0; b < hitCount; ++b)
                            {
                                GameObject go = mOverlap[b].gameObject;
#if UNITY_5_5_OR_NEWER
                                UnityEngine.Profiling.Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
                                NGUIWidget w = go.GetComponent<NGUIWidget>();
                                UnityEngine.Profiling.Profiler.EndSample();
#else
							Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
							NGUIWidget w = go.GetComponent<NGUIWidget>();
							Profiler.EndSample();
#endif

                                if (w != null)
                                {
                                    if (!w.isVisible) continue;
                                    if (w.hitCheck != null && !w.hitCheck(lastWorldPosition)) continue;
                                }
                                else
                                {
                                    NGUIRect rect = NGUITools.FindInParents<NGUIRect>(go);
                                    if (rect != null && rect.finalAlpha < 0.001f) continue;
                                }

                                mHit.depth = NGUITools.CalculateRaycastDepth(go);

                                if (mHit.depth != int.MaxValue)
                                {
                                    mHit.go = go;
                                    mHit.point = lastWorldPosition;
                                    mHits.Add(mHit);
                                }
                            }

                            mHits.Sort(delegate (DepthEntry r1, DepthEntry r2) { return r2.depth.CompareTo(r1.depth); });

                            for (int b = 0; b < mHits.Size; ++b)
                            {
#if UNITY_FLASH
							if (IsVisible(mHits.buffer[b]))
#else
                                if (IsVisible(ref mHits.Buffer[b]))
#endif
                                {
                                    mRayHitObject = mHits.Buffer[b].go;
                                    mHits.Clear();
                                    return true;
                                }
                            }

                            mHits.Clear();
                        }
                        else if (hitCount == 1)
                        {
                            var go = mOverlap[0].gameObject;
#if UNITY_5_5_OR_NEWER
                            UnityEngine.Profiling.Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
                            var w = go.GetComponent<NGUIWidget>();
                            UnityEngine.Profiling.Profiler.EndSample();
#else
						Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
						var w = go.GetComponent<NGUIWidget>();
						Profiler.EndSample();
#endif

                            if (w != null)
                            {
                                if (!w.isVisible) continue;
                                if (w.hitCheck != null && !w.hitCheck(lastWorldPosition)) continue;
                            }
                            else
                            {
                                var rect = NGUITools.FindInParents<NGUIRect>(go);
                                if (rect != null && rect.finalAlpha < 0.001f) continue;
                            }

                            if (IsVisible(lastWorldPosition, go))
                            {
                                mRayHitObject = go;
                                return true;
                            }
                        }
                    }

                    continue;
                }
            }

            return false;
        }

        static Plane m2DPlane = new Plane(Vector3.back, 0f);

        /// <summary>
        /// Helper function to check if the specified hit is visible by the panel.
        /// 检查如果指定的命中对 UIPanel 可见
        /// </summary>
        static bool IsVisible(Vector3 worldPoint, GameObject go)
        {
            NGUIPanel panel = NGUITools.FindInParents<NGUIPanel>(go);

            while (panel != null)
            {
                if (!panel.IsVisible(worldPoint)) return false;
                panel = panel.parentPanel;
            }

            return true;
        }

        /// <summary>
        /// Helper function to check if the specified hit is visible by the panel.
        /// 检查如果指定的命中对 UIPanel 可见
        /// </summary>
#if UNITY_FLASH
	static bool IsVisible (DepthEntry de)
#else
        static bool IsVisible(ref DepthEntry de)
#endif
        {
            NGUIPanel panel = NGUITools.FindInParents<NGUIPanel>(de.go);

            while (panel != null)
            {
                if (!panel.IsVisible(de.point)) return false;
                panel = panel.parentPanel;
            }

            return true;
        }

        /// <summary>
        /// Whether the specified object should be highlighted.
        /// 指定的对象是否应该突出显示。
        /// </summary>
        static public bool IsHighlighted(GameObject go)
        {
            return (NGUICamera.hoveredObject == go);
        }

        /// <summary>
        /// Find the camera responsible for handling events on objects of the specified layer.
        /// 找到负责处理指定层对象上的事件的摄像机。
        /// </summary>
        static public NGUICamera FindCameraForLayer(int layer)
        {
            int layerMask = 1 << layer;

            for (int i = 0; i < list.Size; ++i)
            {
                NGUICamera cam = list.Buffer[i];
                Camera uc = cam.cachedCamera;
                if ((uc != null) && (uc.cullingMask & layerMask) != 0) return cam;
            }

            return null;
        }

        /// <summary>
        /// Using the keyboard will result in 1 or -1, depending on whether up or down keys have been pressed.
        /// 使用键盘将得到1或-1，这取决于按下的是上键还是下键。
        /// </summary>
        static int GetDirection(KeyCode up, KeyCode down)
        {
            if (GetKeyDown(up))
            {
                currentKey = up;
                return 1;
            }

            if (GetKeyDown(down))
            {
                currentKey = down;
                return -1;
            }

            return 0;
        }

        /// <summary>
        /// Using the keyboard will result in 1 or -1, depending on whether up or down keys have been pressed.
        /// 使用键盘将得到1或-1，这取决于按下的是上键还是下键。
        /// </summary>
        static int GetDirection(KeyCode up0, KeyCode up1, KeyCode down0, KeyCode down1)
        {
            if (GetKeyDown(up0))
            {
                currentKey = up0;
                return 1;
            }

            if (GetKeyDown(up1))
            {
                currentKey = up1;
                return 1;
            }

            if (GetKeyDown(down0))
            {
                currentKey = down0;
                return -1;
            }

            if (GetKeyDown(down1))
            {
                currentKey = down1;
                return -1;
            }

            return 0;
        }

        // Used to ensure that joystick-based controls don't trigger that often,用来确保基于游戏手柄的控制不经常触发
        static float mNextEvent = 0f;

        /// <summary>
        /// Using the joystick to move the UI results in 1 or -1 if the threshold has been passed, mimicking up/down keys.
        /// 如果通过了阈值，使用操纵杆移动UI将得到1或-1，模拟上/下键。
        /// </summary>
        static int GetDirection(string axis)
        {
            float time = RealTime.time;

            if (mNextEvent < time && !string.IsNullOrEmpty(axis))
            {
                float val = GetAxis(axis);

                if (val > 0.75f)
                {
                    currentKey = KeyCode.JoystickButton0;
                    mNextEvent = time + 0.25f;
                    return 1;
                }

                if (val < -0.75f)
                {
                    currentKey = KeyCode.JoystickButton0;
                    mNextEvent = time + 0.25f;
                    return -1;
                }
            }

            return 0;
        }

        static int mNotifying = 0;

        /// <summary>
        /// Generic notification function. Used in place of SendMessage to shorten the code and allow for more than one receiver.
        /// 通用的通知功能。用于代替SendMessage，缩短代码并允许多个接收器。
        /// </summary>
        static public void Notify(GameObject go, string funcName, object obj)
        {
            if (mNotifying > 10) return;

            // Automatically forward events to the currently open popup list
            if (currentScheme == ControlScheme.Controller && UIPopupList.isOpen &&
                UIPopupList.current.source == go && UIPopupList.isOpen)
                go = UIPopupList.current.gameObject;

            if (go && go.activeInHierarchy)
            {
                ++mNotifying;
                //if (currentScheme == ControlScheme.Controller)
                //	Debug.Log((go != null ? "[" + go.name + "]." : "[global].") + funcName + "(" + obj + ");", go);
                go.SendMessage(funcName, obj, SendMessageOptions.DontRequireReceiver);
                --mNotifying;
            }
        }

        /// <summary>
        /// 初始化
        /// </summary>
        void Awake()
        {
            mWidth = Screen.width;
            mHeight = Screen.height;

#if (UNITY_IPHONE || UNITY_ANDROID || UNITY_WP8 || UNITY_WP_8_1 || UNITY_BLACKBERRY || UNITY_WINRT || UNITY_METRO)
            currentScheme = ControlScheme.Touch;
#else
#if !UNITY_5_5_OR_NEWER
		if (Application.platform == RuntimePlatform.PS3 || Application.platform == RuntimePlatform.XBOX360)
#else
			if (Application.platform == RuntimePlatform.PS4 || Application.platform == RuntimePlatform.XboxOne)
#endif
			{
				currentScheme = ControlScheme.Controller;
			}
#endif

            // Save the starting mouse position
            mMouse[0].pos = Input.mousePosition;

            for (int i = 1; i < 3; ++i)
            {
                mMouse[i].pos = mMouse[0].pos;
                mMouse[i].lastPos = mMouse[0].pos;
            }

            mLastPos = mMouse[0].pos;

#if !UNITY_EDITOR && (UNITY_STANDALONE_WIN || UNITY_STANDALONE_OSX || UNITY_STANDALONE_LINUX)
		string[] args = System.Environment.GetCommandLineArgs();

		if (args != null)
		{
			for (int i = 0; i < args.Length; ++i)
			{
				string s = args[i];
				if (s == "-noMouse") useMouse = false;
				else if (s == "-noTouch") useTouch = false;
				else if (s == "-noController") { useController = false; ignoreControllerInput = true; }
				else if (s == "-noJoystick") { useController = false; ignoreControllerInput = true; }
				else if (s == "-useMouse") useMouse = true;
				else if (s == "-useTouch") useTouch = true;
				else if (s == "-useController") useController = true;
				else if (s == "-useJoystick") useController = true;
			}
		}
#endif
        }

        /// <summary>
        /// Add this camera to the list.Sort the list when enabled.
        /// 将此相机添加到列表中。启用时对列表进行排序。
        /// </summary>
        void OnEnable()
        {
            list.Add(this);
            list.Sort(CompareFunc);
        }

        /// <summary>
        /// Remove this camera from the list.
        /// 从列表中删除该相机。
        /// </summary>
        void OnDisable()
        {
            list.Remove(this);
        }

#if UNITY_EDITOR || UNITY_STANDALONE_WIN || UNITY_STANDALONE_OSX || UNITY_STANDALONE_LINUX
        static bool disableControllerCheck = true;
#endif

        /// <summary>
        /// We don't want the camera to send out any kind of mouse events.
        /// 当开始的时候,我们不希望相机发出任何类型的鼠标事件。
        /// </summary>
        void Start()
        {
            list.Sort(CompareFunc);

            if (eventType != EventType.World_3D &&
                cachedCamera.transparencySortMode != TransparencySortMode.Orthographic)
                cachedCamera.transparencySortMode = TransparencySortMode.Orthographic;

            if (Application.isPlaying)
            {
                // Always set a fall-through object
                if (fallThrough == null)
                {
                    NGUIRoot root = NGUITools.FindInParents<NGUIRoot>(gameObject);
                    fallThrough = (root != null) ? root.gameObject : gameObject;
                }

                cachedCamera.eventMask = 0;

#if UNITY_EDITOR || UNITY_STANDALONE_WIN || UNITY_STANDALONE_OSX || UNITY_STANDALONE_LINUX
                // Automatically disable controller-based input if the game starts with a non-zero controller input.
                // This most commonly happens with Thrustmaster and other similar joystick types.
                if (!ignoreControllerInput && disableControllerCheck && useController && handlesEvents)
                {
                    disableControllerCheck = false;
                    if (!string.IsNullOrEmpty(horizontalAxisName) && Mathf.Abs(GetAxis(horizontalAxisName)) > 0.1f)
                        ignoreControllerInput = true;
                    else if (!string.IsNullOrEmpty(verticalAxisName) && Mathf.Abs(GetAxis(verticalAxisName)) > 0.1f)
                        ignoreControllerInput = true;
                    else if (!string.IsNullOrEmpty(horizontalPanAxisName) &&
                             Mathf.Abs(GetAxis(horizontalPanAxisName)) > 0.1f) ignoreControllerInput = true;
                    else if (!string.IsNullOrEmpty(verticalPanAxisName) &&
                             Mathf.Abs(GetAxis(verticalPanAxisName)) > 0.1f) ignoreControllerInput = true;
                }
#endif
            }
        }

#if UNITY_EDITOR
        void OnValidate()
        {
            Start();
        }
#endif

        [ContextMenu("Start ignoring events")]
        void StartIgnoring()
        {
            ignoreAllEvents = true;
        }

        [ContextMenu("Stop ignoring events")]
        void StopIgnoring()
        {
            ignoreAllEvents = false;
        }

        /// <summary>
        /// Check the input and send out appropriate events.
        /// 检查输入并发送适当的事件。
        /// </summary>
        void Update()
        {
            // Ignore events if asked for
            if (ignoreAllEvents) return;

            // Only the first UI layer should be processing events,只有第一个UI层应该处理事件
#if UNITY_EDITOR
            if (!Application.isPlaying || !handlesEvents) return;
#else
        if (!handlesEvents) return;
#endif
            if (processEventsIn == ProcessEventsIn.Update) ProcessEvents();//如果处理事件的类型是Update,就在这个函数中处理
        }

        /// <summary>
        /// Keep an eye on screen size changes.
        /// 留意屏幕大小的变化。
        /// </summary>
        void LateUpdate()
        {
#if UNITY_EDITOR
            if (!Application.isPlaying || !handlesEvents) return;
#else
		if (!handlesEvents) return;
#endif
            if (processEventsIn == ProcessEventsIn.LateUpdate) ProcessEvents();//如果处理事件的类型是LateUpdate,就在这个函数中处理

            int w = Screen.width;
            int h = Screen.height;

            if (w != mWidth || h != mHeight)
            {
                mWidth = w;
                mHeight = h;

                NGUIRoot.Broadcast("UpdateAnchors");//发送通知,当更新屏幕大小的时候

                if (onScreenResize != null)
                    onScreenResize();
            }
        }

        /// <summary>
        /// Process all events.
        /// 处理所有的事件。
        /// </summary>
        void ProcessEvents()
        {
            current = this;
            NGUIDebug.debugRaycast = debug;//是否开启 log 的调试

            // Process touch events first,优先处理触摸的事件
            if (useTouch) ProcessTouches();
            else if (useMouse) ProcessMouse();//第二处理鼠标的事件

            // Custom input processing,第三处理自定义输入处理
            if (onCustomInput != null) onCustomInput();

            // Update the keyboard and joystick events,处理键盘和操纵杆事件
            if ((useKeyboard || useController) && !disableController && !ignoreControllerInput) ProcessOthers();

            // If it's time to show a tooltip, inform the object we're hovering over,如果是时候显示工具提示了，通知我们正在悬停的对象
            if (useMouse && mHover != null)
            {
                float scroll = !string.IsNullOrEmpty(scrollAxisName) ? GetAxis(scrollAxisName) : 0f;

                if (scroll != 0f)
                {
                    if (onScroll != null) onScroll(mHover, scroll);
                    Notify(mHover, "OnScroll", scroll);
                }

                if (currentScheme == ControlScheme.Mouse && showTooltips && mTooltipTime != 0f &&
                    !UIPopupList.isOpen &&
                    mMouse[0].dragged == null &&
                    (mTooltipTime < Time.unscaledTime || GetKey(KeyCode.LeftShift) || GetKey(KeyCode.RightShift)))
                {
                    currentTouch = mMouse[0];
                    currentTouchID = -1;
                    ShowTooltip(mHover);
                }
            }

            if (mTooltip != null && !NGUITools.GetActive(mTooltip))
                ShowTooltip(null);

            current = null;
            currentTouchID = -100;
        }

        /// <summary>
        /// Update mouse input.
        /// 处理鼠标的输入事件
        /// </summary>
        public void ProcessMouse()
        {
            // Is any button currently pressed?当前是否有按钮被按下,左中右
            bool isPressed = false;
            bool justPressed = false;

            for (int i = 0; i < 3; ++i)
            {
                if (Input.GetMouseButtonDown(i))
                {
                    currentKey = KeyCode.Mouse0 + i;
                    justPressed = true;
                    isPressed = true;
                }
                else if (Input.GetMouseButton(i))
                {
                    currentKey = KeyCode.Mouse0 + i;
                    isPressed = true;
                }
            }

            // We're currently using touches -- do nothing,如果目前使用触摸，什么都不做
            if (currentScheme == ControlScheme.Touch && activeTouches.Count > 0) return;

            currentTouch = mMouse[0];

            // Update the position and delta,更新位置和增量
            Vector2 pos = Input.mousePosition;

            if (currentTouch.ignoreDelta == 0)
            {
                currentTouch.delta = pos - currentTouch.pos;
            }
            else
            {
                --currentTouch.ignoreDelta;
                currentTouch.delta.x = 0f;
                currentTouch.delta.y = 0f;
            }

            float sqrMag = currentTouch.delta.sqrMagnitude;
            currentTouch.pos = pos;
            mLastPos = pos;

            bool posChanged = false;

            if (currentScheme != ControlScheme.Mouse)
            {
                if (sqrMag < 0.001f) return; // Nothing changed and we are not using the mouse -- exit,没有改变，我们没有使用鼠标退出
                currentKey = KeyCode.Mouse0;
                posChanged = true;
            }
            else if (sqrMag > 0.001f)
            {
                posChanged = true;
            }

            // Propagate the updates to the other mouse buttons,将更新传播到其他鼠标按钮
            for (int i = 1; i < 3; ++i)
            {
                mMouse[i].pos = currentTouch.pos;
                mMouse[i].delta = currentTouch.delta;
            }

            // No need to perform raycasts every frame,不需要在每一帧中执行raycast
            if (isPressed || posChanged || mNextRaycast < RealTime.time)
            {
                mNextRaycast = RealTime.time + 0.02f;
                Raycast(currentTouch);

                if (isPressed)
                {
                    posChanged = true;
                    for (int i = 1; i < 3; ++i) mMouse[i].current = currentTouch.current;
                }
                else if (mMouse[0].current != currentTouch.current)
                {
                    currentKey = KeyCode.Mouse0;
                    posChanged = true;
                    for (int i = 1; i < 3; ++i) mMouse[i].current = currentTouch.current;
                }
            }

            bool highlightChanged = (currentTouch.last != currentTouch.current);
            bool wasPressed = (currentTouch.pressed != null);

            if (!wasPressed && posChanged) hoveredObject = currentTouch.current;

            currentTouchID = -1;
            if (highlightChanged) currentKey = KeyCode.Mouse0;

            if (!isPressed && posChanged)
            {
                if (mTooltipTime != 0f)
                {
                    // Delay the tooltip
                    mTooltipTime = Time.unscaledTime + tooltipDelay;
                }
                else if (mTooltip != null && (!stickyTooltip || highlightChanged))
                {
                    // Hide the tooltip
                    ShowTooltip(null);
                }
            }

            // Generic mouse move notifications,通用鼠标移动通知
            if (posChanged && onMouseMove != null)
            {
                onMouseMove(currentTouch.delta);
                currentTouch = null;
            }

            // The button was released over a different object -- remove the highlight from the previous,该按钮是在一个不同的对象上释放的——去掉前面的高亮部分
            if (highlightChanged && (justPressed || (wasPressed && !isPressed)))
                hoveredObject = null;

            // Process all 3 mouse buttons as individual touches,将所有3个鼠标按钮处理为单独的触摸
            for (int i = 0; i < 3; ++i)
            {
                bool pressed = Input.GetMouseButtonDown(i);
                bool unpressed = Input.GetMouseButtonUp(i);
                if (pressed || unpressed) currentKey = KeyCode.Mouse0 + i;
                currentTouch = mMouse[i];

#if UNITY_STANDALONE_OSX || UNITY_EDITOR_OSX
                if (commandClick && i == 0 && (Input.GetKey(KeyCode.LeftControl) || Input.GetKey(KeyCode.RightControl)))
                {
                    currentTouchID = -2;
                    currentKey = KeyCode.Mouse1;
                }
                else
#endif
                {
                    currentTouchID = -1 - i;
                    currentKey = KeyCode.Mouse0 + i;
                }

                // We don't want to update the last camera while there is a touch happening,我们不想在触摸发生时更新最后一个摄像头
                if (pressed)
                {
                    currentTouch.pressedCam = currentCamera;
                    currentTouch.pressTime = RealTime.time;
                }
                else if (currentTouch.pressed != null) currentCamera = currentTouch.pressedCam;

                // Process the mouse events,处理鼠标事件
                ProcessTouch(pressed, unpressed);
            }

            // If nothing is pressed and there is an object under the touch, highlight it,如果没有按下任何东西，并且触摸下有一个对象，高亮显示它
            if (!isPressed && highlightChanged)
            {
                currentTouch = mMouse[0];
                mTooltipTime = Time.unscaledTime + tooltipDelay;
                currentTouchID = -1;
                currentKey = KeyCode.Mouse0;
                hoveredObject = currentTouch.current;
            }

            currentTouch = null;

            // Update the last value,更新最后一个值
            mMouse[0].last = mMouse[0].current;
            for (int i = 1; i < 3; ++i) mMouse[i].last = mMouse[0].last;
        }

        static bool mUsingTouchEvents = true;

        public class Touch
        {
            public int fingerId;
            public TouchPhase phase = TouchPhase.Began;
            public Vector2 position;
            public int tapCount = 0;
        }

        public delegate int GetTouchCountCallback();

        public delegate Touch GetTouchCallback(int index);

        static public GetTouchCountCallback GetInputTouchCount;
        static public GetTouchCallback GetInputTouch;

        /// <summary>
        /// Update touch-based events.更新触屏事件。
        /// </summary>
        public void ProcessTouches()
        {
            int count = (GetInputTouchCount == null) ? Input.touchCount : GetInputTouchCount();

            for (int i = 0; i < count; ++i)
            {
                int fingerId;
                TouchPhase phase;
                Vector2 position;
                int tapCount;

                if (GetInputTouch == null)
                {
                    UnityEngine.Touch touch = Input.GetTouch(i);
                    phase = touch.phase;
                    fingerId = touch.fingerId;
                    position = touch.position;
                    tapCount = touch.tapCount;
#if UNITY_WIIU && !UNITY_EDITOR
				// Unity bug: http://www.tasharen.com/forum/index.php?topic=5821.0
				position.y = Screen.height - position.y;
#endif
                }
                else
                {
                    Touch touch = GetInputTouch(i);
                    phase = touch.phase;
                    fingerId = touch.fingerId;
                    position = touch.position;
                    tapCount = touch.tapCount;
                }

                currentTouchID = allowMultiTouch ? fingerId : 1;
                currentTouch = GetTouch(currentTouchID, true);

                bool pressed = (phase == TouchPhase.Began) || currentTouch.touchBegan;
                bool unpressed = (phase == TouchPhase.Canceled) || (phase == TouchPhase.Ended);
                currentTouch.delta = position - currentTouch.pos;
                currentTouch.pos = position;
                currentKey = KeyCode.None;

                // Raycast into the screen,投射到屏幕上
                Raycast(currentTouch);

                // We don't want to update the last camera while there is a touch happening,我们不想在触摸发生时更新最后一个摄像头
                if (pressed) currentTouch.pressedCam = currentCamera;
                else if (currentTouch.pressed != null) currentCamera = currentTouch.pressedCam;

                // Double-tap support,双击支持
                if (tapCount > 1) currentTouch.clickTime = RealTime.time;

                // Process the events from this touch,处理这次触摸的事件
                ProcessTouch(pressed, unpressed);

                // If the touch has ended, remove it from the list,如果触摸已经结束，从列表中删除它
                if (unpressed) RemoveTouch(currentTouchID);

                currentTouch.touchBegan = false;
                currentTouch.last = null;
                currentTouch = null;

                // Don't consider other touches,不要考虑其他方面
                if (!allowMultiTouch) break;
            }

            if (count == 0)
            {
                // Skip the first frame after using touch events,使用触摸事件后跳过第一帧
                if (mUsingTouchEvents)
                {
                    mUsingTouchEvents = false;
                    return;
                }

                if (useMouse) ProcessMouse();
#if UNITY_EDITOR
                else if (GetInputTouch == null) ProcessFakeTouches();
#endif
            }
            else mUsingTouchEvents = true;
        }

        /// <summary>
        /// Process fake touch events where the mouse acts as a touch device.
        /// Useful for testing mobile functionality in the editor.
        /// 处理假触摸事件，其中鼠标作为触摸设备。
        /// 对于在编辑器中测试移动功能非常有用。
        /// </summary>
        void ProcessFakeTouches()
        {
            bool pressed = Input.GetMouseButtonDown(0);
            bool unpressed = Input.GetMouseButtonUp(0);
            bool held = Input.GetMouseButton(0);

            if (pressed || unpressed || held)
            {
                currentTouchID = 1;
                currentTouch = mMouse[0];
                currentTouch.touchBegan = pressed;

                if (pressed)
                {
                    currentTouch.pressTime = RealTime.time;
                    activeTouches.Add(currentTouch);
                }

                Vector2 pos = Input.mousePosition;
                currentTouch.delta = pos - currentTouch.pos;
                currentTouch.pos = pos;

                // Raycast into the screen
                Raycast(currentTouch);

                // We don't want to update the last camera while there is a touch happening
                if (pressed) currentTouch.pressedCam = currentCamera;
                else if (currentTouch.pressed != null) currentCamera = currentTouch.pressedCam;

                // Process the events from this touch
                currentKey = KeyCode.None;
                ProcessTouch(pressed, unpressed);

                // If the touch has ended, remove it from the list
                if (unpressed) activeTouches.Remove(currentTouch);
                currentTouch.last = null;
                currentTouch = null;
            }
        }

        /// <summary>
        /// Process keyboard and joystick events.
        /// 处理键盘和操纵杆事件。
        /// </summary>
        public void ProcessOthers()
        {
            currentTouchID = -100;
            currentTouch = controller;

            bool submitKeyDown = false;
            bool submitKeyUp = false;

            if (submitKey0 != KeyCode.None && GetKeyDown(submitKey0))
            {
                currentKey = submitKey0;
                submitKeyDown = true;
            }
            else if (submitKey1 != KeyCode.None && GetKeyDown(submitKey1))
            {
                currentKey = submitKey1;
                submitKeyDown = true;
            }
            else if ((submitKey0 == KeyCode.Return || submitKey1 == KeyCode.Return) && GetKeyDown(KeyCode.KeypadEnter))
            {
                currentKey = submitKey0;
                submitKeyDown = true;
            }

            if (submitKey0 != KeyCode.None && GetKeyUp(submitKey0))
            {
                currentKey = submitKey0;
                submitKeyUp = true;
            }
            else if (submitKey1 != KeyCode.None && GetKeyUp(submitKey1))
            {
                currentKey = submitKey1;
                submitKeyUp = true;
            }
            else if ((submitKey0 == KeyCode.Return || submitKey1 == KeyCode.Return) && GetKeyUp(KeyCode.KeypadEnter))
            {
                currentKey = submitKey0;
                submitKeyUp = true;
            }

            if (submitKeyDown) currentTouch.pressTime = RealTime.time;

            if ((submitKeyDown || submitKeyUp) && currentScheme == ControlScheme.Controller)
            {
                currentTouch.current = controllerNavigationObject;
                ProcessTouch(submitKeyDown, submitKeyUp);
                currentTouch.last = currentTouch.current;
            }

            KeyCode lastKey = KeyCode.None;

            // Handle controller events
            if (useController && !ignoreControllerInput)
            {
                // Automatically choose the first available selection object
                if (!disableController && currentScheme == ControlScheme.Controller &&
                    (currentTouch.current == null || !currentTouch.current.activeInHierarchy))
                    currentTouch.current = controllerNavigationObject;

                if (!string.IsNullOrEmpty(verticalAxisName))
                {
                    int vertical = GetDirection(verticalAxisName);

                    if (vertical != 0)
                    {
                        ShowTooltip(null);
                        currentScheme = ControlScheme.Controller;
                        currentTouch.current = controllerNavigationObject;

                        if (currentTouch.current != null)
                        {
                            lastKey = vertical > 0 ? KeyCode.UpArrow : KeyCode.DownArrow;
                            if (onNavigate != null) onNavigate(currentTouch.current, lastKey);
                            Notify(currentTouch.current, "OnNavigate", lastKey);
                        }
                    }
                }

                if (!string.IsNullOrEmpty(horizontalAxisName))
                {
                    int horizontal = GetDirection(horizontalAxisName);

                    if (horizontal != 0)
                    {
                        ShowTooltip(null);
                        currentScheme = ControlScheme.Controller;
                        currentTouch.current = controllerNavigationObject;

                        if (currentTouch.current != null)
                        {
                            lastKey = horizontal > 0 ? KeyCode.RightArrow : KeyCode.LeftArrow;
                            if (onNavigate != null) onNavigate(currentTouch.current, lastKey);
                            Notify(currentTouch.current, "OnNavigate", lastKey);
                        }
                    }
                }

                float x = !string.IsNullOrEmpty(horizontalPanAxisName) ? GetAxis(horizontalPanAxisName) : 0f;
                float y = !string.IsNullOrEmpty(verticalPanAxisName) ? GetAxis(verticalPanAxisName) : 0f;

                if (x != 0f || y != 0f)
                {
                    ShowTooltip(null);
                    currentScheme = ControlScheme.Controller;
                    currentTouch.current = controllerNavigationObject;

                    if (currentTouch.current != null)
                    {
                        Vector2 delta = new Vector2(x, y);
                        delta *= Time.unscaledDeltaTime;
                        if (onPan != null) onPan(currentTouch.current, delta);
                        Notify(currentTouch.current, "OnPan", delta);
                    }
                }
            }

            // Send out all key events
            if (GetAnyKeyDown != null ? GetAnyKeyDown() : Input.anyKeyDown)
            {
                for (int i = 0, imax = NGUITools.keys.Length; i < imax; ++i)
                {
                    KeyCode key = NGUITools.keys[i];
                    if (lastKey == key) continue;
                    if (!GetKeyDown(key)) continue;

                    if (!useKeyboard && key < KeyCode.Mouse0) continue;
                    if ((!useController || ignoreControllerInput) && key >= KeyCode.JoystickButton0) continue;
                    if (!useMouse &&
                        (key >= KeyCode.Mouse0 && key <= KeyCode.Mouse6)) continue;

                    currentKey = key;
                    if (onKey != null) onKey(currentTouch.current, key);
                    Notify(currentTouch.current, "OnKey", key);
                }
            }

            currentTouch = null;
        }

        /// <summary>
        /// Process the press part of a touch.
        /// 处理触摸的按下部分。
        /// </summary>
        void ProcessPress(bool pressed, float click, float drag)
        {
            // Send out the press message
            if (pressed)
            {
                if (mTooltip != null) ShowTooltip(null);
                mTooltipTime = Time.unscaledTime + tooltipDelay;
                currentTouch.pressStarted = true;
                if (onPress != null && currentTouch.pressed)
                    onPress(currentTouch.pressed, false);

                Notify(currentTouch.pressed, "OnPress", false);

                if (currentScheme == ControlScheme.Mouse && hoveredObject == null && currentTouch.current != null)
                    hoveredObject = currentTouch.current;

                currentTouch.pressed = currentTouch.current;
                currentTouch.dragged = currentTouch.current;
                currentTouch.clickNotification = ClickNotification.BasedOnDelta;
                currentTouch.totalDelta = Vector2.zero;
                currentTouch.dragStarted = false;

                if (onPress != null && currentTouch.pressed)
                    onPress(currentTouch.pressed, true);

                Notify(currentTouch.pressed, "OnPress", true);

                // Change the selection
                if (mSelected != currentTouch.pressed)
                {
                    // Input no longer has selection, even if it did
                    mInputFocus = false;

                    // Remove the selection
                    if (mSelected)
                    {
                        Notify(mSelected, "OnSelect", false);
                        if (onSelect != null) onSelect(mSelected, false);
                    }

                    // Change the selection
                    mSelected = currentTouch.pressed;

                    if (currentTouch.pressed != null)
                    {
#if UNITY_5_5_OR_NEWER
                        UnityEngine.Profiling.Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
                        UIKeyNavigation nav = currentTouch.pressed.GetComponent<UIKeyNavigation>();
                        UnityEngine.Profiling.Profiler.EndSample();
#else
					Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
					UIKeyNavigation nav = currentTouch.pressed.GetComponent<UIKeyNavigation>();
					Profiler.EndSample();
#endif
                        if (nav != null) controller.current = currentTouch.pressed;
                    }

                    // Set the selection
                    if (mSelected)
                    {
#if UNITY_5_5_OR_NEWER
                        UnityEngine.Profiling.Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
                        mInputFocus = (mSelected.activeInHierarchy && mSelected.GetComponent<NGUIInputField>() != null);
                        UnityEngine.Profiling.Profiler.EndSample();
#else
					Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
					mInputFocus = (mSelected.activeInHierarchy && mSelected.GetComponent<NGUIInputField>() != null);
					Profiler.EndSample();
#endif
                        if (onSelect != null) onSelect(mSelected, true);
                        Notify(mSelected, "OnSelect", true);
                    }
                }
            }
            else if (currentTouch.pressed != null &&
                     (currentTouch.delta.sqrMagnitude != 0f || currentTouch.current != currentTouch.last))
            {
                // Keep track of the total movement
                currentTouch.totalDelta += currentTouch.delta;
                float mag = currentTouch.totalDelta.sqrMagnitude;
                bool justStarted = false;

                // If the drag process hasn't started yet but we've already moved off the object, start it immediately
                if (!currentTouch.dragStarted && currentTouch.last != currentTouch.current)
                {
                    currentTouch.dragStarted = true;
                    currentTouch.delta = currentTouch.totalDelta;
                    currentTouch.clickNotification = ClickNotification.None;

                    // OnDragOver is sent for consistency, so that OnDragOut is always preceded by OnDragOver

                    if (onDragStart != null) onDragStart(currentTouch.dragged);
                    Notify(currentTouch.dragged, "OnDragStart", null);

                    if (onDragOver != null) onDragOver(currentTouch.last, currentTouch.dragged);
                    Notify(currentTouch.last, "OnDragOver", currentTouch.dragged);

                }
                else if (!currentTouch.dragStarted && drag < mag)
                {
                    // If the drag event has not yet started, see if we've dragged the touch far enough to start it
                    justStarted = true;
                    currentTouch.dragStarted = true;
                    currentTouch.delta = currentTouch.totalDelta;
                }

                // If we're dragging the touch, send out drag events
                if (currentTouch.dragStarted)
                {
                    if (mTooltip != null) ShowTooltip(null);

                    bool isDisabled = (currentTouch.clickNotification == ClickNotification.None);

                    if (justStarted)
                    {
                        if (onDragStart != null) onDragStart(currentTouch.dragged);
                        Notify(currentTouch.dragged, "OnDragStart", null);

                        if (onDragOver != null) onDragOver(currentTouch.last, currentTouch.dragged);
                        Notify(currentTouch.current, "OnDragOver", currentTouch.dragged);
                    }
                    else if (currentTouch.last != currentTouch.current)
                    {
                        if (onDragOut != null) onDragOut(currentTouch.last, currentTouch.dragged);
                        Notify(currentTouch.last, "OnDragOut", currentTouch.dragged);

                        if (onDragOver != null) onDragOver(currentTouch.last, currentTouch.dragged);
                        Notify(currentTouch.current, "OnDragOver", currentTouch.dragged);
                    }

                    if (onDrag != null) onDrag(currentTouch.dragged, currentTouch.delta);
                    Notify(currentTouch.dragged, "OnDrag", currentTouch.delta);

                    currentTouch.last = currentTouch.current;

                    if (isDisabled)
                    {
                        // If the notification status has already been disabled, keep it as such
                        currentTouch.clickNotification = ClickNotification.None;
                    }
                    else if (currentTouch.clickNotification == ClickNotification.BasedOnDelta && click < mag)
                    {
                        // We've dragged far enough to cancel the click
                        currentTouch.clickNotification = ClickNotification.None;
                    }
                }
            }
#if W2
		else if (currentTouch.delta.y != 0f && (GetKey(KeyCode.LeftControl) || GetKey(KeyCode.LeftCommand)))
		{
			var f = currentTouch.delta.y * 0.001f;
			if (onScroll != null) onScroll(mHover, f);
			Notify(currentTouch.current, "OnScroll", f);
		}
#endif
        }

        /// <summary>
        /// Process the release part of a touch.
        /// 处理触摸的释放部分。按下之后释放操作
        /// </summary>
        void ProcessRelease(bool isMouse, float drag)
        {
            // Send out the unpress message
            if (currentTouch == null) return;
            currentTouch.pressStarted = false;

            if (currentTouch.pressed != null)
            {
                // If there was a drag event in progress, make sure OnDragOut gets sent
                if (currentTouch.dragStarted)
                {
                    if (onDragOut != null) onDragOut(currentTouch.last, currentTouch.dragged);
                    Notify(currentTouch.last, "OnDragOut", currentTouch.dragged);

                    if (onDragEnd != null) onDragEnd(currentTouch.dragged);
                    Notify(currentTouch.dragged, "OnDragEnd", null);
                }

                // Send the notification of a touch ending
                if (onPress != null) onPress(currentTouch.pressed, false);
                Notify(currentTouch.pressed, "OnPress", false);

                // Send a hover message to the object
                if (isMouse)
                {
#if UNITY_5_5_OR_NEWER
                    UnityEngine.Profiling.Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
                    var hasCollider = HasCollider(currentTouch.pressed);
                    UnityEngine.Profiling.Profiler.EndSample();
#else
				Profiler.BeginSample("Editor-only GC allocation (GetComponent)");
				var hasCollider = HasCollider(currentTouch.pressed);
				Profiler.EndSample();
#endif

                    if (hasCollider)
                    {
                        // OnHover is sent to restore the visual state
                        if (mHover == currentTouch.current)
                        {
                            if (onHover != null) onHover(currentTouch.current, true);
                            Notify(currentTouch.current, "OnHover", true);
                        }
                        else hoveredObject = currentTouch.current;
                    }
                }

                // If the button/touch was released on the same object, consider it a click and select it
                if (currentTouch.dragged == currentTouch.current ||
                    (currentScheme != ControlScheme.Controller &&
                     currentTouch.clickNotification != ClickNotification.None &&
                     currentTouch.totalDelta.sqrMagnitude < drag))
                {
                    // If the touch should consider clicks, send out an OnClick notification
                    if (currentTouch.clickNotification != ClickNotification.None &&
                        currentTouch.pressed == currentTouch.current)
                    {
                        ShowTooltip(null);
                        float time = RealTime.time;

                        if (onClick != null) onClick(currentTouch.pressed);
                        Notify(currentTouch.pressed, "OnClick", null);

                        if (currentTouch.clickTime + 0.35f > time && currentTouch.lastClickGO == currentTouch.pressed)
                        {
                            if (onDoubleClick != null) onDoubleClick(currentTouch.pressed);
                            Notify(currentTouch.pressed, "OnDoubleClick", null);
                        }

                        currentTouch.lastClickGO = currentTouch.pressed;
                        currentTouch.clickTime = time;
                    }
                }
                else if (currentTouch.dragStarted) // The button/touch was released on a different object
                {
                    // Send a drop notification (for drag & drop)
                    if (onDrop != null) onDrop(currentTouch.current, currentTouch.dragged);
                    Notify(currentTouch.current, "OnDrop", currentTouch.dragged);
                }
            }

            currentTouch.dragStarted = false;
            currentTouch.pressed = null;
            currentTouch.dragged = null;
        }

        bool HasCollider(GameObject go)
        {
            if (go == null) return false;
            Collider c = go.GetComponent<Collider>();
            if (c != null) return c.enabled;
            Collider2D b = go.GetComponent<Collider2D>();
            return (b != null && b.enabled);
        }

        /// <summary>
        /// Process the events of the specified touch.
        /// 处理指定触摸的事件。
        /// </summary>
        public void ProcessTouch(bool pressed, bool released)
        {
            if (released) mTooltipTime = 0f;

            // Whether we're using the mouse
            bool isMouse = (currentScheme == ControlScheme.Mouse);
            float drag = isMouse ? mouseDragThreshold : touchDragThreshold;
            float click = isMouse ? mouseClickThreshold : touchClickThreshold;

            // So we can use sqrMagnitude below
            drag *= drag;
            click *= click;

            if (currentTouch.pressed != null)
            {
                if (released) ProcessRelease(isMouse, drag);
                ProcessPress(pressed, click, drag);

                // Hold event = show tooltip
                if (tooltipDelay != 0f && currentTouch.deltaTime > tooltipDelay)
                {
                    if (currentTouch.pressed == currentTouch.current && mTooltipTime != 0f && !currentTouch.dragStarted)
                    {
                        mTooltipTime = 0f;
                        currentTouch.clickNotification = ClickNotification.None;
                        if (longPressTooltip) ShowTooltip(currentTouch.pressed);
                        Notify(currentTouch.current, "OnLongPress", null);
                    }
                }
            }
            else if (isMouse || pressed || released)
            {
                ProcessPress(pressed, click, drag);
                if (released) ProcessRelease(isMouse, drag);
            }
        }

        /// <summary>
        /// Cancel the next tooltip, preventing it from being shown.
        /// Moving the mouse again will reset this counter.
        /// 取消下一个工具提示，阻止它被显示。
        /// 再次移动鼠标将重置此计数器。
        /// </summary>
        static public void CancelNextTooltip()
        {
            mTooltipTime = 0f;
        }

        /// <summary>
        /// Show or hide the tooltip.
        /// 显示或隐藏工具提示。
        /// </summary>
        static public bool ShowTooltip(GameObject go)
        {
            if (mTooltip != go)
            {
                if (mTooltip != null)
                {
                    if (onTooltip != null) onTooltip(mTooltip, false);
                    Notify(mTooltip, "OnTooltip", false);
                }

                mTooltip = go;
                mTooltipTime = 0f;

                if (mTooltip != null)
                {
                    if (onTooltip != null) onTooltip(mTooltip, true);
                    Notify(mTooltip, "OnTooltip", true);
                }

                return true;
            }

            return false;
        }

        /// <summary>
        /// Hide the tooltip, if one is visible.
        /// 隐藏工具提示(如果有的话)。
        /// </summary>
        static public bool HideTooltip()
        {
            return ShowTooltip(null);
        }

        /// <summary>
        /// Reset the tooltip timer, allowing the tooltip to show again even over the same widget.
        /// 重置工具提示计时器，允许工具提示在相同的部件上再次显示。
        /// </summary>
        static public void ResetTooltip(float delay = 0.5f)
        {
            ShowTooltip(null);
            mTooltipTime = Time.unscaledTime + delay;
        }
    }
}