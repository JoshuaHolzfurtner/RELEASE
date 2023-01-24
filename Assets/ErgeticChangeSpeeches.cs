using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ErgeticChangeSpeeches : MonoBehaviour
{
    public Animator animTrainer;
    public remoteRowerManipulation animRower;
    public TextMeshProUGUI phaseText;
    public GameObject ergeticElements;
    public GameObject ergeticMenu;
    public GameObject continueMenu;
    


    private int scriptCounterAnim;


    public int indexNothing;
    public int indexCatch;
    public int indexDrive;
    public int indexFinish;
    public int indexFullStroke;
    public int lastIndexSpeeches;

    public DisplayDryExercises dryExerciseController;
    public int startNoDry;
    public int startCatchDry;
    public int startDriveDry;
    public int startFinishDry;
    public int startEndDry;





    public void Start()
    {
        scriptCounterAnim = 0;
    }

    public void nextAnim()
    {
        scriptCounterAnim++;
        animTrainer.SetInteger("CurrentAnimation", scriptCounterAnim);
        CheckDryExercise(scriptCounterAnim);

        if (scriptCounterAnim==indexCatch)
        {
            animRower.AnimateCatch();
            phaseText.text = "CATCH";
        }
        else if (scriptCounterAnim == indexNothing)
        {
            animRower.AnimateNothing();
            phaseText.text = "How to Row";

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
        if (scriptCounterAnim == indexCatch)
        {
            animRower.AnimateCatch();
        }
        else if (scriptCounterAnim == indexNothing)
        {
            animRower.AnimateNothing();
        }
        else if (scriptCounterAnim == indexDrive)
        {
            animRower.AnimateDrive();
        }
        else if (scriptCounterAnim == indexFinish)
        {
            animRower.AnimateFinish();
        }
        else if (scriptCounterAnim == indexFullStroke)
        {
            animRower.AnimateFullStroke();
        }
        else if (scriptCounterAnim == lastIndexSpeeches)
        {
            ergeticMenu.SetActive(false);
            scriptCounterAnim = 0;
            continueMenu.SetActive(true);
            ergeticElements.SetActive(false);
        }
    }

    public void CheckDryExercise(int index)
    {
        if (index == startNoDry)
        {
            dryExerciseController.ShowNone();//jsbkjsb
        }
        else if (index == startCatchDry)
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
        else if (index == startEndDry)
        {
            dryExerciseController.ShowNone();
        }
    }
}
