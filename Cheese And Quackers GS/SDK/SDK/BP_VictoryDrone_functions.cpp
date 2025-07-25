﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_VictoryDrone

#include "Basic.hpp"

#include "BP_VictoryDrone_classes.hpp"
#include "BP_VictoryDrone_parameters.hpp"


namespace SDK
{

// Function BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VictoryDrone_C::ExecuteUbergraph_BP_VictoryDrone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "ExecuteUbergraph_BP_VictoryDrone");

	Params::BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VictoryDrone_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "ReceiveTick");

	Params::BP_VictoryDrone_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInterrupted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VictoryDrone_C::OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "OnSpawnOutAnimEnded");

	Params::BP_VictoryDrone_C_OnSpawnOutAnimEnded Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VictoryDrone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.InitDrone
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VictoryDrone_C::InitDrone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "InitDrone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnAnim
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VictoryDrone_C::PlaySpawnAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "PlaySpawnAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VictoryDrone_C::NotifyTeleportFinishedTriggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictoryDrone_C", "NotifyTeleportFinishedTriggered");

	UObject::ProcessEvent(Func, nullptr);
}

}

