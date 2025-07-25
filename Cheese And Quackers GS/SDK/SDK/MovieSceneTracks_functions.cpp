﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: MovieSceneTracks

#include "Basic.hpp"

#include "MovieSceneTracks_classes.hpp"
#include "MovieSceneTracks_parameters.hpp"


namespace SDK
{

// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// const struct FMovieSceneObjectBindingID&InConstraintBindingID                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieScene3DConstraintSection", "SetConstraintBindingID");

	Params::MovieScene3DConstraintSection_SetConstraintBindingID Parms{};

	Parms.InConstraintBindingID = std::move(InConstraintBindingID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const struct FMovieSceneObjectBindingID ReturnValue                                            (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

const struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieScene3DConstraintSection", "GetConstraintBindingID");

	Params::MovieScene3DConstraintSection_GetConstraintBindingID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform IMovieSceneTransformOrigin::BP_GetTransformOrigin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("MovieSceneTransformOrigin", "BP_GetTransformOrigin");

	Params::MovieSceneTransformOrigin_BP_GetTransformOrigin Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                       InSound                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneAudioSection", "SetSound");

	Params::MovieSceneAudioSection_SetSound Parms{};

	Parms.InSound = InSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FFrameNumber&              InStartOffset                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneAudioSection", "SetStartOffset");

	Params::MovieSceneAudioSection_SetStartOffset Parms{};

	Parms.InStartOffset = std::move(InStartOffset);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoundBase*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundBase* UMovieSceneAudioSection::GetSound() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneAudioSection", "GetSound");

	Params::MovieSceneAudioSection_GetSound Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameNumber                     ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UMovieSceneAudioSection::GetStartOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneAudioSection", "GetStartOffset");

	Params::MovieSceneAudioSection_GetStartOffset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// const struct FMovieSceneObjectBindingID&InCameraBindingID                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCameraCutSection", "SetCameraBindingID");

	Params::MovieSceneCameraCutSection_SetCameraBindingID Parms{};

	Parms.InCameraBindingID = std::move(InCameraBindingID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const struct FMovieSceneObjectBindingID ReturnValue                                            (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

const struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCameraCutSection", "GetCameraBindingID");

	Params::MovieSceneCameraCutSection_GetCameraBindingID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    InShotDisplayName                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCinematicShotSection::SetShotDisplayName(const class FString& InShotDisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCinematicShotSection", "SetShotDisplayName");

	Params::MovieSceneCinematicShotSection_SetShotDisplayName Parms{};

	Parms.InShotDisplayName = std::move(InShotDisplayName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMovieSceneCinematicShotSection::GetShotDisplayName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCinematicShotSection", "GetShotDisplayName");

	Params::MovieSceneCinematicShotSection_GetShotDisplayName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const TArray<class FName>&              InLevelNames                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMovieSceneLevelVisibilitySection::SetLevelNames(const TArray<class FName>& InLevelNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "SetLevelNames");

	Params::MovieSceneLevelVisibilitySection_SetLevelNames Parms{};

	Parms.InLevelNames = std::move(InLevelNames);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ELevelVisibility                        InVisibility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneLevelVisibilitySection::SetVisibility(ELevelVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "SetVisibility");

	Params::MovieSceneLevelVisibilitySection_SetVisibility Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const TArray<class FName>               ReturnValue                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

const TArray<class FName> UMovieSceneLevelVisibilitySection::GetLevelNames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "GetLevelNames");

	Params::MovieSceneLevelVisibilitySection_GetLevelNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ELevelVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "GetVisibility");

	Params::MovieSceneLevelVisibilitySection_GetVisibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

