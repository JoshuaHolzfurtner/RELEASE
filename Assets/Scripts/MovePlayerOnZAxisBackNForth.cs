using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovePlayerOnZAxisBackNForth : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void moveForward()
    {
        transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z - 0.01f);
    }
    public void moveBackward()
    {
        transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + 0.01f);
    }
}
