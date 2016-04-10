#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMovement
struct  CameraMovement_t1977483028  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 CameraMovement::offset
	Vector3_t3525329789  ___offset_2;
	// UnityEngine.Rigidbody CameraMovement::bulletPrefab
	Rigidbody_t1972007546 * ___bulletPrefab_3;
	// System.String CameraMovement::direction
	String_t* ___direction_4;

public:
	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(CameraMovement_t1977483028, ___offset_2)); }
	inline Vector3_t3525329789  get_offset_2() const { return ___offset_2; }
	inline Vector3_t3525329789 * get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(Vector3_t3525329789  value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_bulletPrefab_3() { return static_cast<int32_t>(offsetof(CameraMovement_t1977483028, ___bulletPrefab_3)); }
	inline Rigidbody_t1972007546 * get_bulletPrefab_3() const { return ___bulletPrefab_3; }
	inline Rigidbody_t1972007546 ** get_address_of_bulletPrefab_3() { return &___bulletPrefab_3; }
	inline void set_bulletPrefab_3(Rigidbody_t1972007546 * value)
	{
		___bulletPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_3, value);
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(CameraMovement_t1977483028, ___direction_4)); }
	inline String_t* get_direction_4() const { return ___direction_4; }
	inline String_t** get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(String_t* value)
	{
		___direction_4 = value;
		Il2CppCodeGenWriteBarrier(&___direction_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
