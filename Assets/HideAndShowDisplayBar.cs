using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideAndShowDisplayBar : MonoBehaviour
{
    public GameObject barsReal;
    public GameObject mybars;
    public void showBar()
    {
        barsReal.SetActive(true);
        mybars.SetActive(false);
    }
    public void hideBar()
    {
        barsReal.SetActive(false);
        mybars.SetActive(true);
    }
}
