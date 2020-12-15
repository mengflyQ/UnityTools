using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MoreMountains.Feedbacks
{
    /// <summary>
    /// A feedback used to trigger an animation (bool, int, float or trigger) on the associated animator
    /// </summary>
    [AddComponentMenu("")]
    [FeedbackHelp("This feedback will allow you to send to an animator (bound in its inspector) a bool, int, float or trigger parameter, allowing you to trigger an animation.")]
    [FeedbackPath("GameObject/Animation")]
    public class MMFeedbackAnimation : MMFeedback 
    {
        /// the possible modes that pilot triggers        
        public enum TriggerModes { SetTrigger, ResetTrigger }
        /// the possible ways to set a value
        public enum ValueModes { None, Constant, Random, Incremental }

        /// sets the inspector color for this feedback
        #if UNITY_EDITOR
        public override Color FeedbackColor { get { return MMFeedbacksInspectorColors.GameObjectColor; } }
        #endif

        [Header("Animation")]
        /// the animator whose parameters you want to update
        public Animator BoundAnimator;
        
        [Header("Trigger")]
        /// if this is true, will update the specified trigger parameter
        public bool UpdateTrigger = false;
        /// the selected mode to interact with this trigger
        [MMFCondition("UpdateTrigger", true)]
        public TriggerModes TriggerMode = TriggerModes.SetTrigger;
        /// the trigger animator parameter to, well, trigger when the feedback is played
        [MMFCondition("UpdateTrigger", true)]
        public string TriggerParameterName;

        [Header("Trigger")]
        /// if this is true, will update the specified bool parameter
        public bool UpdateBool = false;
        /// the bool parameter to turn true when the feedback gets played
        [MMFCondition("UpdateBool", true)]
        public string BoolParameterName;

        [Header("Int")]
        /// the int parameter to turn true when the feedback gets played
        public ValueModes IntValueMode = ValueModes.None;
        /// the int parameter to turn true when the feedback gets played
        [MMFEnumCondition("IntValueMode", (int)ValueModes.Constant, (int)ValueModes.Random, (int)ValueModes.Incremental)]
        public string IntParameterName;
        /// the value to set to that int parameter
        [MMFEnumCondition("IntValueMode", (int)ValueModes.Constant)]
        public int IntValue;
        /// the min value (inclusive) to set at random to that int parameter
        [MMFEnumCondition("IntValueMode", (int)ValueModes.Random)]
        public int IntValueMin;
        /// the max value (exclusive) to set at random to that int parameter
        [MMFEnumCondition("IntValueMode", (int)ValueModes.Random)]
        public int IntValueMax = 5;
        /// the value to increment that int parameter by
        [MMFEnumCondition("IntValueMode", (int)ValueModes.Incremental)]
        public int IntIncrement = 1;

        [Header("Float")]
        /// the Float parameter to turn true when the feedback gets played
        public ValueModes FloatValueMode = ValueModes.None;
        /// the float parameter to turn true when the feedback gets played
        [MMFEnumCondition("FloatValueMode", (int)ValueModes.Constant, (int)ValueModes.Random, (int)ValueModes.Incremental)]
        public string FloatParameterName;
        /// the value to set to that float parameter
        [MMFEnumCondition("FloatValueMode", (int)ValueModes.Constant)]
        public float FloatValue;
        /// the min value (inclusive) to set at random to that float parameter
        [MMFEnumCondition("FloatValueMode", (int)ValueModes.Random)]
        public float FloatValueMin;
        /// the max value (exclusive) to set at random to that float parameter
        [MMFEnumCondition("FloatValueMode", (int)ValueModes.Random)]
        public float FloatValueMax = 5;
        /// the value to increment that float parameter by
        [MMFEnumCondition("FloatValueMode", (int)ValueModes.Incremental)]
        public float FloatIncrement = 1;

        protected int _triggerParameter;
        protected int _boolParameter;
        protected int _intParameter;
        protected int _floatParameter;

        /// <summary>
        /// Custom Init
        /// </summary>
        /// <param name="owner"></param>
        protected override void CustomInitialization(GameObject owner)
        {
            base.CustomInitialization(owner);
            _triggerParameter = Animator.StringToHash(TriggerParameterName);
            _boolParameter = Animator.StringToHash(BoolParameterName);
            _intParameter = Animator.StringToHash(IntParameterName);
            _floatParameter = Animator.StringToHash(FloatParameterName);
        }

        /// <summary>
        /// On Play, checks if an animator is bound and triggers parameters
        /// </summary>
        /// <param name="position"></param>
        /// <param name="attenuation"></param>
        protected override void CustomPlayFeedback(Vector3 position, float attenuation = 1.0f)
        {
            if (Active)
            {
                if (BoundAnimator == null)
                {
                    Debug.LogWarning("No animator was set for " + this.name);
                    return;
                }

                if (UpdateTrigger)
                {
                    if (TriggerMode == TriggerModes.SetTrigger)
                    {
                        BoundAnimator.SetTrigger(_triggerParameter);
                    }
                    if (TriggerMode == TriggerModes.ResetTrigger)
                    {
                        BoundAnimator.ResetTrigger(_triggerParameter);
                    }
                }

                if (UpdateBool)
                {
                    BoundAnimator.SetBool(_boolParameter, true);
                }

                switch (IntValueMode)
                {
                    case ValueModes.Constant:
                        BoundAnimator.SetInteger(_intParameter, IntValue);
                        break;
                    case ValueModes.Incremental:
                        int newValue = BoundAnimator.GetInteger(_intParameter) + IntIncrement;
                        BoundAnimator.SetInteger(_intParameter, newValue);
                        break;
                    case ValueModes.Random:
                        int randomValue = Random.Range(IntValueMin, IntValueMax);
                        BoundAnimator.SetInteger(_intParameter, randomValue);
                        break;
                }

                switch (FloatValueMode)
                {
                    case ValueModes.Constant:
                        BoundAnimator.SetFloat(_floatParameter, FloatValue);
                        break;
                    case ValueModes.Incremental:
                        float newValue = BoundAnimator.GetFloat(_floatParameter) + FloatIncrement;
                        BoundAnimator.SetFloat(_floatParameter, newValue);
                        break;
                    case ValueModes.Random:
                        float randomValue = Random.Range(FloatValueMin, FloatValueMax);
                        BoundAnimator.SetFloat(_floatParameter, randomValue);
                        break;
                }
            }
        }
        
        /// <summary>
        /// On stop, turns the bool parameter to false
        /// </summary>
        /// <param name="position"></param>
        /// <param name="attenuation"></param>
        protected override void CustomStopFeedback(Vector3 position, float attenuation = 1.0f)
        {
            if (Active && UpdateBool)
            {
                BoundAnimator.SetBool(_boolParameter, false);
            }
        }
    }
}
