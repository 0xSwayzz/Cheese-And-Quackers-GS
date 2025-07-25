﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_BoltActionSniperRifleNoScope

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C
// 0x00F0 (0x0358 - 0x0268)
class UBP_BoltActionSniperRifleNoScope_C final : public UAnimInstance
{
public:
	uint8                                         Pad_268[0x8];                                      // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-8 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_80F88762449D5790C18126A73190A30A; // 0x0278(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3F9AE2D64A1081980E00CE94E79DD708; // 0x0298(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_F813E2B842B7262277782F9EC5A3917A; // 0x02E0(0x0078)()

public:
	void ExecuteUbergraph_BP_BoltActionSniperRifleNoScope(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BoltActionSniperRifleNoScope_C">();
	}
	static class UBP_BoltActionSniperRifleNoScope_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BoltActionSniperRifleNoScope_C>();
	}
};

}

