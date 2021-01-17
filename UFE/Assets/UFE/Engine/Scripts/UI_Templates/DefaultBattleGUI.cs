using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using UFE3D;

public class DefaultBattleGUI : BattleGUI{
	#region public class definitions
	[Serializable]
	public class PlayerGUI{
		public Text name;
		public Image portrait;
		public Image lifeBar;
		public Image[] gauges;
		public Image[] wonRoundsImages;
		public AlertGUI alert = new AlertGUI();
	}

	[Serializable]
	public class AlertGUI{
		public Text text;
		public Vector3 initialPosition;
		public Vector3 finalPosition;
		public float movementSpeed = 15f;
	}

	[Serializable]
	public class WonRoundsGUI{
		public Sprite NotFinishedRounds;
		public Sprite WonRounds;
		public Sprite LostRounds;
		public DefaultBattleGUI.VisibleImages VisibleImages = DefaultBattleGUI.VisibleImages.WonRounds;

		public int GetNumberOfRoundsImages(){
			// To calculate the target number of images, check if the "Lost Rounds" Sprite is defined or not
			if (this.VisibleImages == VisibleImages.AllRounds){
				return UFE.config.roundOptions.totalRounds;
			}
			return (UFE.config.roundOptions.totalRounds + 1) / 2;
		}
	}

	public enum VisibleImages{
		WonRounds,
		AllRounds,
	}
	#endregion

	#region public instance properties
	public bool muteAnnouncer = false;
    public AnnouncerOptions announcer;
	public WonRoundsGUI wonRounds = new WonRoundsGUI();
	public PlayerGUI player1GUI = new PlayerGUI();
	public PlayerGUI player2GUI = new PlayerGUI();
	public AlertGUI mainAlert = new AlertGUI();
	public Text info;
	public Text timer;
	public float lifeDownSpeed = 500f;
	public float lifeUpSpeed = 900f;
    public UFEScreen pauseScreen;
    public Sprite networkPlayerPointer;
    public float pointerTimer = 4f;
	#endregion

	#region protected instance properties
	protected bool showInputs = true;
	protected bool hiding = false;

	protected float player1AlertTimer = 0f;
	protected float player2AlertTimer = 0f;
	protected float mainAlertTimer = 0f;
	protected UFEScreen pause = null;
	#endregion

