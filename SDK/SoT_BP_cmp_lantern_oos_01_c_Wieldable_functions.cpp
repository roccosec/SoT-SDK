// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmp_lantern_oos_01_c_Wieldable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_cmp_lantern_oos_01_c_Wieldable.BP_cmp_lantern_oos_01_c_Wieldable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_cmp_lantern_oos_01_c_Wieldable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_cmp_lantern_oos_01_c_Wieldable.BP_cmp_lantern_oos_01_c_Wieldable_C.UserConstructionScript");

	ABP_cmp_lantern_oos_01_c_Wieldable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
