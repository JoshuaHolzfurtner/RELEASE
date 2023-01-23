using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickTutorialVariant : MonoBehaviour
{
    private bool tutorialDiagramm;
    private bool tutorialVideo;
    private bool tutorialErgetic;
    public GameObject diagrammElements;
    public GameObject videoElements;
    public GameObject ergeticElements;

    public GameObject thisMenu;
    public GameObject diagrammMenu;
    public GameObject videoMenu;
    public GameObject ergeticMenu;

    public Animator speaker;

    // Start is called before the first frame update
    void Start()
    {
        //tutorial = false;
    }

    public void MakeItDiagramm()
    {
        tutorialDiagramm = true;
        diagrammElements.SetActive(true);
        diagrammMenu.SetActive(true);
        thisMenu.SetActive(false);
    }
    public void MakeItVideo()
    {
        tutorialVideo = false;
        videoElements.SetActive(true);
        videoMenu.SetActive(true);
        thisMenu.SetActive(false);
    }
    public void MakeItErgetic()
    {
        tutorialErgetic = false;
        ergeticElements.SetActive(true);
        ergeticMenu.SetActive(true);
        thisMenu.SetActive(false);
    }
    

}
