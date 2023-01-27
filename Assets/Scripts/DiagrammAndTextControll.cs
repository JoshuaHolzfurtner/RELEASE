using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DiagrammAndTextControll : MonoBehaviour
{
    public GameObject lastMenu;
    public GameObject thisMenu;
    public GameObject thisTutorialVariant;
    public GameObject nextMenu;
    public DisplayDryExercises dryExerciseController;

    public int startCatchDry;
    public int startDriveDry;
    public int startFinishDry;

    public int startGeneral;
    public int startHandle;
    public int startGeneralTwo;
    public int startCatch;
    public int startDrive;
    public int startFinish;
    public int startRelease;

    public GameObject diagrammsBeginning;
    public GameObject diagrammsHandle;
    public GameObject diagrammsCatch;
    public GameObject diagrammsDrive;
    public GameObject diagrammsFinish;
    public GameObject diagrammsRelease;





    public string[] textsExplainRow;

    public TextMeshProUGUI tutorialText;

    public GameObject[] charPics;


    private int counterText = 0;
    private int charCounter = 0;
    

    public void Start()
    {
        counterText = 1;
        tutorialText.text = textsExplainRow[1];
        charPics[0].SetActive(true);
        ChangePicMan();
        CheckDiagramms(counterText);


        //counterText++;
    }

    public void ResetDiagrammAndText()
    {
        counterText = 1;
        tutorialText.text = textsExplainRow[1];
        charPics[0].SetActive(true);
        ChangePicMan();

        //counterText++;
    }


    public void NextText()
    {
        ChangePicMan();
        counterText++;
        CheckDryExercise(counterText);
        CheckDiagramms(counterText);
        tutorialText.text = textsExplainRow[counterText];
        if (counterText == (textsExplainRow.Length-1))
        {
            nextMenu.SetActive(true);
            counterText = 1;
            thisTutorialVariant.SetActive(false);
            thisMenu.SetActive(false);

        }

    }

    public void LastText()
    {
        ChangePicMan();
        counterText--;
        CheckDryExercise(counterText);
        CheckDiagrammsBackwards(counterText);
        tutorialText.text = textsExplainRow[counterText];
        if (counterText == 1)
        {
            //lastMenu.SetActive(true);
            counterText = 2;
            //thisTutorialVariant.SetActive(false);
            //thisMenu.SetActive(false);

        }

    }

    public void ChangePicMan()
    {
        charPics[charCounter].SetActive(false);
        charCounter++;
        if(charCounter == 4)
        {
            charCounter = 0;
        }
        charPics[charCounter].SetActive(true);
    }

    public void CheckDryExercise(int index)
    {
        if(index == startCatchDry)
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

    public void CheckDiagramms(int index)
    {
        if (index == startGeneral || index == startGeneralTwo)
        {
            diagrammsBeginning.SetActive(true);
            diagrammsHandle.SetActive(false);
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
            diagrammsRelease.SetActive(false);

        }
        else if (index == startHandle)
        {
            diagrammsBeginning.SetActive(false);
            diagrammsHandle.SetActive(true);
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
            diagrammsRelease.SetActive(false);
        }
        else if (index == startCatch)
        {
            diagrammsBeginning.SetActive(false);
            diagrammsHandle.SetActive(false);
            diagrammsCatch.SetActive(true);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
            diagrammsRelease.SetActive(false);
        }
        else if (index == startDrive)
        {
            diagrammsBeginning.SetActive(false);
            diagrammsHandle.SetActive(false);
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(true);
            diagrammsFinish.SetActive(false);
            diagrammsRelease.SetActive(false);
        }
        else if (index == startFinish)
        {
            diagrammsBeginning.SetActive(false);
            diagrammsHandle.SetActive(false);
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(true);
            diagrammsRelease.SetActive(false);
        }
        else if (index == startRelease)
        {
            diagrammsBeginning.SetActive(false);
            diagrammsHandle.SetActive(false);
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
            diagrammsRelease.SetActive(true);
        }
    }

    public void CheckDiagrammsBackwards(int index)
    {
        if (index == (startGeneralTwo -1))
        {
            diagrammsBeginning.SetActive(false);
            diagrammsHandle.SetActive(true);
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
            diagrammsRelease.SetActive(false);

        }
        else if (index == (startHandle-1))
        {
            diagrammsBeginning.SetActive(true);
            diagrammsHandle.SetActive(false);
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
            diagrammsRelease.SetActive(false);
        }
        else if (index == (startCatch-1))
        {
            diagrammsBeginning.SetActive(false);
            diagrammsHandle.SetActive(true);
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
            diagrammsRelease.SetActive(false);
        }
        else if (index == (startDrive-1))
        {
            diagrammsBeginning.SetActive(false);
            diagrammsHandle.SetActive(false);
            diagrammsCatch.SetActive(true);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
            diagrammsRelease.SetActive(false);
        }
        else if (index == (startFinish-1))
        {
            diagrammsBeginning.SetActive(false);
            diagrammsHandle.SetActive(false);
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(true);
            diagrammsFinish.SetActive(false);
            diagrammsRelease.SetActive(false);
        }
        else if (index == (startRelease-1))
        {
            diagrammsBeginning.SetActive(false);
            diagrammsHandle.SetActive(false);
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(true);
            diagrammsRelease.SetActive(false);
        }
    }
}
