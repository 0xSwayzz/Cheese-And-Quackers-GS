﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: TeamMemberPedestal_XPBoostInfo

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C
// 0x0010 (0x0B98 - 0x0B88)
class UTeamMemberPedestal_XPBoostInfo_C final : public UFortTeamMemberXPBoostInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B88(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               PrimaryOvr;                                        // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void OnCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberPedestal_XPBoostInfo_C">();
	}
	static class UTeamMemberPedestal_XPBoostInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberPedestal_XPBoostInfo_C>();
	}
};

}

