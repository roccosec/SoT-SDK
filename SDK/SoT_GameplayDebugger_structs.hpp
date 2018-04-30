#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Slate_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayDebugger.GDTCustomViewNames
// 0x0050
struct FGDTCustomViewNames
{
	class FString                                      GameView5;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class FString                                      GameView1;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      GameView2;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      GameView3;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      GameView4;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
