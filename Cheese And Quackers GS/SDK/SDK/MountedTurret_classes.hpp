﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: MountedTurret

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MountedTurret.MountedTurret_C
// 0x0140 (0x0FA0 - 0x0E60)
class AMountedTurret_C final : public AFortMountedTurret
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortVehicleAimingWeaponComp*           FortVehicleAimingWeaponComp;                       // 0x0E68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      PawnCollision;                                     // 0x0E70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                 ServoAudio;                                        // 0x0E78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               OverHeatScreen_R;                                  // 0x0E80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               OverHeatScreen_L;                                  // 0x0E88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AudioOnOverheat;                                   // 0x0E90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AudioOverheat;                                     // 0x0E98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               OverheatSmoke;                                     // 0x0EA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               MagazineGlowR;                                     // 0x0EA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               MagazineGlowL;                                     // 0x0EB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BarrelGlowL;                                       // 0x0EB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BarrelGlowR;                                       // 0x0EC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          OverlapVolume;                                     // 0x0EC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             OnDeathSound;                                      // 0x0ED0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_BlockWeaponFire;                                // 0x0ED8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_GrantWeapon;                                    // 0x0EE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        DriverPawn;                                        // 0x0EE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DoorMesh;                                          // 0x0EF0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               InWaterFX;                                         // 0x0EF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        InWaterLoop;                                       // 0x0F00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        HonkAudioComp;                                     // 0x0F08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            GE_EnterTurret;                                    // 0x0F10(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           PlayerEnterAnimation;                              // 0x0F18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           TurretEnterAnimation;                              // 0x0F20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           TurretFireAnimation;                               // 0x0F28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           PlayerFireAnimation;                               // 0x0F30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                            PlayerWeapon;                                      // 0x0F38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_MountedTurretAthena_C*               TurretWeapon;                                      // 0x0F40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           GetWeaponTimer;                                    // 0x0F48(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           OverheatCostmeticTimer;                            // 0x0F50(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           TurretFireLeftAnimation;                           // 0x0F58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           TurretFireRightAnimation;                          // 0x0F60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            OverheatAudioCurve;                                // 0x0F68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               TurretRotation;                                    // 0x0F70(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F7C[0x4];                                      // 0x0F7C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UAnimMontage*                           TurretStartAnimation;                              // 0x0F80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           TurretExitAnimation;                               // 0x0F88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ZeroIfOverheating;                                 // 0x0F90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanInteract;                                      // 0x0F94(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F95[0x3];                                      // 0x0F95(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         fInteractionDelay;                                 // 0x0F98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         fInteractionDelayOffset;                           // 0x0F9C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MountedTurret(int32 EntryPoint);
	void Start_FX_And_Audio_Timer();
	void Handle_Rotation_Audio();
	void Clear_FX_And_AudioTimer();
	void UpdateOverheatCosmetics();
	void HideQuickBarForAbility(bool Hide);
	void Event_On_Weapon_Fired(EDualWeaponHand Hand, bool bPersistantFire);
	void Get_Turret_Weapon();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, class FName ExitSocketName);
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int32 SeatIdx);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnCompleted_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnBlendOut_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnInterrupted_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnCompleted_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnBlendOut_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnInterrupted_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnNotifyBegin_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnNotifyEnd_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnCompleted_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnBlendOut_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnInterrupted_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnCompleted_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnBlendOut_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnInterrupted_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnCompleted_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnBlendOut_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnInterrupted_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnNotifyBegin_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnNotifyEnd_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnCompleted_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnBlendOut_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnInterrupted_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnNotifyBegin_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnNotifyEnd_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void UserConstructionScript();
	TArray<class FName> GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, const ECommonInputType OverrideInputType);
	TArray<class FText> GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, const ECommonInputType OverrideInputType);
	TArray<class FText> GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, const ECommonInputType OverrideInputType);
	float CurrentOverheatScalar();
	bool BP_CanInteract(class AFortPlayerController* FortPC);
	void OnGetExitSocketTransform(const class FName ExitSocket, const int32 SocketIndex, const struct FTransform& InTransform, bool* bOutOverriderExitSocket, struct FTransform* OutOverrideTransform);

	void GetIconPlacement(class AActor* SelfActor, class AActor* ViewingActor, struct FVector* OutLocation, struct FVector* OutExtents) const;
	class FName GetVehicleSeatPrimaryAction(class AFortPlayerPawn* FortPlayerPawn) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MountedTurret_C">();
	}
	static class AMountedTurret_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMountedTurret_C>();
	}
};

}

