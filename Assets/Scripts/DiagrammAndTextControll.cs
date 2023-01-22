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

        //counterText++;
    }

    public void NextText()
    {
        ChangePicMan();
        counterText++;
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
        tutorialText.text = textsExplainRow[counterText];
        if (counterText == 0)
        {
            lastMenu.SetActive(true);
            counterText = 1;
            thisTutorialVariant.SetActive(false);
            thisMenu.SetActive(false);

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
}
