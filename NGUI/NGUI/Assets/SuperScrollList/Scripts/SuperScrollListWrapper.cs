using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using NGUI;

/// <summary>
/// This script is the core class for the plugin, it manages the element list, 
/// and map them to your data list.
/// </summary>
public class SuperScrollListWrapper : MonoBehaviour
{
	public delegate void OnItemRefresh(GameObject go, int dataIndex);

	public UIScrollView ScrollView { get { if (_scrollView == null) { _scrollView = NGUITools.FindInParents<UIScrollView>(gameObject); } return _scrollView; } }

	public NGUIPanel Panel { get { if (_panel == null) { _panel = ScrollView.GetComponent<NGUIPanel>(); } return _panel; } }

	//public SuperScrollListGrid Grid { get { if (_grid == null) { _grid = GetComponent<SuperScrollListGrid>(); } return _grid; } }
	public InternalGrid Grid { get { return _grid; } }

	public int LineCapacity { get { return Grid.maxPerLine; } }

	/// <summary>
	/// Clear all elements
	/// </summary>
	public void Clear()
	{
		_scrollView = null;

		for (int i = 0; i < _items.Count; i++)
		{
			_items[i].gameObject.SetActive(false);
			Destroy(_items[i].gameObject);
		}
		_items.Clear();

		_dataSize = 0;
		_scrollLinesIndexStart = -1;

		_firstLine = null;
		_lastLine = null;
		_scrollLines = new List<Line>();
	}

	/// <summary>
	/// Build a new list
	/// </summary>
	/// <param name="prefab">prefab of element</param>
	/// <param name="dataSize">your data list size</param>
	/// <param name="defaultProgress"> [0-1] scroll position for scroll view</param>
	public void SpawnNewList(GameObject prefab, int dataSize, float defaultProgress)
	{
		Clear();
		InitItems(prefab);

		Resize(dataSize);
		SetProgress(Mathf.Clamp01(defaultProgress));
	}

	/// <summary>
	/// set scroll position for scrollView, [0-1]
	/// </summary>
	/// <param name="progress"></param>
	public void SetProgress(float progress)
	{
		ScrollView.InvalidateBounds();
		ScrollView.SetDragAmount(progress, progress, false);
	}


	/// <summary>
	/// set the callback for element refresh, you'd better set it before SpawnNewList()
	/// </summary>
	public void SetRefreshCallback(OnItemRefresh refreshCallback)
	{
		onItemRefresh = refreshCallback;
	}

	/// <summary>
	/// set the callback for element click (if element is button)
	/// </summary>
	public void SetClickCallback(OnItemRefresh clickCallback)
	{
		onItemClick = clickCallback;
	}

	/// <summary>
	/// call onItemRefresh for each visible element immediately, 
	/// after you modified your data list, call this method to refresh UI
	/// </summary>
	public void RefreshAllItems()
	{
		_forceRefresh = true;
		if (_firstLine != null && _firstLine.index >= 0)
		{
			for (int i = 0; i < _firstLine.activeCount; i++)
			{
				onItemRefresh(_firstLine.members[i].gameObject, i);
			}
		}
		if (_lastLine != null && _lastLine.index >= 0)
		{
			int dataIndexStart = _lastLine.index * LineCapacity;
			for (int i = 0; i < _lastLine.activeCount; i++)
			{
				onItemRefresh(_lastLine.members[i].gameObject, dataIndexStart + i);
			}
		}
		UpdateLines();
	}

