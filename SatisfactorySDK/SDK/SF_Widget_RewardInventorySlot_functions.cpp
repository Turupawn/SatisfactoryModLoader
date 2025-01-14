// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_RewardInventorySlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.IsValidRewardItem
// ()
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_RewardInventorySlot_C::IsValidRewardItem(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.IsValidRewardItem");

	UWidget_RewardInventorySlot_C_IsValidRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.UpdateVisibility
// ()

void UWidget_RewardInventorySlot_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.UpdateVisibility");

	UWidget_RewardInventorySlot_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.PreConstruct
// ()
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RewardInventorySlot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.PreConstruct");

	UWidget_RewardInventorySlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.Construct
// ()

void UWidget_RewardInventorySlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.Construct");

	UWidget_RewardInventorySlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.OnRewardClicked
// ()

void UWidget_RewardInventorySlot_C::OnRewardClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.OnRewardClicked");

	UWidget_RewardInventorySlot_C_OnRewardClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.ExecuteUbergraph_Widget_RewardInventorySlot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RewardInventorySlot_C::ExecuteUbergraph_Widget_RewardInventorySlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.ExecuteUbergraph_Widget_RewardInventorySlot");

	UWidget_RewardInventorySlot_C_ExecuteUbergraph_Widget_RewardInventorySlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
