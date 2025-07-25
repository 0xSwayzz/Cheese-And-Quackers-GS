﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_Prj_Athena_SuperTowerGrenade

#include "Basic.hpp"

#include "B_Prj_Athena_SuperTowerGrenade_classes.hpp"
#include "B_Prj_Athena_SuperTowerGrenade_parameters.hpp"


namespace SDK
{

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_SuperTowerGrenade_C::ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade");

	Params::B_Prj_Athena_SuperTowerGrenade_C_ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_SuperTowerGrenade_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "ReceiveEndPlay");

	Params::B_Prj_Athena_SuperTowerGrenade_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.Delete another actor
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_SuperTowerGrenade_C::Delete_another_actor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "Delete another actor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.Handle Bounce
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Hit_Location                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_SuperTowerGrenade_C::Handle_Bounce(const struct FVector& Hit_Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "Handle Bounce");

	Params::B_Prj_Athena_SuperTowerGrenade_C_Handle_Bounce Parms{};

	Parms.Hit_Location = std::move(Hit_Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_SuperTowerGrenade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FVector&                   HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Athena_SuperTowerGrenade_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "ReceiveHit");

	Params::B_Prj_Athena_SuperTowerGrenade_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const TArray<class AActor*>&            HitActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// const TArray<struct FHitResult>&        HitResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AB_Prj_Athena_SuperTowerGrenade_C::OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "OnExploded");

	Params::B_Prj_Athena_SuperTowerGrenade_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Athena_SuperTowerGrenade_C::OnStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "OnStop");

	Params::B_Prj_Athena_SuperTowerGrenade_C_OnStop Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_SuperTowerGrenade_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.SetBaseDestination
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Athena_SuperTowerGrenade_C::SetBaseDestination(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "SetBaseDestination");

	Params::B_Prj_Athena_SuperTowerGrenade_C_SetBaseDestination Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CreateBaseSection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   ReferenceLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const TArray<class UClass*>&            BGAClassArray                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>&                 BGALocationArray                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FRotator>&                BGARotationArray                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_Athena_SuperTowerGrenade_C::CreateBaseSection(const struct FVector& ReferenceLocation, const TArray<class UClass*>& BGAClassArray, TArray<struct FVector>& BGALocationArray, TArray<struct FRotator>& BGARotationArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "CreateBaseSection");

	Params::B_Prj_Athena_SuperTowerGrenade_C_CreateBaseSection Parms{};

	Parms.ReferenceLocation = std::move(ReferenceLocation);
	Parms.BGAClassArray = std::move(BGAClassArray);
	Parms.BGALocationArray = std::move(BGALocationArray);
	Parms.BGARotationArray = std::move(BGARotationArray);

	UObject::ProcessEvent(Func, &Parms);

	BGALocationArray = std::move(Parms.BGALocationArray);
	BGARotationArray = std::move(Parms.BGARotationArray);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ClearAndBuild
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>&                 ClearedGridCells                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// const TArray<class UClass*>&            BGAClassArray                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>&                 BGALocationArray                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FRotator>&                BGARotationArray                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    DestroyFloorsQuickly                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Athena_SuperTowerGrenade_C::ClearAndBuild(TArray<struct FVector>& ClearedGridCells, const TArray<class UClass*>& BGAClassArray, TArray<struct FVector>& BGALocationArray, TArray<struct FRotator>& BGARotationArray, bool DestroyFloorsQuickly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "ClearAndBuild");

	Params::B_Prj_Athena_SuperTowerGrenade_C_ClearAndBuild Parms{};

	Parms.ClearedGridCells = std::move(ClearedGridCells);
	Parms.BGAClassArray = std::move(BGAClassArray);
	Parms.BGALocationArray = std::move(BGALocationArray);
	Parms.BGARotationArray = std::move(BGARotationArray);
	Parms.DestroyFloorsQuickly = DestroyFloorsQuickly;

	UObject::ProcessEvent(Func, &Parms);

	ClearedGridCells = std::move(Parms.ClearedGridCells);
	BGALocationArray = std::move(Parms.BGALocationArray);
	BGARotationArray = std::move(Parms.BGARotationArray);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.SpawnTires
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   ReferenceLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_SuperTowerGrenade_C::SpawnTires(const struct FVector& ReferenceLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "SpawnTires");

	Params::B_Prj_Athena_SuperTowerGrenade_C_SpawnTires Parms{};

	Parms.ReferenceLocation = std::move(ReferenceLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.HandleProps
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>&                  Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_Athena_SuperTowerGrenade_C::HandleProps(TArray<class AActor*>& Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "HandleProps");

	Params::B_Prj_Athena_SuperTowerGrenade_C_HandleProps Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CalculateCardinalDirection
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_SuperTowerGrenade_C::CalculateCardinalDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "CalculateCardinalDirection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CallDynamicBuilder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Class_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_SuperTowerGrenade_C::CallDynamicBuilder(class UClass* Class_0, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "CallDynamicBuilder");

	Params::B_Prj_Athena_SuperTowerGrenade_C_CallDynamicBuilder Parms{};

	Parms.Class_0 = Class_0;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ClearOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>&                 ClearedGridCells                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    DestroyFloorsQuickly                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Athena_SuperTowerGrenade_C::ClearOnly(TArray<struct FVector>& ClearedGridCells, bool DestroyFloorsQuickly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_SuperTowerGrenade_C", "ClearOnly");

	Params::B_Prj_Athena_SuperTowerGrenade_C_ClearOnly Parms{};

	Parms.ClearedGridCells = std::move(ClearedGridCells);
	Parms.DestroyFloorsQuickly = DestroyFloorsQuickly;

	UObject::ProcessEvent(Func, &Parms);

	ClearedGridCells = std::move(Parms.ClearedGridCells);
}

}

