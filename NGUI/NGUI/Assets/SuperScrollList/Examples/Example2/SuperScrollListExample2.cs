using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using NGUI;

public class SuperScrollListExample2 : MonoBehaviour
{
	public SuperScrollListWrapper wrapper;
	public GameObject elementPrefab;
	public UIToggle reverseToggle;
	public int dataSize = 30;

	private bool reversed = false;

	void Start()
	{
		wrapper.SetRefreshCallback(OnItemRefresh);
		wrapper.SetClickCallback(OnItemClick);
		wrapper.SpawnNewList(elementPrefab, dataSize, 0);

		EventDelegate.Add(reverseToggle.onChange, OnReverseToggleChange);
	}
	
	void OnItemRefresh(GameObject go, int index)
	{
		if (reversed)
		{
			index = dataSize - 1 - index;
		}
		go.transform.GetChild(0).GetComponent<NGUILabel>().text = (index).ToString();
	}

	void OnItemClick(GameObject go, int index)
	{
		if (reversed)
		{
			index = dataSize - 1 - index;
		}
		Debug.Log("Click item " + index.ToString());
	}

	void OnReverseToggleChange()
	{
		if (reversed != reverseToggle.value)
		{
			reversed = reverseToggle.value;
			wrapper.RefreshAllItems();
		}
	}
}
