using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour //SIngleton Klasse Objekt
{
    public static AudioManager instance;
    public AudioSource source;
    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
            DontDestroyOnLoad(instance);
            source.GetComponent<AudioSource>();
        }
        else //falls ein anderer AudioManager bereits existiert zerstöre Audiomanager
        {
            Destroy(gameObject);

        }
    }
}
