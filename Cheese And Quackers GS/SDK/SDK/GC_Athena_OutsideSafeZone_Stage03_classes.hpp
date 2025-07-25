﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GC_Athena_OutsideSafeZone_Stage03

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C
// 0x0038 (0x07C8 - 0x0790)
class AGC_Athena_OutsideSafeZone_Stage03_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Storm_ScreenEffect;                             // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_Opacity_F0A4C399436DEBD08D1B4485D97E6CDE; // 0x07A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_F0A4C399436DEBD08D1B4485D97E6CDE; // 0x07A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A5[0x3];                                      // 0x07A5(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Opacity_D70C1E12439995CE602A6BB6906563D6; // 0x07B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_D70C1E12439995CE602A6BB6906563D6; // 0x07B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B5[0x3];                                      // 0x07B5(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StormOpacity;                                      // 0x07C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void RemoveStormAudio(class APlayerPawn_Athena_C* PlayerPawnAthena);
	void AddStormAudio(class APlayerPawn_Athena_C* PlayerPawnAthena);
	void ZapFX(int32 ZapCount, class APlayerPawn_Athena_C* PlayerPawnAthena);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void On_Distant_Lightning_Spawn(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Athena_OutsideSafeZone_Stage03_C">();
	}
	static class AGC_Athena_OutsideSafeZone_Stage03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Athena_OutsideSafeZone_Stage03_C>();
	}
};

}