	#region public instance methods
	public void AddInput (InputReferences[] inputReferences, int player){
		this.OnInput(inputReferences, player);
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

		if (this.isRunning){
			float deltaTime = (float)UFE.fixedDeltaTime;

			// Animate the alert messages if they exist
			if (this.player1GUI != null && this.player1GUI.alert != null && this.player1GUI.alert.text != null){
				this.player1GUI.alert.text.rectTransform.anchoredPosition = Vector3.Lerp(
					this.player1GUI.alert.text.rectTransform.anchoredPosition, 
					this.player1GUI.alert.finalPosition, 
					this.player1GUI.alert.movementSpeed * deltaTime
				);

				if (this.player1AlertTimer > 0f){
					this.player1AlertTimer -= deltaTime;
				}else if (!string.IsNullOrEmpty(this.player1GUI.alert.text.text)){
					this.player1GUI.alert.text.text = string.Empty;
				}
			}

			if (this.player2GUI != null && this.player2GUI.alert != null && this.player2GUI.alert.text != null){
				this.player2GUI.alert.text.rectTransform.anchoredPosition = Vector3.Lerp(
					this.player2GUI.alert.text.rectTransform.anchoredPosition, 
					this.player2GUI.alert.finalPosition, 
					this.player2GUI.alert.movementSpeed * deltaTime
				);

				if (this.player2AlertTimer > 0f){
					this.player2AlertTimer -= deltaTime;
				}else if (!string.IsNullOrEmpty(this.player2GUI.alert.text.text)){
					this.player2GUI.alert.text.text = string.Empty;
				}
			}

			if (this.mainAlert != null && this.mainAlert.text != null){
				if (this.mainAlertTimer > 0f){
					this.mainAlertTimer -= deltaTime;
				}else if (!string.IsNullOrEmpty(this.mainAlert.text.text)){
					this.mainAlert.text.text = string.Empty;
				}
			}

			
			// Animate life points when it goes down (P1)
			if (this.player1.targetLife > UFE.GetPlayer1ControlsScript().currentLifePoints){
				this.player1.targetLife -= this.lifeDownSpeed * deltaTime;
                if (this.player1.targetLife < UFE.GetPlayer1ControlsScript().currentLifePoints)
                    this.player1.targetLife = (float)UFE.GetPlayer1ControlsScript().currentLifePoints;
			}
			if (this.player1.targetLife < UFE.GetPlayer1ControlsScript().currentLifePoints){
                this.player1.targetLife += this.lifeUpSpeed * deltaTime;
                if (this.player1.targetLife > UFE.GetPlayer1ControlsScript().currentLifePoints)
                    this.player1.targetLife = (float)UFE.GetPlayer1ControlsScript().currentLifePoints;
			}
			
			// Animate life points when it goes down (P2)
			if (this.player2.targetLife > UFE.GetPlayer2ControlsScript().currentLifePoints){
                this.player2.targetLife -= this.lifeDownSpeed * deltaTime;
                if (this.player2.targetLife < UFE.GetPlayer2ControlsScript().currentLifePoints)
                    this.player2.targetLife = (float)UFE.GetPlayer2ControlsScript().currentLifePoints;
			}
			if (this.player2.targetLife < UFE.GetPlayer2ControlsScript().currentLifePoints){
                this.player2.targetLife += this.lifeUpSpeed * deltaTime;
                if (this.player2.targetLife > UFE.GetPlayer2ControlsScript().currentLifePoints)
                    this.player2.targetLife = (float)UFE.GetPlayer2ControlsScript().currentLifePoints;
			}


			bool player1CurrentStartButton = false;
            bool player1PreviousStartButton = false;
            bool player2CurrentStartButton = false;
            bool player2PreviousStartButton = false;
            if (player1CurrentInputs != null)
            {
                foreach (KeyValuePair<InputReferences, InputEvents> pair in player1CurrentInputs)
                {
                    if (pair.Key.inputType == InputType.Button && pair.Key.engineRelatedButton == ButtonPress.Start)
                    {
                        player1CurrentStartButton = pair.Value.button;
                        break;
                    }
                }
            }
            if (player1PreviousInputs != null)
            {
                foreach (KeyValuePair<InputReferences, InputEvents> pair in player1PreviousInputs)
                {
                    if (pair.Key.inputType == InputType.Button && pair.Key.engineRelatedButton == ButtonPress.Start)
                    {
                        player1PreviousStartButton = pair.Value.button;
                        break;
                    }
                }
            }
            if (player2CurrentInputs != null)
            {
                foreach (KeyValuePair<InputReferences, InputEvents> pair in player2CurrentInputs)
                {
                    if (pair.Key.inputType == InputType.Button && pair.Key.engineRelatedButton == ButtonPress.Start)
                    {
                        player2CurrentStartButton = pair.Value.button;
                        break;
                    }
                }
            }
            if (player2PreviousInputs != null)
            {
                foreach (KeyValuePair<InputReferences, InputEvents> pair in player2PreviousInputs)
                {
                    if (pair.Key.inputType == InputType.Button && pair.Key.engineRelatedButton == ButtonPress.Start)
                    {
                        player2PreviousStartButton = pair.Value.button;
                        break;
                    }
                }
            }

			if(
				// Check if both players have their life points above zero...
				UFE.GetPlayer1ControlsScript().currentLifePoints > 0 &&
				UFE.GetPlayer2ControlsScript().currentLifePoints > 0 &&
				UFE.gameMode != GameMode.NetworkGame &&
				(
					// and at least one of the players have pressed the Start button...
					player1CurrentStartButton && !player1PreviousStartButton ||
					player2CurrentStartButton && !player2PreviousStartButton 
				)
			){
				// In that case, we can process pause menu events
				UFE.PauseGame(!UFE.isPaused());
			}


			// Draw the Life Bars and Gauge Meters using the data stored in UFE.config.guiOptions
			if (this.player1GUI != null && this.player1GUI.lifeBar != null){
				this.player1GUI.lifeBar.fillAmount = this.player1.targetLife / this.player1.totalLife;
			}
			
			if (this.player2GUI != null && this.player2GUI.lifeBar != null){
				this.player2GUI.lifeBar.fillAmount = this.player2.targetLife / this.player2.totalLife;
			}

			if (UFE.config.gameGUI.hasGauge){
                for (int i = 0; i < this.player1GUI.gauges.Length; i ++)
                {
                    if (this.player1GUI.gauges[i].gameObject.activeInHierarchy)
                    {
                        this.player1GUI.gauges[i].fillAmount = (float)player1.controlsScript.currentGaugesPoints[i] / UFE.config.player1Character.maxGaugePoints;
                    }
                }
                for (int i = 0; i < this.player2GUI.gauges.Length; i++)
                {
                    if (this.player2GUI.gauges[i].gameObject.activeInHierarchy)
                    {
                        this.player2GUI.gauges[i].fillAmount = (float)player2.controlsScript.currentGaugesPoints[i] / UFE.config.player2Character.maxGaugePoints;
                    }
                }
			}

			if (this.pause != null){
				this.pause.DoFixedUpdate(player1PreviousInputs, player1CurrentInputs, player2PreviousInputs, player2CurrentInputs);
			}


			/*
			if (Debug.isDebugBuild){
				player1NameGO.guiText.text = string.Format(
					"{0}\t\t({1},\t{2},\t{3})",
					this.player1.characterName,
					UFE.GetPlayer1ControlsScript().transform.position.x,
					UFE.GetPlayer1ControlsScript().transform.position.y,
					UFE.GetPlayer1ControlsScript().transform.position.z
				);

				player2NameGO.guiText.text = string.Format(
					"{0}\t\t({1},\t{2},\t{3})",
					this.player2.characterName,
					UFE.GetPlayer2ControlsScript().transform.position.x,
					UFE.GetPlayer2ControlsScript().transform.position.y,
					UFE.GetPlayer2ControlsScript().transform.position.z
				);
			}
			*/
		}
	}

