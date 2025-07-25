﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: VoiceChannelChangePopup

#include "Basic.hpp"

#include "VoiceChannelChangePopup_classes.hpp"
#include "VoiceChannelChangePopup_parameters.hpp"


namespace SDK
{

// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.ExecuteUbergraph_VoiceChannelChangePopup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelChangePopup_C::ExecuteUbergraph_VoiceChannelChangePopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "ExecuteUbergraph_VoiceChannelChangePopup");

	Params::VoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayCloseAnimation
// (Event, Protected, BlueprintEvent)

void UVoiceChannelChangePopup_C::OnPlayCloseAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "OnPlayCloseAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)

void UVoiceChannelChangePopup_C::OnPlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "OnPlayOpenAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Popup Animation Finished
// (BlueprintCallable, BlueprintEvent)

void UVoiceChannelChangePopup_C::Popup_Animation_Finished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "Popup Animation Finished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoiceChannelChangePopup_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "PreConstruct");

	Params::VoiceChannelChangePopup_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVoiceChannelChangePopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceChannelChangePopup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

