// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_onboarding_intro_tavern_table_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_onboarding_intro_tavern_table.BP_onboarding_intro_tavern_table_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_onboarding_intro_tavern_table_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_onboarding_intro_tavern_table.BP_onboarding_intro_tavern_table_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif