using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SuperScrollListExample3Data
{
	public string name = SuperScrollListExample3.GetRandomString(8);
}

public class SuperScrollListExample3 : MonoBehaviour
{
	static public SuperScrollListExample3 Instance;

	public SuperScrollListWrapper wrapper;
	public GameObject elementPrefab;
	public int dataSize = 30;

	private List<SuperScrollListExample3Data> dataList;
	private int selectedIndex = 0;

	void Awake()
	{
		Instance = this;
	}

	void Start()
	{
		dataList = new List<SuperScrollListExample3Data>(dataSize * 2);
		for (int i = 0; i < dataSize; i++)
		{
			dataList.Add(new SuperScrollListExample3Data());
		}
		
		wrapper.SetRefreshCallback(OnItemRefresh);
		wrapper.SetClickCallback(OnItemClick);
		wrapper.SpawnNewList(elementPrefab, dataSize, 0);
	}

	public void InsertElement(int index)
	{
		if (index < dataList.Count)
		{
			dataList.Insert(index, new SuperScrollListExample3Data());
		}
		else
		{
			dataList.Add(new SuperScrollListExample3Data());
		}
		wrapper.Resize(dataList.Count);
	}

	public void DeleteElement(int index)
	{
		dataList.RemoveAt(index);
		wrapper.Resize(dataList.Count);
	}

	public void SelectElement(int index)
	{
		int prev = selectedIndex;
		selectedIndex = index;
		wrapper.RefreshSpecifiedItem(prev);
		wrapper.RefreshSpecifiedItem(selectedIndex);
	}

	void OnItemRefresh(GameObject go, int index)
	{
		SuperScrollListExample3Element element = go.GetComponent<SuperScrollListExample3Element>();
		element.SetData(index, dataList[index], index == selectedIndex);
	}

	void OnItemClick(GameObject go, int index)
	{
		SelectElement(index);
	}

	static string randomPatternString = "abcdefghijklmnopqrstuvwxyz0123456789";
	public static string GetRandomString(int length)
	{
		string s = string.Empty;
		for (int i = 0; i < length; i++)
		{
			s += randomPatternString[Random.Range(0, randomPatternString.Length)];
		}
		return s;
	}
}
