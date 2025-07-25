﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_Melee_Generic

#include "Basic.hpp"

#include "B_Melee_Generic_classes.hpp"
#include "B_Melee_Generic_parameters.hpp"


namespace SDK
{

// Function B_Melee_Generic.B_Melee_Generic_C.ExecuteUbergraph_B_Melee_Generic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Melee_Generic_C::ExecuteUbergraph_B_Melee_Generic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "ExecuteUbergraph_B_Melee_Generic");

	Params::B_Melee_Generic_C_ExecuteUbergraph_B_Melee_Generic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponDetached
// (Event, Public, BlueprintEvent)

void AB_Melee_Generic_C::OnWeaponDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "OnWeaponDetached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Melee_Generic_C::OnWeaponVisibilityChanged(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "OnWeaponVisibilityChanged");

	Params::B_Melee_Generic_C_OnWeaponVisibilityChanged Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// const struct FFortCosmeticModification& CosmeticMod                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_Melee_Generic_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "OnInitCosmeticAlterations");

	Params::B_Melee_Generic_C_OnInitCosmeticAlterations Parms{};

	Parms.CosmeticMod = std::move(CosmeticMod);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Melee_Generic_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "OnWeaponAttached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnEquippedWeaponDestory
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Melee_Generic_C::OnEquippedWeaponDestory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "OnEquippedWeaponDestory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnPlayImpactFX
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FHitResult&                HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// EPhysicalSurface                        ImpactPhysicalSurface                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*         SpawnedPSC                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Melee_Generic_C::OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "OnPlayImpactFX");

	Params::B_Melee_Generic_C_OnPlayImpactFX Parms{};

	Parms.HitResult = std::move(HitResult);
	Parms.ImpactPhysicalSurface = ImpactPhysicalSurface;
	Parms.SpawnedPSC = SpawnedPSC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Melee_Generic.B_Melee_Generic_C.PlayRClickImpacts
// (BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::PlayRClickImpacts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "PlayRClickImpacts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bPersistentFire                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSecondaryFire                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Melee_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "OnPlayWeaponFireFX");

	Params::B_Melee_Generic_C_OnPlayWeaponFireFX Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Melee_Generic.B_Melee_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Melee_Generic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft_End
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::MeleeSwingLeft_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "MeleeSwingLeft_End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight_End
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::MeleeSwingRight_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "MeleeSwingRight_End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.FootStepRight
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::FootStepRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "FootStepRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.FootStepLeft
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::FootStepLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "FootStepLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::MeleeSwingLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "MeleeSwingLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::MeleeSwingRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "MeleeSwingRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnLoaded_CB594210420542B302428F8181D85E48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Melee_Generic_C::OnLoaded_CB594210420542B302428F8181D85E48(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "OnLoaded_CB594210420542B302428F8181D85E48");

	Params::B_Melee_Generic_C_OnLoaded_CB594210420542B302428F8181D85E48 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Melee_Generic.B_Melee_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.SetWpnRarity
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::SetWpnRarity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "SetWpnRarity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Melee_Generic.B_Melee_Generic_C.SetActiveAlterationIdleParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Reset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Melee_Generic_C::SetActiveAlterationIdleParticles(bool Active, bool Reset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "SetActiveAlterationIdleParticles");

	Params::B_Melee_Generic_C_SetActiveAlterationIdleParticles Parms{};

	Parms.Active = Active;
	Parms.Reset = Reset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Melee_Generic.B_Melee_Generic_C.PlayCQCPickaxeEnemyAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FHitResult&                Hit_Result                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Melee_Generic_C::PlayCQCPickaxeEnemyAudio(const struct FHitResult& Hit_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "PlayCQCPickaxeEnemyAudio");

	Params::B_Melee_Generic_C_PlayCQCPickaxeEnemyAudio Parms{};

	Parms.Hit_Result = std::move(Hit_Result);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Melee_Generic.B_Melee_Generic_C.Melee_Effect_Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                         Melee_Color_Set                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Melee_Generic_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Melee_Generic_C", "Melee_Effect_Color");

	Params::B_Melee_Generic_C_Melee_Effect_Color Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = std::move(Parms.Melee_Color_Set);
}

}

