// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_sea_rock_cluster_b_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_sea_rock_cluster_b.wsp_sea_rock_cluster_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_sea_rock_cluster_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_sea_rock_cluster_b.wsp_sea_rock_cluster_b_C.UserConstructionScript");

	Awsp_sea_rock_cluster_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
