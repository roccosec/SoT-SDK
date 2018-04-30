#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantShady_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantShady.BP_MerchantShady_C
// 0x0038 (0x0580 - 0x0548)
class ABP_MerchantShady_C : public ACompanyShopkeeper
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0548(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantShady.BP_MerchantShady_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayItemAnimation();
	void ExecuteUbergraph_BP_MerchantShady(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
