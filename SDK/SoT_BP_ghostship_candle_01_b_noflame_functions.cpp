// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ghostship_candle_01_b_noflame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ghostship_candle_01_b_noflame.BP_ghostship_candle_01_b_noflame_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ghostship_candle_01_b_noflame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ghostship_candle_01_b_noflame.BP_ghostship_candle_01_b_noflame_C.UserConstructionScript");

	ABP_ghostship_candle_01_b_noflame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
