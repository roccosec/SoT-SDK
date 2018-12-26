// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Spyglass_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Spyglass.BP_Spyglass_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Spyglass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Spyglass.BP_Spyglass_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spyglass_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Spyglass.BP_Spyglass_C.ScopeOn
// (Event, Protected, BlueprintEvent)

void ABP_Spyglass_C::ScopeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.ScopeOn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Spyglass.BP_Spyglass_C.ScopeOff
// (Event, Protected, BlueprintEvent)

void ABP_Spyglass_C::ScopeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.ScopeOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Spyglass.BP_Spyglass_C.GlintOn
// (Event, Protected, BlueprintEvent)

void ABP_Spyglass_C::GlintOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.GlintOn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Spyglass.BP_Spyglass_C.GlintOff
// (Event, Protected, BlueprintEvent)

void ABP_Spyglass_C::GlintOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.GlintOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Spyglass.BP_Spyglass_C.ForceScopeOff
// (Event, Protected, BlueprintEvent)

void ABP_Spyglass_C::ForceScopeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.ForceScopeOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Spyglass.BP_Spyglass_C.ExecuteUbergraph_BP_Spyglass
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Spyglass_C::ExecuteUbergraph_BP_Spyglass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spyglass.BP_Spyglass_C.ExecuteUbergraph_BP_Spyglass");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
