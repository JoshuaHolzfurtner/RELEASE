using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class midPointRightLeft : MonoBehaviour
{
    public Transform transformBase;
    public Transform transformMid;
    public Transform transformFollow;
    private Vector3 lastTransformMid;
    private Vector3 lastTransformFollow;
    private float distMidBase;
    private float distFollowBase;
    private float distFactor;
    private float newX;
    // Start is called before the first frame update
    void Start()
    {
        //lastTransformFollow = transformFollow.position;
        //lastTransformMid = transformMid.position;
        
    }

    // Update is called once per frame
    void Update()
    {
        newX = transformFollow.position.x;
        transform.position = new Vector3(transformFollow.position.x, transform.position.y, transform.position.z);
        
    }
}
