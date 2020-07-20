
namespace NGUI
{
    public class BetterListPool<T>
    {
        #region 内置PoolStack
        public class PoolStack<TP>
        {
            TP[] buffer = null;

            public int Size
            {
                get; private set;
            }

            private uint m_capacity = 0;
            public uint Capacity
            {
                get { return m_capacity; }
                set
                {
                    if (value != m_capacity)
                    {
                        m_capacity = value;
                        Realloc();
                    }
                }
            }

            public PoolStack(uint capacity)
            {
                Capacity = capacity;
            }

            public void Push(TP item)
            {
                if (Size >= m_capacity)
                    return;

                buffer[Size++] = item;
            }

            public TP Pop()
            {
                if (buffer != null && Size != 0)
                {
                    return buffer[--Size];
                }

                return default(TP);
            }

            private void Realloc()
            {
                TP[] newList = new TP[m_capacity];

                if (buffer != null && Size > 0)
                {
                    buffer.CopyTo(newList, 0);
                }

                buffer = newList;
            }
        }
        #endregion

        public const int MAX_COUNT = 16;
        public const int POOL_STACK_SIZE = 32;
        private readonly PoolStack<T[]>[] pool = new PoolStack<T[]>[MAX_COUNT];

        public PoolStack<T[]>[] Pool => pool;
        public BetterListPool()
        {
            for (int i = 0; i < MAX_COUNT; i++)
            {
                Pool[i] = new PoolStack<T[]>(POOL_STACK_SIZE);
            }
        }

        int NextPowerOfTwo(int v)
        {
            v -= 1;
            v |= v >> 16;
            v |= v >> 8;
            v |= v >> 4;
            v |= v >> 2;
            v |= v >> 1;
            return v + 1;
        }

        public T[] Alloc(int n)
        {
            n = NextPowerOfTwo(n);
            int pos = GetSlot(n);

            if (pos >= 0 && pos < MAX_COUNT)
            {
                PoolStack<T[]> list = Pool[pos];
                int count = list.Size;

                if (count > 0)
                {
                    return list.Pop();
                }
            }
            return new T[n];
        }

        public void Collect(T[] buffer)
        {
            int count = buffer.Length;
            int pos = GetSlot(count);

            if (pos >= 0 && pos < MAX_COUNT)
            {
                PoolStack<T[]> list = Pool[pos];
                list.Push(buffer);
            }
        }

        private int GetSlot(int value)
        {
            int len = 0;

            while (value > 0)
            {
                ++len;
                value >>= 1;
            }

            return len;
        }
    }
}