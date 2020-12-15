using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using FPLibrary;

public class DefaultStageSelectionScreen : StageSelectionScreen{
	#region public instance properties
	public AudioClip moveCursorSound;
	public AudioClip onLoadSound;
	public AudioClip music;
	public Text namePlayer1;
	public Text namePlayer2;
	public Text nameStage;
	public Image portraitPlayer1;
	public Image portraitPlayer2;
	public Image screenshotStage;
	public bool stopPreviousSoundEffectsOnLoad = false;
	public float delayBeforePlayingMusic = 0.1f;
	#endregion

	#region public instance methods
	public virtual void NextStage(){
		if (this.moveCursorSound != null) UFE.PlaySound(this.moveCursorSound);
		this.SetHoverIndex((this.stageHoverIndex + 1) % UFE.config.stages.Length);
	}

	public virtual void PreviousStage(){
		int length = UFE.config.stages.Length;
		if (this.moveCursorSound != null) UFE.PlaySound(this.moveCursorSound);
		this.SetHoverIndex((this.stageHoverIndex + length - 1) % length);
	}

	public override void SetHoverIndex(int stageIndex){
		int length = UFE.config.stages.Length;

		if (!this.closing && stageIndex >= 0 && stageIndex < length){
			StageOptions stage = UFE.config.stages[stageIndex];
			base.SetHoverIndex(stageIndex);

			if (this.nameStage != null) this.nameStage.text = stage.stageName;
			if (this.screenshotStage != null){
				this.screenshotStage.sprite = Sprite.Create(
					stage.screenshot,
					new Rect(0f, 0f, stage.screenshot.width, stage.screenshot.height),
					new Vector2(0.5f * stage.screenshot.width, 0.5f * stage.screenshot.height)
				);
			}
		}
	}
	#endregion

	#region public override methods
	public override void DoFixedUpdate(
		IDictionary<InputReferences, InputEvents> player1PreviousInputs,
		IDictionary<InputReferences, InputEvents> player1CurrentInputs,
		IDictionary<InputReferences, InputEvents> player2PreviousInputs,
		IDictionary<InputReferences, InputEvents> player2CurrentInputs
	){
		base.DoFixedUpdate(player1PreviousInputs, player1CurrentInputs, player2PreviousInputs, player2CurrentInputs);

		this.SpecialNavigationSystem(
			player1PreviousInputs,
			player1CurrentInputs,
			player2PreviousInputs,
			player2CurrentInputs,
			new UFEScreenExtensions.MoveCursorCallback(this.HighlightStage),
			new UFEScreenExtensions.ActionCallback(this.TrySelectStage),
			new UFEScreenExtensions.ActionCallback(this.TryDeselectStage)
		);
	}

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

		if (UFE.config.player1Character != null){
			if (this.portraitPlayer1 != null){
				this.portraitPlayer1.sprite = Sprite.Create(
					UFE.config.player1Character.profilePictureBig,
					new Rect(0f, 0f, UFE.config.player1Character.profilePictureBig.width, UFE.config.player1Character.profilePictureBig.height),
					new Vector2(0.5f * UFE.config.player1Character.profilePictureBig.width, 0.5f * UFE.config.player1Character.profilePictureBig.height)
				);
			}

			if (this.namePlayer1 != null){
				this.namePlayer1.text = UFE.config.player1Character.characterName;
			}
		}

		if (UFE.config.player2Character != null){
			if (this.portraitPlayer2 != null){
				this.portraitPlayer2.sprite = Sprite.Create(
					UFE.config.player2Character.profilePictureBig,
					new Rect(0f, 0f, UFE.config.player2Character.profilePictureBig.width, UFE.config.player2Character.profilePictureBig.height),
					new Vector2(0.5f * UFE.config.player2Character.profilePictureBig.width, 0.5f * UFE.config.player2Character.profilePictureBig.height)
				);
			}

			if (this.namePlayer2 != null){
				this.namePlayer2.text = UFE.config.player2Character.characterName;
			}
		}

		this.stageHoverIndex = 0;
		StageOptions stage = UFE.config.stages[this.stageHoverIndex];

		if (stage != null){
			if (this.screenshotStage != null){
				this.screenshotStage.sprite = Sprite.Create(
					stage.screenshot,
					new Rect(0f, 0f, stage.screenshot.width, stage.screenshot.height),
					new Vector2(0.5f * stage.screenshot.width, 0.5f * stage.screenshot.height)
				);
			}

			if (this.nameStage != null){
				this.nameStage.text = stage.stageName;
			}
		}
	}
	#endregion

	#region protected instance methods: methods required by the Special Navigation System (GUI)
	protected virtual void HighlightStage(
		Fix64 horizontalAxis, 
		Fix64 verticalAxis, 
		bool horizontalAxisDown, 
		bool verticalAxisDown, 
		bool confirmButtonDown, 
		bool cancelButtonDown, 
		AudioClip sound
	){
		if (verticalAxisDown){
			if (verticalAxis > 0){
				this.PreviousStage();
			}else if (verticalAxis < 0){
				this.NextStage();
			}
		}
	}

	protected virtual void TryDeselectStage(AudioClip sound){
		this.TryDeselectStage();
	}

	protected virtual void TrySelectStage(AudioClip sound){
		this.TrySelectStage();
	}
	#endregion
}
