﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: PlayerBannedModal

#include "Basic.hpp"

#include "PlayerBannedModal_classes.hpp"
#include "PlayerBannedModal_parameters.hpp"


namespace SDK
{

// Function PlayerBannedModal.PlayerBannedModal_C.ExecuteUbergraph_PlayerBannedModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerBannedModal_C::ExecuteUbergraph_PlayerBannedModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBannedModal_C", "ExecuteUbergraph_PlayerBannedModal");

	Params::PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerBannedModal.PlayerBannedModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPlayerBannedModal_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBannedModal_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerBannedModal.PlayerBannedModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerBannedModal_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBannedModal_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");

	Params::PlayerBannedModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerBannedModal.PlayerBannedModal_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Title_0                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// const class FText&                      Content                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerBannedModal_C::UpdateText(const class FText& Title_0, const class FText& Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBannedModal_C", "UpdateText");

	Params::PlayerBannedModal_C_UpdateText Parms{};

	Parms.Title_0 = std::move(Title_0);
	Parms.Content = std::move(Content);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerBannedModal.PlayerBannedModal_C.DisableButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DisableButton_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBannedModal_C::DisableButton(bool DisableButton_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBannedModal_C", "DisableButton");

	Params::PlayerBannedModal_C_DisableButton Parms{};

	Parms.DisableButton_0 = DisableButton_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerBannedModal.PlayerBannedModal_C.UpdateTimeRemaining
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerBannedModal_C::UpdateTimeRemaining(const class FText& Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBannedModal_C", "UpdateTimeRemaining");

	Params::PlayerBannedModal_C_UpdateTimeRemaining Parms{};

	Parms.Time = std::move(Time);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerBannedModal.PlayerBannedModal_C.OnBanAck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBannedModal_C::OnBanAck(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBannedModal_C", "OnBanAck");

	Params::PlayerBannedModal_C_OnBanAck Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerBannedModal.PlayerBannedModal_C.BanEnumToText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerBanReasons                       Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    ExploitProgramName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// EPlayerCompetitiveBanReasons            Competitive_Ban_Reason                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsCompetitiveBan_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UPlayerBannedModal_C::BanEnumToText(EPlayerBanReasons Index_0, const class FString& ExploitProgramName, EPlayerCompetitiveBanReasons Competitive_Ban_Reason, bool bIsCompetitiveBan_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBannedModal_C", "BanEnumToText");

	Params::PlayerBannedModal_C_BanEnumToText Parms{};

	Parms.Index_0 = Index_0;
	Parms.ExploitProgramName = std::move(ExploitProgramName);
	Parms.Competitive_Ban_Reason = Competitive_Ban_Reason;
	Parms.bIsCompetitiveBan_0 = bIsCompetitiveBan_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerBannedModal.PlayerBannedModal_C.RemoveModal
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerBannedModal_C::RemoveModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBannedModal_C", "RemoveModal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerBannedModal.PlayerBannedModal_C.HandleCloseAttempted
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerBannedModal_C::HandleCloseAttempted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBannedModal_C", "HandleCloseAttempted");

	UObject::ProcessEvent(Func, nullptr);
}

}

