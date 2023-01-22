using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DiagrammAndTextControll : MonoBehaviour
{
    public GameObject lastMenu;
    public GameObject thisMenu;
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
        //counterText++;
    }

    public void NextText()
    {
        counterText++;
        tutorialText.text = textsExplainRow[counterText];
        if (counterText == (textsExplainRow.Length-1))
        {
            nextMenu.SetActive(true);
            counterText = 1;
            thisMenu.SetActive(false);

        }

    }

    public void LastText()
    {
        counterText--;
        tutorialText.text = textsExplainRow[counterText];
        if (counterText == 0)
        {
            lastMenu.SetActive(true);
            counterText = 1;
            thisMenu.SetActive(false);

        }

    }
}