	/// <summary>
	/// call onItemRefresh for specified element immediately if it visible, 
	/// after you modified a specified data in your data list, call this method to refresh UI
	/// </summary>
	/// <param name="dataIndex">index in data list</param>
	public void RefreshSpecifiedItem(int dataIndex)
	{
		if (onItemRefresh == null)
		{
			return;
		}
		if (dataIndex < 0 || dataIndex >= _dataSize)
		{
			return;
		}
		int lineIndex = dataIndex / LineCapacity;
		int posInLine = dataIndex - lineIndex * LineCapacity;
		if (lineIndex == _firstLine.index)
		{
			Line line = _firstLine;
			if (posInLine < line.activeCount)
			{
				onItemRefresh(line.members[posInLine].gameObject, dataIndex);
			}
		}
		else if (lineIndex == _lastLine.index)
		{
			Line line = _lastLine;
			if (posInLine < line.activeCount)
			{
				onItemRefresh(line.members[posInLine].gameObject, dataIndex);
			}
		}
		else
		{
			for (int i = 0; i < _scrollLineSize; i++)
			{
				Line line = _scrollLines[i];
				if (lineIndex == line.index)
				{
					if (posInLine < line.activeCount)
					{
						onItemRefresh(line.members[posInLine].gameObject, dataIndex);
					}
					break;
				}
			}
		}
	}

	/// <summary>
	/// if the size of your data list has modified (eg. insert/remove a data element from it), 
	/// call this method to rebuild the element list
	/// this method will call RefreshAllItems() to refresh UI
	/// </summary>
	/// <param name="dataSize"></param>
	public void Resize(int dataSize)
	{
		_dataSize = dataSize;
		int dataLineSize = DataLineSize;

		// Process first line
		_firstLine.index = dataLineSize > 0 ? 0 : -1;
		_firstLine.activeCount = Mathf.Min(_dataSize, LineCapacity);
		for (int i = 0; i < _firstLine.members.Count; i++)
		{
			_firstLine.members[i].gameObject.SetActive(i < _firstLine.activeCount);
		}
		// Process last line
		if (dataLineSize > 1)
		{
			_lastLine.index = dataLineSize - 1;
			_lastLine.activeCount = _dataSize - _lastLine.index * LineCapacity;
			for (int i = 0; i < _lastLine.members.Count; i++)
			{
				_lastLine.members[i].gameObject.SetActive(i < _lastLine.activeCount);
			}
			SetLinePosition(_lastLine);
		}
		else
		{
			_lastLine.index = -1;
			_lastLine.activeCount = 0;
			for (int i = 0; i < _lastLine.members.Count; i++)
			{
				_lastLine.members[i].gameObject.SetActive(false);
			}
		}
		// Process scroll lines
		int scrollDataLineSize = Mathf.Max(dataLineSize - 2, 0);
		_scrollLineSize = Mathf.Min(scrollDataLineSize, _scrollLines.Count);
		for (int i = 0; i < _scrollLines.Count; i++)
		{
			Line line = _scrollLines[i];
			line.index = -1;
			if (i < _scrollLineSize)
			{
				line.activeCount = LineCapacity;
				for (int j = 0; j < line.members.Count; j++)
				{
					line.members[j].gameObject.SetActive(true);
				}
			}
			else
			{
				line.activeCount = 0;
				for (int j = 0; j < line.members.Count; j++)
				{
					line.members[j].gameObject.SetActive(false);
				}
			}
		}

		// Nodify first line and last line
		if (onItemRefresh != null)
		{
			if (_firstLine.index >= 0)
			{
				for (int i = 0; i < _firstLine.activeCount; i++)
				{
					onItemRefresh(_firstLine.members[i].gameObject, i);
				}
			}
			if (_lastLine.index >= 0)
			{
				int dataIndex = _lastLine.index * LineCapacity;
				for (int i = 0; i < _lastLine.activeCount; i++)
				{
					onItemRefresh(_lastLine.members[i].gameObject, dataIndex + i);
				}
			}
		}

		_forceRefresh = true;
		UpdateLines();

		ScrollView.InvalidateBounds();
		ScrollView.RestrictWithinBounds(ScrollView.dragEffect == UIScrollView.DragEffect.None, ScrollView.canMoveHorizontally, ScrollView.canMoveVertically);
	}
	
	///删除元素	
	// public void DeleteElement(List<object> dataList,  int index)
	// {
	// 	this.ScrollView.dragEffect = UIScrollView.DragEffect.None;
	// 	dataList.RemoveAt(index);
	// 	this.Resize(dataList.Count);
	// 	this.ScrollView.dragEffect = UIScrollView.DragEffect.MomentumAndSpring;
	// }
	
