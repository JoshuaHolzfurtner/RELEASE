using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RowerPicked : MonoBehaviour
{
    public GameObject machineWR;
    public GameObject machineC2;
    public GameObject midPointWR;
    public GameObject midPointC2;
    public GameObject referencePointWR;
    public GameObject referencePointC2;
    public GameObject backportWR;
    public GameObject backportC2;
    public GameObject handleWR;
    public GameObject handleC2;
    public GameObject menuWR;
    public GameObject menuC2;
    public GameObject menuWRGeneral;
    public GameObject menuC2General;
    public GameObject menuWRCall;
    public GameObject menuC2Call;
    public GameObject menuWRAllign;
    public GameObject menuC2Allign;
    public GameObject menuWRTutorials;
    public GameObject menuC2Tutorials;
    public GameObject thisMenu;

    private string rowerPicked;

    void Start()
    {
        rowerPicked = "NONE";
    }


    public void WRPicked()
    {
        rowerPicked = "WR";
    }
    public void C2Picked()
    {
        rowerPicked = "C2";
    }
    public void spawnRowingMachine()
    {
        if(rowerPicked=="NONE")
        {
            return;
        }
        else if(rowerPicked == "WR")
        {
            machineWR.SetActive(true);
            midPointWR.SetActive(true);
            referencePointWR.SetActive(true);
            handleWR.SetActive(true);
            menuWR.SetActive(true);
            menuWRAllign.SetActive(true);
            backportWR.SetActive(true);

            thisMenu.SetActive(false);


        }
        else if (rowerPicked == "C2")
        {
            /*machineC2.SetActive(true);
            midPointC2.SetActive(true);
            referencePointC2.SetActive(true);
            handleC2.SetActive(true);
            menuC2.SetActive(true);
            allignC2.SetActive(true);
            thisMenu.SetActive(false);*/

            midPointWR.transform.position = midPointC2.transform.position;
            referencePointWR.transform.position = referencePointC2.transform.position;
            handleWR.transform.position = handleC2.transform.position;
            backportWR.transform.position = backportC2.transform.position;

            machineC2.SetActive(true);
            midPointWR.SetActive(true);
            referencePointWR.SetActive(true);
            handleWR.SetActive(true);
            menuWR.SetActive(true);
            menuWRAllign.SetActive(true);
            backportWR.SetActive(true);


            menuWRGeneral.transform.position = menuC2General.transform.position;
            menuWRCall.transform.position = menuC2Call.transform.position;
            menuWRCall.transform.rotation = menuC2Call.transform.rotation;
            menuWRAllign.transform.position = menuC2Allign.transform.position;
            menuWRTutorials.transform.position = menuC2Tutorials.transform.position;






            thisMenu.SetActive(false);

        }
    }
}
