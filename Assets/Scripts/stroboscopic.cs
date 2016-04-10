using UnityEngine;
using System.Collections;

[RequireComponent(typeof(Light))]

public class stroboscopic : MonoBehaviour {

	public float time = 0.5f; //time between on and off

	// Use this for initialization
	void Start () {
		StartCoroutine("Flicker");
	}

	// Update is called once per frame
	void Update () {

	}

	IEnumerator Flicker(){
		while(true){
		//	int wait_time = Random.Range (4, 16) / 10;
			GetComponent<Light>().enabled = false;
			yield return new WaitForSeconds(time);
			GetComponent<Light>().enabled = true;
			yield return new WaitForSeconds(time);
		}
	}
}