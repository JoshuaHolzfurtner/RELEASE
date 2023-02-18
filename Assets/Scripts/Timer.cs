using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Timer : MonoBehaviour
{
    [Header("Component")] 
    public TextMeshProUGUI timerText;
    [Header("TimerSettings")]
    public float currentTime;
    public bool countDown;
    [Header("LimitSettings")]
    public bool hasLimit;
    public float timerLimit;
    [Header("FormatSettings")]
    public bool hasFormat;
    public TimerFormats format;
    private Dictionary<TimerFormats, string> timeformats = new Dictionary<TimerFormats, string>();
    // Start is called before the first frame update
    public bool timerStopped;
    public bool timeHasBeenReset;
    public float resetSeconds;
    public TrackHandle handleForReset;
    public PlayerSounds soundEffects;
    //private Color startColor = new Color(0.5294118f, 0.8313726f, 4431373f); //so you can reset the color;

    void Start()
    {
        timeformats.Add(TimerFormats.Whole, "0");
        timeformats.Add(TimerFormats.TenthDecimal, "0.00");
        timeformats.Add(TimerFormats.HundrethsDecimal, "0.00");
        timerStopped = true;
        timeHasBeenReset = false;
        resetSeconds = 1f;
        ResetTimer();//to start whenever it opens
        handleForReset.ResetAll();
        


    }

    // Update is called once per frame
    void Update()
    {
        if(!timerStopped)
        {
            currentTime = countDown ? currentTime -= Time.deltaTime : currentTime += Time.deltaTime;

        }

        //After the timer has been reset, it stops for a while so the player can take the handle again
        if(timeHasBeenReset)
        {
            if(resetSeconds < 0)
            {
                timeHasBeenReset = false;
                timerStopped = false;
                resetSeconds = 5f;

            }
            else
            {
                resetSeconds -= Time.deltaTime;
            }
        }
        //currentTime = countDown ? currentTime -= Time.deltaTime : currentTime += Time.deltaTime;
        
        if (hasLimit && ((countDown && (currentTime<=timerLimit))|| (!countDown && (currentTime >= timerLimit))))
        {
            currentTime = timerLimit;
            SetTimerText();
            //timerText.color = Color.red;
            enabled = false;
            handleForReset.enabled = false;
            soundEffects.footStep(0);
        }
        SetTimerText();
    }

    private void SetTimerText()
    {
        timerText.text = hasFormat ? currentTime.ToString(timeformats[format]) : TimeDisplay(currentTime);
    }
    public enum TimerFormats
    {
        Whole,
        TenthDecimal,
        HundrethsDecimal

    }

    private string TimeDisplay(float timeDisplay)
    {
        float minutes = Mathf.FloorToInt(timeDisplay/60);
        float seconds = Mathf.FloorToInt(timeDisplay % 60);
        //return (minutes.ToString() + ":" + seconds.ToString());
        string outputText = string.Format("{0:00}:{1:00}", minutes, seconds);
        return outputText;

    }

    public void stopTimer()
    {
        timerStopped = true;
    }
    public void startTimer()
    {
        timerStopped = false;
    }
    public void ResetTimer()
    {
        enabled = true;
        currentTime = 0;
        SetTimerText();
        //timerText.color = startColor;
        timerStopped = true;
        timeHasBeenReset = true;
        handleForReset.enabled = true;
        handleForReset.ResetAll();
    }
}
