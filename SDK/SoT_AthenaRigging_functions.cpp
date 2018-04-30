// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaRigging_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaRigging.InstancedRopeComponent.SetUnderwater
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Underwater                     (Parm, ZeroConstructor, IsPlainOldData)

void UInstancedRopeComponent::SetUnderwater(bool Underwater)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRigging.InstancedRopeComponent.SetUnderwater");

	UInstancedRopeComponent_SetUnderwater_Params params;
	params.Underwater = Underwater;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaRigging.InstancedRopeComponent.SetRopes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FInstancedRopeParams> InRopes                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInstancedRopeComponent::SetRopes(TArray<struct FInstancedRopeParams> InRopes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRigging.InstancedRopeComponent.SetRopes");

	UInstancedRopeComponent_SetRopes_Params params;
	params.InRopes = InRopes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InSocketSource                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void URiggingSystemComponent::SetSocketLookupSource(class AActor* InSocketSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource");

	URiggingSystemComponent_SetSocketLookupSource_Params params;
	params.InSocketSource = InSocketSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaRigging.RopeInterface.SetRopeUVOffset
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InUVOffset                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void URopeInterface::SetRopeUVOffset(float InUVOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRigging.RopeInterface.SetRopeUVOffset");

	URopeInterface_SetRopeUVOffset_Params params;
	params.InUVOffset = InUVOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaRigging.RopeInterface.SetRopeEndpoints
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InWorldSpaceStart              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InWorldSpaceEnd                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void URopeInterface::SetRopeEndpoints(const struct FVector& InWorldSpaceStart, const struct FVector& InWorldSpaceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRigging.RopeInterface.SetRopeEndpoints");

	URopeInterface_SetRopeEndpoints_Params params;
	params.InWorldSpaceStart = InWorldSpaceStart;
	params.InWorldSpaceEnd = InWorldSpaceEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
