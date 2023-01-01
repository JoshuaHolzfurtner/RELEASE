using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovePlayerLeftOrRight : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void moveLeft()
    {
        transform.position = new Vector3(transform.position.x + 0.01f, transform.position.y, transform.position.z);
    }
    public void moveRight()
    {
        transform.position = new Vector3(transform.position.x - 0.01f, transform.position.y, transform.position.z);
    }
}
