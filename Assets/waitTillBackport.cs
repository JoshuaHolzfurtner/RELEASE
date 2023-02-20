using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


public class waitTillBackport : MonoBehaviour
{
    private float waitTime;
    public float timeLimit;
    private bool isWaiting;
    public TeleportToOther forSetBack;
    public OVRPassthroughLayer toEnable;
    public GameObject room;


    // Start is called before the first frame update
    void Start()
    {
        waitTime = 0f;
        isWaiting = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(isWaiting)
        {
            waitTime += Time.deltaTime;
        }
        if(waitTime> timeLimit)
        {
            forSetBack.startTeleportation();
            room.SetActive(false);
            toEnable.enabled = true;
        }
    }

    public void wait()
    {
        isWaiting = true;
    }
    public void Reset()
    {
        isWaiting = false;
        waitTime = 0;
    }
}
