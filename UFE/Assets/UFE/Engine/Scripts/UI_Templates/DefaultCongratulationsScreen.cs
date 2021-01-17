using UnityEngine;
using System.Collections;

public class DefaultCongratulationsScreen : StoryModeScreen{
	#region public instance properties
	public AudioClip sound;
	public AudioClip music;
	public float delayBeforePlayingMusic = 0.1f;
	public float delayBeforeLoadingNextScreen = 3f;
	#endregion

	#region public override methods
	public override void OnShow (){
		base.OnShow ();

		if (this.music != null){
			UFE.DelayLocalAction(delegate(){UFE.PlayMusic(this.music);}, this.delayBeforePlayingMusic);
		}
		
		if (this.sound != null){
			UFE.DelayLocalAction(delegate(){UFE.PlaySound(this.sound);}, this.delayBeforePlayingMusic);
		}

		UFE.DelaySynchronizedAction(this.GoToNextScreen, this.delayBeforeLoadingNextScreen);
	}
	#endregion
}
