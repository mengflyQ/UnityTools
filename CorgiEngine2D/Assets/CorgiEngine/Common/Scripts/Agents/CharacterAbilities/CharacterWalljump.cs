using UnityEngine;
using System.Collections;
using MoreMountains.Tools;

namespace MoreMountains.CorgiEngine
{
    /// <summary>
    /// Add this component to a Character and it'll be able to walljump
    /// Animator parameters : WallJumping (bool)
    /// </summary>
    [MMHiddenProperties("AbilityStopFeedbacks")]
    [AddComponentMenu("Corgi Engine/Character/Abilities/Character Walljump")] 
	public class CharacterWalljump : CharacterAbility 
	{
        /// the possible ways to apply force when jumping
        public enum ForceModes { AddForce, SetForce }

		/// This method is only used to display a helpbox text at the beginning of the ability's inspector
		public override string HelpBoxText() { return "This component allows your character to perform an extra jump while wall clinging only. Here you can determine the force to apply to that jump."; }

		[Header("Walljump")]

		/// the force of a walljump
		[Tooltip("the force of a walljump")]
		public Vector2 WallJumpForce = new Vector2(10,4);
		/// if this is true, walljumps count as regular jump to decrease the number of jumps left
		[Tooltip("if this is true, walljumps count as regular jump to decrease the number of jumps left")]
		public bool ShouldReduceNumberOfJumpsLeft = true;
        /// returns true if a walljump happened this frame
        public bool WallJumpHappenedThisFrame { get; set; }
		/// the selected force mode 
		[Tooltip("the selected force mode ")]
		public ForceModes ForceMode = ForceModes.AddForce;

        /// a delegate you can listen to to do something when a walljump happens
        public delegate void OnWallJumpDelegate();
        public OnWallJumpDelegate OnWallJump;

        protected CharacterJump _characterJump;
        // animation parameters
        protected const string _wallJumpingAnimationParameterName = "WallJumping";
        protected int _wallJumpingAnimationParameter;

        /// <summary>
        /// On start, we store our characterJump component
        /// </summary>
        protected override void Initialization()
		{
			base.Initialization();
			_characterJump = _character?.FindAbility<CharacterJump>();
		}

		/// <summary>
		/// Every frame, we chack if we're pressing the jump button
		/// </summary>
		protected override void HandleInput()
		{
            WallJumpHappenedThisFrame = false;

            if (_inputManager.JumpButton.State.CurrentState == MMInput.ButtonStates.ButtonDown)
			{
				Walljump();
			}
		}

		/// <summary>
		/// Performs a walljump if the conditions are met
		/// </summary>
		protected virtual void Walljump()
		{
			if (!AbilityAuthorized
				|| _condition.CurrentState != CharacterStates.CharacterConditions.Normal)
			{
				return;
			}
            
			// wall jump
			float wallJumpDirection;

			// if we're here the jump button has been pressed. If we were wallclinging, we walljump
			if (_movement.CurrentState == CharacterStates.MovementStates.WallClinging)
			{
				_movement.ChangeState(CharacterStates.MovementStates.WallJumping);

				// we decrease the number of jumps left
				if ((_characterJump != null) && ShouldReduceNumberOfJumpsLeft)
                {
					_characterJump.SetNumberOfJumpsLeft(_characterJump.NumberOfJumpsLeft-1);
                }
                _characterJump.SetJumpFlags();

                _condition.ChangeState(CharacterStates.CharacterConditions.Normal);
				_controller.GravityActive(true);
				_controller.SlowFall (0f);	

				// If the character is colliding to the right with something (probably the wall)
				if (_character.IsFacingRight)
				{
					wallJumpDirection = -1f;
				}
				else
				{					
					wallJumpDirection = 1f;
				}
                _characterHorizontalMovement?.SetAirControlDirection(wallJumpDirection);

                Vector2 walljumpVector = new Vector2(
										wallJumpDirection*WallJumpForce.x,
										Mathf.Sqrt( 2f * WallJumpForce.y * Mathf.Abs(_controller.Parameters.Gravity))
				);

                if (ForceMode == ForceModes.AddForce)
                {
                    _controller.AddForce(walljumpVector);
                }
                else
                {
                    _controller.SetForce(walljumpVector);
                }
				
                PlayAbilityStartFeedbacks();
                WallJumpHappenedThisFrame = true;

                OnWallJump?.Invoke();

                return;
			}
		}
        
        /// <summary>
        /// Adds required animator parameters to the animator parameters list if they exist
        /// </summary>
        protected override void InitializeAnimatorParameters()
		{
			RegisterAnimatorParameter (_wallJumpingAnimationParameterName, AnimatorControllerParameterType.Bool, out _wallJumpingAnimationParameter);
		}

		/// <summary>
		/// At the end of each cycle, we send our character's animator the current walljumping status
		/// </summary>
		public override void UpdateAnimator()
		{
            MMAnimatorExtensions.UpdateAnimatorBool(_animator, _wallJumpingAnimationParameter, (_movement.CurrentState == CharacterStates.MovementStates.WallJumping), _character._animatorParameters);
		}
	}
}
