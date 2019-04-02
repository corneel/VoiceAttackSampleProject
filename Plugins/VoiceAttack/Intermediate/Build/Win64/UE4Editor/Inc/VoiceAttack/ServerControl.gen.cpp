// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoiceAttack/Public/ServerControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerControl() {}
// Cross Module References
	VOICEATTACK_API UClass* Z_Construct_UClass_AServerControl_NoRegister();
	VOICEATTACK_API UClass* Z_Construct_UClass_AServerControl();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VoiceAttack();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_AServerControl_ClearMessage();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_AServerControl_GetMessage();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_AServerControl_SendMessage();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_AServerControl_SetMessage();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_AServerControl_StartRunning();
// End Cross Module References
	void AServerControl::StaticRegisterNativesAServerControl()
	{
		UClass* Class = AServerControl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMessage", &AServerControl::execClearMessage },
			{ "GetMessage", &AServerControl::execGetMessage },
			{ "SendMessage", &AServerControl::execSendMessage },
			{ "SetMessage", &AServerControl::execSetMessage },
			{ "StartRunning", &AServerControl::execStartRunning },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AServerControl_ClearMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AServerControl_ClearMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPServer" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AServerControl_ClearMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AServerControl, nullptr, "ClearMessage", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AServerControl_ClearMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AServerControl_ClearMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AServerControl_ClearMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AServerControl_ClearMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AServerControl_GetMessage_Statics
	{
		struct ServerControl_eventGetMessage_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AServerControl_GetMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerControl_eventGetMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AServerControl_GetMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AServerControl_GetMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AServerControl_GetMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPServer" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AServerControl_GetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AServerControl, nullptr, "GetMessage", sizeof(ServerControl_eventGetMessage_Parms), Z_Construct_UFunction_AServerControl_GetMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AServerControl_GetMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AServerControl_GetMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AServerControl_GetMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AServerControl_GetMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AServerControl_GetMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AServerControl_SendMessage_Statics
	{
		struct ServerControl_eventSendMessage_Parms
		{
			FString message;
			FString messageOut;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_messageOut;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ServerControl_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ServerControl_eventSendMessage_Parms), &Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_messageOut = { "messageOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerControl_eventSendMessage_Parms, messageOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerControl_eventSendMessage_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AServerControl_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_messageOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AServerControl_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPServer" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AServerControl_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AServerControl, nullptr, "SendMessage", sizeof(ServerControl_eventSendMessage_Parms), Z_Construct_UFunction_AServerControl_SendMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AServerControl_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AServerControl_SendMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AServerControl_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AServerControl_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AServerControl_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AServerControl_SetMessage_Statics
	{
		struct ServerControl_eventSetMessage_Parms
		{
			FString message;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AServerControl_SetMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerControl_eventSetMessage_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AServerControl_SetMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AServerControl_SetMessage_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AServerControl_SetMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPServer" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AServerControl_SetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AServerControl, nullptr, "SetMessage", sizeof(ServerControl_eventSetMessage_Parms), Z_Construct_UFunction_AServerControl_SetMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AServerControl_SetMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AServerControl_SetMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AServerControl_SetMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AServerControl_SetMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AServerControl_SetMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AServerControl_StartRunning_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AServerControl_StartRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPServer" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AServerControl_StartRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AServerControl, nullptr, "StartRunning", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AServerControl_StartRunning_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AServerControl_StartRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AServerControl_StartRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AServerControl_StartRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AServerControl_NoRegister()
	{
		return AServerControl::StaticClass();
	}
	struct Z_Construct_UClass_AServerControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_setPortNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_setPortNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_setIpAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_setIpAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_setConnectionTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_setConnectionTimeout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AServerControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AServerControl_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AServerControl_ClearMessage, "ClearMessage" }, // 3380268375
		{ &Z_Construct_UFunction_AServerControl_GetMessage, "GetMessage" }, // 1675977221
		{ &Z_Construct_UFunction_AServerControl_SendMessage, "SendMessage" }, // 2678485239
		{ &Z_Construct_UFunction_AServerControl_SetMessage, "SetMessage" }, // 3094980982
		{ &Z_Construct_UFunction_AServerControl_StartRunning, "StartRunning" }, // 1760350379
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerControl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ServerControl.h" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerControl_Statics::NewProp_setPortNum_MetaData[] = {
		{ "Category", "TCPServer" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AServerControl_Statics::NewProp_setPortNum = { "setPortNum", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerControl, setPortNum), METADATA_PARAMS(Z_Construct_UClass_AServerControl_Statics::NewProp_setPortNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerControl_Statics::NewProp_setPortNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerControl_Statics::NewProp_setIpAddress_MetaData[] = {
		{ "Category", "TCPServer" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AServerControl_Statics::NewProp_setIpAddress = { "setIpAddress", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerControl, setIpAddress), METADATA_PARAMS(Z_Construct_UClass_AServerControl_Statics::NewProp_setIpAddress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerControl_Statics::NewProp_setIpAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerControl_Statics::NewProp_setConnectionTimeout_MetaData[] = {
		{ "Category", "TCPServer" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AServerControl_Statics::NewProp_setConnectionTimeout = { "setConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerControl, setConnectionTimeout), METADATA_PARAMS(Z_Construct_UClass_AServerControl_Statics::NewProp_setConnectionTimeout_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerControl_Statics::NewProp_setConnectionTimeout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AServerControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerControl_Statics::NewProp_setPortNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerControl_Statics::NewProp_setIpAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerControl_Statics::NewProp_setConnectionTimeout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AServerControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AServerControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AServerControl_Statics::ClassParams = {
		&AServerControl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AServerControl_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AServerControl_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AServerControl_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AServerControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AServerControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AServerControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AServerControl, 3234538989);
	template<> VOICEATTACK_API UClass* StaticClass<AServerControl>()
	{
		return AServerControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AServerControl(Z_Construct_UClass_AServerControl, &AServerControl::StaticClass, TEXT("/Script/VoiceAttack"), TEXT("AServerControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AServerControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
