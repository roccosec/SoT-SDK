// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_tls_wld_Orb_light_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function tls_wld_Orb_light_a.tls_wld_Orb_light_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Atls_wld_Orb_light_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function tls_wld_Orb_light_a.tls_wld_Orb_light_a_C.UserConstructionScript");

	Atls_wld_Orb_light_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
