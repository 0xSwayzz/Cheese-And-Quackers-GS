﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GCNL_Creative_GrinderFeet

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Creative_GrinderFeet.GCNL_Creative_GrinderFeet_C
// 0x0040 (0x07D0 - 0x0790)
class AGCNL_Creative_GrinderFeet_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               LeftFootFX;                                        // 0x0798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               RightFootFX;                                       // 0x07A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>                SpawnedAudioComps;                                 // 0x07A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortCollisionAudioComponent*           CollisionAudioComp;                                // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Collision_Audio;                                   // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target_Pawn;                                       // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DeactivateFootParticles();
	struct FVector GetPawnTeamNumber(const class AActor* Actor);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ReceiveTick(float DeltaSeconds);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void On_Target_Pawn_Hit_Event(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_Creative_GrinderFeet(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Creative_GrinderFeet_C">();
	}
	static class AGCNL_Creative_GrinderFeet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Creative_GrinderFeet_C>();
	}
};

}

