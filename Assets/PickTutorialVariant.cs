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
    }
    public void MakeItVideo()
    {
        tutorialVideo = false;
        videoElements.SetActive(true);
    }
    public void MakeItErgetic()
    {
        tutorialErgetic = false;
        ergeticElements.SetActive(true);
    }
    

}
