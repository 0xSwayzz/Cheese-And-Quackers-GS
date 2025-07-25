﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: InterfaceAIStates

#include "Basic.hpp"

#include "InterfaceAIStates_classes.hpp"
#include "InterfaceAIStates_parameters.hpp"


namespace SDK
{

// Function InterfaceAIStates.InterfaceAIStates_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   StartPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   MidPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   EndPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    LowWall                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    MidWall                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    FullWall                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    WindowWall                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "MantleStart");

	Params::InterfaceAIStates_C_MantleStart Parms{};

	Parms.StartPos = std::move(StartPos);
	Parms.MidPos = std::move(MidPos);
	Parms.EndPos = std::move(EndPos);
	Parms.LowWall = LowWall;
	Parms.MidWall = MidWall;
	Parms.FullWall = FullWall;
	Parms.WindowWall = WindowWall;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function InterfaceAIStates.InterfaceAIStates_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IInterfaceAIStates_C::MantleEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "MantleEnd");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function InterfaceAIStates.InterfaceAIStates_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)

void IInterfaceAIStates_C::HuskEvadeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "HuskEvadeStart");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function InterfaceAIStates.InterfaceAIStates_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SpecialAttack                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Swoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Soul_Suck                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Portal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "VerifyTakerAttack");

	Params::InterfaceAIStates_C_VerifyTakerAttack Parms{};

	Parms.SpecialAttack = SpecialAttack;
	Parms.Swoop = Swoop;
	Parms.Soul_Suck = Soul_Suck;
	Parms.Portal = Portal;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function InterfaceAIStates.InterfaceAIStates_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Swoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    SoulSuckMelee                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Portal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "ResetTakerSpecialAttackTimer");

	Params::InterfaceAIStates_C_ResetTakerSpecialAttackTimer Parms{};

	Parms.Swoop = Swoop;
	Parms.SoulSuckMelee = SoulSuckMelee;
	Parms.Portal = Portal;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function InterfaceAIStates.InterfaceAIStates_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void IInterfaceAIStates_C::BeginTakerSwoopAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "BeginTakerSwoopAttack");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function InterfaceAIStates.InterfaceAIStates_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void IInterfaceAIStates_C::EndTakerSwoopAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "EndTakerSwoopAttack");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           BuildingPart                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBTTask_BlueprintBase*            Task                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   DesiredMoveLocation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Debug                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "TakerWallPortalBehavior");

	Params::InterfaceAIStates_C_TakerWallPortalBehavior Parms{};

	Parms.BuildingPart = BuildingPart;
	Parms.Task = Task;
	Parms.DesiredMoveLocation = std::move(DesiredMoveLocation);
	Parms.Debug = Debug;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function InterfaceAIStates.InterfaceAIStates_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Portal_Available_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "IsTakerWallPortalAvailable");

	Params::InterfaceAIStates_C_IsTakerWallPortalAvailable Parms{};

	Parms.Portal_Available_ = Portal_Available_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SuccessfulHit                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::TakerAttackFSM(bool SuccessfulHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "TakerAttackFSM");

	Params::InterfaceAIStates_C_TakerAttackFSM Parms{};

	Parms.SuccessfulHit = SuccessfulHit;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::TakerSoulSuckSoundBegin(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "TakerSoulSuckSoundBegin");

	Params::InterfaceAIStates_C_TakerSoulSuckSoundBegin Parms{};

	Parms.Success = Success;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IInterfaceAIStates_C::TakerSoulSuckSoundEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "TakerSoulSuckSoundEnd");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalAdd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*                   BuildingActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const TArray<class ABuildingActor*>&    BuildingActorList                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void IInterfaceAIStates_C::PortalAdd(class ABuildingActor* BuildingActor, const TArray<class ABuildingActor*>& BuildingActorList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "PortalAdd");

	Params::InterfaceAIStates_C_PortalAdd Parms{};

	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = std::move(BuildingActorList);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)

void IInterfaceAIStates_C::PortalClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "PortalClear");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)

void IInterfaceAIStates_C::TakerSoulSuckInterrupted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "TakerSoulSuckInterrupted");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalGet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*                   BuildingActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const TArray<class ABuildingActor*>&    BuildingActorList                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                           BT                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterfaceAIStates_C::PortalGet(class ABuildingActor* BuildingActor, const TArray<class ABuildingActor*>& BuildingActorList, class AActor* BT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "PortalGet");

	Params::InterfaceAIStates_C_PortalGet Parms{};

	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = std::move(BuildingActorList);
	Parms.BT = BT;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)

void IInterfaceAIStates_C::PortalFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "PortalFX");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Collide_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfaceAIStates_C::PortalCollision(bool Collide_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("InterfaceAIStates_C", "PortalCollision");

	Params::InterfaceAIStates_C_PortalCollision Parms{};

	Parms.Collide_ = Collide_;

	AsUObject()->ProcessEvent(Func, &Parms);
}

}

