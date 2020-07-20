namespace NGUI
{

	using UnityEngine;

	[ExecuteInEditMode]
	[AddComponentMenu("NGUI/Internal/NGUISnapshotPoint")]
	public class NGUISnapshotPoint : MonoBehaviour
	{
		public bool  isOrthographic = true;
		public float nearClip       = -100f;
		public float farClip        = 100f;

		[Range(10, 80)] public int   fieldOfView = 35;
		public                 float orthoSize   = 30f;

		public Texture2D thumbnail;

		void Start()
		{
			if (tag != "EditorOnly") tag = "EditorOnly";
		}
	}
}