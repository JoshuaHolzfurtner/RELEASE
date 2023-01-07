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
    public GameObject handleWR;
    public GameObject handleC2;
    public GameObject menuWR;
    public GameObject menuC2;
    public GameObject allignWR;
    public GameObject allignC2;

    public GameObject thisMenu;

    private string rowerPicked;
    // Start is called before the first frame update
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
            allignWR.SetActive(true);

            thisMenu.SetActive(false);


        }
        else if (rowerPicked == "C2")
        {
            machineC2.SetActive(true);
            midPointC2.SetActive(true);
            referencePointC2.SetActive(true);
            handleC2.SetActive(true);
            menuC2.SetActive(true);
            allignC2.SetActive(true);
            thisMenu.SetActive(false);

        }
    }
}
