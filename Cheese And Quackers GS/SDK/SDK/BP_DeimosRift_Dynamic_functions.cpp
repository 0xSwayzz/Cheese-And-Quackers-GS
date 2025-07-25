﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_DeimosRift_Dynamic

#include "Basic.hpp"

#include "BP_DeimosRift_Dynamic_classes.hpp"
#include "BP_DeimosRift_Dynamic_parameters.hpp"


namespace SDK
{

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnRep_ServerSpawnTime
// (BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::OnRep_ServerSpawnTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "OnRep_ServerSpawnTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayEffectContextHandle&EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeimosRift_Dynamic_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "OnDamageServer");

	Params::BP_DeimosRift_Dynamic_C_OnDamageServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.SetLifeTimeTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::SetLifeTimeTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "SetLifeTimeTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.LifeTimeExpired
// (BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::LifeTimeExpired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "LifeTimeExpired");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Intro
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::BP_Cosmetic_Intro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "BP_Cosmetic_Intro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Idle
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::BP_Cosmetic_Idle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "BP_Cosmetic_Idle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_RampUp
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::BP_Cosmetic_RampUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "BP_Cosmetic_RampUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_ShouldDie
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::BP_Cosmetic_ShouldDie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "BP_Cosmetic_ShouldDie");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ExecuteUbergraph_BP_DeimosRift_Dynamic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeimosRift_Dynamic_C::ExecuteUbergraph_BP_DeimosRift_Dynamic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "ExecuteUbergraph_BP_DeimosRift_Dynamic");

	Params::BP_DeimosRift_Dynamic_C_ExecuteUbergraph_BP_DeimosRift_Dynamic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

