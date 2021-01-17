using UnityEngine;
using System.Collections;

public class DefaultGameOverScreen : StoryModeScreen{
	#region public instance properties
	public AudioClip onLoadSound;
	public AudioClip music;
	public bool stopPreviousSoundEffectsOnLoad = false;
	public float delayBeforePlayingMusic = 0.1f;
	public float delayBeforeLoadingNextScreen = 3f;
	#endregion

	#region public override methods
	public override void OnShow (){
		base.OnShow ();

		if (this.music != null){
			UFE.DelayLocalAction(delegate(){UFE.PlayMusic(this.music);}, this.delayBeforePlayingMusic);
		}
		
		if (this.stopPreviousSoundEffectsOnLoad){
			UFE.StopSounds();
		}
		
		if (this.onLoadSound != null){
			UFE.DelayLocalAction(delegate(){UFE.PlaySound(this.onLoadSound);}, this.delayBeforePlayingMusic);
		}

		UFE.DelaySynchronizedAction(this.GoToNextScreen, delayBeforeLoadingNextScreen);
	}
	#endregion
}
