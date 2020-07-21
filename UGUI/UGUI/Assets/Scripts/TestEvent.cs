using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class TestEvent : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        EventTriggerListener.Get(this.gameObject).onClick = OnButtonClick;
    }

    private void OnButtonClick(GameObject go) {
        Debug.Log (go.name + "    " + this.gameObject.name);
    }

    private void Update()
    {
        bool m = Input.GetMouseButtonDown(0);//鼠标
        bool t = Input.touchCount >0 && Input.GetTouch(0).phase == TouchPhase.Began; //手指
        if (m || t)
        {
            if (m && EventSystem.current.IsPointerOverGameObject())
            {
                Debug.Log("当前鼠标触摸在 UI 上面");
            }
            else if (t &&  EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId))
            {
                Debug.Log("当前手指触摸在 UI 上面");
            }
            else
            {
                Debug.Log("没有触摸在 UI 上面");
            }
        }
    }
}
