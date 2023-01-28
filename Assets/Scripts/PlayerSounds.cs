using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSounds : MonoBehaviour
{
    [SerializeField] AudioClip[] footstepSound = default;
    public Animator animFace;
    private int counterAnim;

    public void Start()
    {

        //animFace = GetComponent<Animator>();
    }

    public void footStep(int speechIndex)
    {
        Debug.Log("halllapalooza");  //works handing speechindex further
        Debug.Log(speechIndex);
        AudioManager.instance.source.Stop();
        AudioManager.instance.source.PlayOneShot(footstepSound[speechIndex]);
        //AudioManager.instance.source.Stop();
        counterAnim = speechIndex;// animFace.GetInteger("CurrentAnimation") + 1;
        animFace.SetInteger("CurrentAnimation", counterAnim);

    }

    void NextFootStep(int speechIndex)
    {
        Debug.Log("halllapalooza");  //works handing speechindex further
        Debug.Log(speechIndex);
        counterAnim++;// animFace.GetInteger("CurrentAnimation") + 1;
        AudioManager.instance.source.PlayOneShot(footstepSound[counterAnim]);
        animFace.SetInteger("CurrentAnimation", counterAnim);

    }
    void BackFootStep(int speechIndex)
    {
        Debug.Log("halllapalooza");  //works handing speechindex further
        Debug.Log(speechIndex);
        counterAnim--;// animFace.GetInteger("CurrentAnimation") + 1;
        AudioManager.instance.source.PlayOneShot(footstepSound[counterAnim]);
        animFace.SetInteger("CurrentAnimation", counterAnim);

    }

    public void openTutorial()
    {
        Debug.Log("halllapalooza");  //works handing speechindex further
        animFace.SetBool("Tutorial", true);

    }
    public void openQuickStart()
    {
        Debug.Log("halllapalooza");  //works handing speechindex further
        animFace.SetBool("Quickstart", true);

    }
    public void openDiagramm()
    {
        Debug.Log("halllapalooza");  //works handing speechindex further
        animFace.SetBool("Diagramm", true);

    }
    public void openVideo()
    {
        Debug.Log("halllapalooza");  //works handing speechindex further
        animFace.SetBool("Video", true);

    }
    public void openErgetic()
    {
        Debug.Log("halllapalooza");  //works handing speechindex further
        animFace.SetBool("Ergetic", true);

    }
    public void openMachine()
    {
        Debug.Log("halllapalooza");  //works handing speechindex further
        animFace.SetBool("Machine", true);

    }
    public void openAllign()
    {
        Debug.Log("halllapalooza");  //works handing speechindex further
        animFace.SetBool("Allign", true);

    }
}
