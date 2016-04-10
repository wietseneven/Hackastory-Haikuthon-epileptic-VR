#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// bulletMovement
struct  bulletMovement_t366913489  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 bulletMovement::offset
	Vector3_t3525329789  ___offset_2;
	// System.Single bulletMovement::go
	float ___go_3;
	// System.Single bulletMovement::delay
	float ___delay_4;
	// UnityEngine.AudioClip bulletMovement::impact
	AudioClip_t3714538611 * ___impact_5;
	// UnityEngine.AudioSource bulletMovement::source
	AudioSource_t3628549054 * ___source_6;

public:
	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(bulletMovement_t366913489, ___offset_2)); }
	inline Vector3_t3525329789  get_offset_2() const { return ___offset_2; }
	inline Vector3_t3525329789 * get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(Vector3_t3525329789  value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_go_3() { return static_cast<int32_t>(offsetof(bulletMovement_t366913489, ___go_3)); }
	inline float get_go_3() const { return ___go_3; }
	inline float* get_address_of_go_3() { return &___go_3; }
	inline void set_go_3(float value)
	{
		___go_3 = value;
	}

	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(bulletMovement_t366913489, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_impact_5() { return static_cast<int32_t>(offsetof(bulletMovement_t366913489, ___impact_5)); }
	inline AudioClip_t3714538611 * get_impact_5() const { return ___impact_5; }
	inline AudioClip_t3714538611 ** get_address_of_impact_5() { return &___impact_5; }
	inline void set_impact_5(AudioClip_t3714538611 * value)
	{
		___impact_5 = value;
		Il2CppCodeGenWriteBarrier(&___impact_5, value);
	}

	inline static int32_t get_offset_of_source_6() { return static_cast<int32_t>(offsetof(bulletMovement_t366913489, ___source_6)); }
	inline AudioSource_t3628549054 * get_source_6() const { return ___source_6; }
	inline AudioSource_t3628549054 ** get_address_of_source_6() { return &___source_6; }
	inline void set_source_6(AudioSource_t3628549054 * value)
	{
		___source_6 = value;
		Il2CppCodeGenWriteBarrier(&___source_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
