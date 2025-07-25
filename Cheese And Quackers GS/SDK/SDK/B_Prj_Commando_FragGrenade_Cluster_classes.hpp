﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_Prj_Commando_FragGrenade_Cluster

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C
// 0x0048 (0x0718 - 0x06D0)
class AB_Prj_Commando_FragGrenade_Cluster_C final : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               ParticleSystem1;                                   // 0x06D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio1;                                            // 0x06E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             BounceSound;                                       // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        P_Explosion;                                       // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ExplosionSound;                                    // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ExplosionLocation;                                 // 0x0700(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinExplosionDelay;                                 // 0x070C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxExplosionDelay;                                 // 0x0710(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster(int32 EntryPoint);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnStop(const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Commando_FragGrenade_Cluster_C">();
	}
	static class AB_Prj_Commando_FragGrenade_Cluster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Commando_FragGrenade_Cluster_C>();
	}
};

}

