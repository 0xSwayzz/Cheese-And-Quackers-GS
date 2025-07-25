﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BGA_Balloons_Consumable_Rope

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Balloons_Consumable_Rope.BGA_Balloons_Consumable_Rope_C
// 0x0050 (0x0748 - 0x06F8)
class ABGA_Balloons_Consumable_Rope_C final : public ABuildingGameplayActorBalloonRope
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Balloon_StartToRise_Cue;                           // 0x0700(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Balloon_MaxAltitude_Cue;                           // 0x0708(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Baloon_FloatingLoop_Cue;                           // 0x0710(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponentBudgeted*         Balloon_SKBudgeted;                                // 0x0718(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0720(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         BalloonsNeededForFlight;                           // 0x0728(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentCount;                                      // 0x072C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             FriendlyFloatingLoop;                              // 0x0730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnemyFloatingLoop;                                 // 0x0738(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OwnerIsHostileToLocal;                             // 0x0740(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OwnerIsLocal;                                      // 0x0741(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BGA_Balloons_Consumable_Rope(int32 EntryPoint);
	void InAirWithABalloon(bool Fade);
	void BalloonMaxAltitudeAudioCheck(bool AtMax);
	void BalloonCountAudioCheck(int32 BalloonCount, bool WasShot, bool MultiplesReleased, bool MaxHeight);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Balloons_Consumable_Rope_C">();
	}
	static class ABGA_Balloons_Consumable_Rope_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Balloons_Consumable_Rope_C>();
	}
};

}

