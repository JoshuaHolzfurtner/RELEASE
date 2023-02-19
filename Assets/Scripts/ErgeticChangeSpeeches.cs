using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ErgeticChangeSpeeches : MonoBehaviour
{
    public Animator animTrainer;
    public remoteRowerManipulation animRower;

    public GameObject handleGrip;
    public TextMeshProUGUI phaseText;
    public TextMeshProUGUI pageIndexText;
    public GameObject ergeticElements;
    
    public GameObject ergeticMenu;
    public GameObject continueMenu;
    


    private int scriptCounterAnim;
    private int scriptCounterSpeech;



    public int indexNothing;
    public int indexHandle;
    public int indexNothingTwo;
    public int indexCatch;
    public int indexDrive;
    public int indexFinish;
    public int indexFullStroke;
    public int lastIndexSpeeches;

    public DisplayDryExercises dryExerciseController;
    public int startCatchDry;
    public int startDriveDry;
    public int startFinishDry;
    public int startFullStrokeDry;

    public GameObject diagrammsCatch;
    public GameObject diagrammsDrive;
    public GameObject diagrammsFinish;



    public void Start()
    {
        scriptCounterAnim = 0;
        scriptCounterSpeech = 0;

    }

    public void nextAnim()
    {
        scriptCounterAnim++;
        pageIndexText.text = scriptCounterAnim.ToString();
        //animTrainer.SetInteger("CurrentAnimation", scriptCounterAnim);
        CheckDryExercise(scriptCounterAnim);
        if (scriptCounterAnim == indexNothing)
        {
            animRower.AnimateNothing();
            phaseText.text = "How to Row";


        }
        else if (scriptCounterAnim == indexHandle)
        {
            animRower.AnimateNothing();
            phaseText.text = "Grab Handle";
            handleGrip.SetActive(true);

        }
        else if (scriptCounterAnim == indexNothingTwo)
        {
            animRower.AnimateFullStroke();
            phaseText.text = "What are the Phases?";
            handleGrip.SetActive(false);
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);



        }
        else if (scriptCounterAnim==indexCatch)
        {
            animRower.AnimateCatch();
            phaseText.text = "CATCH";
            diagrammsCatch.SetActive(true);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
        }
        else if (scriptCounterAnim == indexDrive)
        {
            animRower.AnimateDrive();
            phaseText.text = "Drive";
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(true);
            diagrammsFinish.SetActive(false);

        }
        else if (scriptCounterAnim == indexFinish)
        {
            animRower.AnimateFinish();
            phaseText.text = "Finish";
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(true);

        }
        else if (scriptCounterAnim == indexFullStroke)
        {
            animRower.AnimateFullStroke();
            phaseText.text = "Full Stroke";
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);

        }
        else if (scriptCounterAnim == lastIndexSpeeches)
        {
            ergeticMenu.SetActive(false);
            scriptCounterAnim = 0;
            scriptCounterSpeech = 0;
            animTrainer.SetInteger("index", scriptCounterSpeech);//
            phaseText.text = "How to row";

            continueMenu.SetActive(true);
            ergeticElements.SetActive(false);
        }

    }

    public void backAnim()
    {
        scriptCounterAnim--;
        pageIndexText.text = scriptCounterAnim.ToString();

        CheckDryExercise(scriptCounterAnim);
        
        //animTrainer.SetInteger("CurrentAnimation", scriptCounterAnim);
        
        if ((scriptCounterAnim+1) == indexHandle)
        {
            animRower.AnimateNothing();
            phaseText.text = "How to row";
            handleGrip.SetActive(false);

        }
        else if ((scriptCounterAnim+1) == indexNothingTwo)
        {
            animRower.AnimateNothing();
            phaseText.text = "Grab Handle";
            handleGrip.SetActive(true);

        }
        else if ((scriptCounterAnim+1) == indexCatch)
        {
            animRower.AnimateFullStroke();
            phaseText.text = "Rowing Phases";
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
        }
        else if ((scriptCounterAnim+1) == indexDrive)
        {
            animRower.AnimateCatch();
            phaseText.text = "Catch";
            diagrammsCatch.SetActive(true);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);

        }
        else if ((scriptCounterAnim+1) == indexFinish)
        {
            animRower.AnimateDrive();
            phaseText.text = "Drive";
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(true);
            diagrammsFinish.SetActive(false);

        }
        else if ((scriptCounterAnim+1) == indexFullStroke)
        {
            animRower.AnimateFinish();
            phaseText.text = "Finish";
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(true);

        }
        

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
        else if (index == startFullStrokeDry)
        {
            dryExerciseController.ShowFullStroke();
        }
        else 
        {
            dryExerciseController.ShowNone();
        }
    }

    public void ClickingRight()
    {
        scriptCounterSpeech++;
        animTrainer.SetInteger("index", scriptCounterSpeech);
        nextAnim();
    }

    public void Clickingleft()
    {
        if(scriptCounterSpeech==0)
        {
            return;
        }
        scriptCounterSpeech--;
        animTrainer.SetInteger("index", scriptCounterSpeech);
        backAnim();
    }
    public void CheckDiagramms(int index)
    {
        if (index == indexCatch)
        {
            
            diagrammsCatch.SetActive(true);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
        }
        else if (index == indexDrive)
        {
            
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(true);
            diagrammsFinish.SetActive(false);
        }
        else if (index == indexFinish)
        {
            
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(true);
        }
        else if (index == indexFullStroke)
        {
            
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
        }
    }

    public void CheckDiagrammsBackwards(int index)
    {
        if (index == (indexCatch - 1))
        {
            
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
            
        }
        else if (index == (indexDrive - 1))
        {
            
            diagrammsCatch.SetActive(true);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(false);
            
        }
        else if (index == (indexFinish - 1))
        {
            
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(true);
            diagrammsFinish.SetActive(false);
        }
        else if (index == (indexFullStroke - 1))
        {
            
            diagrammsCatch.SetActive(false);
            diagrammsDrive.SetActive(false);
            diagrammsFinish.SetActive(true);
            
        }
    }
}
