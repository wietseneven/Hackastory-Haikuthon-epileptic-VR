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
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fireBullets
struct  fireBullets_t4172649627  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Rigidbody fireBullets::bulletPrefab
	Rigidbody_t1972007546 * ___bulletPrefab_2;
	// UnityEngine.Transform fireBullets::cameraEnd
	Transform_t284553113 * ___cameraEnd_3;
	// System.Int32 fireBullets::i
	int32_t ___i_4;

public:
	inline static int32_t get_offset_of_bulletPrefab_2() { return static_cast<int32_t>(offsetof(fireBullets_t4172649627, ___bulletPrefab_2)); }
	inline Rigidbody_t1972007546 * get_bulletPrefab_2() const { return ___bulletPrefab_2; }
	inline Rigidbody_t1972007546 ** get_address_of_bulletPrefab_2() { return &___bulletPrefab_2; }
	inline void set_bulletPrefab_2(Rigidbody_t1972007546 * value)
	{
		___bulletPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_2, value);
	}

	inline static int32_t get_offset_of_cameraEnd_3() { return static_cast<int32_t>(offsetof(fireBullets_t4172649627, ___cameraEnd_3)); }
	inline Transform_t284553113 * get_cameraEnd_3() const { return ___cameraEnd_3; }
	inline Transform_t284553113 ** get_address_of_cameraEnd_3() { return &___cameraEnd_3; }
	inline void set_cameraEnd_3(Transform_t284553113 * value)
	{
		___cameraEnd_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraEnd_3, value);
	}

	inline static int32_t get_offset_of_i_4() { return static_cast<int32_t>(offsetof(fireBullets_t4172649627, ___i_4)); }
	inline int32_t get_i_4() const { return ___i_4; }
	inline int32_t* get_address_of_i_4() { return &___i_4; }
	inline void set_i_4(int32_t value)
	{
		___i_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
