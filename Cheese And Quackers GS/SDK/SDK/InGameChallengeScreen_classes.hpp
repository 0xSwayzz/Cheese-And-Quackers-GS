﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: InGameChallengeScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InGameChallengeScreen.InGameChallengeScreen_C
// 0x0038 (0x0358 - 0x0320)
class UInGameChallengeScreen_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaChallengeTreeView*               AthenaChallengeTreeView_0;                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ButtonMobileCloseArea;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CloseIcon;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         MobileCloseButton;                                 // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayCloseButton;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void HandleBack(bool* PassThrough);
	void Construct();
	void BndEvt__ButtonMobileCloseBackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_InGameChallengeScreen(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InGameChallengeScreen_C">();
	}
	static class UInGameChallengeScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInGameChallengeScreen_C>();
	}
};

}

