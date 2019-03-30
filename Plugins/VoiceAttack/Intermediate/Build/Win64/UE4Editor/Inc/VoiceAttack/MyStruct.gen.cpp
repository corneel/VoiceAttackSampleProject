// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoiceAttack/Private/MyStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStruct() {}
// Cross Module References
	VOICEATTACK_API UScriptStruct* Z_Construct_UScriptStruct_FMyStruct();
	UPackage* Z_Construct_UPackage__Script_VoiceAttack();
	VOICEATTACK_API UClass* Z_Construct_UClass_UFSocket_NoRegister();
// End Cross Module References
class UScriptStruct* FMyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOICEATTACK_API uint32 Get_Z_Construct_UScriptStruct_FMyStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyStruct, Z_Construct_UPackage__Script_VoiceAttack(), TEXT("MyStruct"), sizeof(FMyStruct), Get_Z_Construct_UScriptStruct_FMyStruct_Hash());
	}
	return Singleton;
}
template<> VOICEATTACK_API UScriptStruct* StaticStruct<FMyStruct>()
{
	return FMyStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMyStruct(FMyStruct::StaticStruct, TEXT("/Script/VoiceAttack"), TEXT("MyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_VoiceAttack_StaticRegisterNativesFMyStruct
{
	FScriptStruct_VoiceAttack_StaticRegisterNativesFMyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MyStruct")),new UScriptStruct::TCppStructOps<FMyStruct>);
	}
} ScriptStruct_VoiceAttack_StaticRegisterNativesFMyStruct;
	struct Z_Construct_UScriptStruct_FMyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Socket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/MyStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_Socket_MetaData[] = {
		{ "Category", "MyStruct" },
		{ "ModuleRelativePath", "Private/MyStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyStruct, Socket), Z_Construct_UClass_UFSocket_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_Socket_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_Socket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_Socket,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttack,
		nullptr,
		&NewStructOps,
		"MyStruct",
		sizeof(FMyStruct),
		alignof(FMyStruct),
		Z_Construct_UScriptStruct_FMyStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMyStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMyStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoiceAttack();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MyStruct"), sizeof(FMyStruct), Get_Z_Construct_UScriptStruct_FMyStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMyStruct_Hash() { return 3646509739U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