	public override void OnHide ()
    {
		UFE.debugger1.enabled = false;
		UFE.debugger2.enabled = false;

		this.hiding = true;
		this.OnGamePaused(false);
		base.OnHide ();
	}

	public override void OnShow (){
		base.OnShow();
		this.hiding = false;

		/*if (UFE.config.debugOptions.debugMode){
			UFE.debugger1.enabled = true;
			UFE.debugger2.enabled = true;
		}else{
			UFE.debugger1.enabled = false;
			UFE.debugger2.enabled = false;
		}*/

		if (this.announcer != null){
			Array.Sort(this.announcer.combos, delegate(ComboAnnouncer c1, ComboAnnouncer c2) {
				return c2.hits.CompareTo(c1.hits);
			});
		}
    }

    

	public override void SelectOption(int option, int player){
		if (this.pause != null){
			this.pause.SelectOption(option, player);
		}
	}
	#endregion

	#region protected instance methods
	protected virtual string ProcessMessage(string msg, ControlsScript controlsScript){
		if (msg == UFE.config.selectedLanguage.combo){
			if (this.announcer != null && !this.muteAnnouncer){
				foreach(ComboAnnouncer comboAnnouncer in this.announcer.combos){
					if (controlsScript.opControlsScript.comboHits >= comboAnnouncer.hits){
						UFE.PlaySound(comboAnnouncer.audio);
						break;
					}
				}
			}
		}else if (msg == UFE.config.selectedLanguage.parry){
			if (this.announcer != null && !this.muteAnnouncer){
				UFE.PlaySound(this.announcer.parry);
			}
		}else if (msg == UFE.config.selectedLanguage.counterHit){
			if (this.announcer != null && !this.muteAnnouncer){
				UFE.PlaySound(this.announcer.counterHit);
			}
			UFE.PlaySound(UFE.config.counterHitOptions.sound);
		}else if (msg == UFE.config.selectedLanguage.firstHit){
			if (this.announcer != null && !this.muteAnnouncer){
				UFE.PlaySound(this.announcer.firstHit);
			}
		}else if (msg == UFE.config.selectedLanguage.fight){
			if (this.announcer != null && !this.muteAnnouncer){
				UFE.PlaySound(this.announcer.fight);
			}
		}else if (msg == UFE.config.selectedLanguage.ko){
			if (this.announcer != null && !this.muteAnnouncer && this.announcer.ko != null){
				UFE.PlaySound(this.announcer.ko);
			}
		}else{
			return this.SetStringValues(msg, null);
		}

		return this.SetStringValues(msg, controlsScript);
	}

