using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandleUpAndBack : MonoBehaviour
{
    public Transform goalMatchUp;
    public float offsetX;
    public float offsetY;
    public float offsetZ;

    void Update()
    {
        //# transform.localPosition = new Vector3 (goalMatchUp.localPosition.x + offsetX, transform.localPosition.y, transform.localPosition.z);
        transform.position = new Vector3(goalMatchUp.position.x + offsetX, goalMatchUp.position.y+ offsetY, goalMatchUp.position.z + +offsetZ);
        transform.rotation = new Quaternion(goalMatchUp.rotation.x, transform.rotation.y, transform.rotation.z, transform.rotation.w);
    }
}

