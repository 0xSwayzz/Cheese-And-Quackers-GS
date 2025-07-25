﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: PlayerRankEmblem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerRankEmblem.PlayerRankEmblem_C
// 0x0020 (0x0258 - 0x0238)
class UPlayerRankEmblem_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Flash;                                             // 0x0240(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          BindToLocalPlayerByDefault;                        // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void SetBannerInfo(const struct FPlayerBannerInfo& Banner);
	void SetBannerSurroundLevel(int32 Level, bool Animate);
	void SetBannerOwner(class AFortPlayerController* Target);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_PlayerRankEmblem(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerRankEmblem_C">();
	}
	static class UPlayerRankEmblem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerRankEmblem_C>();
	}
};

}

