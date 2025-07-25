﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_Constructor_HammerHitsHeal

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.ExecuteUbergraph_GA_Constructor_HammerHitsHeal
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Constructor_HammerHitsHeal_C_ExecuteUbergraph_GA_Constructor_HammerHitsHeal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00B0)(ConstParm)
};

// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Constructor_HammerHitsHeal_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData_0;                                       // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.SetupAbility
// 0x0008 (0x0008 - 0x0000)
struct GA_Constructor_HammerHitsHeal_C_SetupAbility final
{
public:
	class UAbilitySystemComponent*                AbilitySystem;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ShouldAbilityRespondToEvent
// 0x00F8 (0x00F8 - 0x0000)
struct GA_Constructor_HammerHitsHeal_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                     Payload;                                           // 0x0040(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ReturnValue;                                       // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShouldHammerHitsHealRespondToEvent_ReturnValue; // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

