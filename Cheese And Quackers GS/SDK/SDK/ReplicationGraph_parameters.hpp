﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ReplicationGraph

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
// 0x0028 (0x0028 - 0x0000)
struct ReplicationGraphDebugActor_ClientCellInfo final
{
public:
	struct FVector                                CellLocation;                                      // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CellExtent;                                        // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         Actors;                                            // 0x0018(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
// 0x0010 (0x0010 - 0x0000)
struct ReplicationGraphDebugActor_ServerPrintAllActorInfo final
{
public:
	class FString                                 Str;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
// 0x0008 (0x0008 - 0x0000)
struct ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
// 0x0010 (0x0010 - 0x0000)
struct ReplicationGraphDebugActor_ServerSetCullDistanceForClass final
{
public:
	class UClass*                                 Class_0;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CullDistance;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
// 0x0010 (0x0010 - 0x0000)
struct ReplicationGraphDebugActor_ServerSetPeriodFrameForClass final
{
public:
	class UClass*                                 Class_0;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PeriodFrame;                                       // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

}

