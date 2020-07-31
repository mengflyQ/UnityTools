namespace BasicsLibrary
{
    public abstract class Singleton<T> where T : class, new()
    {
        protected static T _instance = null;

        public static T Instance
        {
            get
            {
                if (null == _instance)
                {
                    _instance = new T();
                }

                return _instance;
            }
        }

        protected Singleton()
        {
            if (null != _instance)
            {
                UnityEngine.Debug.LogError("这个类型:" + (typeof(T)).ToString() + " 已经创建了一个,请勿再次创建");
            }

            Awake();
            Start();
        }

        protected virtual void Awake()
        {

        }

        protected virtual void Start()
        {

        }

        protected virtual void OnDestroy()
        {

        }
    }
}


