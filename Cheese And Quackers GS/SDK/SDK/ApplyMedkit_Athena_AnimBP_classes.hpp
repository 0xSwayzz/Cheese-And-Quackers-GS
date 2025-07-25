﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ApplyMedkit_Athena_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C
// 0x02F8 (0x0560 - 0x0268)
class UApplyMedkit_Athena_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_268[0x8];                                      // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-8 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_5FAA15A34682216510D589A50487471A; // 0x0278(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_F9A34A2B463D37243970C4B4C478BEEC; // 0x0298(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_0A922DF04C01828D0F5A42838F0C626E; // 0x02E0(0x0078)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_BF6BBA2D4BFA8438C4D6609C33CA86C9; // 0x0358(0x00B0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_FD3F608B440246E77EBEB1B065FCF60A; // 0x0408(0x00B8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_216D9F694D96C1FCFF7C009A530AF1DA; // 0x04C0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_24AD787544D7B979140370BE70006301; // 0x0508(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5DEB5D87408BBFCCBE4CAE8EB3BDFC0F; // 0x0530(0x0028)()
	EFortCustomGender                             Gender;                                            // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ApplyMedkit_Athena_AnimBP(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ApplyMedkit_Athena_AnimBP_C">();
	}
	static class UApplyMedkit_Athena_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UApplyMedkit_Athena_AnimBP_C>();
	}
};

}

