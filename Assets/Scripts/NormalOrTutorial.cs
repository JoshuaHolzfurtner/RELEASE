using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NormalOrTutorial : MonoBehaviour
{
    private bool tutorial;
    public GameObject tutorialElements;
    public GameObject normalElements;
    // Start is called before the first frame update
    void Start()
    {
        tutorial = false;
    }

    public void MakeItTutorial()
    {
        tutorial = true;
    }
    public void MakeItNormal()
    {
        tutorial = false;
    }
    public void SpawnGameModeElements()
    {
        if(tutorial)
        {
            tutorialElements.SetActive(true);
        }
        else
        {
            normalElements.SetActive(true);

        }
    }

}
