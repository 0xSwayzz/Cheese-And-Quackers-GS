﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: PacketHandler

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct PacketHandler.NetAnalyticsDataConfig
// 0x000C (0x000C - 0x0000)
struct FNetAnalyticsDataConfig final
{
public:
	class FName                                   DataName;                                          // 0x0000(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0008(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

}

