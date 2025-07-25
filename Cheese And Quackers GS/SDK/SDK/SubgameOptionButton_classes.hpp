﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: SubgameOptionButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SubgameOptionButton.SubgameOptionButton_C
// 0x00E0 (0x0C30 - 0x0B50)
class USubgameOptionButton_C final : public UFortSubGameTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       RevealCMSKeyArt;                                   // 0x0B58(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UnFocused;                                         // 0x0B60(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FocusedSecondary;                                  // 0x0B68(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Focused;                                           // 0x0B70(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          Border_Message;                                    // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Border_SpecialMessage;                             // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    CommonActionWidget_75;                             // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Content_Message;                                   // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Content_Selected;                                  // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Content_SpecialMessage;                            // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Art;                                         // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ColorFill;                                   // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_dropshadow;                                  // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FocusPulse;                                  // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Gradient;                                    // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPrimarySkewButton_C*                   PlayButton;                                        // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Description;                                  // 0x0BD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_SpecialMessage;                               // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_StandardMessageLine1;                         // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_StandardMessageLine2;                         // 0x0BF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Title;                                        // 0x0BF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnSubgameOptionSelected;                           // 0x0C00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstance*                      TileGradientBrush;                                 // 0x0C10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isUnfocused;                                       // 0x0C18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C19[0x7];                                      // 0x0C19(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UMaterialInstanceDynamic*               PulseMID;                                          // 0x0C20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             DefaultImage;                                      // 0x0C28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetupTile(class UTexture2D* Key_Art, const struct FLinearColor& Color_Fill, const struct FLinearColor& Color_Gradient, const class FText& Title, const class FText& Description, const class FText& SpecialMessage, const struct FLinearColor& Message_BackgroundColor, const class FText& StandardMessageLine1, const class FText& StandardMessageLine2);
	void OnTileFocused();
	void OnTileUnfocused();
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void BP_OnClicked();
	void Construct();
	void EventOtherTileFocused();
	void RefreshSubGameDisplay(const struct FSubgameDisplayData& SubGame);
	void BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature();
	void ExecuteUbergraph_SubgameOptionButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubgameOptionButton_C">();
	}
	static class USubgameOptionButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubgameOptionButton_C>();
	}
};

}

