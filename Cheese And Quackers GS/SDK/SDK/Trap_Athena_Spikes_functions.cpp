﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: Trap_Athena_Spikes

#include "Basic.hpp"

#include "Trap_Athena_Spikes_classes.hpp"
#include "Trap_Athena_Spikes_parameters.hpp"


namespace SDK
{

// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ExecuteUbergraph_Trap_Athena_Spikes
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Athena_Spikes_C::ExecuteUbergraph_Trap_Athena_Spikes(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "ExecuteUbergraph_Trap_Athena_Spikes");

	Params::Trap_Athena_Spikes_C_ExecuteUbergraph_Trap_Athena_Spikes Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnInitTeam
// (Event, Protected, BlueprintEvent)

void ATrap_Athena_Spikes_C::OnInitTeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnInitTeam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnWorldReady
// (Event, Public, BlueprintEvent)

void ATrap_Athena_Spikes_C::OnWorldReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnWorldReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Athena_Spikes_C::OnOutOfDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnOutOfDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATrap_Athena_Spikes_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	Params::Trap_Athena_Spikes_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Athena_Spikes_C::OnFinishedBuilding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnFinishedBuilding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Athena_Spikes_C::OnPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnPlaced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Athena_Spikes_C::OnReloadEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnReloadEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ResetSpikes__UpdateFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::ResetSpikes__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "ResetSpikes__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ResetSpikes__FinishedFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::ResetSpikes__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "ResetSpikes__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__Sounds__EventFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::Retract__Sounds__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "Retract__Sounds__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__UpdateFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::Retract__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "Retract__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__FinishedFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::Retract__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "Retract__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Fire__UpdateFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::Fire__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "Fire__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Fire__FinishedFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::Fire__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "Fire__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Athena_Spikes_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.SetSpikePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewSpikePosition                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Athena_Spikes_C::SetSpikePosition(float NewSpikePosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "SetSpikePosition");

	Params::Trap_Athena_Spikes_C_SetSpikePosition Parms{};

	Parms.NewSpikePosition = NewSpikePosition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.MaterialSweepOnSpikes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   SweepSpeed_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              SweepColor_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SweepExponent_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Athena_Spikes_C::MaterialSweepOnSpikes(float SweepSpeed_0, const struct FLinearColor& SweepColor_0, float SweepExponent_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "MaterialSweepOnSpikes");

	Params::Trap_Athena_Spikes_C_MaterialSweepOnSpikes Parms{};

	Parms.SweepSpeed_0 = SweepSpeed_0;
	Parms.SweepColor_0 = std::move(SweepColor_0);
	Parms.SweepExponent_0 = SweepExponent_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C. ChangeToFriendlyMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_Athena_Spikes_C::_ChangeToFriendlyMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", " ChangeToFriendlyMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ChangeToNormalMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_Athena_Spikes_C::ChangeToNormalMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Athena_Spikes_C", "ChangeToNormalMaterial");

	UObject::ProcessEvent(Func, nullptr);
}

}

