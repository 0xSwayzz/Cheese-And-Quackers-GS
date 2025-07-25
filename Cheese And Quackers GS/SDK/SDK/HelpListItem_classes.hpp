﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: HelpListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HelpListItem.HelpListItem_C
// 0x0048 (0x0BA0 - 0x0B58)
class UHelpListItem_C final : public UFortHelpTreeItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B58(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Arrow;                                             // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         EntryHBox;                                         // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       EntryHeaderName;                                   // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HeaderHBox;                                        // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       HeaderText;                                        // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        PlayerHeaderSwitcher;                              // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              InviteJoinChanged;                                 // 0x0B90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SetupExpansion(bool Expanded);
	void InitializeItem();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void ExecuteUbergraph_HelpListItem(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HelpListItem_C">();
	}
	static class UHelpListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHelpListItem_C>();
	}
};

}

