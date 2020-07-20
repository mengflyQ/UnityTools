namespace NGUI
{

	using UnityEngine;

	/// <summary>
	/// Tween the widget's size.
	/// </summary>

	[RequireComponent(typeof(NGUIWidget))]
	[AddComponentMenu("NGUI/Tween/Tween Height")]
	public class TweenHeight : UITweener
	{
		public int from = 100;
		public int to   = 100;

		[Tooltip("If set, 'from' value will be set to match the specified rectangle")]
		public NGUIWidget fromTarget;

		[Tooltip("If set, 'to' value will be set to match the specified rectangle")]
		public NGUIWidget toTarget;

		[Tooltip("Whether there is a table that should be updated")]
		public bool updateTable = false;

		NGUIWidget mWidget;
		UITable  mTable;

		public NGUIWidget cachedWidget
		{
			get
			{
				if (mWidget == null) mWidget = GetComponent<NGUIWidget>();
				return mWidget;
			}
		}

		[System.Obsolete("Use 'value' instead")]
		public int height
		{
			get { return this.value; }
			set { this.value = value; }
		}

		/// <summary>
		/// Tween's current value.
		/// </summary>

		public int value
		{
			get { return cachedWidget.height; }
			set { cachedWidget.height = value; }
		}

		/// <summary>
		/// Tween the value.
		/// </summary>

		protected override void OnUpdate(float factor, bool isFinished)
		{
			if (fromTarget) from = fromTarget.width;
			if (toTarget) to     = toTarget.width;

			value = Mathf.RoundToInt(from * (1f - factor) + to * factor);

			if (updateTable)
			{
				if (mTable == null)
				{
					mTable = NGUITools.FindInParents<UITable>(gameObject);
					if (mTable == null)
					{
						updateTable = false;
						return;
					}
				}

				mTable.repositionNow = true;
			}
		}

		/// <summary>
		/// Start the tweening operation.
		/// </summary>

		static public TweenHeight Begin(NGUIWidget widget, float duration, int height)
		{
			TweenHeight comp = UITweener.Begin<TweenHeight>(widget.gameObject, duration);
			comp.from = widget.height;
			comp.to   = height;

			if (duration <= 0f)
			{
				comp.Sample(1f, true);
				comp.enabled = false;
			}

			return comp;
		}

		[ContextMenu("Set 'From' to current value")]
		public override void SetStartToCurrentValue()
		{
			from = value;
		}

		[ContextMenu("Set 'To' to current value")]
		public override void SetEndToCurrentValue()
		{
			to = value;
		}

		[ContextMenu("Assume value of 'From'")]
		void SetCurrentValueToStart()
		{
			value = from;
		}

		[ContextMenu("Assume value of 'To'")]
		void SetCurrentValueToEnd()
		{
			value = to;
		}
	}
}