using UnityEngine;
using System.Collections;
using MoreMountains.Tools;

namespace MoreMountains.CorgiEngine
{	
	/// <summary>
	/// Add this class to a trigger and it will send your player to the next level
	/// </summary>
	[AddComponentMenu("Corgi Engine/Spawn/Finish Level")]
	public class FinishLevel : ButtonActivated 
	{
        /// the (exact) name of the level to go to 
		[Tooltip("the (exact) name of the level to go to ")]
		public string LevelName;
        /// the delay (in seconds) before actually redirecting to a new scene
		[Tooltip("the delay (in seconds) before actually redirecting to a new scene")]
		public float DelayBeforeTransition = 0f;

        protected WaitForSeconds _delayWaitForSeconds;

        /// <summary>
        /// On initialization, we init our delay
        /// </summary>
        public override void Initialization()
        {
            base.Initialization();
            _delayWaitForSeconds = new WaitForSeconds(DelayBeforeTransition);
        }

        /// <summary>
        /// When the button is pressed we start the dialogue
        /// </summary>
        public override void TriggerButtonAction(GameObject instigator)
		{
			if (!CheckNumberOfUses())
			{
				return;
			}
			base.TriggerButtonAction (instigator);
            StartCoroutine(GoToNextLevelCoroutine());
			ActivateZone ();
		}	
        
        protected virtual IEnumerator GoToNextLevelCoroutine()
        {
            yield return _delayWaitForSeconds;
            GoToNextLevel();
        }

		/// <summary>
		/// Loads the next level
		/// </summary>
	    public virtual void GoToNextLevel()
	    {
	    	if (LevelManager.Instance!=null)
	    	{
				LevelManager.Instance.GotoLevel(LevelName);
	    	}
	    	else
	    	{
		        LoadingSceneManager.LoadScene(LevelName);
			}
	    }
	}
}