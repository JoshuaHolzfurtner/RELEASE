using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSounds : MonoBehaviour
{
    [SerializeField] AudioClip[] footstepSound = default;
    void footStep(int speechIndex)
    {
        //Debug.Log("halllapalooza");  //works handing speechindex further
        //Debug.Log(speechIndex);
        AudioManager.instance.source.PlayOneShot(footstepSound[speechIndex]);
    }
}
