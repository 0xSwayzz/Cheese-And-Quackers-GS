﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: TabGamePadConfig_v3

#include "Basic.hpp"

#include "TabGamePadConfig_v3_classes.hpp"
#include "TabGamePadConfig_v3_parameters.hpp"


namespace SDK
{

// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadInfoSelectorNavRight
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::GamepadInfoSelectorNavRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "GamepadInfoSelectorNavRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.AreWeOkayWithThisChange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool*                                   IsOkay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabGamePadConfig_v3_C::AreWeOkayWithThisChange(class FName ActionName, const struct FKey& Key, bool* IsOkay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "AreWeOkayWithThisChange");

	Params::TabGamePadConfig_v3_C_AreWeOkayWithThisChange Parms{};

	Parms.ActionName = ActionName;
	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	if (IsOkay != nullptr)
		*IsOkay = Parms.IsOkay;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::HandleGamepadInfoSelectorFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "HandleGamepadInfoSelectorFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.NavigateToSelectedConfig
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::NavigateToSelectedConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "NavigateToSelectedConfig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomClearVisibilityForInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::ChangeCustomClearVisibilityForInputType(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "ChangeCustomClearVisibilityForInputType");

	Params::TabGamePadConfig_v3_C_ChangeCustomClearVisibilityForInputType Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomResetVisibilityForInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::ChangeCustomResetVisibilityForInputType(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "ChangeCustomResetVisibilityForInputType");

	Params::TabGamePadConfig_v3_C_ChangeCustomResetVisibilityForInputType Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorApply
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::HandleGamepadInfoSelectorApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "HandleGamepadInfoSelectorApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorBack
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::HandleGamepadInfoSelectorBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "HandleGamepadInfoSelectorBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomTabListVisibilityForInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::ChangeCustomTabListVisibilityForInputType(ECommonInputType Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "ChangeCustomTabListVisibilityForInputType");

	Params::TabGamePadConfig_v3_C_ChangeCustomTabListVisibilityForInputType Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CreateCustomResetToDefaultList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FConfirmationDialogAction>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FConfirmationDialogAction> UTabGamePadConfig_v3_C::CreateCustomResetToDefaultList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "CreateCustomResetToDefaultList");

	Params::TabGamePadConfig_v3_C_CreateCustomResetToDefaultList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CloseCustomActionsPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    FocusLastButton                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabGamePadConfig_v3_C::CloseCustomActionsPanel(bool FocusLastButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "CloseCustomActionsPanel");

	Params::TabGamePadConfig_v3_C_CloseCustomActionsPanel Parms{};

	Parms.FocusLastButton = FocusLastButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SelectSameItemInActionsList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::SelectSameItemInActionsList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "SelectSameItemInActionsList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SetupDisplayObject
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UGamepadKeyTextButton_C**         DisplayObject_0                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::SetupDisplayObject(class FName ActionName, const struct FKey& Key, class UGamepadKeyTextButton_C** DisplayObject_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "SetupDisplayObject");

	Params::TabGamePadConfig_v3_C_SetupDisplayObject Parms{};

	Parms.ActionName = ActionName;
	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayObject_0 != nullptr)
		*DisplayObject_0 = Parms.DisplayObject_0;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.IsCustomConfig
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PresetIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTabGamePadConfig_v3_C::IsCustomConfig(int32 PresetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "IsCustomConfig");

	Params::TabGamePadConfig_v3_C_IsCustomConfig Parms{};

	Parms.PresetIndex = PresetIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.IsConsole
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTabGamePadConfig_v3_C::IsConsole()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "IsConsole");

	Params::TabGamePadConfig_v3_C_IsConsole Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadMappingInfoChange
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::HandleGamepadMappingInfoChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "HandleGamepadMappingInfoChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GetCurrentPlatformIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32*                                  PlatformIndex                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::GetCurrentPlatformIndex(int32* PlatformIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "GetCurrentPlatformIndex");

	Params::TabGamePadConfig_v3_C_GetCurrentPlatformIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlatformIndex != nullptr)
		*PlatformIndex = Parms.PlatformIndex;
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateData
// (Public, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::UpdateData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "UpdateData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstructData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::PreConstructData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "PreConstructData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.InitializeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::InitializeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "InitializeData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult_017CD690454514A07B4DE5BE109AEC6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult                       Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ResultName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::DialogResult_017CD690454514A07B4DE5BE109AEC6E(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "DialogResult_017CD690454514A07B4DE5BE109AEC6E");

	Params::TabGamePadConfig_v3_C_DialogResult_017CD690454514A07B4DE5BE109AEC6E Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult                       Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ResultName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717");

	Params::TabGamePadConfig_v3_C_DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717 Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Gamepad Config Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    AssociatedButton                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ButtonIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::Gamepad_Config_Changed(class UCommonButton* AssociatedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "Gamepad Config Changed");

	Params::TabGamePadConfig_v3_C_Gamepad_Config_Changed Parms{};

	Parms.AssociatedButton = AssociatedButton;
	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadPlatformConfigChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    AssociatedButton                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ButtonIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::GamepadPlatformConfigChanged(class UCommonButton* AssociatedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "GamepadPlatformConfigChanged");

	Params::TabGamePadConfig_v3_C_GamepadPlatformConfigChanged Parms{};

	Parms.AssociatedButton = AssociatedButton;
	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "CenterOnTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::UpdateOptionsTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "UpdateOptionsTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomDoResetToDefault
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::CustomDoResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "CustomDoResetToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomKeySelected_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::CustomKeySelected_Bind(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "CustomKeySelected_Bind");

	Params::TabGamePadConfig_v3_C_CustomKeySelected_Bind Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomActionSelected_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectedIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::CustomActionSelected_Bind(int32 SelectedIndex, class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "CustomActionSelected_Bind");

	Params::TabGamePadConfig_v3_C_CustomActionSelected_Bind Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClosedUsingBack_Bind
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::CustomClosedUsingBack_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "CustomClosedUsingBack_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClearButton_Bind
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::CustomClearButton_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "CustomClearButton_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ModesTabSelected_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::ModesTabSelected_Bind(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "ModesTabSelected_Bind");

	Params::TabGamePadConfig_v3_C_ModesTabSelected_Bind Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabGamePadConfig_v3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleUsingGamepadChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECommonInputType                        NewInputType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::HandleUsingGamepadChanged(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "HandleUsingGamepadChanged");

	Params::TabGamePadConfig_v3_C_HandleUsingGamepadChanged Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabDeactivated_Bind
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::OnTabDeactivated_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "OnTabDeactivated_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabActivated_Bind
// (BlueprintCallable, BlueprintEvent)

void UTabGamePadConfig_v3_C::OnTabActivated_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "OnTabActivated_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneLookSettingValueChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::DeadZoneLookSettingValueChanged_Bind(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "DeadZoneLookSettingValueChanged_Bind");

	Params::TabGamePadConfig_v3_C_DeadZoneLookSettingValueChanged_Bind Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneMoveSettingValueChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::DeadZoneMoveSettingValueChanged_Bind(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "DeadZoneMoveSettingValueChanged_Bind");

	Params::TabGamePadConfig_v3_C_DeadZoneMoveSettingValueChanged_Bind Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabGamePadConfig_v3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "PreConstruct");

	Params::TabGamePadConfig_v3_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ExecuteUbergraph_TabGamePadConfig_v3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_v3_C::ExecuteUbergraph_TabGamePadConfig_v3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGamePadConfig_v3_C", "ExecuteUbergraph_TabGamePadConfig_v3");

	Params::TabGamePadConfig_v3_C_ExecuteUbergraph_TabGamePadConfig_v3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

