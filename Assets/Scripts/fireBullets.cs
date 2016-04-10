using UnityEngine;
using System.Collections;

public class fireBullets : MonoBehaviour {

	public Rigidbody bulletPrefab;
	public Transform cameraEnd;
	private int i = 0;
	// Use this for initialization
	void Start () {
		StartCoroutine(Example());
	}

	// Update is called once per frame
	void Update () {
	//	print( GameObject.FindGameObjectWithTag("MainCamera").transform.position.z );
	}

	IEnumerator Example() {
		yield return new WaitForSeconds (1);
		Rigidbody bulletInstance;
		bulletInstance = Instantiate (bulletPrefab, cameraEnd.position, bulletPrefab.rotation) as Rigidbody;
		bulletInstance.AddForce (cameraEnd.forward * 5000);
		i++;
	}
}
