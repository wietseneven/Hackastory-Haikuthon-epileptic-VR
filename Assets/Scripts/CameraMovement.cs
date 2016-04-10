using UnityEngine;
using System.Collections;

public class CameraMovement : MonoBehaviour {

	private Vector3 offset;
	public Rigidbody bulletPrefab;

	private string direction = "forward";

	void Start ()
	{
	//	StartCoroutine("Flicker");
	}

	void LateUpdate ()
	{
		if (direction == "forward") {
			transform.Translate(Vector3.forward * 8);
		} else {
			transform.Translate(Vector3.back * 8);
		}

		if (direction == "forward" && transform.position.z > 9000) {
			direction = "backward";
		}
		else if (direction == "backward" && transform.position.z < 100) {
			direction = "forward";
		}

		if (transform.position.z == 4000) {
			transform.Rotate (0, 0, 180);
		}

		if (transform.position.z > 4250 && transform.position.z < 5008) {
			transform.Rotate (0, 0, 90);
		}

		if (transform.position.z == 8000) {
			transform.Rotate (0, 0, 180);
		}
	}

	IEnumerator Flicker(){
		while(true){
			int wait_time = Random.Range (4,8) / 5;

			transform.Rotate(0, 0, 180);
			yield return new WaitForSeconds(wait_time);

			transform.Rotate(0, 0, 0);
			yield return new WaitForSeconds(wait_time);
		}
	}
}