﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_TrapBuild_MountedTurret

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_TrapBuild_MountedTurret.GA_TrapBuild_MountedTurret_C.ExecuteUbergraph_GA_TrapBuild_MountedTurret
// 0x00D0 (0x00D0 - 0x0000)
struct GA_TrapBuild_MountedTurret_C_ExecuteUbergraph_GA_TrapBuild_MountedTurret final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x0008(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x0018(0x00B8)(ContainsInstancedReference)
};

}

