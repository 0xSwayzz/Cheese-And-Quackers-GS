﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C
// 0x0058 (0x02B8 - 0x0260)
class UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C final : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          Border;                                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCountTextBlock*                ItemCountHave;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCountTextBlock*                ItemCountNeed;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                         ItemIcon;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemDisplayNameText*               ItemName;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextCountPrefix;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextDescription;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextSlash;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bOverrideTextStyle;                                // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 TextStyle;                                         // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ShowHaveNeed(bool* HaveNeed);
	void RefreshPreviewData();
	void RefreshVisibility();
	void Refresh();
	void DoDesignTimeRandomization();
	void PreConstruct(bool IsDesignTime);
	void HandleDifferentItemOrQuantitySetBP(const bool IsBeingReset);
	void PreviewStarted();
	void PreviewEnded();
	void RefreshListEntry();
	void ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C">();
	}
	static class UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C>();
	}
};

}

