using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SeatPlayer : MonoBehaviour
{
    public Transform goalMatchUp;
    public float offsetZ;
    public float maxZ;
    public float minZ;
    public TextMeshProUGUI debug;
    void Update()
    {
        debug.text = (goalMatchUp.position.z + offsetZ).ToString();
        /*if ((goalMatchUp.position.z + offsetZ) >= maxZ)
        {
            transform.position = new Vector3(transform.position.x, transform.position.y, maxZ);
        }
        else if ((goalMatchUp.position.z + offsetZ) <= minZ)
        {
            transform.position = new Vector3(transform.position.x, transform.position.y, goalMatchUp.position.z + offsetZ);
        }
        else
        {
            transform.position = new Vector3(transform.position.x, transform.position.y, goalMatchUp.position.z + offsetZ);
            //
        }*/
        //transform.localPosition = new Vector3 (goalMatchUp.localPosition.x + offsetX, transform.localPosition.y, transform.localPosition.z);
        transform.position = new Vector3(transform.position.x, transform.position.y, goalMatchUp.position.z + offsetZ);

    }
}
