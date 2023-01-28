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





    public void Start()
    {
        scriptCounterAnim = 0;
        scriptCounterSpeech = 0;

    }

    public void nextAnim()
    {
        scriptCounterAnim++;
        animTrainer.SetInteger("CurrentAnimation", scriptCounterAnim);
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



        }
        else if (scriptCounterAnim==indexCatch)
        {
            animRower.AnimateCatch();
            phaseText.text = "CATCH";
        }
        else if (scriptCounterAnim == indexDrive)
        {
            animRower.AnimateDrive();
            phaseText.text = "Drive";

        }
        else if (scriptCounterAnim == indexFinish)
        {
            animRower.AnimateFinish();
            phaseText.text = "Finish";

        }
        else if (scriptCounterAnim == indexFullStroke)
        {
            animRower.AnimateFullStroke();
            phaseText.text = "Full Stroke";

        }
        else if (scriptCounterAnim == lastIndexSpeeches)
        {
            ergeticMenu.SetActive(false);
            scriptCounterAnim = 0;
            scriptCounterSpeech = 0;

            phaseText.text = "How to row";

            continueMenu.SetActive(true);
            ergeticElements.SetActive(false);
        }

    }

    public void backAnim()
    {
        scriptCounterAnim--;
        CheckDryExercise(scriptCounterAnim);

        animTrainer.SetInteger("CurrentAnimation", scriptCounterAnim);
        if (scriptCounterAnim == (indexCatch-1))
        {
            animRower.AnimateNothing();
            handleGrip.SetActive(false);
            phaseText.text = "Grab Handle";

        }
        else if (scriptCounterAnim == (indexNothing-1))
        {
            animRower.AnimateNothing();
        }
        else if (scriptCounterAnim == (indexHandle - 1))
        {
            animRower.AnimateNothing();
            handleGrip.SetActive(false);
            phaseText.text = "How to row";

        }
        else if (scriptCounterAnim == (indexDrive-1))
        {
            animRower.AnimateCatch();
            phaseText.text = "Catch";

        }
        else if (scriptCounterAnim == (indexFinish-1))
        {
            animRower.AnimateDrive();
            phaseText.text = "Drive";

        }
        else if (scriptCounterAnim == (indexFullStroke-1))
        {
            animRower.AnimateFinish();
            phaseText.text = "Finish";

        }
        else if (scriptCounterAnim == 0)
        {
            //ergeticMenu.SetActive(false);
            scriptCounterAnim = 1;
            scriptCounterSpeech = 1;
            //continueMenu.SetActive(true);
            //ergeticElements.SetActive(false);
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
        else 
        {
            dryExerciseController.ShowNone();
        }
    }

    public void ClickingRight()
    {
        scriptCounterSpeech++;
        animTrainer.SetInteger("index", scriptCounterSpeech);
    }

    public void Clickingleft()
    {
        if(scriptCounterSpeech==0)
        {
            return;
        }
        scriptCounterSpeech--;
        animTrainer.SetInteger("index", scriptCounterSpeech);
    }
}
