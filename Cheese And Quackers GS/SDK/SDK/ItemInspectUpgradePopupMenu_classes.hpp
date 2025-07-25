﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ItemInspectUpgradePopupMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectUpgradePopupMenu.ItemInspectUpgradePopupMenu_C
// 0x0038 (0x0378 - 0x0340)
class UItemInspectUpgradePopupMenu_C final : public UFortPopupMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      ButonLevelUp;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonPerks;                                       // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonRarity;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonViewEvolution;                               // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CancelButton;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MainButtonVerticalBox;                             // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void InitalizeButtonNavigation();
	void SetupUpgradeRarityVisiblity(ESlateVisibility Visibility_0);
	void SetupEvolultionVisibility(ESlateVisibility Visibility_0);
	void SetupPerkModVisibility(ESlateVisibility Visibility_0);
	void SetLevelUpVisibility(ESlateVisibility Visibility_0);
	void BndEvt__ButonLevelUp_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonViewEvolution_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonPerks_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void OnActivated();
	void BndEvt__ButtonRarity_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ItemInspectUpgradePopupMenu(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectUpgradePopupMenu_C">();
	}
	static class UItemInspectUpgradePopupMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectUpgradePopupMenu_C>();
	}
};

}

