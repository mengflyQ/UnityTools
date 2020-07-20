using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NGUI;

public class Test : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        NGUIEventListener.Get(this.gameObject).onPress = (GameObject go, bool state) =>
                                                         {
                                                             Debug.Log("==========onPress");
                                                         };
        NGUILongPress.Get(this.gameObject).onLongPress = (GameObject go) =>
                                                         {
                                                             Debug.Log("==========onLongPress");
                                                         };
    }
}
