using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeleportToOther : MonoBehaviour
{
    public Transform beingTeleported;
    public Transform teleportationGoal;
    private bool teleportationOn;
    public Vector3 offset;
    // Start is called before the first frame update
    void Start()
    {
        teleportationOn = false;
        //offset = new Vector3(0, 90, 0);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void startTeleportation()
    {
        float xRot = 0f;
        float yRot = 0f;
        float zRot = 0f;
        //xRot = teleportationGoal.transform.eulerAngles.x;
        yRot = teleportationGoal.transform.eulerAngles.y - 100f;
        //zRot = teleportationGoal.transform.eulerAngles.z;
        beingTeleported.transform.eulerAngles = new Vector3(xRot, yRot, zRot);
        teleportationOn = true;
        if (teleportationOn)
        {
            
            
            beingTeleported.position = (new Vector3(teleportationGoal.position.x, teleportationGoal.position.y, teleportationGoal.position.z)) +  offset;
        }
    }
    public void stopTeleportation()
    {
        teleportationOn = true;
    }
}
