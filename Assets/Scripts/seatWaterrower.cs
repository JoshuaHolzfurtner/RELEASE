using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class seatWaterrower : MonoBehaviour
{
    public Transform goalMatchUp;
    public float offsetX;

    void Update()
    {
        //transform.localPosition = new Vector3 (goalMatchUp.localPosition.x + offsetX, transform.localPosition.y, transform.localPosition.z);
        transform.position = new Vector3(goalMatchUp.position.x + offsetX, transform.position.y, transform.position.z);
        
    }
}
