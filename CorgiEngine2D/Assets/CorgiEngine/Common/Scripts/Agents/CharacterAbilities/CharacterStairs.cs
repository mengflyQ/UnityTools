using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;

namespace MoreMountains.CorgiEngine
{
    /// <summary>
    /// Add this ability to a character and it'll be able to climb stairs
    /// Animation parameter : OnStairs, boolean
    /// </summary>
    [MMHiddenProperties("AbilityStartFeedbacks", "AbilityStopFeedbacks")]
    [AddComponentMenu("Corgi Engine/Character/Abilities/Character Stairs")]
    public class CharacterStairs : CharacterAbility
    {
        public override string HelpBoxText() { return "This component allows your character to climb stairs, which are basically one way platforms that can intersect with the ground and will be ignored unless you press up while walking towards them."; }

        [Header("Status")]

        /// true if the character is on stairs this frame, false otherwise
        [MMReadOnly]
        [Tooltip("true if the character is on stairs this frame, false otherwise")]
        public bool OnStairs = false;
        /// true if there are stairs below our character
        [MMReadOnly]
        [Tooltip("true if there are stairs below our character")]
        public bool StairsBelow = false;
        /// true if there are stairs ahead of our character
        [MMReadOnly]
        [Tooltip("true if there are stairs ahead of our character")]
        public bool StairsAhead = false;

        [Header("Ahead stairs detection")]

        /// the offset to apply when raycasting for stairs
        [Tooltip("the offset to apply when raycasting for stairs")]
        public Vector3 StairsAheadDetectionRaycastOrigin = new Vector3(-0.75f, 0f, 0f);
        /// the length of the raycast looking for stairs
        [Tooltip("the length of the raycast looking for stairs")]
        public float StairsAheadDetectionRaycastLength = 2f;
        /// the offset to apply when raycasting for stairs
        [Tooltip("the offset to apply when raycasting for stairs")]
        public Vector3 StairsBelowDetectionRaycastOrigin = new Vector3(-0.2f, 0f, 0f);
        /// the length of the raycast looking for stairs
        [Tooltip("the length of the raycast looking for stairs")]
        public float StairsBelowDetectionRaycastLength = 0.25f;
        /// the duration, in seconds, during which collisions with one way platforms should be ignored when starting to get down a stair
        [Tooltip("the duration, in seconds, during which collisions with one way platforms should be ignored when starting to get down a stair")]
        public float StairsBelowLockTime = 0.2f;
        
        protected bool _stairsInputUp = false;
        protected bool _stairsInputDown = false;
        protected float _stairsAheadAngle;
        protected float _stairsBelowAngle;
        protected Vector3 _raycastOrigin;
        protected Vector3 _raycastDirection;
        protected Collider2D _goindDownEntryBoundsCollider;
        protected float _goindDownEntryAt; 

        // animation parameters
        protected const string _stairsAnimationParameterName = "OnStairs";
        protected int _stairsAnimationParameter;

        /// <summary>
        /// Initialization method
        /// </summary>
        protected override void Initialization()
        {
            base.Initialization();
        }

        /// <summary>
        /// Every frame, we check the input to see if we should initiate a stair climb
        /// </summary>
        protected override void HandleInput()
        {
            _stairsInputUp = (_verticalInput > _inputManager.Threshold.y);
            _stairsInputDown = (_verticalInput < -_inputManager.Threshold.y);
        }

        /// <summary>
        /// Every frame, we check for stairs in front and below the character, we handle input and decide whether or not we should climb stairs or go down them
        /// </summary>
        public override void ProcessAbility()
        {
            base.ProcessAbility();
            HandleEntryBounds();
            CheckIfStairsAhead();
            CheckIfStairsBelow();
            CheckIfOnStairways();
            HandleStairsAuthorization();
        }

        /// <summary>
		/// Sets the character in looking up state and asks the camera to look up
		/// </summary>
		protected virtual void HandleStairsAuthorization()
        {
            if (!AbilityAuthorized) // if the ability is not permitted
            {
                return;
            }

            bool authorize = true;
            if (_controller.State.IsGrounded // or if we're  grounded
                && (_condition.CurrentState == CharacterStates.CharacterConditions.Normal) // or if we're not in a normal condition
                && (_movement.CurrentState != CharacterStates.MovementStates.Jumping) // or if we're jumping
                && (_movement.CurrentState != CharacterStates.MovementStates.WallJumping) // or if we're wall jumping
                && (_movement.CurrentState != CharacterStates.MovementStates.LadderClimbing) // or if we're wall jumping
                && (_movement.CurrentState != CharacterStates.MovementStates.Dashing))
            { 
                if (StairsAhead && !OnStairs)
                {
                    if (!_stairsInputUp)
                    {
                        authorize = false;
                    }
                    if ((_stairsAheadAngle < 0) || (_stairsAheadAngle >= 90f))
                    {
                        authorize = false;
                    }
                }

                if (StairsBelow 
                    && !OnStairs 
                    && _controller.OneWayPlatformMask.MMContains(_controller.StandingOn.layer))
                {
                    if (_stairsInputDown)
                    {

                        if ((_stairsBelowAngle > 0) && (_stairsBelowAngle <= 90f))
                        {
                            _movement.ChangeState(CharacterStates.MovementStates.Jumping);
                            _goindDownEntryBoundsCollider = _controller.StandingOnCollider;
                            _controller.PlatformMask -= _controller.OneWayPlatformMask;
                            _controller.PlatformMask -= _controller.MovingOneWayPlatformMask;
                            _controller.PlatformMask -= _controller.MidHeightOneWayPlatformMask;
                            _controller.PlatformMask |= _controller.StairsMask;
                            _goindDownEntryAt = Time.time;
                        }
                    }
                }
            }           

            if (authorize)
            {
                AuthorizeStairs();
            }
            else
            {
                DenyStairs();
            }
        }

