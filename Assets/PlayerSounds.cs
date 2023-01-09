using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSounds : MonoBehaviour
{
    [SerializeField] AudioClip footstepSound;
    void footStep()
    {
        AudioManager.instance.source.PlayOneShot(footstepSound);
    }
}
