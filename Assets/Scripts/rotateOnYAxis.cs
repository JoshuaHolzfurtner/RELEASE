using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotateOnYAxis : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void turnLeft()
    {
        float xRot = 0f;
        float yRot = 0f;
        float zRot = 0f;
        //xRot = teleportationGoal.transform.eulerAngles.x;
        yRot = transform.eulerAngles.y + 1f;//- 100f;
        //zRot = teleportationGoal.transform.eulerAngles.z;
        transform.eulerAngles = new Vector3(xRot, yRot, zRot);
    }

    public void turnRight()
    {
        float xRot = 0f;
        float yRot = 0f;
        float zRot = 0f;
        //xRot = teleportationGoal.transform.eulerAngles.x;
        yRot = transform.eulerAngles.y - 1f;//- 100f;
        //zRot = teleportationGoal.transform.eulerAngles.z;
        transform.eulerAngles = new Vector3(xRot, yRot, zRot);
    }
}
