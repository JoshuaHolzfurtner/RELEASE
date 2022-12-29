using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class midPointRightLeft : MonoBehaviour
{
    public Transform transformBase;
    public Transform transformMid;
    public Transform transformFollow;
    //private Vector3 lastTransformMid;
    //private Vector3 lastTransformFollow;
    //private float distMidBase;
    //private float distFollowBase;
    //private float distFactor;
    private float newX;
    private float newY;
    private float startY;
    // Start is called before the first frame update
    void Start()
    {
        //lastTransformFollow = transformFollow.position;
        //lastTransformMid = transformMid.position;
        startY = transform.position.y;
        
    }

    // Update is called once per frame
    void Update()
    {
        newX = (transformFollow.position.x)/2;
        newY = Mathf.Max(transformFollow.position.y * 0.9f, startY);
        transform.position = new Vector3(newX, newY, transform.position.z);
        
    }
}
