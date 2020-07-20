namespace NGUI
{
    using UnityEngine;
    /// <summary>
    /// 长按,长按触发机制,继承自 NGUIEventListener
    /// </summary>
    [AddComponentMenu("NGUI/Event/NGUILongPress")]
    public class NGUILongPress : NGUIEventListener
    {
        float fPressTime = 0;

        public VoidDelegate onLongPress;
        void OnLongPress() { if (onLongPress != null) onLongPress(gameObject); }

        void OnPress(bool isPressed)
        {
            fPressTime = (isPressed == false) ? 0 : (Time.time + 0.2f);

            if (onPress != null && gameObject.activeInHierarchy)
            {
                onPress(gameObject, isPressed );
            }
        }

        void OnDisable()
        {
            fPressTime = 0;
        }

        void Update()
        {
            if (fPressTime != 0 && Time.time - fPressTime >= 0.1)
            {
                fPressTime = Time.time;
                OnLongPress();
            }
        }

        new static public NGUILongPress Get(GameObject go)
        {
            NGUILongPress listener     = go.GetComponent<NGUILongPress>();
            if (listener == null) listener = go.AddComponent<NGUILongPress>();
            return listener;
        }
    }
}

