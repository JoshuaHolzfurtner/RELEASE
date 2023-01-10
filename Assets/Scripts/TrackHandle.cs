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
    public TextMeshProUGUI DebugTextFive;
    public TextMeshProUGUI DebugTextSix;
    public TextMeshProUGUI DebugTextSeven;
    public TextMeshProUGUI DebugTextEight;
    public TextMeshProUGUI DebugTextNine;
    public TextMeshProUGUI DebugTextTen;
    public TextMeshProUGUI DebugTextEleven;
    public TextMeshProUGUI DebugTextTwelve;
    public TextMeshProUGUI DebugTextThirteen;
    public TextMeshProUGUI DebugTextFourteen;
    public TextMeshProUGUI DebugTextFifteen;
    public TextMeshProUGUI DebugTextSixteen;
    public TextMeshProUGUI DebugTextSeventeen;








    public Transform trackedObject;

    public Transform headPlayer; //Head Player HMD

    private double distanceHandleHeadRelease; //self explanatory
    private double distanceHandleHeadCatch; //self explanatory
    private double distanceHandleHeadNow;

    private double heightHeadRelease;
    private double heightHeadCatch;
    private double heightHeadNow;

    private double zDifferencesHeadHandle;
    public float thresholdDirection; //Distance to last point still acceptable so were still moving in the same direction
    private float farthestBackZ; //farthest Point back on the z-Axis on this Stroke
    private float farthestFrontZ;
    private float currentZ;
    private bool direction; //true->pull, false->release
    

    private float lastPointZ;
    private float lastLastPointZ;
    private float lastLastLastPointZ;
    private float lastLastLastLastPointZ;


    private float lastStrokeDuration;
    private float timepointCatch;
    //->duration starting at beginning of stroke
    // till distance between Head and Handle stays the
    //same and height of head also hasnt changed yet.
    private float timepointDrive;
    private float timepointFinish;

    private int strokeCounter;
    private int pointsCounter;

    

    // Start is called before the first frame update
    void Start()
    {
        distanceHandleHeadRelease = Vector3.Distance(trackedObject.position, headPlayer.position);
        distanceHandleHeadCatch = Vector3.Distance(trackedObject.position, headPlayer.position);
        distanceHandleHeadNow = Vector3.Distance(trackedObject.position, headPlayer.position);
        heightHeadRelease = headPlayer.position.y;
        heightHeadCatch = headPlayer.position.y;
        heightHeadNow = headPlayer.position.y;
        zDifferencesHeadHandle = 0;

        thresholdDirection = 0f;
        farthestBackZ = trackedObject.position.z;
        farthestFrontZ = trackedObject.position.z;
        currentZ = trackedObject.position.z;

        direction = true;
        lastPointZ = trackedObject.position.z;
        lastLastLastLastPointZ = trackedObject.position.z;
        lastLastLastPointZ = trackedObject.position.z;
        lastLastPointZ = trackedObject.position.z;

        lastStrokeDuration = 0f;
        timepointCatch = 0f;
        timepointDrive = 0f;
        timepointFinish = 0f;

        strokeCounter = 0;
        pointsCounter = 0;

        
        

    }

    // Update is called once per frame
    void Update()
    {

        /*DebugTextEight.text = headPlayer.rotation.x.ToString(); //Neigung nach oben Unten
        DebugTextNine.text = headPlayer.rotation.y.ToString(); //Neigung Blickfeld Links nach Rechts
        DebugTextTen.text = headPlayer.rotation.z.ToString();  //Neigung Kopf nach Links rechts \|/
        */
        
        heightHeadNow = headPlayer.position.y;
        DebugTextNine.text = (heightHeadNow - heightHeadCatch).ToString();
        lastStrokeDuration += Time.deltaTime;
        //DebugTextNine.text = (heightHeadRelease - heightHeadNow).ToString();
        currentZ = transform.position.z;
        if ((currentZ < farthestBackZ) && (direction == true))
        {
            farthestBackZ = currentZ;
            intensityText.text = farthestBackZ.ToString();
            /*if ((heightHeadNow - heightHeadCatch < 0.1) && (currentZ < timepointDrive))
            {

                DebugTextNine.text = timepointDrive.ToString();
                distanceHandleHeadNow = Vector3.Distance(trackedObject.position, headPlayer.position);

            }*/
            


        }

        else if((lastPointZ < currentZ) && (direction == true) && (lastLastPointZ <= currentZ) && (lastLastLastPointZ <= currentZ) && (lastLastLastLastPointZ <= currentZ)) // we start moving forward on the z-axis again
        {
            //supposed to check if Player draws shoulders back (-> lowers ead automaticly)
            heightHeadRelease = headPlayer.position.y;
            if (heightHeadRelease- heightHeadCatch < -0.1)
            {
                DebugTextSix.text = "DRIVE-TRUE";
            }
            else
            {
                {
                    DebugTextSix.text = "DRIVE-FALSE";
            }
            }
            //Track Distance betwean Handle and Head at Beginning of the Release-Phase
            distanceHandleHeadRelease = Vector3.Distance(trackedObject.position, headPlayer.position);
            //DebugTextFour.text = distanceHandleHeadRelease.ToString();
            /////////////////////////////////////////////////////////////
            /*if(headPlayer.rotation.x < 0.2)
            {
                DebugTextSeven.text = "DRAWNBACK";
            }
            else
            {
                DebugTextSeven.text = "NOTBACK";

            }*/

            /////Check if Handle is fully pulled to Chest at the end of the Stroke
            ///
            zDifferencesHeadHandle = currentZ - headPlayer.position.z;
            DebugTextFifteen.text = zDifferencesHeadHandle.ToString();
            if(zDifferencesHeadHandle <0.3 && zDifferencesHeadHandle>-0.3)
            {
                DebugTextSeventeen.text = "armsBack";
            }
            else
            {
                DebugTextSeventeen.text = "armsAway";
            }
            ////////////////////
            direction = false;
            strokeCounter++;
            strokesText.text = strokeCounter.ToString();

            //////////// to show full stroke duration
            DebugTextTen.text = lastStrokeDuration.ToString();

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
        else if((lastPointZ > currentZ) && (direction == false) && (lastLastPointZ >= currentZ) && (lastLastLastPointZ >= currentZ) && (lastLastLastLastPointZ >= currentZ))
        {
            //Track Distance betwean Handle and Head at Beginning of the Catch-Phase
            distanceHandleHeadCatch = Vector3.Distance(trackedObject.position, headPlayer.position);
            //DebugTextFour.text = distanceHandleHeadCatch.ToString();

            if ((distanceHandleHeadCatch - distanceHandleHeadRelease < 0.1) && (distanceHandleHeadCatch - distanceHandleHeadRelease > -0.1))
            {
                DebugTextThree.text = "TRUE";

            }
            else
            {
                DebugTextThree.text = "FALSE";

            }

            
            /////////////////////////////////////////////////////////////
            ///
            heightHeadCatch = headPlayer.position.y;
            DebugTextSeven.text = (heightHeadRelease-heightHeadCatch).ToString();
            ///////////////////////////////////////////////////////
            direction = true;
            farthestBackZ = lastPointZ;
        }

        lastLastLastLastPointZ = lastLastLastPointZ;
        lastLastLastPointZ = lastLastPointZ;
        lastLastPointZ = lastPointZ;
        lastPointZ = currentZ;
        

        DebugTextOne.text = lastPointZ.ToString();
        
    }
}
