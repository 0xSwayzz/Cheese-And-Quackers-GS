﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: RejoinWindow

#include "Basic.hpp"

#include "RejoinWindow_classes.hpp"
#include "RejoinWindow_parameters.hpp"


namespace SDK
{

// Function RejoinWindow.RejoinWindow_C.OnButtonClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URejoinWindow_C::OnButtonClicked(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RejoinWindow_C", "OnButtonClicked");

	Params::RejoinWindow_C_OnButtonClicked Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RejoinWindow.RejoinWindow_C.CenterFirstButton
// (Public, BlueprintCallable, BlueprintEvent)

void URejoinWindow_C::CenterFirstButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RejoinWindow_C", "CenterFirstButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RejoinWindow.RejoinWindow_C.InitializeRejoinWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URejoinWindow_C::InitializeRejoinWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RejoinWindow_C", "InitializeRejoinWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RejoinWindow.RejoinWindow_C.ShowInitalScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeoutSeconds                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URejoinWindow_C::ShowInitalScreen(float TimeoutSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RejoinWindow_C", "ShowInitalScreen");

	Params::RejoinWindow_C_ShowInitalScreen Parms{};

	Parms.TimeoutSeconds = TimeoutSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RejoinWindow.RejoinWindow_C.ShowRetryScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Failure                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   TimeoutSeconds                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AllowRetry                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URejoinWindow_C::ShowRetryScreen(const class FText& Failure, float TimeoutSeconds, bool AllowRetry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RejoinWindow_C", "ShowRetryScreen");

	Params::RejoinWindow_C_ShowRetryScreen Parms{};

	Parms.Failure = std::move(Failure);
	Parms.TimeoutSeconds = TimeoutSeconds;
	Parms.AllowRetry = AllowRetry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RejoinWindow.RejoinWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URejoinWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RejoinWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RejoinWindow.RejoinWindow_C.OnTimeoutTimeReached
// (Event, Protected, BlueprintEvent)

void URejoinWindow_C::OnTimeoutTimeReached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RejoinWindow_C", "OnTimeoutTimeReached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RejoinWindow.RejoinWindow_C.ExecuteUbergraph_RejoinWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URejoinWindow_C::ExecuteUbergraph_RejoinWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RejoinWindow_C", "ExecuteUbergraph_RejoinWindow");

	Params::RejoinWindow_C_ExecuteUbergraph_RejoinWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

