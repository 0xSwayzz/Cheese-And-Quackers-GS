﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: PurchaseHistoryScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PurchaseHistoryScreen.PurchaseHistoryScreen_C
// 0x00C0 (0x04A8 - 0x03E8)
class UPurchaseHistoryScreen_C final : public UFortPurchaseHistoryScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPanelButton_C*                         BacchusCloseButton;                                // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Border_Summary;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkewButton_C*                          Button_ClosePostApproval;                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_ItemSelect;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_Reason;                                     // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_SubmitRequest;                              // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      CircularThrobber_0;                                // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                     FortRichTextBlock_1;                               // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemsToReturn;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  MainSwitcher;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBoxItemstoReturn;                            // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher_ItemList;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ResultDesc;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ResultMtxMsg;                                 // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ResultTitle;                                  // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTicketCounter_C*                       TicketCounter;                                     // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_ChosenItem;                                   // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_ChosenReason;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackAction;                                        // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UUserWidget*>                    TicketArray;                                       // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          Should_Use_Back_Action;                            // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ToggleBackAction(bool bShouldShow);
	void HandleBack(bool* PassThrough);
	void OnItemRefresh(const struct FMtxPurchaseHistory& PurchaseHistory);
	void BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnPopulateView(EPurchaseReturnStep CurrentStep);
	void OnActivated();
	void OnNoPurchasesAvailable();
	void BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnBeginRefundSubmission();
	void OnEndRefundSubmission(bool bSuccess, int32 MtxRefunded, class UFortItemDefinition* ReturnedItem, int32 TicketIndex);
	void InitializeTickets(int32 NumTicketsAvailableToUse);
	void UpdateItemList(const TArray<class UCommonTextBlock*>& ItemsToReturn_0);
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void ExecuteUbergraph_PurchaseHistoryScreen(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PurchaseHistoryScreen_C">();
	}
	static class UPurchaseHistoryScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPurchaseHistoryScreen_C>();
	}
};

}

