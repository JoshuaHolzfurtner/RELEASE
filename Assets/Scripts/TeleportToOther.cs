using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeleportToOther : MonoBehaviour
{
    public GameObject beingTeleported;
    public GameObject teleportationGoal;
    private bool teleportationOn;
    private Vector3 offset;
    // Start is called before the first frame update
    void Start()
    {
        teleportationOn = false;
        offset = new Vector3(90, 90, 0);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void startTeleportation()
    {
        teleportationOn = true;
        if (teleportationOn)
        {
            //beingTeleported.GetComponent<Transform>().rotation = Quaternion.Euler(offset) * teleportationGoal.GetComponent<Transform>().localRotation;
            
            beingTeleported.GetComponent<Transform>().position = new Vector3(teleportationGoal.GetComponent<Transform>().position.x, teleportationGoal.GetComponent<Transform>().position.y, teleportationGoal.GetComponent<Transform>().position.z + 0.075f);
        }
    }
    public void stopTeleportation()
    {
        teleportationOn = true;
    }
}