        /// <summary>
        /// Restores collisions once we're out of the stairs and if enough time has passed
        /// </summary>
        protected virtual void HandleEntryBounds()
        {
            if (_goindDownEntryBoundsCollider == null)
            {
                return;
            }
            if (Time.time - _goindDownEntryAt < StairsBelowLockTime)
            {
                return;
            }
            if (!_goindDownEntryBoundsCollider.bounds.Contains(_controller.ColliderBottomPosition))
            {
                _controller.CollisionsOn();
                _goindDownEntryBoundsCollider = null;
            }
        }

        /// <summary>
        /// Authorizes collisions with stairs
        /// </summary>
        protected virtual void AuthorizeStairs()
        {
            _controller.CollisionsOnWithStairs();
        }

        /// <summary>
        /// Prevents collisions with stairs
        /// </summary>
        protected virtual void DenyStairs()
        {
            _controller.CollisionsOffWithStairs();
        }

        /// <summary>
        /// Casts a ray to see if there are stairs in front of the character
        /// </summary>
        protected virtual void CheckIfStairsAhead()
        {
            StairsAhead = false;
            
            if (_character.IsFacingRight)
            {
                _raycastOrigin = transform.position + StairsAheadDetectionRaycastOrigin.x * transform.right + StairsAheadDetectionRaycastOrigin.y * transform.up;
                _raycastDirection = transform.right;
            }
            else
            {
                _raycastOrigin = transform.position - StairsAheadDetectionRaycastOrigin.x * transform.right + StairsAheadDetectionRaycastOrigin.y * transform.up;
                _raycastDirection = -transform.right;
            }

            // we cast our ray in front of us
            RaycastHit2D hit = MMDebug.RayCast(_raycastOrigin, _raycastDirection, StairsAheadDetectionRaycastLength, _controller.StairsMask, Color.yellow, _controller.Parameters.DrawRaycastsGizmos);

            if (hit)
            {
                _stairsAheadAngle = Mathf.Abs(Vector2.Angle(hit.normal, transform.up));
                StairsAhead = true;                              
            }
        }

        /// <summary>
        /// Casts a ray to see if there are stairs below the character
        /// </summary>
        protected virtual void CheckIfStairsBelow()
        {
            StairsBelow = false;

            _raycastOrigin = _controller.BoundsCenter;
            if (_character.IsFacingRight)
            {
                _raycastOrigin = _controller.ColliderBottomPosition + StairsBelowDetectionRaycastOrigin.x * transform.right + StairsBelowDetectionRaycastOrigin.y * transform.up;                
            }
            else
            {
                _raycastOrigin = _controller.ColliderBottomPosition - StairsBelowDetectionRaycastOrigin.x * transform.right + StairsBelowDetectionRaycastOrigin.y * transform.up;
            }

            RaycastHit2D hit = MMDebug.RayCast(_raycastOrigin, -transform.up, StairsBelowDetectionRaycastLength, _controller.StairsMask, Color.yellow, _controller.Parameters.DrawRaycastsGizmos);

            if (hit)
            {
                if (_character.IsFacingRight)
                {
                    _stairsBelowAngle = Mathf.Abs(Vector2.Angle(hit.normal, transform.right));
                }
                else
                {
                    _stairsBelowAngle = Mathf.Abs(Vector2.Angle(hit.normal, -transform.right));
                }
                
                StairsBelow = true;
            }
        }

        /// <summary>
        /// Checks if the character is currently standing on stairs
        /// </summary>
        protected virtual void CheckIfOnStairways()
        {
            OnStairs = false;
            if (_controller.StandingOn != null)
            {
                if (_controller.StairsMask.MMContains(_controller.StandingOn.layer))
                {
                    OnStairs = true;
                }
            }
        }

        /// <summary>
        /// Adds required animator parameters to the animator parameters list if they exist
        /// </summary>
        protected override void InitializeAnimatorParameters()
        {
            RegisterAnimatorParameter(_stairsAnimationParameterName, AnimatorControllerParameterType.Bool, out _stairsAnimationParameter);
        }

        /// <summary>
        /// At the end of the ability's cycle, we send our current crouching and crawling states to the animator
        /// </summary>
        public override void UpdateAnimator()
        {
            MMAnimatorExtensions.UpdateAnimatorBool(_animator, _stairsAnimationParameter, OnStairs, _character._animatorParameters);
        }
    }
}
