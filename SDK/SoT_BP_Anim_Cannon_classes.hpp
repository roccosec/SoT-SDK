#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Cannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Cannon.BP_Anim_Cannon_C
// 0x0478 (0x08C8 - 0x0450)
class UBP_Anim_Cannon_C : public UCannonAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_37D500E142042AF27DD48D970FEB9969;      // 0x0458(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B2519065482A2C6D2103138CBC70EFF5;// 0x04A0(0x0070)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_1955DCC24F53AFAFE226989AAE959203;// 0x0510(0x0110)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E;// 0x0620(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2B6A57E44E8B7066652F00A00A0D8A32;// 0x0660(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BAED8644464D3F105EBF0CB3C252DA3D;// 0x06A0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_51FF784042C14410738C649A47CDFFB9;// 0x06F8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_61FF7DC544AAE8D747E1B7B8E94CA9CE;// 0x0740(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0AA0EE3C4F3FBFEC36970FAE8D9F81C7;// 0x0790(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F11BDD78417C84D075356DA9724CF142;// 0x07D8(0x00A8)
	struct FObjectMessagingHandle                      FireEventHandle;                                          // 0x0880(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Cannon.BP_Anim_Cannon_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Cannon_AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E();
	void AnimNotify_FireEnd();
	void ExecuteUbergraph_BP_Anim_Cannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