	protected virtual string SetStringValues(string msg, ControlsScript controlsScript){
		UFE3D.CharacterInfo character = controlsScript != null ? controlsScript.myInfo : null;
		if (controlsScript != null) msg = msg.Replace("%combo%", controlsScript.opControlsScript.comboHits.ToString());
		if (character != null)		msg = msg.Replace("%character%", character.characterName);
		msg = msg.Replace("%round%", UFE.config.currentRound.ToString());

		return msg;
	}
	#endregion

	#region protected override methods
	protected override void OnGameBegin (ControlsScript cPlayer1, ControlsScript cPlayer2, StageOptions stage){
		base.OnGameBegin (cPlayer1, cPlayer2, stage);

		if (this.wonRounds.NotFinishedRounds == null){
			Debug.LogError("\"Not Finished Rounds\" Sprite not found! Make sure you have set the sprite correctly in the Editor");
		}else if (this.wonRounds.WonRounds == null){
			Debug.LogError("\"Won Rounds\" Sprite not found! Make sure you have set the sprite correctly in the Editor");
		}else if (this.wonRounds.LostRounds == null && this.wonRounds.VisibleImages == DefaultBattleGUI.VisibleImages.AllRounds){
			Debug.LogError("\"Lost Rounds\" Sprite not found! If you want to display Lost Rounds, make sure you have set the sprite correctly in the Editor");
		}else{
			// To calculate the target number of images, check if the "Lost Rounds" Sprite is defined or not
			int targetNumberOfImages = this.wonRounds.GetNumberOfRoundsImages();

			if(
				this.player1GUI != null && 
				this.player1GUI.wonRoundsImages != null && 
				this.player1GUI.wonRoundsImages.Length >= targetNumberOfImages
			){
				for (int i = 0; i < targetNumberOfImages; ++i){
					this.player1GUI.wonRoundsImages[i].enabled = true;
					this.player1GUI.wonRoundsImages[i].sprite = this.wonRounds.NotFinishedRounds;
				}
					
				for (int i = targetNumberOfImages; i < this.player1GUI.wonRoundsImages.Length; ++i){
					this.player1GUI.wonRoundsImages[i].enabled = false;
				}
			}else{
				Debug.LogError(
					"Player 1: not enough \"Won Rounds\" Images not found! " +
					"Expected:" + targetNumberOfImages + " / Found: " + this.player1GUI.wonRoundsImages.Length +
					"\nMake sure you have set the images correctly in the Editor"
				);
			}

			if(
				this.player2GUI != null && 
				this.player2GUI.wonRoundsImages != null && 
				this.player2GUI.wonRoundsImages.Length >= targetNumberOfImages
			){
				for (int i = 0; i < targetNumberOfImages; ++i){
					this.player2GUI.wonRoundsImages[i].enabled = true;
					this.player2GUI.wonRoundsImages[i].sprite = this.wonRounds.NotFinishedRounds;
				}
					
				for (int i = targetNumberOfImages; i < this.player2GUI.wonRoundsImages.Length; ++i){
					this.player2GUI.wonRoundsImages[i].enabled = false;
				}
			}else{
				Debug.LogError(
					"Player 2: not enough \"Won Rounds\" Images not found! " +
					"Expected:" + targetNumberOfImages + " / Found: " + this.player2GUI.wonRoundsImages.Length +
					"\nMake sure you have set the images correctly in the Editor"
				);
			}
		}
		
		// Set the character names
		if (this.player1GUI != null && this.player1GUI.name != null){
			this.player1GUI.name.text = cPlayer1.myInfo.characterName;
		}

		if (this.player2GUI != null && this.player2GUI.name != null){
			this.player2GUI.name.text = cPlayer2.myInfo.characterName;
		}

		// Set the character portraits
		if (this.player1GUI != null && this.player1GUI.portrait != null){
			if (cPlayer1.myInfo.profilePictureSmall != null){
				this.player1GUI.portrait.gameObject.SetActive(true);
				this.player1GUI.portrait.sprite = Sprite.Create(
					cPlayer1.myInfo.profilePictureSmall,
					new Rect(0f, 0f, cPlayer1.myInfo.profilePictureSmall.width, cPlayer1.myInfo.profilePictureSmall.height),
					new Vector2(0.5f * cPlayer1.myInfo.profilePictureSmall.width, 0.5f * cPlayer1.myInfo.profilePictureSmall.height)
				);
			}else{
				this.player1GUI.portrait.gameObject.SetActive(false);
			}
		}
		
		if (this.player2GUI != null && this.player2GUI.portrait != null){
			if (cPlayer2.myInfo.profilePictureSmall != null){
				this.player2GUI.portrait.gameObject.SetActive(true);
				this.player2GUI.portrait.sprite = Sprite.Create(
					cPlayer2.myInfo.profilePictureSmall,
					new Rect(0f, 0f, cPlayer2.myInfo.profilePictureSmall.width, cPlayer2.myInfo.profilePictureSmall.height),
					new Vector2(0.5f * cPlayer2.myInfo.profilePictureSmall.width, 0.5f * cPlayer2.myInfo.profilePictureSmall.height)
				);
			}else{
				this.player2GUI.portrait.gameObject.SetActive(false);
			}
		}

		// If we want to use a Timer, set the default value for the timer
		if (this.timer != null){
			if (UFE.config.roundOptions.hasTimer){
				this.timer.gameObject.SetActive(true);
				this.timer.text = UFE.config.roundOptions._timer.ToString().Replace("Infinity", "∞");
			}else{
				this.timer.gameObject.SetActive(false);
			}
		}

		// Set the max and min values for the Life Bars
		if (this.player1GUI != null && this.player1GUI.lifeBar != null){
			this.player1GUI.lifeBar.fillAmount = this.player1.targetLife / this.player1.totalLife;
		}
		
		if (this.player2GUI != null && this.player2GUI.lifeBar != null){
			this.player2GUI.lifeBar.fillAmount = this.player2.targetLife / this.player2.totalLife;
		}

        // Enable Gauge Meters
        for (int i = 0; i < this.player1GUI.gauges.Length; i++)
        {
            if (!UFE.config.gameGUI.hasGauge || this.player1.controlsScript.myInfo.hideGauges[i])
            {
                this.player1GUI.gauges[i].gameObject.SetActive(false);
                if (this.player1GUI.gauges[i].gameObject.GetComponentInParent<Image>() != null) this.player1GUI.gauges[i].gameObject.transform.parent.gameObject.SetActive(false);
            }
        }

        for (int i = 0; i < this.player2GUI.gauges.Length; i++)
        {
            if (!UFE.config.gameGUI.hasGauge || this.player2.controlsScript.myInfo.hideGauges[i])
            {
                this.player2GUI.gauges[i].gameObject.SetActive(false);
                if (this.player2GUI.gauges[i].gameObject.GetComponentInParent<Image>() != null) this.player2GUI.gauges[i].gameObject.transform.parent.gameObject.SetActive(false);
            }
        }

        // Set values for the Gauge Bars
        if (UFE.config.gameGUI.hasGauge){
            for (int i = 0; i < this.player1GUI.gauges.Length; i++)
            {
                if (this.player1.controlsScript.myInfo.hideGauges[i]) continue;
                this.player1GUI.gauges[i].gameObject.SetActive(true);
                this.player1GUI.gauges[i].fillAmount = (float)cPlayer1.currentGaugesPoints[i] / UFE.config.player1Character.maxGaugePoints;
            }

            for (int i = 0; i < this.player2GUI.gauges.Length; i++)
            {
                if (this.player2.controlsScript.myInfo.hideGauges[i]) continue;
                this.player2GUI.gauges[i].gameObject.SetActive(true);
                this.player2GUI.gauges[i].fillAmount = (float)cPlayer2.currentGaugesPoints[i] / UFE.config.player2Character.maxGaugePoints;
            }
		}
	}

