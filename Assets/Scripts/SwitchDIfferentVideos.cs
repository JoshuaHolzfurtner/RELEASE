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
    
    public int startGeneral;
    public int startHandle;
    public int startGeneralTwo;
    public int startCatch;
    public int startCatchDry;
    public int startDrive;
    public int startDriveDry;
    public int startFinish;
    public int startFinishDry;
    public int startRelease;


    public GameObject[] charPics;
    private int charCounter = 0;




    public void Start()
    {
        videosLength = videos.Length;
    }

    public void PlayNextVideo()
    {
        //videos[currentVideo].SetActive(false);
        if(currentVideo != (videosLength - 1))
        {
            currentVideo++;
            //videos[currentVideo].SetActive(true);
            playCurrentVideoForward();
            CheckDryExercise(currentVideo);
            playSoundCurrentIndex(currentVideo);
            ChangePicMan();


        }
        else
        {
            currentVideo = 0;
            videos[10].SetActive(false);
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
        //videos[currentVideo].SetActive(false);
        //CheckDryExercise(currentVideo);
        if (currentVideo != 0)
        {
            currentVideo--;
        }
        playCurrentVideoBackward();
        //videos[currentVideo].SetActive(true);
        playSoundCurrentIndex(currentVideo);
        ChangePicMan();
        CheckDryExercise(currentVideo);

    }

    public void CheckDryExercise(int index)//
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

    public void playCurrentVideoForward()
    {
        if(currentVideo == startGeneral)
        {
            videos[0].SetActive(false);
            videos[1].SetActive(true);
        }
        else if (currentVideo == startHandle)
        {
            videos[1].SetActive(false);
            videos[2].SetActive(true);
        }
        else if (currentVideo == startGeneralTwo)
        {
            videos[2].SetActive(false);
            videos[3].SetActive(true);
        }
        else if (currentVideo == startCatch)
        {
            videos[3].SetActive(false);
            videos[4].SetActive(true);
        }
        else if (currentVideo == startCatchDry)
        {
            videos[4].SetActive(false);
            videos[5].SetActive(true);
        }
        else if(currentVideo == startDrive)
        {
            videos[5].SetActive(false);
            videos[6].SetActive(true);
        }
        else if (currentVideo == startDriveDry)
        {
            videos[6].SetActive(false);
            videos[7].SetActive(true);
        }
        else if (currentVideo == startFinish)
        {
            videos[7].SetActive(false);
            videos[8].SetActive(true);
        }
        else if (currentVideo == startFinishDry)
        {
            videos[8].SetActive(false);
            videos[9].SetActive(true);
        }
        else if (currentVideo == startRelease)
        {
            videos[9].SetActive(false);
            videos[1].SetActive(true);
        }
        else
        {
            Debug.Log("Othercase Video");
        }
    }

    public void playCurrentVideoBackward()
    {
        if (currentVideo == (startGeneral-1))
        {
            videos[1].SetActive(false);
            videos[0].SetActive(true);
        }
        else if (currentVideo == (startHandle-1))
        {
            videos[2].SetActive(false);
            videos[1].SetActive(true);
        }
        else if (currentVideo == (startGeneralTwo-1))
        {
            videos[3].SetActive(false);
            videos[2].SetActive(true);
        }
        else if (currentVideo == (startCatch-1))
        {
            videos[4].SetActive(false);
            videos[3].SetActive(true);
        }
        else if (currentVideo == (startCatchDry-1))
        {
            videos[5].SetActive(false);
            videos[4].SetActive(true);
        }
        else if (currentVideo == (startDrive-1))
        {
            videos[6].SetActive(false);
            videos[5].SetActive(true);
        }
        else if (currentVideo == (startDriveDry-1))
        {
            videos[7].SetActive(false);
            videos[6].SetActive(true);
        }
        else if (currentVideo == (startFinish-1))
        {
            videos[8].SetActive(false);
            videos[7].SetActive(true);
        }
        else if (currentVideo == (startFinishDry-1))
        {
            videos[9].SetActive(false);
            videos[8].SetActive(true);
        }
        else if (currentVideo == (startRelease-1))
        {
            videos[10].SetActive(false);
            videos[9].SetActive(true);
        }
        else
        {
            Debug.Log("Othercase Video");
        }
    }
}
