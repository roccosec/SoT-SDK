// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BaseInternalDamageZone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.OnRepairMounted
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BaseInternalDamageZone_C::OnRepairMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.OnRepairMounted");

	ABP_BaseInternalDamageZone_C_OnRepairMounted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.GetRepairMountLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         MountLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   MountSocket                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BaseInternalDamageZone_C::GetRepairMountLocation(class USceneComponent** MountLocation, struct FName* MountSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.GetRepairMountLocation");

	ABP_BaseInternalDamageZone_C_GetRepairMountLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MountLocation != nullptr)
		*MountLocation = params.MountLocation;
	if (MountSocket != nullptr)
		*MountSocket = params.MountSocket;

	return params.ReturnValue;
}


// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ShouldDrawTooltipInWorldSpace
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredTooltipWorldPosition    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BaseInternalDamageZone_C::ShouldDrawTooltipInWorldSpace(class AActor** InInteractor, struct FVector* DesiredTooltipWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ShouldDrawTooltipInWorldSpace");

	ABP_BaseInternalDamageZone_C_ShouldDrawTooltipInWorldSpace_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredTooltipWorldPosition != nullptr)
		*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;

	return params.ReturnValue;
}


// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseInternalDamageZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.UserConstructionScript");

	ABP_BaseInternalDamageZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseInternalDamageZone_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ReceiveEndPlay");

	ABP_BaseInternalDamageZone_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ExecuteUbergraph_BP_BaseInternalDamageZone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseInternalDamageZone_C::ExecuteUbergraph_BP_BaseInternalDamageZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ExecuteUbergraph_BP_BaseInternalDamageZone");

	ABP_BaseInternalDamageZone_C_ExecuteUbergraph_BP_BaseInternalDamageZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
