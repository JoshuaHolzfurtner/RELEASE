using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveToSeparateFromReal : MonoBehaviour
{
    /*public float offsetX;
    public float offsetY;
    public float offsetZ;*/

    public void ToMoveToSeparateFromReal()
    {
        transform.position = new Vector3(transform.position.x, transform.position.y + 0.1f, transform.position.z - 0.1f); 
    }

}
