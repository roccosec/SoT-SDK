// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_LargeShip_MapDeck_MapTable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Lantern_LargeShip_MapDeck_MapTable.BP_Lantern_LargeShip_MapDeck_MapTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_LargeShip_MapDeck_MapTable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lantern_LargeShip_MapDeck_MapTable.BP_Lantern_LargeShip_MapDeck_MapTable_C.UserConstructionScript");

	ABP_Lantern_LargeShip_MapDeck_MapTable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
