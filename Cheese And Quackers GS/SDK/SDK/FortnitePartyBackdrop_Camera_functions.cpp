﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: FortnitePartyBackdrop_Camera

#include "Basic.hpp"

#include "FortnitePartyBackdrop_Camera_classes.hpp"
#include "FortnitePartyBackdrop_Camera_parameters.hpp"


namespace SDK
{

// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.Reset Location
// (BlueprintCallable, BlueprintEvent)

void AFortnitePartyBackdrop_Camera_C::Reset_Location()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "Reset Location");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AFortnitePartyBackdrop_Camera_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)

void AFortnitePartyBackdrop_Camera_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ManualActivate
// (BlueprintCallable, BlueprintEvent)

void AFortnitePartyBackdrop_Camera_C::ManualActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "ManualActivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFortnitePartyBackdrop_Camera_C::ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyBackdrop_Camera_C", "ExecuteUbergraph_FortnitePartyBackdrop_Camera");

	Params::FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

