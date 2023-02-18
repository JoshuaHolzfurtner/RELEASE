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

    public GameObject greenLightCatch;
    public GameObject redLightCatch;
    public GameObject greenLightDrive;
    public GameObject redLightDrive;
    public GameObject greenLightFinish;
    public GameObject redLightFinish;
    public GameObject greenLightFullStroke;
    public GameObject redLightFullStroke;

    public PlayerSounds feedbackSounds;


    public Transform trackedObject;

    public Transform headPlayer; //Head Player HMD

    private double distanceHandleHeadRelease; //self explanatory
    private double distanceHandleHeadCatch; //self explanatory
    private double distanceHandleHeadNow;

    private double heightHeadRelease;
    private double heightHeadCatch;
    private double heightHeadMaxDuringCatch;

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

    private bool strokeCatchChecked;
    private bool correctFormCatch;
    private bool correctFormDrive;
    private bool correctFormFinish;
    private bool correctFormFullStroke;
    private int formFactor;




    // Start is called before the first frame update
    void Start()
    {
        distanceHandleHeadRelease = Vector3.Distance(trackedObject.position, headPlayer.position);
        distanceHandleHeadCatch = Vector3.Distance(trackedObject.position, headPlayer.position);
        distanceHandleHeadNow = Vector3.Distance(trackedObject.position, headPlayer.position);
        heightHeadRelease = headPlayer.position.y;
        heightHeadCatch = headPlayer.position.y;
        heightHeadMaxDuringCatch = headPlayer.position.y;
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

        strokeCatchChecked = false;
        correctFormCatch = false;
        correctFormDrive = true;
        correctFormFinish = true;
        correctFormFullStroke = false;
        formFactor = 0;







    }
    //Hello
    // Update is called once per frame
    void Update()
    {

        /*DebugTextEight.text = headPlayer.rotation.x.ToString(); //Neigung nach oben Unten
        DebugTextNine.text = headPlayer.rotation.y.ToString(); //Neigung Blickfeld Links nach Rechts
        DebugTextTen.text = headPlayer.rotation.z.ToString();  //Neigung Kopf nach Links rechts \|/
        */
        
        lastStrokeDuration += Time.deltaTime;

        //Catch Check for Main Game and Fullstroke
        if((lastStrokeDuration> 0.6) && (strokeCatchChecked == false))
        {
            DebugTextSixteen.text = lastStrokeDuration.ToString();
            strokeCatchChecked = true;
            distanceHandleHeadNow = Vector3.Distance(trackedObject.position, headPlayer.position);
            DebugTextTwelve.text = distanceHandleHeadNow.ToString();
            DebugTextEleven.text = distanceHandleHeadCatch.ToString();
            strokeCounter++; //now only counts strokes that last at least 0.6 seconds


            if ((distanceHandleHeadCatch - distanceHandleHeadNow < 0.1) && (distanceHandleHeadCatch - distanceHandleHeadNow > -0.1))
            {
                //DebugTextThirteen.text = "0.3Catch";
                correctFormCatch = true;
                

            }
            else
            {
                //DebugTextThirteen.text = "0.3NOTCaTCH";
                correctFormCatch = false;

            }
        }
        //DebugTextNine.text = (heightHeadRelease - heightHeadNow).ToString();
        currentZ = transform.position.z;
        if ((currentZ < farthestBackZ) && (direction == true))
        {
            farthestBackZ = currentZ;
            //intensityText.text = farthestBackZ.ToString();

            //New
            if(heightHeadCatch < headPlayer.position.y)
            {
                heightHeadCatch = headPlayer.position.y;
            }


        }

        else if((lastPointZ < currentZ) && (direction == true) && (lastLastPointZ <= currentZ) && (lastLastLastPointZ <= currentZ) && (lastLastLastLastPointZ <= currentZ)) // we start moving forward on the z-axis again
        {
            //supposed to check if Player draws shoulders back (-> lowers head automaticly)
            heightHeadRelease = headPlayer.position.y;
            greenLightDrive.SetActive(false);
            redLightDrive.SetActive(false);

            if (heightHeadRelease- heightHeadCatch < -0.05)
            {
                //DebugTextSix.text = "DRIVE-TRUE";

                greenLightDrive.SetActive(true);
                correctFormCatch = true;
                

            }
            else
            {
                
                //DebugTextSix.text = "DRIVE-FALSE";
                redLightDrive.SetActive(true);
                correctFormCatch = false;


            }
            //Track Distance betwean Handle and Head at Beginning of the Release-Phase
            distanceHandleHeadRelease = Vector3.Distance(trackedObject.position, headPlayer.position);
            
            zDifferencesHeadHandle = currentZ - headPlayer.position.z;
            //DebugTextFifteen.text = zDifferencesHeadHandle.ToString();
            //DebugTextThirteen.text = "NotBoTH";
            greenLightFinish.SetActive(false);
            redLightFinish.SetActive(false);
            greenLightFullStroke.SetActive(false);
            redLightFullStroke.SetActive(false);

            if (zDifferencesHeadHandle <0.3 && zDifferencesHeadHandle>-0.3)
            {
                //DebugTextSeventeen.text = "armsBack";
                greenLightFinish.SetActive(true);
                if(correctFormCatch)
                {
                    //DebugTextThirteen.text = "BoTHFORM";
                    greenLightFullStroke.SetActive(true);
                    formFactor = 1;

                }
                else
                {
                    redLightFullStroke.SetActive(true);
                }
            }
            else
            {
                //DebugTextSeventeen.text = "armsAway";
                redLightFinish.SetActive(true);
                redLightFullStroke.SetActive(true);
            }
            ////////////////////
            direction = false;
            //strokeCounter++;
            strokesText.text = strokeCounter.ToString();

            //////////// to show full stroke duration
            //DebugTextTen.text = lastStrokeDuration.ToString();

            //Determine Intesity of stroke//
            if (farthestBackZ >= -0.5f)
            {
                intensityText.text = "LOW";

                pointsCounter += (25*formFactor);
                pointsText.text = pointsCounter.ToString();

            }
            else if ((farthestBackZ > -0.75f) && (farthestBackZ < -0.5f))
            {
                intensityText.text = "MID";
                

                pointsCounter += (50*formFactor);
                pointsText.text = pointsCounter.ToString();

            }
            else if (farthestBackZ <= -0.75f)
            {
                intensityText.text = "HIGH";
                

                pointsCounter += (formFactor * 75);
                pointsText.text = pointsCounter.ToString();

            }
            formFactor = 0;
            //Dry Catch Condition
            greenLightCatch.SetActive(false);
            redLightCatch.SetActive(false);
            if ((distanceHandleHeadCatch - distanceHandleHeadRelease < 0.1) && (distanceHandleHeadCatch - distanceHandleHeadRelease > -0.1))
            {
                //DebugTextThree.text = "TRUE";
                greenLightCatch.SetActive(true);

            }
            else
            {
                //DebugTextThree.text = "FALSE";
                redLightCatch.SetActive(true);

            }
        }
        else if((lastPointZ > currentZ) && (direction == false) && (lastLastPointZ >= currentZ) && (lastLastLastPointZ >= currentZ) && (lastLastLastLastPointZ >= currentZ))
        {
            strokeCatchChecked = false;
            strokeRateText.text = string.Format("{0:0}", (60 / lastStrokeDuration));
            
            lastStrokeDuration = 0f;
            correctFormCatch = false;

            //Track Distance betwean Handle and Head at Beginning of the Catch-Phase
            distanceHandleHeadCatch = Vector3.Distance(trackedObject.position, headPlayer.position);
            //DebugTextFour.text = distanceHandleHeadCatch.ToString();

            

            
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

    public void ResetAll()
    {
        strokeCounter = 0;
        pointsCounter = 0;

        strokeRateText.text = "00";
        intensityText.text = "NONE";
        strokesText.text = "0";
        pointsText.text = "0";
    }
}
