using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Test : MonoBehaviour
{
    public CanvasRenderer cr;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(cr.relativeDepth);
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
