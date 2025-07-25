﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: Announce_OnboardingSatelliteCine

#include "Basic.hpp"

#include "Announce_OnboardingSatelliteCine_classes.hpp"
#include "Announce_OnboardingSatelliteCine_parameters.hpp"


namespace SDK
{

// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.IsVideoStreamed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaPlayer**                    MediaPlayer                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaSource**                    MediaSource                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   bVideoStreamed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAnnounce_OnboardingSatelliteCine_C::IsVideoStreamed(class UMediaPlayer** MediaPlayer, class UMediaSource** MediaSource, bool* bVideoStreamed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "IsVideoStreamed");

	Params::Announce_OnboardingSatelliteCine_C_IsVideoStreamed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MediaPlayer != nullptr)
		*MediaPlayer = Parms.MediaPlayer;

	if (MediaSource != nullptr)
		*MediaSource = Parms.MediaSource;

	if (bVideoStreamed != nullptr)
		*bVideoStreamed = Parms.bVideoStreamed;
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnStateEntered_9B2A7CB14D8998F7D97BBB902DE431B7
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnStateEntered_9B2A7CB14D8998F7D97BBB902DE431B7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "OnStateEntered_9B2A7CB14D8998F7D97BBB902DE431B7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnStateEntered_9AA291E3426E3967D1365A9851D878CE
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnStateEntered_9AA291E3426E3967D1365A9851D878CE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "OnStateEntered_9AA291E3426E3967D1365A9851D878CE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnClientAnnouncementStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "OnClientAnnouncementStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnClientAnnouncementStop
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnClientAnnouncementStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "OnClientAnnouncementStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnPlayerSkippedCutscene
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnPlayerSkippedCutscene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "OnPlayerSkippedCutscene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleClientEvent_CinematicFinishedPlaying
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FFortClientEvent&          ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AAnnounce_OnboardingSatelliteCine_C::HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "HandleClientEvent_CinematicFinishedPlaying");

	Params::Announce_OnboardingSatelliteCine_C_HandleClientEvent_CinematicFinishedPlaying Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleAllowSkip
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::HandleAllowSkip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "HandleAllowSkip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.ExecuteUbergraph_Announce_OnboardingSatelliteCine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_OnboardingSatelliteCine_C::ExecuteUbergraph_Announce_OnboardingSatelliteCine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "ExecuteUbergraph_Announce_OnboardingSatelliteCine");

	Params::Announce_OnboardingSatelliteCine_C_ExecuteUbergraph_Announce_OnboardingSatelliteCine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

