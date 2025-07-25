﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GCN_C_L_BouncePlayer

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_C_L_BouncePlayer.GCN_C_L_BouncePlayer_C
// 0x0000 (0x01A0 - 0x01A0)
class UGCN_C_L_BouncePlayer_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_C_L_BouncePlayer_C">();
	}
	static class UGCN_C_L_BouncePlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_C_L_BouncePlayer_C>();
	}
};

}

