﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: FortVolumeActor_Base

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FortVolumeActor_Base.FortVolumeActor_Base_C
// 0x0028 (0x0AC0 - 0x0A98)
class AFortVolumeActor_Base_C : public AFortVolume
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A98(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         TransitionTL_Fade_DD1C029E4A879F5D954A60A7D9770B8A; // 0x0AA0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TransitionTL__Direction_DD1C029E4A879F5D954A60A7D9770B8A; // 0x0AA4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA5[0x3];                                      // 0x0AA5(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	class UTimelineComponent*                     TransitionTL;                                      // 0x0AA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BoundsMeshMID;                                     // 0x0AB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     BoundsMeshSourceMaterial;                          // 0x0AB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FortVolumeActor_Base(int32 EntryPoint);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void TransitionTL__UpdateFunc();
	void TransitionTL__FinishedFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortVolumeActor_Base_C">();
	}
	static class AFortVolumeActor_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortVolumeActor_Base_C>();
	}
};

}

