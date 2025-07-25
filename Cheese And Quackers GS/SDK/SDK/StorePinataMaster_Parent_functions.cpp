﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: StorePinataMaster_Parent

#include "Basic.hpp"

#include "StorePinataMaster_Parent_classes.hpp"
#include "StorePinataMaster_Parent_parameters.hpp"


namespace SDK
{

// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)

void AStorePinataMaster_Parent_C::InitiatePinata()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StorePinataMaster_Parent_C", "InitiatePinata");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraTransitionComplete
// (BlueprintCallable, BlueprintEvent)

void AStorePinataMaster_Parent_C::CameraTransitionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StorePinataMaster_Parent_C", "CameraTransitionComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraResetComplete
// (BlueprintCallable, BlueprintEvent)

void AStorePinataMaster_Parent_C::CameraResetComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StorePinataMaster_Parent_C", "CameraResetComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.ExecuteUbergraph_StorePinataMaster_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_Parent_C::ExecuteUbergraph_StorePinataMaster_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StorePinataMaster_Parent_C", "ExecuteUbergraph_StorePinataMaster_Parent");

	Params::StorePinataMaster_Parent_C_ExecuteUbergraph_StorePinataMaster_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