	#region Private Methods
	private void Awake()
	{
		Panel.onClipMove += OnMove;
	}

	private void InitItems(GameObject prefab)
	{
		_prefab = prefab;
		int itemLineSize = CalculateRequireLineNum();
		int itemSize = itemLineSize * LineCapacity;

		string format = "D" + itemSize.ToString().Length.ToString();
		for (int i = 0; i < itemSize; i++)
		{
			GameObject go = NGUITools.AddChild(gameObject, _prefab);
			go.SetActive(true);
			go.name += i.ToString(format);

			if (go.GetComponent<Collider>() != null)
			{
				NGUIEventListener.Get(go).onClick = OnClick_Item;
			}
		}

		Grid.Reposition(this);
		_items = Grid.GetChildList(this);

		if (itemLineSize > 0)
		{
			_firstLine = new Line();
			_firstLine.index = 0;
			for (int i = 0; i < LineCapacity; i++)
			{
				_firstLine.members.Add(_items[i]);
			}
		}
		if (itemLineSize > 1)
		{
			_lastLine = new Line();
			_lastLine.index = -1;
			for (int i = (itemLineSize - 1) * LineCapacity; i < _items.Count; i++)
			{
				_lastLine.members.Add(_items[i]);
			}
		}
		if (itemLineSize > 2)
		{
			_scrollLines = new List<Line>(itemLineSize - 2);
			for (int i = 1; i < itemLineSize - 1; i++)
			{
				Line line = new Line();
				line.index = -1;
				int dataIndexStart = LineCapacity * i;
				for (int j = 0; j < LineCapacity; j++)
				{
					line.members.Add(_items[j + dataIndexStart]);
				}

				_scrollLines.Add(line);
			}
		}
	}

	private void UpdateLines()
	{
		if (ScrollView.movement != UIScrollView.Movement.Horizontal && ScrollView.movement != UIScrollView.Movement.Vertical)
		{
			return;
		}
		if (_scrollLineSize == 0)
		{
			return;
		}

		Vector3[] corners = Panel.worldCorners; // lb, lt, rt, rb
		for (int i = 0; i < 4; ++i)
		{
			Vector3 v = corners[i];
			v = transform.InverseTransformPoint(v);
			corners[i] = v;
		}

		float firstLineOffset;
		if (ScrollView.movement == UIScrollView.Movement.Horizontal)
		{
			bool linesIncremental = _lastLine.members[0].localPosition.x > _firstLine.members[0].localPosition.x;
			firstLineOffset = _firstLine.members[0].localPosition.x - (linesIncremental ? corners[0].x : corners[2].x);
		}
		else
		{
			bool linesIncremental = _lastLine.members[0].localPosition.y > _firstLine.members[0].localPosition.y;
			firstLineOffset = _firstLine.members[0].localPosition.y - (linesIncremental ? corners[0].y : corners[2].y);
		}
		float linesDistance = CalculateLinesDistance();
		float firstLineOffsetRate = firstLineOffset / -linesDistance;
		int scrollLinesIndexStart = Mathf.Clamp(Mathf.FloorToInt(firstLineOffsetRate), 1, _lastLine.index - _scrollLineSize);

		if (scrollLinesIndexStart != _scrollLinesIndexStart || _forceRefresh)
		{
			_scrollLinesIndexStart = scrollLinesIndexStart;
			int listIndexStart = LineIndex2ScrollListIndex(scrollLinesIndexStart);
			for (int i = 0; i < _scrollLineSize; i++)
			{
				int listIndex = i + listIndexStart;
				listIndex = listIndex < _scrollLineSize ? listIndex : listIndex - _scrollLineSize;
				Line line = _scrollLines[listIndex];
				int scrollLineIndex = scrollLinesIndexStart + i;
				if (line.index != scrollLineIndex || _forceRefresh)
				{
					line.index = scrollLineIndex;
					SetLinePosition(line);
					if (onItemRefresh != null)
					{
						int dataIndexStart = line.index * LineCapacity;
						for (int j = 0; j < LineCapacity; j++)
						{
							onItemRefresh(line.members[j].gameObject, dataIndexStart + j);
						}
					}
				}
			}
		}
		_forceRefresh = false;
	}

