#pragma once

// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BP_BuildingPointLight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BuildingPointLight.BP_BuildingPointLight_C.ReceiveBeginPlay
struct UBP_BuildingPointLight_C_ReceiveBeginPlay_Params
{
};

// Function BP_BuildingPointLight.BP_BuildingPointLight_C.HasPowerChanged
struct UBP_BuildingPointLight_C_HasPowerChanged_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BuildingPointLight.BP_BuildingPointLight_C.ExecuteUbergraph_BP_BuildingPointLight
struct UBP_BuildingPointLight_C_ExecuteUbergraph_BP_BuildingPointLight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