	protected override void OnGameEnd (ControlsScript winner, ControlsScript loser){
		base.OnGameEnd (winner, loser);

        if (this.info != null) this.info.text = string.Empty;
        //if (this.player1GUI.name != null)	this.player1GUI.name.text = string.Empty;
        //if (this.player2GUI.name != null)	this.player2GUI.name.text = string.Empty;
        //if (this.timer != null)				this.timer.text = string.Empty;
    }


	protected override void OnGamePaused (bool isPaused){
		base.OnGamePaused(isPaused);

		if (this.pauseScreen != null){
			if (isPaused){
				this.pause = (UFEScreen) GameObject.Instantiate(this.pauseScreen);
				this.pause.transform.SetParent(UFE.canvas != null ? UFE.canvas.transform : null, false);
				this.pause.OnShow();
			}else if (this.pause != null){
				if (!this.hiding){
					UFE.PlayMusic(UFE.config.selectedStage.music);
				}

				this.pause.OnHide();
				GameObject.Destroy(this.pause.gameObject);
			}
		}
	}

	protected override void OnNewAlert (string msg, ControlsScript player){
		base.OnNewAlert (msg, player);


		// You can use this to have your own custom events when a new text alert is fired from the engine
        if (player != null) {
		    if (player.playerNum == 1){
			    string processedMessage = this.ProcessMessage(msg, player);

			    if (this.player1GUI != null && this.player1GUI.alert != null && this.player1GUI.alert.text != null){
				    this.player1GUI.alert.text.text = processedMessage;

				    if(
					    msg != UFE.config.selectedLanguage.combo ||
					    player.opControlsScript.comboHits == 2 || 
					    UFE.config.comboOptions.comboDisplayMode == ComboDisplayMode.ShowAfterComboExecution
				    ){
					    this.player1GUI.alert.text.rectTransform.anchoredPosition = this.player1GUI.alert.initialPosition;
				    }
				    this.player1AlertTimer = 2f;
			    }
		    }else {
			    string processedMessage = this.ProcessMessage(msg, player);

                if (this.player2GUI != null && this.player2GUI.alert != null && this.player2GUI.alert.text != null) {
                    this.player2GUI.alert.text.text = processedMessage;

                    if (
                        msg != UFE.config.selectedLanguage.combo ||
                        player.opControlsScript.comboHits == 2 ||
                        UFE.config.comboOptions.comboDisplayMode == ComboDisplayMode.ShowAfterComboExecution
                    ) {
                        this.player2GUI.alert.text.rectTransform.anchoredPosition = this.player2GUI.alert.initialPosition;
                    }
                    this.player2AlertTimer = 2f;
                }
			}

        }else{
			string processedMessage = this.ProcessMessage(msg, null);

			if (this.mainAlert != null && this.mainAlert.text != null){
				this.mainAlert.text.text = processedMessage;

				if (msg == UFE.config.selectedLanguage.round || msg == UFE.config.selectedLanguage.finalRound){
                    this.mainAlertTimer = 2f;
                } else if (msg == UFE.config.selectedLanguage.challengeBegins) {
                    this.mainAlertTimer = 2f;
				} else if (msg == UFE.config.selectedLanguage.fight){
					this.mainAlertTimer = 1f;
				} else if (msg == UFE.config.selectedLanguage.ko){
					this.mainAlertTimer = 2f;
				} else{
					this.mainAlertTimer = 60f;
				}
			}
		}
	}

