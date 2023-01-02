using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TrackDistance : MonoBehaviour
{
    private float distance;
    public Transform baseOne;
    public Transform baseTwo;
    public TextMeshProUGUI distanceText;

    // Start is called before the first frame update
    void Start()
    {
        distance = 0f;
    }

    // Update is called once per frame
    void Update()
    {
        distance = Vector3.Distance(baseOne.position, baseTwo.position);
        distanceText.text = distance.ToString();
    }
}
