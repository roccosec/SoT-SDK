// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bp_light_volume_sphere_large_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_light_volume_sphere_large_a.bp_light_volume_sphere_large_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_light_volume_sphere_large_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_light_volume_sphere_large_a.bp_light_volume_sphere_large_a_C.UserConstructionScript");

	Abp_light_volume_sphere_large_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
