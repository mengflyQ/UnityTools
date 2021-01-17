using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class DefaultOnlineModeAfterBattleScreen : OnlineModeAfterBattleScreen
{
    #region public instance properties
    public AudioClip onLoadSound;
    public AudioClip music;
    public AudioClip selectSound;
    public AudioClip cancelSound;
    public AudioClip moveCursorSound;
    public bool stopPreviousSoundEffectsOnLoad = false;
    public float delayBeforePlayingMusic = 0.1f;
    #endregion

    #region public override methods
    public override void DoFixedUpdate(
        IDictionary<InputReferences, InputEvents> player1PreviousInputs,
        IDictionary<InputReferences, InputEvents> player1CurrentInputs,
        IDictionary<InputReferences, InputEvents> player2PreviousInputs,
        IDictionary<InputReferences, InputEvents> player2CurrentInputs
    )
    {
        base.DoFixedUpdate(player1PreviousInputs, player1CurrentInputs, player2PreviousInputs, player2CurrentInputs);

        this.DefaultNavigationSystem(
            player1PreviousInputs,
            player1CurrentInputs,
            player2PreviousInputs,
            player2CurrentInputs,
            this.moveCursorSound,
            this.selectSound,
            this.cancelSound,
            this.GoToMainMenu
        );
    }

    public override void OnShow()
    {
        base.OnShow();

        if (this.music != null)
        {
            UFE.DelayLocalAction(delegate () { UFE.PlayMusic(this.music); }, this.delayBeforePlayingMusic);
        }

        if (this.stopPreviousSoundEffectsOnLoad)
        {
            UFE.StopSounds();
        }

        if (this.onLoadSound != null)
        {
            UFE.DelayLocalAction(delegate () { UFE.PlaySound(this.onLoadSound); }, this.delayBeforePlayingMusic);
        }

        UFE.multiplayerAPI.OnDisconnection -= this.OnPlayerDisconnection;
        UFE.multiplayerAPI.OnDisconnection += this.OnPlayerDisconnection;
    }

    // Use this event to deactivate repeat battle or character select buttons if the other player disconnects
    public void OnPlayerDisconnection()
    {
        UFE.multiplayerAPI.OnDisconnection -= this.OnPlayerDisconnection;

        DisableMenuOption("Button_Repeat_Battle");
        DisableMenuOption("Button_Character_Selection_Screen");
    }

    // Use this event to deactivate a button
    public override void DisableMenuOption(string buttonName)
    {
        GameObject buttonToDisable = GameObject.Find(buttonName);
        if (buttonToDisable != null) buttonToDisable.GetComponent<Button>().interactable = false;
    }

    // Use this event to highlight a button
    public override void HighlightMenuOption(string buttonName)
    {
        GameObject buttonToHighlight = GameObject.Find(buttonName);
        if (buttonToHighlight != null) buttonToHighlight.GetComponent<Image>().color = Color.green;
    }
    #endregion
}
