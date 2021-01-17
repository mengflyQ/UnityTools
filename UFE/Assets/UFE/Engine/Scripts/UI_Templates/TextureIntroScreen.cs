using UnityEngine;
using System.Collections;

public class TextureIntroScreen : IntroScreen{
	#region public instance properties
	public AudioClip onLoadSound;
	public AudioClip music;
	public bool skippable = true;
	public bool stopPreviousSoundEffectsOnLoad = false;
	public float delayBeforePlayingMusic = 0.1f;
	public float delayBeforeGoingToMenu = 3f;
	public float minDelayBeforeSkipping = 0.1f;
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

		this.StartCoroutine(this.ShowScreen());
	}

	public virtual IEnumerator ShowScreen(){
		float startTime = Time.realtimeSinceStartup;
		float time = 0f;
		
		while(
			time < this.delayBeforeGoingToMenu && 
			!(skippable && Input.anyKeyDown && time > this.minDelayBeforeSkipping)
		){
			yield return null;
			time = Time.realtimeSinceStartup - startTime;
		}

		this.GoToMainMenu();
	}
	#endregion
}
