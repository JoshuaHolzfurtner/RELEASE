using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class MoveHandle : MonoBehaviour
{
    public TextMeshProUGUI strokeRateText;
    public TextMeshProUGUI strokesText;
    public TextMeshProUGUI intensityText;
    public TextMeshProUGUI pointsText;
    public Transform trackedObject;
    private bool direction; //direction 0-> Drawing backwards & 1-> if forwards
    private float lastPoint;
    private int strokeCounter = 0;
    private float LastStrokeDuration = 0;
    private float LastIntensity = 0;
    private int roundedStrokeRate = 0;
    private float strokeRate = 0;
    private float factor = 1;//determines by which factor Points will be added
    private float basePoints = 100; //number of points that gets added to pointscounter multiplied by factor
    private float pointsCounter = 0; //counts points currently achieved


    /*public Material[] materialList; //List of all used Materials
    private Renderer rend;
    /* Stores the renderer of Object which has this 
                            * script attached*/

    // Start is called before the first frame update
    void Start()
    {
        lastPoint = trackedObject.transform.position.z;
        
        /*rend = GetComponent<Renderer>();
        rend.enabled = true;
        rend.sharedMaterial = materialList[0]; //Starting Material*/


    }

    // Update is called once per frame
    void Update()
    {
        LastStrokeDuration += Time.deltaTime;

        if ((direction && (lastPoint > trackedObject.transform.position.z)) || ((!direction) && ((lastPoint < trackedObject.transform.position.z))))
        {
            
            if (direction)
            {
                //rend.sharedMaterial = materialList[0];
                Debug.Log(strokeCounter);
                strokeCounter++;
                Debug.Log("Duration: " + LastStrokeDuration);
                strokeRate = 60/LastStrokeDuration;
                string outputText = string.Format("{0:0}", strokeRate);
                LastStrokeDuration = 0;
                strokeRateText.text = outputText;
                strokesText.text = strokeCounter.ToString();
                pointsCounter += basePoints * factor;
                pointsText.text = pointsCounter.ToString();
                string mid = "MID";
                intensityText.text = mid;


            }
            else if(!direction)
            {
                //rend.sharedMaterial = materialList[1];
                Debug.Log("Release");
                //LastIntensity = transform.position.z;
                //Debug.Log("LastIntenssity: " + LastIntensity);


            }
            direction = !direction;
            lastPoint = trackedObject.transform.position.z;
        }

        /*Has the direction changed for Update
         *than our direction as a whole will be recognized to have reversed
         *by changing the color of the Handle.*/

    }

    public void resetCounters()
    {
        strokeCounter = 0;
        LastStrokeDuration = 0;
        LastIntensity = 0;
        roundedStrokeRate = 0;
        strokeRate = 0;
        //factor = 1;
        //basePoints = 100; 
        pointsCounter = 0; 
    }



}
