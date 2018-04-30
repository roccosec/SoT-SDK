#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipNetProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShipNetProxy.BP_SmallShipNetProxy_C
// 0x0018 (0x0508 - 0x04F0)
class ABP_SmallShipNetProxy_C : public AShipNetProxy
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShipNetProxy.BP_SmallShipNetProxy_C");
		return ptr;
	}


	void Set_Value_on_All_Materials(const struct FName& Variable_Name, float Value);
	void Apply_Bits_to_Lanterns(unsigned char byte);
	void Create_Dynamic_Materials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLanternStateChanged(unsigned char* LanternStateBits);
	void ExecuteUbergraph_BP_SmallShipNetProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
