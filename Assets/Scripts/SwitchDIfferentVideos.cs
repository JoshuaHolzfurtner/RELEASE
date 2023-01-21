using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchDIfferentVideos : MonoBehaviour
{
    public GameObject[] videos = default;
    private int currentVideo = 0;

    public void PlayNextVideo()
    {
        videos[currentVideo].SetActive(false);
        currentVideo++;
        videos[currentVideo].SetActive(true);
    }

    public void ReplayCurrentVideo()
    {
        videos[currentVideo].SetActive(false);
        videos[currentVideo].SetActive(true);

    }
    public void GoBackToLastVideo()
    {
        videos[currentVideo].SetActive(false);
        currentVideo--;
        videos[currentVideo].SetActive(true);
    }
}