	private void OnMove(NGUIPanel panel)
	{
		UpdateLines();
	}

	private void OnDestroy()
	{
		if (_panel != null)
		{
			_panel.onClipMove -= OnMove;
		}
	}

	private void OnClick_Item(GameObject go)
	{
		if (onItemClick == null)
		{
			return;
		}
		if (_firstLine != null && _firstLine.index >= 0)
		{
			for (int i = 0; i < _firstLine.activeCount; i++)
			{
				if (_firstLine.members[i].gameObject == go)
				{
					onItemClick(go, _firstLine.index * LineCapacity + i);
					return;
				}
			}
		}
		if (_lastLine != null && _lastLine.index >= 0)
		{
			for (int i = 0; i < _lastLine.activeCount; i++)
			{
				if (_lastLine.members[i].gameObject == go)
				{
					onItemClick(go, _lastLine.index * LineCapacity + i);
					return;
				}
			}
		}
		for (int i = 0; i < _scrollLines.Count; i++)
		{
			Line line = _scrollLines[i];
			if (line.index < 0 || line.activeCount == 0)
			{
				continue;
			}
			for (int j = 0; j < line.activeCount; j++)
			{
				if (line.members[j].gameObject == go)
				{
					onItemClick(go, line.index * LineCapacity + j);
					return;
				}
			}
		}
	}

	private void SetLinePosition(Line line)
	{
		Vector3 distanceToFirstLine = CalculateLinesDistanceVector() * line.index;
		for (int i = 0; i < line.members.Count; i++)
		{
			line.members[i].localPosition = _firstLine.members[i].localPosition + distanceToFirstLine;
		}
	}

	private int CalculateRequireLineNum()
	{
		if (ScrollView.movement == UIScrollView.Movement.Horizontal)
		{
			float viewLength = Panel.GetViewSize().x;
			float itemDistance = Mathf.Abs(Grid.cellWidth);
			int needScrollLines = Mathf.FloorToInt(viewLength / itemDistance) + 3;
			return needScrollLines + 2;
		}
		else if (ScrollView.movement == UIScrollView.Movement.Vertical)
		{
			float viewLength = Panel.GetViewSize().y;
			float itemDistance = Mathf.Abs(Grid.cellHeight);
			int needScrollLines = Mathf.FloorToInt(viewLength / itemDistance) + 3;
			return needScrollLines + 2;
		}
		return 0;
	}

	private float CalculateLinesDistance()
	{
		if (ScrollView.movement == UIScrollView.Movement.Horizontal)
		{
			return Grid.cellWidth;
		}
		else if (ScrollView.movement == UIScrollView.Movement.Vertical)
		{
			return Grid.cellHeight;
		}
		return 0;
	}

	private Vector3 CalculateLinesDistanceVector()
	{
		if (ScrollView.movement == UIScrollView.Movement.Horizontal)
		{
			return new Vector3(Grid.cellWidth, 0, 0);
		}
		else if (ScrollView.movement == UIScrollView.Movement.Vertical)
		{
			return new Vector3(0, Grid.cellHeight, 0);
		}
		return Vector3.zero;
	}

	private int LineIndex2ScrollListIndex(int lineIndex)
	{
		return (lineIndex - 1) % _scrollLines.Count;
	}
	#endregion

	#region Private Fields
	private UIScrollView _scrollView;
	private NGUIPanel _panel;
	[SerializeField]
	private InternalGrid _grid = new InternalGrid();
	private GameObject _prefab;
	private int _dataSize;
	private List<Transform> _items = new List<Transform>();

	private Line _firstLine;
	private List<Line> _scrollLines = new List<Line>();
	private Line _lastLine;

	private int _scrollLinesIndexStart = -1;
	private int _scrollLineSize = 0;
	private bool _forceRefresh = false;
	
