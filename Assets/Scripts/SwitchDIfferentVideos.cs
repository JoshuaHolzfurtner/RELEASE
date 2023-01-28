using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchDIfferentVideos : MonoBehaviour
{
    public GameObject[] videos = default;
    public GameObject videoMenu;
    public GameObject nextMenu;
    public PlayerSounds speechesSounds;
    private int currentVideo = 0;
    private int videosLength;

    public DisplayDryExercises dryExerciseController;
    public int startCatchDry;
    public int startDriveDry;
    public int startFinishDry;

    public GameObject[] charPics;
    private int charCounter = 0;




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
            CheckDryExercise(currentVideo);
            playSoundCurrentIndex(currentVideo);
            ChangePicMan();


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
        playSoundCurrentIndex(currentVideo);

    }
    public void GoBackToLastVideo()
    {
        videos[currentVideo].SetActive(false);
        //CheckDryExercise(currentVideo);
        if (currentVideo != 0)
        {
            currentVideo--;
        }
        
        videos[currentVideo].SetActive(true);
        playSoundCurrentIndex(currentVideo);
        ChangePicMan();
        CheckDryExercise(currentVideo);

    }

    public void CheckDryExercise(int index)
    {
        if (index == startCatchDry)
        {
            dryExerciseController.ShowCatch();
        }
        else if (index == startDriveDry)
        {
            dryExerciseController.ShowDrive();
        }
        else if (index == startFinishDry)
        {
            dryExerciseController.ShowFinish();
        }
        else 
        {
            dryExerciseController.ShowNone();
        }
    }
    

    public void playSoundCurrentIndex(int index)
    {
        speechesSounds.footStep(index);
    }


    public void ChangePicMan()
    {
        charPics[charCounter].SetActive(false);
        charCounter++;
        if (charCounter == 4)
        {
            charCounter = 0;
        }
        charPics[charCounter].SetActive(true);
    }
}
