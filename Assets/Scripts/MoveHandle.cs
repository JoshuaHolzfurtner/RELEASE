using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class MoveHandle : MonoBehaviour
{
    public TextMeshProUGUI strokeRateText;
    public TextMeshProUGUI strokesText;
    private bool direction; //direction 0-> Drawing backwards & 1-> if forwards
    private float lastPoint;
    private int strokeCounter = 0;
    private float LastStrokeDuration = 0;
    private float LastIntensity = 0;
    private int roundedStrokeRate = 0;
    private float strokeRate = 0;


    /*public Material[] materialList; //List of all used Materials
    private Renderer rend;
    /* Stores the renderer of Object which has this 
                            * script attached*/

    // Start is called before the first frame update
    void Start()
    {
        lastPoint = transform.position.z;
        
        /*rend = GetComponent<Renderer>();
        rend.enabled = true;
        rend.sharedMaterial = materialList[0]; //Starting Material*/


    }

    // Update is called once per frame
    void Update()
    {
        LastStrokeDuration += Time.deltaTime;

        if ((direction && (lastPoint > transform.position.z)) || ((!direction) && ((lastPoint < transform.position.z))))
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


            }
            else if(!direction)
            {
                //rend.sharedMaterial = materialList[1];
                Debug.Log("Release");
                LastIntensity = transform.position.z;
                Debug.Log("LastIntenssity: " + LastIntensity);


            }
            direction = !direction;
            lastPoint = transform.position.z;
        }

        /*Has the direction changed for Update
         *than our direction as a whole will be recognized to have reversed
         *by changing the color of the Handle.*/

    }
}
