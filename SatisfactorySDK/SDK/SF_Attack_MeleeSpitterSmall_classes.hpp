#pragma once

// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Attack_MeleeSpitterSmall_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Attack_MeleeSpitterSmall.Attack_MeleeSpitterSmall_C
// 0x0000 (0x0058 - 0x0058)
class UAttack_MeleeSpitterSmall_C : public UFGAttackRanged
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attack_MeleeSpitterSmall.Attack_MeleeSpitterSmall_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
