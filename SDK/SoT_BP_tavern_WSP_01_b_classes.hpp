#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_tavern_WSP_01_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_tavern_WSP_01_b.BP_tavern_WSP_01_b_C
// 0x06C8 (0x0B38 - 0x0470)
class ABP_tavern_WSP_01_b_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x6C8];                                     // 0x0470(0x06C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_tavern_WSP_01_b.BP_tavern_WSP_01_b_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
