using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GreenLightSound : MonoBehaviour
{
    public PlayerSounds forGreen;
    void OnEnable()
    {
        forGreen.footStep(0);
    }

}
