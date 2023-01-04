using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[System.Serializable]
public class Maptranforms
{
    public Transform vrTarget;
    public Transform ikTarget;

    public Vector3 trackingPositionOffset;
    public Vector3 trackingRotationOffset;


    public void VrMapping()
    {
        ikTarget.position = vrTarget.TransformPoint(trackingPositionOffset);
        ikTarget.rotation = vrTarget.rotation * Quaternion.Euler(trackingRotationOffset);
    }

}
public class AvatarController : MonoBehaviour
{
    [SerializeField] private Maptranforms head;
    [SerializeField] private Maptranforms leftHand;
    [SerializeField] private Maptranforms rightHand;

    [SerializeField] private float turnSmoothness;
    [SerializeField] Transform ikHead;
    [SerializeField] Vector3 headBodyOffset;




    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void LateUpdate() //Spinnt manchmal bei normalen Update
    {
        transform.position = ikHead.position + headBodyOffset;
        transform.forward = Vector3.Lerp(transform.forward,Vector3.ProjectOnPlane(ikHead.forward, Vector3.up).normalized,Time.deltaTime* turnSmoothness);//SOll Körper mit Blickrichtung allignen aber nur in der Y-Achse
        head.VrMapping();
        leftHand.VrMapping();
        rightHand.VrMapping();

    }
}
