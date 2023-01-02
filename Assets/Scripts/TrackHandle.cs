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
    public TextMeshProUGUI DebugTextOne;
    public TextMeshProUGUI DebugTextTwo;
    public TextMeshProUGUI DebugTextThree;
    public TextMeshProUGUI DebugTextFour;





    public Transform trackedObject;
    
    public float thresholdDirection; //Distance to last point still acceptable so were still moving in the same direction
    private float farthestBackZ; //farthest Point back on the z-Axis on this Stroke
    private float farthestFrontZ;
    private float currentZ;
    private bool direction; //true->pull, false->release
    private int strokeCounter;

    private float lastPointZ;
    private float lastLastPointZ;
    private float lastLastLastPointZ;
    private float lastLastLastLastPointZ;


    private float lastStrokeDuration;
    private int pointsCounter;
    

    // Start is called before the first frame update
    void Start()
    {
        farthestBackZ = trackedObject.position.z;
        farthestFrontZ = trackedObject.position.z;
        currentZ = trackedObject.position.z;
        lastPointZ = trackedObject.position.z;

        direction = true;
        strokeCounter = 0;
        pointsCounter = 0;

        lastStrokeDuration = 0f;
        thresholdDirection = 0f;

    }

    // Update is called once per frame
    void Update()
    {
        lastStrokeDuration += Time.deltaTime;
        currentZ = transform.position.z;
        if ((currentZ < farthestBackZ) && (direction == true))
        {
            farthestBackZ = currentZ;
            intensityText.text = farthestBackZ.ToString();
        }

        else if((lastPointZ < currentZ) && (direction == true) && (lastLastPointZ <= currentZ)) // we start moving forward on the z-axis again
        {
            direction = false;
            strokeCounter++;
            strokesText.text = strokeCounter.ToString();


            //Determine Intesity of stroke
            if (farthestBackZ >= -0.5f)
            {
                intensityText.text = "LOW";
                 
                strokeRateText.text = string.Format("{0:0}", (60 / lastStrokeDuration));

                lastStrokeDuration = 0f;

                pointsCounter += 25;
                pointsText.text = pointsCounter.ToString();

            }
            else if ((farthestBackZ > -0.75f) && (farthestBackZ < -0.5f))
            {
                intensityText.text = "MID";
                strokeRateText.text = string.Format("{0:0}", (60 / lastStrokeDuration));

                lastStrokeDuration = 0f;

                pointsCounter += 50;
                pointsText.text = pointsCounter.ToString();

            }
            else if (farthestBackZ <= -0.75f)
            {
                intensityText.text = "HIGH";
                strokeRateText.text = string.Format("{0:0}", (60 / lastStrokeDuration));

                lastStrokeDuration = 0f;

                pointsCounter += 75;
                pointsText.text = pointsCounter.ToString();

            }
        }
        else if((lastPointZ > currentZ) && (direction == false) && (lastLastPointZ >= currentZ))
        {
            direction = true;
            farthestBackZ = lastPointZ;
        }

        lastLastLastLastPointZ = lastLastLastPointZ;
        lastLastLastPointZ = lastLastPointZ;
        lastLastPointZ = lastPointZ;
        lastPointZ = currentZ;
        if((lastPointZ <= currentZ) && (lastLastPointZ <= currentZ) && (lastLastLastPointZ <= currentZ) && (lastLastLastLastPointZ <= currentZ))
        {
            DebugTextTwo.text = "TRUE";
        }

        DebugTextOne.text = lastPointZ.ToString();
        
    }
}
