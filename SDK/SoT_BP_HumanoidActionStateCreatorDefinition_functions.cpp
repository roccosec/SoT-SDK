// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HumanoidActionStateCreatorDefinition_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HumanoidActionStateCreatorDefinition.BP_HumanoidActionStateCreatorDefinition_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HumanoidActionStateCreatorDefinition_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanoidActionStateCreatorDefinition.BP_HumanoidActionStateCreatorDefinition_C.UserConstructionScript");

	ABP_HumanoidActionStateCreatorDefinition_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
