using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class remoteRowerManipulation : MonoBehaviour
{
    public Transform remoteRower;
    private float yRot;
    public Animator anim;



    public void turn()
    {
        //remoteRower.rotation = new Quaternion(0, 0, 0);
        yRot = remoteRower.eulerAngles.y + 15f;//- 100f;
        //zRot = teleportationGoal.transform.eulerAngles.z;
        transform.eulerAngles = new Vector3(0f, yRot, 0f);
        //AnimateCatch();
    }

    public void AnimateNothing()
    {
        anim.SetBool("catch", false);
        anim.SetBool("drive", false);
        anim.SetBool("finish", false);
        anim.SetBool("fullstroke", false);

    }

    public void AnimateCatch()
    {
        anim.SetBool("catch", true);
        anim.SetBool("drive", false);
        anim.SetBool("finish", false);
        anim.SetBool("fullstroke", false);

    }
    public void AnimateDrive()
    {
        anim.SetBool("catch", false);
        anim.SetBool("drive", true);
        anim.SetBool("finish", false);
        anim.SetBool("fullstroke", false);
    }
    public void AnimateFinish()
    {
        anim.SetBool("catch", false);
        anim.SetBool("drive", false);
        anim.SetBool("finish", true);
        anim.SetBool("fullstroke", false);
    }
    public void AnimateFullStroke()
    {
        anim.SetBool("catch", false);
        anim.SetBool("drive", false);
        anim.SetBool("finish", false);
        anim.SetBool("fullstroke", true);
    }
}