	public OnItemRefresh onItemRefresh;
	public OnItemRefresh onItemClick;

	private int DataSize { get { return _dataSize; } }
	private int DataLineSize { get { return DataSize <= 0 ? 0 : (DataSize + LineCapacity - 1) / LineCapacity; } }
	private int ItemSize { get { return _items.Count; } }
	private int ItemLineSize { get { return (_firstLine != null ? 1 : 0) + (_lastLine != null ? 1 : 0) + _scrollLines.Count; } }
	#endregion

	#region Sub Classes
	public class Line
	{
		public int index;
		public int activeCount;
		public List<Transform> members = new List<Transform>();
	}

	[System.Serializable]
	public class InternalGrid
	{
		public enum Arrangement
		{
			Horizontal,
			Vertical,
		}

		public Arrangement arrangement = Arrangement.Horizontal;
		public NGUIWidget.Pivot pivot = NGUIWidget.Pivot.TopLeft;
		public float cellWidth = 200f;
		public float cellHeight = -200f;
		[SerializeField]
		private int _maxPerLine = 1;

		public int maxPerLine
		{
			get { return _maxPerLine; }
			set { _maxPerLine = value < 1 ? 1 : value; }
		}

		public void Reposition(SuperScrollListWrapper wrapper)
		{
			NGUIPanel mPanel = wrapper.Panel;

			// it seems can delete
			NGUITools.SetDirty(wrapper);

			// Get the list of children in their current order
			List<Transform> list = GetChildList(wrapper);

			// Reset the position and order of all objects in the list
			ResetPosition(wrapper.transform, list);
		}

		public List<Transform> GetChildList(SuperScrollListWrapper wrapper)
		{
			List<Transform> list = new List<Transform>();
			Transform myTrans = wrapper.transform;

			for (int i = 0; i < myTrans.childCount; ++i)
			{
				list.Add(myTrans.GetChild(i));
			}

			list.Sort((x, y) => string.Compare(x.name, y.name));
			return list;
		}
		private void ResetPosition(Transform myTrans, List<Transform> list)
		{
			int x = 0;
			int y = 0;
			int maxX = 0;
			int maxY = 0;

			// Re-add the children in the same order we have them in and position them accordingly
			for (int i = 0, imax = list.Count; i < imax; ++i)
			{
				Transform t = list[i];
				// See above
				//t.parent = myTrans;

				Vector3 pos = t.localPosition;
				float depth = pos.z;

				pos = (arrangement == Arrangement.Horizontal) ?
					new Vector3(cellWidth * y, cellHeight * x, depth) :
					new Vector3(cellWidth * x, cellHeight * y, depth);

				t.localPosition = pos;

				maxX = Mathf.Max(maxX, x);
				maxY = Mathf.Max(maxY, y);

				if (++x >= maxPerLine && maxPerLine > 0)
				{
					x = 0;
					++y;
				}
			}

			// Apply the origin offset
			if (pivot != NGUIWidget.Pivot.TopLeft)
			{
				Vector2 po = NGUIMath.GetPivotOffset(pivot);

				float fx, fy;

				if (arrangement == Arrangement.Horizontal)
				{
					fx = Mathf.Lerp(0f, maxY * cellWidth, po.x);
					fy = Mathf.Lerp(maxX * cellHeight, 0f, po.y);
				}
				else
				{
					fx = Mathf.Lerp(0f, maxX * cellWidth, po.x);
					fy = Mathf.Lerp(maxY * cellHeight, 0f, po.y);
				}

				for (int i = 0; i < myTrans.childCount; ++i)
				{
					Transform t = myTrans.GetChild(i);
					SpringPosition sp = t.GetComponent<SpringPosition>();

					if (sp != null)
					{
						sp.target.x -= fx;
						sp.target.y -= fy;
					}
					else
					{
						Vector3 pos = t.localPosition;
						pos.x -= fx;
						pos.y -= fy;
						t.localPosition = pos;
					}
				}
			}
		}
	}
	#endregion
	
	
}
