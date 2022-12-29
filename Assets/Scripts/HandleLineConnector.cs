using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandleLineConnector : MonoBehaviour
{
    public LineRenderer line;
    public Transform posOne;
    public Transform posTwo;
    public Transform posThree;
    // Start is called before the first frame update
    void Start()
    {
        line.positionCount = 3;
    }

    // Update is called once per frame
    void Update()
    {
        line.SetPosition(0, posOne.position);
        line.SetPosition(1, posTwo.position);
        line.SetPosition(2, posThree.position);



    }
}
