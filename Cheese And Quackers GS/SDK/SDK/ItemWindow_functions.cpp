﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ItemWindow

#include "Basic.hpp"

#include "ItemWindow_classes.hpp"
#include "ItemWindow_parameters.hpp"


namespace SDK
{

// Function ItemWindow.ItemWindow_C.GetPeopleName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*                        InfoItemInstance                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText*                            Result                                                 (Parm, OutParm)

void UItemWindow_C::GetPeopleName(class UFortItem* InfoItemInstance, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWindow_C", "GetPeopleName");

	Params::ItemWindow_C_GetPeopleName Parms{};

	Parms.InfoItemInstance = InfoItemInstance;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function ItemWindow.ItemWindow_C.HandleSelectedButtonChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    SelectedButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SelectedButtonIndex                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemWindow_C::HandleSelectedButtonChanged(class UCommonButton* SelectedButton, int32 SelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWindow_C", "HandleSelectedButtonChanged");

	Params::ItemWindow_C_HandleSelectedButtonChanged Parms{};

	Parms.SelectedButton = SelectedButton;
	Parms.SelectedButtonIndex = SelectedButtonIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemWindow.ItemWindow_C.Set Description Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*              Item_Definition                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*                 Text_Box_to_Set                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemWindow_C::Set_Description_Text(class UFortItemDefinition* Item_Definition, class UCommonTextBlock* Text_Box_to_Set)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWindow_C", "Set Description Text");

	Params::ItemWindow_C_Set_Description_Text Parms{};

	Parms.Item_Definition = Item_Definition;
	Parms.Text_Box_to_Set = Text_Box_to_Set;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemWindow.ItemWindow_C.InternalToExternalRarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortRarity                             InRarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText*                            ExternalRarity                                         (Parm, OutParm)

void UItemWindow_C::InternalToExternalRarity(EFortRarity InRarity, class FText* ExternalRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWindow_C", "InternalToExternalRarity");

	Params::ItemWindow_C_InternalToExternalRarity Parms{};

	Parms.InRarity = InRarity;

	UObject::ProcessEvent(Func, &Parms);

	if (ExternalRarity != nullptr)
		*ExternalRarity = std::move(Parms.ExternalRarity);
}


// Function ItemWindow.ItemWindow_C.HandleButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Content                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemWindow_C::HandleButton(class UWidget* Content, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWindow_C", "HandleButton");

	Params::ItemWindow_C_HandleButton Parms{};

	Parms.Content = Content;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemWindow.ItemWindow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UItemWindow_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWindow_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemWindow.ItemWindow_C.SetTitleAndItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItemDefinition*>&     Info_Items                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// const class FText&                      Title_0                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemWindow_C::SetTitleAndItems(TArray<class UFortItemDefinition*>& Info_Items, const class FText& Title_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWindow_C", "SetTitleAndItems");

	Params::ItemWindow_C_SetTitleAndItems Parms{};

	Parms.Info_Items = std::move(Info_Items);
	Parms.Title_0 = std::move(Title_0);

	UObject::ProcessEvent(Func, &Parms);

	Info_Items = std::move(Parms.Info_Items);
}


// Function ItemWindow.ItemWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWindow_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");

	Params::ItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemWindow.ItemWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemWindow.ItemWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemWindow.ItemWindow_C.ExecuteUbergraph_ItemWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemWindow_C::ExecuteUbergraph_ItemWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemWindow_C", "ExecuteUbergraph_ItemWindow");

	Params::ItemWindow_C_ExecuteUbergraph_ItemWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

