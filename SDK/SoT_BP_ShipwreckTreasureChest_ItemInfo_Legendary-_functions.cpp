// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckTreasureChest_ItemInfo_Legendary-_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShipwreckTreasureChest_ItemInfo_Legendary-.BP_ShipwreckTreasureChest_ItemInfo_Legendary-_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipwreckTreasureChest_ItemInfo_Legendary__C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipwreckTreasureChest_ItemInfo_Legendary-.BP_ShipwreckTreasureChest_ItemInfo_Legendary-_C.UserConstructionScript");

	ABP_ShipwreckTreasureChest_ItemInfo_Legendary__C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
