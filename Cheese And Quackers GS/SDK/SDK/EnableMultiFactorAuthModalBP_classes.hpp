﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: EnableMultiFactorAuthModalBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C
// 0x0118 (0x04B8 - 0x03A0)
class UEnableMultiFactorAuthModalBP_C final : public UEnableMultiFactorModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro_V2;                                          // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ArrowPulse;                                        // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x03B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       ConsoleTextBlock;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_LimitedTimeHeader;                              // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_TakenToWebsite;                                 // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        EnableButtonSwitcher;                              // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoWidget_C*                      ItemInfoWidget_FromSocialImport;                   // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone;                                          // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_TitleHeader;                              // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFrontEndCamera                               DesiredFrontEndCamera;                             // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_409[0x7];                                      // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortItemDefinition*                    PreviewItemDef;                                    // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeartbeatDelayIntroAnimation;                      // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         debugSocialImportType;                             // 0x041C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasReward;                                        // 0x041D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41E[0x2];                                      // 0x041E(0x0002)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   FacebookHeader;                                    // 0x0420(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   VKHeader;                                          // 0x0438(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SteamHeader;                                       // 0x0450(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PlaystationHeader;                                 // 0x0468(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   XboxHeader;                                        // 0x0480(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESocialImportPanelPlatform                    SocialPlatform;                                    // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_499[0x7];                                      // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   NewVar_0;                                          // 0x04A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void NavDown();
	void NavUp();
	void NavRight();
	void NavLeft();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleHeaderText();
	void OnActivated();
	void OnPanelTypeSet(ESocialImportPanelType NewType);
	void OnIncentivizedSet(bool bIncentivized);
	void OnSetExitButtonText(const class FText& NewButtonText);
	void OnConsoleDisplayURLProvided(const class FText& UniquePlayerURLText);
	void OnSetScreenConfiguration(bool bIsConsole);
	void ExecuteUbergraph_EnableMultiFactorAuthModalBP(int32 EntryPoint);
	void HandleSetScreenMode();
	void AnimationFullyCompleteBP();
	void ScaleTitleForCulture();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnableMultiFactorAuthModalBP_C">();
	}
	static class UEnableMultiFactorAuthModalBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnableMultiFactorAuthModalBP_C>();
	}
};

}

