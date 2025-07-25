﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_CreativeDeimosRift

#include "Basic.hpp"

#include "BP_CreativeDeimosRift_classes.hpp"
#include "BP_CreativeDeimosRift_parameters.hpp"


namespace SDK
{

// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.ExecuteUbergraph_BP_CreativeDeimosRift
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreativeDeimosRift_C::ExecuteUbergraph_BP_CreativeDeimosRift(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "ExecuteUbergraph_BP_CreativeDeimosRift");

	Params::BP_CreativeDeimosRift_C_ExecuteUbergraph_BP_CreativeDeimosRift Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.SpawnEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_CreativeDeimosRift_C::SpawnEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "SpawnEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.TestDynamicRiftSpawn
// (BlueprintCallable, BlueprintEvent)

void ABP_CreativeDeimosRift_C::TestDynamicRiftSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "TestDynamicRiftSpawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.OnBuildingRiftSpawnedAI_Bind
// (BlueprintCallable, BlueprintEvent)

void ABP_CreativeDeimosRift_C::OnBuildingRiftSpawnedAI_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "OnBuildingRiftSpawnedAI_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.BP_Cosmetic_ShouldDie
// (Event, Protected, BlueprintEvent)

void ABP_CreativeDeimosRift_C::BP_Cosmetic_ShouldDie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "BP_Cosmetic_ShouldDie");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.OnDamaged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              FHitComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreativeDeimosRift_C::OnDamaged_Bind(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "OnDamaged_Bind");

	Params::BP_CreativeDeimosRift_C_OnDamaged_Bind Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CreativeDeimosRift_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                      SpawnedAI                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreativeDeimosRift_C::OnStartedEncounterSpawn(class AFortAIPawn* SpawnedAI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "OnStartedEncounterSpawn");

	Params::BP_CreativeDeimosRift_C_OnStartedEncounterSpawn Parms{};

	Parms.SpawnedAI = SpawnedAI;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.BP_Cosmetic_Idle
// (Event, Protected, BlueprintEvent)

void ABP_CreativeDeimosRift_C::BP_Cosmetic_Idle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "BP_Cosmetic_Idle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.BP_Cosmetic_Intro
// (Event, Protected, BlueprintEvent)

void ABP_CreativeDeimosRift_C::BP_Cosmetic_Intro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "BP_Cosmetic_Intro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.BP_Cosmetic_RampUp
// (Event, Protected, BlueprintEvent)

void ABP_CreativeDeimosRift_C::BP_Cosmetic_RampUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "BP_Cosmetic_RampUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayEffectContextHandle&EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CreativeDeimosRift_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "OnDeathServer");

	Params::BP_CreativeDeimosRift_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayEffectContextHandle&EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CreativeDeimosRift_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "OnDeathPlayEffects");

	Params::BP_CreativeDeimosRift_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CreativeDeimosRift_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.OnRep_DamageState
// (BlueprintCallable, BlueprintEvent)

void ABP_CreativeDeimosRift_C::OnRep_DamageState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "OnRep_DamageState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CreativeDeimosRift.BP_CreativeDeimosRift_C.FlashCubeMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CreativeDeimosRift_C::FlashCubeMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CreativeDeimosRift_C", "FlashCubeMaterial");

	UObject::ProcessEvent(Func, nullptr);
}

}

