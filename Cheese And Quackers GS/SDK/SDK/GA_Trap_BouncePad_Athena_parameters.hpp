﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_Trap_BouncePad_Athena

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Trap_BouncePad_Athena.GA_Trap_BouncePad_Athena_C.ExecuteUbergraph_GA_Trap_BouncePad_Athena
// 0x0080 (0x0080 - 0x0000)
struct GA_Trap_BouncePad_Athena_C_ExecuteUbergraph_GA_Trap_BouncePad_Athena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	int32                                         CallFunc_GetAbilityLevel_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x0010(0x0010)()
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue_1; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingTrap*                          K2Node_DynamicCast_AsBuilding_Trap;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class ABuildingTrap*                          K2Node_DynamicCast_AsBuilding_Trap_1;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	struct FGameplayTag                           CallFunc_GetReloadBeginGameplayCueTag_ReturnValue; // 0x004C(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDamageDelay_ReturnValue;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetActivateTrapGameplayCueTag_ReturnValue; // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue; // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFireDelay_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetDelayBeginGameplayCueTag_ReturnValue;  // 0x0074(0x0008)(NoDestructor, HasGetValueTypeHash)
};

}