	protected override void OnRoundBegin(int roundNumber){
		base.OnRoundBegin(roundNumber);

		if (this.player1GUI != null && this.player1GUI.alert != null && this.player1GUI.alert.text != null){
			this.player1GUI.alert.text.text = string.Empty;
		}
		
		if (this.player2GUI != null && this.player2GUI.alert != null && this.player2GUI.alert.text != null){
			this.player2GUI.alert.text.text = string.Empty;
		}

        if (UFE.gameMode == GameMode.ChallengeMode) {
            this.OnNewAlert(UFE.config.selectedLanguage.challengeBegins, null);

        } else if (roundNumber < UFE.config.roundOptions.totalRounds) {
			this.OnNewAlert(UFE.config.selectedLanguage.round, null);

			if (this.announcer != null && !this.muteAnnouncer){
				if (roundNumber == 1) UFE.PlaySound(this.announcer.round1);
				if (roundNumber == 2) UFE.PlaySound(this.announcer.round2);
				if (roundNumber == 3) UFE.PlaySound(this.announcer.round3);
				if (roundNumber > 3) UFE.PlaySound(this.announcer.otherRounds);
			}
			
		}else{
			this.OnNewAlert(UFE.config.selectedLanguage.finalRound, null);

			if (this.announcer != null && !this.muteAnnouncer){
				UFE.PlaySound(this.announcer.finalRound);
			}

        // If network game, point which character the local player is
        if ((UFE.gameMode == GameMode.NetworkGame || UFE.config.debugOptions.emulateNetwork)
            && networkPlayerPointer != null) {
            int localPlayer = 1;
            if (UFE.isConnected) localPlayer = UFE.localPlayerController.player;

            GameObject pointer = new GameObject("Local Pointer");
            pointer.transform.SetParent(UFE.GetControlsScript(localPlayer).transform);
            pointer.transform.localPosition = new Vector3(0, 7, 0);
            SpriteRenderer spriteRenderer = pointer.AddComponent<SpriteRenderer>();
            spriteRenderer.sprite = networkPlayerPointer;
            Destroy(pointer, pointerTimer);
        }
		}

        // If network game, point which character the local player is
        if ((UFE.gameMode == GameMode.NetworkGame || UFE.config.debugOptions.emulateNetwork)
            && networkPlayerPointer != null) {
            int localPlayer = 1;
            if (UFE.isConnected) localPlayer = UFE.localPlayerController.player;

            GameObject pointer = new GameObject("Local Pointer");
            pointer.transform.SetParent(UFE.GetControlsScript(localPlayer).transform);
            pointer.transform.localPosition = new Vector3(0, 7, 0);
            SpriteRenderer spriteRenderer = pointer.AddComponent<SpriteRenderer>();
            spriteRenderer.sprite = networkPlayerPointer;
            Destroy(pointer, pointerTimer);
        }
	}

