﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: PerkWidget

#include "Basic.hpp"

#include "PerkWidget_classes.hpp"
#include "PerkWidget_parameters.hpp"


namespace SDK
{

// Function PerkWidget.PerkWidget_C.CreateToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPerkWidget_C::CreateToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "CreateToolTipWidget");

	Params::PerkWidget_C_CreateToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PerkWidget.PerkWidget_C.InitializeTextInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::InitializeTextInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "InitializeTextInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidget.PerkWidget_C.HighlightBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::HighlightBadge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "HighlightBadge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidget.PerkWidget_C.GetPerkStat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTooltipStat*                    TooltipStat                                            (Parm, OutParm, HasGetValueTypeHash)

void UPerkWidget_C::GetPerkStat(struct FTooltipStat* TooltipStat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "GetPerkStat");

	Params::PerkWidget_C_GetPerkStat Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TooltipStat != nullptr)
		*TooltipStat = std::move(Parms.TooltipStat);
}


// Function PerkWidget.PerkWidget_C.ShowTierImage
// (Public, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::ShowTierImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "ShowTierImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidget.PerkWidget_C.SetupBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::SetupBadge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "SetupBadge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidget.PerkWidget_C.InitializeHeroBonusIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::InitializeHeroBonusIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "InitializeHeroBonusIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidget.PerkWidget_C.InitializeTextOnlyPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::InitializeTextOnlyPerk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "InitializeTextOnlyPerk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidget.PerkWidget_C.ShouldFadePerk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkWidget_C::ShouldFadePerk(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "ShouldFadePerk");

	Params::PerkWidget_C_ShouldFadePerk Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function PerkWidget.PerkWidget_C.GetHighlightColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*                    Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkWidget_C::GetHighlightColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "GetHighlightColor");

	Params::PerkWidget_C_GetHighlightColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function PerkWidget.PerkWidget_C.GetTierAbilityBrush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush*                     SlateBrush                                             (Parm, OutParm)

void UPerkWidget_C::GetTierAbilityBrush(struct FSlateBrush* SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "GetTierAbilityBrush");

	Params::PerkWidget_C_GetTierAbilityBrush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlateBrush != nullptr)
		*SlateBrush = std::move(Parms.SlateBrush);
}


// Function PerkWidget.PerkWidget_C.InitializeAbilityPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::InitializeAbilityPerk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "InitializeAbilityPerk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidget.PerkWidget_C.InitializeBasicPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidget_C::InitializeBasicPerk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "InitializeBasicPerk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidget.PerkWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "PreConstruct");

	Params::PerkWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidget.PerkWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPerkWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidget.PerkWidget_C.OnPerkUpdated
// (Event, Public, BlueprintEvent)

void UPerkWidget_C::OnPerkUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "OnPerkUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidget.PerkWidget_C.OnTooltipDescriptionReady
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const TArray<class FText>&              DescriptionList                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPerkWidget_C::OnTooltipDescriptionReady(const TArray<class FText>& DescriptionList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "OnTooltipDescriptionReady");

	Params::PerkWidget_C_OnTooltipDescriptionReady Parms{};

	Parms.DescriptionList = std::move(DescriptionList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidget.PerkWidget_C.ExecuteUbergraph_PerkWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkWidget_C::ExecuteUbergraph_PerkWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidget_C", "ExecuteUbergraph_PerkWidget");

	Params::PerkWidget_C_ExecuteUbergraph_PerkWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

