﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: Cinematic_TeamMics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Cinematic-TeamMics.Cinematic-TeamMics_C
// 0x0230 (0x0468 - 0x0238)
class UCinematic_TeamMics_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMicIndicator_C*                        MicIndicator;                                      // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherConnectingStranger;                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextBlock_6;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerName;                                    // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    MemberInfo;                                        // 0x0260(0x0200)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShowingHealth;                                     // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Cinematic_TeamMics(int32 EntryPoint);
	void Construct();
	void Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cinematic-TeamMics_C">();
	}
	static class UCinematic_TeamMics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCinematic_TeamMics_C>();
	}
};

}

