using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchDIfferentVideos : MonoBehaviour
{
    public GameObject[] videos = default;
    public GameObject videoMenu;
    public GameObject nextMenu;
    private int currentVideo = 0;
    private int videosLength;

    public void Start()
    {
        videosLength = videos.Length;
    }

    public void PlayNextVideo()
    {
        videos[currentVideo].SetActive(false);
        if(currentVideo != (videosLength - 1))
        {
            currentVideo++;
            videos[currentVideo].SetActive(true);
        }
        else
        {
            currentVideo = 0;
            videos[currentVideo].SetActive(false);
            videos[0].SetActive(true);
            videoMenu.SetActive(false);
            nextMenu.SetActive(true);
        }
        
    }

    public void ReplayCurrentVideo()
    {
        videos[currentVideo].SetActive(false);
        videos[currentVideo].SetActive(true);

    }
    public void GoBackToLastVideo()
    {
        videos[currentVideo].SetActive(false);
        if (currentVideo != 0)
        {
            currentVideo--;
        }
        
        videos[currentVideo].SetActive(true);
    }
}
