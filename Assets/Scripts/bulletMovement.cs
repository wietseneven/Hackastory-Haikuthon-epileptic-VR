using UnityEngine;
using System.Collections;

public class bulletMovement : MonoBehaviour {

	private Vector3 offset;
	private float go = 0;
	public float delay = 0f;
	public AudioClip impact;
	private AudioSource source;

	void Start ()
	{
		source = GetComponent<AudioSource>();
	}

	void LateUpdate ()
	{
		if (GameObject.FindGameObjectWithTag ("MainCamera").transform.position.z > delay) {
			transform.position = new Vector3 (transform.position.x, 100, transform.position.z + 10);

			if (go == 0) {
				source.PlayOneShot (impact);
				go++;
			} else {

			}
		
		} else {
			transform.position = new Vector3 (1500, 110, transform.position.z + 8);
		}
	}


}