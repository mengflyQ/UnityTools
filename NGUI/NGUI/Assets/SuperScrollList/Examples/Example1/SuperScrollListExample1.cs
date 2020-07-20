using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using NGUI;

public class SuperScrollListExample1 : MonoBehaviour
{
	public SuperScrollListWrapper wrapper;
	public GameObject elementPrefab;
	public int dataSize = 30;
	[Range(0f, 1f)]
	public float progress = 0;

	void Start()
	{
		wrapper.SetRefreshCallback(OnItemRefresh);
		wrapper.SetClickCallback(OnItemClick);
		wrapper.SpawnNewList(elementPrefab, dataSize, progress);
	}
	
	void OnItemRefresh(GameObject go, int index)
	{
		go.transform.GetChild(0).GetComponent<NGUILabel>().text = index.ToString();
	}

	void OnItemClick(GameObject go, int index)
	{
		Debug.Log("Click item " + index.ToString());
	}
}
