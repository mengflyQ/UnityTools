using UnityEngine;
using System.Collections;
using MoreMountains.Tools;

namespace MoreMountains.CorgiEngine
{
    /// <summary>
    /// This ability will make your character move automatically, without having to touch the left or right inputs
    /// </summary>
    [MMHiddenProperties("AbilityStartFeedbacks", "AbilityStopFeedbacks")]
    [AddComponentMenu("Corgi Engine/Character/Abilities/Character Auto Movement")]
    [RequireComponent(typeof(CharacterHorizontalMovement))]
    public class CharacterAutoMovement : CharacterAbility
    {
        /// the possible directions the character can start moving in
        public enum InitialDirections { Left, Right, None }

        [Header("Initialization")]

        /// if this is true, will set other abilities in the appropriate configuration on initialization automatically
        [Tooltip("if this is true, will set other abilities in the appropriate configuration on initialization automatically")]
        public bool AutoSetup = true;
        /// the initial direction the character should start moving towards
        [Tooltip("the initial direction the character should start moving towards")]
        public InitialDirections InitialDirection = InitialDirections.Right;
        /// if this is true, the character 
        [Tooltip("if this is true, the character ")]
        public bool RunningOnStart = false;

        [Header("Walljump")]

        /// if this is true, doing a walljump will also cause a direction change
        [Tooltip("if this is true, doing a walljump will also cause a direction change")]
        public bool ChangeDirectionOnWalljump = true;

        [Header("Tests")]

        /// Test button for ToggleRun
        [MMInspectorButton("ToggleRun")]
        public bool ToggleRunButton;
        /// Test button for ChangeDirection
        [MMInspectorButton("ChangeDirection")]
        public bool ChangeDirectionButton;

        protected CharacterRun _characterRun;
        protected CharacterWalljump _characterWallJump;
        protected float _currentDirection = 1f;
        protected bool _running = false;
        protected float _directionBeforePause = 0f;
        
        /// <summary>
        /// On init we grab our components and set them if needed, set our initial direction and run state
        /// </summary>
        protected override void Initialization()
        {
            base.Initialization();
            if (AutoSetup)
            {
                _characterHorizontalMovement.ReadInput = false;
            }

            switch (InitialDirection)
            {
                case InitialDirections.Left:
                    _currentDirection = -1f;
                    break;
                case InitialDirections.Right:
                    _currentDirection = 1f;
                    break;
                case InitialDirections.None:
                    _currentDirection = 0f;
                    break;
            }

            _characterRun = _character?.FindAbility<CharacterRun>();
            if (_characterRun != null)
            {
                if (AutoSetup)
                {
                    _characterRun.ReadInput = false;
                }
                if (RunningOnStart)
                {
                    _running = true;
                    _characterRun.ForceRun(true);
                }
            }
            
            _characterWallJump = _character?.FindAbility<CharacterWalljump>();
            if (_characterWallJump != null)
            {
                _characterWallJump.OnWallJump += OnWallJump;
            }
        }

        /// <summary>
        /// Forces a current direction and passes it to the CharacterHorizontalMovement ability
        /// </summary>
        protected override void HandleInput()
        {
            bool gravityShouldReverseInput = false;
            if (_characterGravity != null)
            {
                gravityShouldReverseInput = _characterGravity.ShouldReverseInput();
            }

            if (_horizontalInput != 0f)
            {
                _horizontalInput = gravityShouldReverseInput ? -_horizontalInput : _horizontalInput;
                _currentDirection = (_horizontalInput < 0f) ? -1f : 1f;
            }

            _characterHorizontalMovement.SetHorizontalMove(gravityShouldReverseInput ? -_currentDirection : _currentDirection);
        }

        /// <summary>
        /// On process ability we do nothing
        /// </summary>
        public override void ProcessAbility()
        {
            // do nothing
        }

        /// <summary>
        /// When the Character walljumps, we change direction if needed
        /// </summary>
        protected virtual void OnWallJump()
        {
            if (ChangeDirectionOnWalljump)
            {
                ChangeDirection();
            }
        }

        /// <summary>
        /// Forces a pause in the movement, that can then be resumed
        /// </summary>
        public virtual void PauseMovement()
        {
            _directionBeforePause = _currentDirection;
            _currentDirection = 0f;
        }

        /// <summary>
        /// Resumes movement
        /// </summary>
        public virtual void ResumeMovement()
        {
            _currentDirection = _directionBeforePause;
        }

        /// <summary>
        /// Changes direction (left to right, right to left)
        /// </summary>
        public virtual void ChangeDirection()
        {
            _currentDirection = -_currentDirection;
        }

        /// <summary>
        /// Forces a direction (-1 left, 1 right)
        /// </summary>
        /// <param name="newDirection"></param>
        public virtual void ForceDirection(float newDirection)
        {
            _currentDirection = newDirection;
        }

        /// <summary>
        /// Changes the run state (walk > run, run > walk)
        /// </summary>
        public virtual void ToggleRun()
        {            
            _running = !_running;
            _characterRun.ForceRun(_running);
        }

        /// <summary>
        /// Forces run (true) or walk (false)
        /// </summary>
        /// <param name="status"></param>
        public virtual void ForceRun(bool status)
        {
            _running = status;
            _characterRun.ForceRun(status);
        }
    }
}
