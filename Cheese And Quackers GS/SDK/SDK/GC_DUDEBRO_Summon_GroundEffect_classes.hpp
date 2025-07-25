﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GC_DUDEBRO_Summon_GroundEffect

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C
// 0x0070 (0x0800 - 0x0790)
class AGC_DUDEBRO_Summon_GroundEffect_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Timeline_0_CrawlingOffset_0F17DCBF44154C113F8252904DF07570; // 0x0798(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_0F17DCBF44154C113F8252904DF07570; // 0x079C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79D[0x3];                                      // 0x079D(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CrawlingBolt;                                      // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SpawnerLocation;                                   // 0x07B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BossHandLocation;                                  // 0x07BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       CrawlingBoltArray;                                 // 0x07C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         Index_0;                                           // 0x07D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DC[0x4];                                      // 0x07DC(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	TArray<struct FVector>                        CrawlingBoltArrayLocation;                         // 0x07E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAudioComponent*>                Crawling_Bolt_Audio;                               // 0x07F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GC_DUDEBRO_Summon_GroundEffect(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_DUDEBRO_Summon_GroundEffect_C">();
	}
	static class AGC_DUDEBRO_Summon_GroundEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_DUDEBRO_Summon_GroundEffect_C>();
	}
};

}

