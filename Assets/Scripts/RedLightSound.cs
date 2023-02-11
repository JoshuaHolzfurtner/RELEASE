using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RedLightSound : MonoBehaviour
{
    public PlayerSounds forRed;
    void OnEnable()
    {
        forRed.footStep(1);
    }
}
