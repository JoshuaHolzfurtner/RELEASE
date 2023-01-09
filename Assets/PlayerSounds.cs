using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSounds : MonoBehaviour
{
    [SerializeField] AudioClip[] footstepSound = default;
    private Animator animFace;
    private int counterAnim;

    public void Start()
    {

        animFace = GetComponent<Animator>();
    }

    void footStep(int speechIndex)
    {
        //Debug.Log("halllapalooza");  //works handing speechindex further
        //Debug.Log(speechIndex);
        AudioManager.instance.source.PlayOneShot(footstepSound[speechIndex]);
        animFace.SetTrigger("Trigger");
        counterAnim = animFace.GetInteger("CurrentAnimation") + 1;
        animFace.SetInteger("CurrentAnimation", counterAnim);

    }
}
