﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ProgressModalWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProgressModalWidget.ProgressModalWidget_C
// 0x0018 (0x0420 - 0x0408)
class UProgressModalWidget_C final : public UFortProgressModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULightbox_C*                            Lightbox;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressWidget_C*                      ProgressWidget;                                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ProgressModalWidget(int32 EntryPoint);
	void Construct();
	void Destruct();
	void HandleIntroEnded();
	void HandleOutroEnded();
	void Initialize();
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnBeginIntro();
	void OnBeginOutro();
	void SetDescription(const class FText& InDescription);
	void SetIcon(const struct FSlateBrush& InIcon);
	void SetTitle(const class FText& InTitle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressModalWidget_C">();
	}
	static class UProgressModalWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressModalWidget_C>();
	}
};

}