	protected override void OnRoundEnd (ControlsScript winner, ControlsScript loser){
		base.OnRoundEnd (winner, loser);

		// Find out who is the winner and who is the loser...
		int winnerPlayer = winner.playerNum;
		int loserPlayer = loser.playerNum;
		PlayerGUI winnerGUI = winnerPlayer == 1 ? this.player1GUI : this.player2GUI;
		PlayerGUI loserGUI = loserPlayer == 1 ? this.player1GUI : this.player2GUI;

		// Then update the "Won Rounds" sprites...
		if (this.wonRounds.NotFinishedRounds == null){
			Debug.LogError("\"Not Finished Rounds\" Sprite not found! Make sure you have set the sprite correctly in the Editor");
		}else if (this.wonRounds.WonRounds == null){
			Debug.LogError("\"Won Rounds\" Sprite not found! Make sure you have set the sprite correctly in the Editor");
		}else if (this.wonRounds.LostRounds == null && this.wonRounds.VisibleImages == DefaultBattleGUI.VisibleImages.AllRounds){
			Debug.LogError("\"Lost Rounds\" Sprite not found! If you want to display Lost Rounds, make sure you have set the sprite correctly in the Editor");
		}else{
			// To calculate the target number of images, check if the "Lost Rounds" Sprite is defined or not
			int targetNumberOfImages = this.wonRounds.GetNumberOfRoundsImages();

			if (this.wonRounds.VisibleImages == DefaultBattleGUI.VisibleImages.AllRounds){
				// If the "Lost Rounds" sprite is defined, that means that we must display all won and lost rounds...
				if(
					winnerGUI != null && 
					winnerGUI.wonRoundsImages != null && 
					winnerGUI.wonRoundsImages.Length >= targetNumberOfImages
				){
					winnerGUI.wonRoundsImages[UFE.config.currentRound - 1].sprite = this.wonRounds.WonRounds;
				}else{
					Debug.LogError(
						"Player " + winnerPlayer + ": not enough \"Won Rounds\" Images not found! " +
						"Expected:" + targetNumberOfImages + " / Found: " + winnerGUI.wonRoundsImages.Length +
						"\nMake sure you have set the images correctly in the Editor"
					);
				}

				if(
					loserGUI != null && 
					loserGUI.wonRoundsImages != null && 
					loserGUI.wonRoundsImages.Length >= targetNumberOfImages
				){
					loserGUI.wonRoundsImages[UFE.config.currentRound - 1].sprite = this.wonRounds.LostRounds;
				}else{
					Debug.LogError(
						"Player " + winnerPlayer + ": not enough \"Won Rounds\" Images not found! " +
						"Expected:" + targetNumberOfImages + " / Found: " + winnerGUI.wonRoundsImages.Length +
						"\nMake sure you have set the images correctly in the Editor"
					);
				}
			}else{
				// If the "Lost Rounds" sprite is not defined, that means that we must only display won rounds...
				if(
					winnerGUI != null && 
					winnerGUI.wonRoundsImages != null && 
					winnerGUI.wonRoundsImages.Length >= winner.roundsWon
				){
					winnerGUI.wonRoundsImages[winner.roundsWon - 1].sprite = this.wonRounds.WonRounds;
				}else if (UFE.gameMode != GameMode.ChallengeMode) {
					Debug.LogError(
						"Player " + winnerPlayer + ": not enough \"Won Rounds\" Images not found! " +
						"Expected:" + targetNumberOfImages + " / Found: " + winnerGUI.wonRoundsImages.Length +
						"\nMake sure you have set the images correctly in the Editor"
					);
				}
			}
		}

		if (this.announcer != null && !this.muteAnnouncer){
			// Check if it was the last round
			if (winner.roundsWon > Mathf.Ceil(UFE.config.roundOptions.totalRounds/2)){
				if (winnerPlayer == 1) {
					UFE.PlaySound(this.announcer.player1Wins);
				}else{
					UFE.PlaySound(this.announcer.player2Wins);
				}
			}

			// Finally, check if we should play any AudioClip
			if (winner.currentLifePoints == winner.myInfo.lifePoints){
				UFE.PlaySound(this.announcer.perfect);
			}
		}

		if (winner.currentLifePoints == winner.myInfo.lifePoints){
			this.OnNewAlert(this.SetStringValues(UFE.config.selectedLanguage.perfect, winner), null);
		}

        if (UFE.gameMode != GameMode.ChallengeMode 
            && winner.roundsWon > Mathf.Ceil(UFE.config.roundOptions.totalRounds / 2)) {
			this.OnNewAlert(this.SetStringValues(UFE.config.selectedLanguage.victory, winner), null);
			UFE.PlayMusic(UFE.config.roundOptions.victoryMusic);
		}else if (UFE.gameMode == GameMode.ChallengeMode) {
            this.OnNewAlert(this.SetStringValues(UFE.config.selectedLanguage.challengeEnds, winner), null);
            UFE.PlayMusic(UFE.config.roundOptions.victoryMusic);
        }
	}

