﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_Athena_Instance_PlaysetGrenadeWithTrajectory

#include "Basic.hpp"

#include "GA_Athena_Instance_PlaysetGrenadeWithTrajectory_classes.hpp"
#include "GA_Athena_Instance_PlaysetGrenadeWithTrajectory_parameters.hpp"


namespace SDK
{

// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C", "ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory");

	Params::GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.GetActivePlaysetData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaysetItemDefinition**      OutData                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::GetActivePlaysetData(class UFortPlaysetItemDefinition** OutData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C", "GetActivePlaysetData");

	Params::GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_GetActivePlaysetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutData != nullptr)
		*OutData = Parms.OutData;
}


// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.SetActivePlaysetOnPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::SetActivePlaysetOnPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C", "SetActivePlaysetOnPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.SetPlaysetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*              Projectile_Reference                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::SetPlaysetData(class AFortProjectileBase* Projectile_Reference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C", "SetPlaysetData");

	Params::GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_SetPlaysetData Parms{};

	Parms.Projectile_Reference = Projectile_Reference;

	UObject::ProcessEvent(Func, &Parms);
}

}

