namespace NGUI
{
    using UnityEngine;
    
    
    /// <summary>
    /// 长按,长按触发机制
    /// </summary>
    [AddComponentMenu("NGUI/Event/NGUIButtonLongPress")]
    public class NGUIButtonLongPress : UIButton
    {
        float fPressTime = 0;

        public NGUIEventListener.VoidDelegate onLongPress;

        void OnLongPress()
        {
            if (onLongPress != null) onLongPress(gameObject);
        }

        protected override void OnClick()
        {
            fPressTime = (Time.time + 0.2f);

            if (gameObject.activeInHierarchy)
            {
                current = this;
                EventDelegate.Execute(onClick);
                current = null;
            }
        }

        protected override void OnDisable()
        {
            base.OnDisable();
            fPressTime = 0;
            IsDoubleClick = false;
        }

        void Update()
        {
            if (this.state ==State.Pressed && fPressTime != 0 && Time.time - fPressTime >= 0.1)
            {
                fPressTime = Time.time;
                OnClick();
            }
        }
    }
}
