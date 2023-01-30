using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class seatWaterrower : MonoBehaviour
{
    public Transform goalMatchUp;
    public float offsetX;
    private Vector3 nullVec = new Vector3(0,90,0);

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.localPosition = new Vector3 (goalMatchUp.localPosition.x + offsetX, transform.localPosition.y, transform.localPosition.z);
        //transform.rotation = goalMatchUp.rotation;
        //transform.rotation = Quaternion.Euler(nullVec);
        //transform.localPosition = goalMatchUp.localPosition;
    }
}
