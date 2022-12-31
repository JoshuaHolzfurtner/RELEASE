using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TrackHandle : MonoBehaviour
{
    public TextMeshProUGUI strokeRateText;
    public TextMeshProUGUI intensityText;
    public TextMeshProUGUI strokesText;
    public TextMeshProUGUI pointsText;
    public Transform trackedObject;
    private float farthestBackZ; //farthest Point back on the z-Axis on this Stroke
    private float farthestFrontZ;
    private float currentZ;
    private bool direction; //true->pull, false->release
    private int strokeCounter;
    private float lastPointZ;

    // Start is called before the first frame update
    void Start()
    {
        farthestBackZ = trackedObject.position.z;
        farthestFrontZ = trackedObject.position.z;
        currentZ = trackedObject.position.z;
        lastPointZ = trackedObject.position.z;

        direction = true;
        strokeCounter = 0;

    }

    // Update is called once per frame
    void Update()
    {
        currentZ = transform.position.z;
        if ((currentZ < farthestBackZ) && (direction == true))
        {
            farthestBackZ = currentZ;
            intensityText.text = farthestBackZ.ToString();
        }

        else if((lastPointZ < currentZ) && (direction == true)) // we start moving forward on the z-axis again
        {
            direction = false;
            strokeCounter++;
            strokesText.text = strokeCounter.ToString();
            if (farthestBackZ > -0.5f)
            {
                intensityText.text = "LOW";
            }
            else if (farthestBackZ <= -0.5f)
            {
                intensityText.text = "HIGH";

            }
        }
        else if((lastPointZ > currentZ) && (direction == false))
        {
            direction = true;
            farthestBackZ = lastPointZ;
        }
        lastPointZ = currentZ;
    }
}
