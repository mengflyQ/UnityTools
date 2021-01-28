// Animancer // https://kybernetik.com.au/animancer // Copyright 2020 Kybernetik //

using UnityEngine.Animations;
using UnityEngine.Experimental.Animations;
using Unity.Collections;

namespace Animancer
{
    /// <summary>[Pro-Only]
    /// A wrapper which allows access to the value of <see cref="bool"/> properties that are controlled by animations.
    /// </summary>
    /// <example>
    /// Example: <see href="https://kybernetik.com.au/animancer/docs/examples/jobs">Animation Jobs</see>
    /// </example>
    /// https://kybernetik.com.au/animancer/api/Animancer/AnimatedBool
    /// 
    public sealed class AnimatedBool : AnimatedProperty<AnimatedBool.Job, bool>
    {
        /************************************************************************************************************************/

        /// <summary>
        /// Allocates room for a specified number of properties to be filled by
        /// <see cref="InitialiseProperty(int, Transform, Type, string)"/>.
        /// </summary>
        public AnimatedBool(IAnimancerComponent animancer, int propertyCount,
            NativeArrayOptions options = NativeArrayOptions.ClearMemory)
            : base(animancer, propertyCount, options)
        { }

        /// <summary>Initialises a single property.</summary>
        public AnimatedBool(IAnimancerComponent animancer, string propertyName)
            : base(animancer, propertyName)
        { }

        /// <summary>Initialises a group of properties.</summary>
        public AnimatedBool(IAnimancerComponent animancer, params string[] propertyNames)
            : base(animancer, propertyNames)
        { }

        /************************************************************************************************************************/

        protected override void CreateJob()
        {
            _Job = new Job() { properties = _Properties, values = _Values };
        }

        /************************************************************************************************************************/

        /// <summary>An <see cref="IAnimationJob"/> which reads an array of <see cref="bool"/> values.</summary>
        /// https://kybernetik.com.au/animancer/api/Animancer/Job
        /// 
        public struct Job : IAnimationJob
        {
            public NativeArray<PropertyStreamHandle> properties;
            public NativeArray<bool> values;

            public void ProcessRootMotion(AnimationStream stream) { }

            public void ProcessAnimation(AnimationStream stream)
            {
                for (int i = properties.Length - 1; i >= 0; i--)
                    values[i] = properties[i].GetBool(stream);
            }
        }

        /************************************************************************************************************************/
    }
}
