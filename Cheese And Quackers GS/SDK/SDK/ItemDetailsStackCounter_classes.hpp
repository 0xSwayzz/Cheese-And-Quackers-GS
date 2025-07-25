﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ItemDetailsStackCounter

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDetailsStackCounter.ItemDetailsStackCounter_C
// 0x05A0 (0x0820 - 0x0280)
class UItemDetailsStackCounter_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               _SizeBox_;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderBase;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextCounter;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                    MultiSizeBase;                                     // 0x02A0(0x0330)(Edit, BlueprintVisible)
	struct FFortMultiSizeFont                     MultiSizeFont;                                     // 0x05D0(0x01E0)(Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                   MultiSizeMargin;                                   // 0x07B0(0x0060)(Edit, BlueprintVisible, NoDestructor)
	EFortBrushSize                                Brush_Size;                                        // 0x0810(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_811[0x3];                                      // 0x0811(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	int32                                         Count;                                             // 0x0814(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AlwaysVisible;                                     // 0x0818(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TruncateValue;                                     // 0x0819(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void Refresh_Visibility();
	void Update_Stack_Count();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void HandlePreDifferentItemToDetailSet();
	void HandlePostDifferentItemToDetailSet();
	void HandleOnItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleQuantityOverrideChanged();
	void ExecuteUbergraph_ItemDetailsStackCounter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDetailsStackCounter_C">();
	}
	static class UItemDetailsStackCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDetailsStackCounter_C>();
	}
};

}

