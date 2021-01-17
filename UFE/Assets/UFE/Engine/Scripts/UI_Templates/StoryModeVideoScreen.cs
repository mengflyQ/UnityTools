using UnityEngine;
using UnityEngine.Video;
using System.Collections;
using FPLibrary;

public class StoryModeVideoScreen : StoryModeScreen {
	#region public class properties
	public static readonly string Data = "%Data%";
	public static readonly string Persistent = "%Persistent%";
	public static readonly string StreamingAssets = "%StreamingAssets%";
	public static readonly string Temp = "%Temp%";
	#endregion
	
	#region public instance properties
    public VideoClip videoClip;
	// The name of the video file in the StreamingAssets folder
    public bool loadFromUrl = false;
    public string pathOrUrl = "file://" + VideoIntroScreen.StreamingAssets + "/video.ogv";
	public bool skippable = true;
	public float delayBeforePlayingVideo = 0.05f;
	public float delayAfterSkippingVideo = 0.05f;
    #endregion

    private VideoPlayer videoPlayer;
    private AudioSource audioSource;

    public override void OnShow (){
		base.OnShow ();
		
		this.transform.parent = null;
		this.transform.localPosition = Vector3.zero;
		this.transform.localRotation = Quaternion.identity;
		this.transform.localScale = Vector3.one;
        UFE.DelayLocalAction(LoadMovie, (Fix64)delayBeforePlayingVideo);
	}

    public void LoadMovie() {
        videoPlayer = this.GetComponent<VideoPlayer>();
		if (videoPlayer == null) videoPlayer = this.gameObject.AddComponent<VideoPlayer>();

        audioSource = this.GetComponent<AudioSource>();
        if (audioSource == null) audioSource = this.gameObject.AddComponent<AudioSource>();


        if (loadFromUrl) {
            string url = this.pathOrUrl
                    .Replace(VideoIntroScreen.Data, Application.dataPath)
                    .Replace(VideoIntroScreen.Persistent, Application.persistentDataPath)
                    .Replace(VideoIntroScreen.StreamingAssets, Application.streamingAssetsPath)
                    .Replace(VideoIntroScreen.Temp, Application.temporaryCachePath);

            videoPlayer.url = url;
        } else {
            videoPlayer.clip = videoClip;
        }

        videoPlayer.playOnAwake = false;
        videoPlayer.renderMode = VideoRenderMode.MaterialOverride;
        videoPlayer.targetMaterialRenderer = GetComponent<Renderer>();
        videoPlayer.targetMaterialProperty = "_MainTex";
        videoPlayer.audioOutputMode = VideoAudioOutputMode.AudioSource;
        videoPlayer.SetTargetAudioSource(0, audioSource);
    }

    public void Update() {
        if ((skippable && Input.anyKeyDown) || videoPlayer.frame >= (long)videoPlayer.frameCount) {
            videoPlayer.Stop();
            videoPlayer = null;
            UFE.DelayLocalAction(this.GoToNextScreen, (Fix64)delayAfterSkippingVideo);
        }
    }
}