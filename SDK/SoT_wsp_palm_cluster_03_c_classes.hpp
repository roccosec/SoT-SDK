#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_palm_cluster_03_c_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_palm_cluster_03_c.wsp_palm_cluster_03_c_C
// 0x0038 (0x04E8 - 0x04B0)
class Awsp_palm_cluster_03_c_C : public ABP_Placement_HeightDrop_C
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x04B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wsp_palm_cluster_03_c.wsp_palm_cluster_03_c_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
