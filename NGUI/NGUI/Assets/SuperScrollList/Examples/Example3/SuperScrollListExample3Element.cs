using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NGUI;

public class SuperScrollListExample3Element : MonoBehaviour
{
	public NGUILabel indexLabel;
	public NGUILabel nameLabel;
	public GameObject selectedGo;
	public GameObject insertButton;
	public GameObject deleteButton;

	private int index;

	void Start()
	{
		NGUIEventListener.Get(insertButton).onClick = OnInsertButtonClick;
		NGUIEventListener.Get(deleteButton).onClick = OnDeleteButtonClick;
	}
	
	void Update()
	{

	}

	public void SetData(int index, SuperScrollListExample3Data data, bool selected)
	{
		this.index = index;
		indexLabel.text = index.ToString();
		nameLabel.text = data.name;
		selectedGo.SetActive(selected);
	}

	private void OnInsertButtonClick(GameObject go)
	{
		SuperScrollListExample3.Instance.InsertElement(index);
	}

	private void OnDeleteButtonClick(GameObject go)
	{
		SuperScrollListExample3.Instance.DeleteElement(index);
	}
}