	protected override void OnTimer (FPLibrary.Fix64 time){
		base.OnTimer (time);
		if (this.timer != null) this.timer.text = Mathf.Round((float)time).ToString().Replace("Infinity", "∞");
	}

	protected override void OnTimeOver(){
		base.OnTimeOver();
		this.OnNewAlert(this.SetStringValues(UFE.config.selectedLanguage.timeOver, null), null);

		if (this.announcer != null && !this.muteAnnouncer){
			UFE.PlaySound(this.announcer.timeOver);
		}
	}

	protected override void OnInput (InputReferences[] inputReferences, int player){
		base.OnInput (inputReferences, player);

		// Fires whenever a player presses a button
		if(
			this.isRunning
			&& inputReferences != null
			&& inputReferences.Length > 0
            && ((UFE.gameMode == GameMode.TrainingRoom && UFE.config.debugOptions.displayInputsTraining)
            ||  (UFE.gameMode == GameMode.VersusMode && UFE.config.debugOptions.displayInputsVersus)
            ||  (UFE.gameMode == GameMode.NetworkGame && UFE.config.debugOptions.displayInputsNetwork)
            ||  (UFE.gameMode == GameMode.StoryMode && UFE.config.debugOptions.displayInputsStoryMode)
            ||  (UFE.gameMode == GameMode.ChallengeMode && UFE.config.debugOptions.displayInputsChallengeMode))
		)
        {
            List<Sprite> activeIconList = new List<Sprite>();
			foreach(InputReferences inputRef in inputReferences){
				if (inputRef != null && inputRef.activeIcon != null){
					Sprite sprite = Sprite.Create(
						inputRef.activeIcon,
						new Rect(0f, 0f, inputRef.activeIcon.width, inputRef.activeIcon.height),
						new Vector2(0.5f * inputRef.activeIcon.width, 0.5f * inputRef.activeIcon.height)
					);
					
					activeIconList.Add(sprite);
				}
			}

            AddViewerInput(activeIconList, player);
		}
	}
	#endregion
	/*
	// DEBUG INFORMATION
	public virtual void LateUpdate(){
		if (this.mainAlert != null && this.mainAlert.text != null){
			this.mainAlert.text.text = "TimeScale: " + Time.timeScale;
		}
	}
	*/
}
