#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_GunpowderBarrel_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_GunpowderBarrel_ItemInfo.BP_MerchantCrate_GunpowderBarrel_ItemInfo_C
// 0x0008 (0x0580 - 0x0578)
class ABP_MerchantCrate_GunpowderBarrel_ItemInfo_C : public ABootyItemInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0578(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_GunpowderBarrel_ItemInfo.BP_MerchantCrate_GunpowderBarrel_ItemInfo_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
