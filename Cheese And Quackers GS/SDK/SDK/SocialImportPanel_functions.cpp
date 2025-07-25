﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: SocialImportPanel

#include "Basic.hpp"

#include "SocialImportPanel_classes.hpp"
#include "SocialImportPanel_parameters.hpp"


namespace SDK
{

// Function SocialImportPanel.SocialImportPanel_C.OnWaitingViewRequested
// (Event, Protected, BlueprintEvent)

void USocialImportPanel_C::OnWaitingViewRequested()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "OnWaitingViewRequested");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialImportPanel.SocialImportPanel_C.OnLauncherImportOpened
// (Event, Protected, BlueprintEvent)

void USocialImportPanel_C::OnLauncherImportOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "OnLauncherImportOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialImportPanel.SocialImportPanel_C.OnImportViewRequested
// (Event, Protected, BlueprintEvent)

void USocialImportPanel_C::OnImportViewRequested()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "OnImportViewRequested");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialImportPanel.SocialImportPanel_C.OnClaimViewRequested
// (Event, Protected, BlueprintEvent)

void USocialImportPanel_C::OnClaimViewRequested()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "OnClaimViewRequested");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialImportPanel.SocialImportPanel_C.OnPanelTypeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESocialImportPanelType                  NewType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialImportPanel_C::OnPanelTypeSet(ESocialImportPanelType NewType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "OnPanelTypeSet");

	Params::SocialImportPanel_C_OnPanelTypeSet Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialImportPanel.SocialImportPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void USocialImportPanel_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialImportPanel.SocialImportPanel_C.ExecuteUbergraph_SocialImportPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialImportPanel_C::ExecuteUbergraph_SocialImportPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "ExecuteUbergraph_SocialImportPanel");

	Params::SocialImportPanel_C_ExecuteUbergraph_SocialImportPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

