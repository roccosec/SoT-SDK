#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_audio_wpn_shop_wsp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_audio_wpn_shop_wsp.BP_audio_wpn_shop_wsp_C
// 0x0030 (0x04A0 - 0x0470)
class ABP_audio_wpn_shop_wsp_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0470(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_audio_wpn_shop_wsp.BP_audio_wpn_shop_wsp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_audio_wpn_shop_wsp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
