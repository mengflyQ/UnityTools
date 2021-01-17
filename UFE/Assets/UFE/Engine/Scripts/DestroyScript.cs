using UnityEngine;
using System.Collections;

public class DestroyScript : MonoBehaviour {
	public int destroyTime = 30; // frames
	
	void Start () {
        UFE.DestroyGameObject(gameObject, destroyTime);
	}
}
