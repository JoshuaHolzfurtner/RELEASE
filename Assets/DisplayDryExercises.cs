using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplayDryExercises : MonoBehaviour
{
    public GameObject dryCatch;
    public GameObject dryDrive;
    public GameObject dryFinish;


    public void ShowNone()
    {
        dryCatch.SetActive(false);
        dryDrive.SetActive(false);
        dryFinish.SetActive(false);

    }

    public void ShowCatch()
    {
        dryCatch.SetActive(true);
        dryDrive.SetActive(false);
        dryFinish.SetActive(false);

    }

    public void ShowDrive()
    {
        dryCatch.SetActive(false);
        dryDrive.SetActive(true);
        dryFinish.SetActive(false);

    }

    public void ShowFinish()
    {
        dryCatch.SetActive(false);
        dryDrive.SetActive(false);
        dryFinish.SetActive(true);

    }

}
