﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: MainTabIconButton

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainTabIconButton.MainTabIconButton_C
// 0x0128 (0x0C70 - 0x0B48)
class UMainTabIconButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B48(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimatedPulse;                                     // 0x0B50(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimateIn;                                         // 0x0B58(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMainTabTutorialBangWrapper_C*          BangWrapper;                                       // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ContentHB;                                         // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageGlow;                                         // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTab;                                          // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideImage;                                     // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainTabTutorialWrapper_C*              TutorialWrapper;                                   // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x0B98(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x0BB0(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          UseText;                                           // 0x0C38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C39[0x3];                                      // 0x0C39(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	struct FLinearColor                           SelectedIconTint;                                  // 0x0C3C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DeselectedIconTint;                                // 0x0C4C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HoveredIconTint;                                   // 0x0C5C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBangEnabled;                                      // 0x0C6C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AllowStyleChange;                                  // 0x0C6D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetBangType(EFortBangType NewBangType);
	void StopTabCallout();
	void TabAdded();
	void TabDialogClosed();
	void TabAnimateInFinished();
	void SetWrapperNameIDs(class FName InTutorialNameID, class FName InBangNameID);
	void Update_Bang_State(bool bBangEnabled_0, EFortUIFeature UIFeature, const class FText& UIFeatureRevealText);
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void ShowText();
	void Set_Icon(const struct FSlateBrush& IconBrush_0);
	void Set_Text(const class FText& ButtonText_0);
	void PreConstruct(bool IsDesignTime);
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void BP_OnSelected();
	void BP_OnDeselected();
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void HandleTabAdded();
	void HandleTabAnimateInFinished();
	void HandleTabDialogCLosed();
	void OnCurrentTextStyleChanged();
	void Handle_StopTabCallout();
	void BndEvt__ToastWidget_K2Node_ComponentBoundEvent_0_OnFinishedToast__DelegateSignature();
	void BP_OnDisabled();
	void BP_OnEnabled();
	void ExecuteUbergraph_MainTabIconButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainTabIconButton_C">();
	}
	static class UMainTabIconButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainTabIconButton_C>();
	}
};

}

