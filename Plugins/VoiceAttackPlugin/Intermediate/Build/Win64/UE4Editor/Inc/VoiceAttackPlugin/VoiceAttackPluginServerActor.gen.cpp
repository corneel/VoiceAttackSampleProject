// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoiceAttackPlugin/Public/VoiceAttackPluginServerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceAttackPluginServerActor() {}
// Cross Module References
	VOICEATTACKPLUGIN_API UClass* Z_Construct_UClass_AVoiceAttackPluginServerActor_NoRegister();
	VOICEATTACKPLUGIN_API UClass* Z_Construct_UClass_AVoiceAttackPluginServerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VoiceAttackPlugin();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_AVoiceAttackPluginServerActor_ClearMessage();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_AVoiceAttackPluginServerActor_StartRunning();
// End Cross Module References
	void AVoiceAttackPluginServerActor::StaticRegisterNativesAVoiceAttackPluginServerActor()
	{
		UClass* Class = AVoiceAttackPluginServerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMessage", &AVoiceAttackPluginServerActor::execClearMessage },
			{ "GetMessage", &AVoiceAttackPluginServerActor::execGetMessage },
			{ "SendMessage", &AVoiceAttackPluginServerActor::execSendMessage },
			{ "SetMessage", &AVoiceAttackPluginServerActor::execSetMessage },
			{ "StartRunning", &AVoiceAttackPluginServerActor::execStartRunning },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVoiceAttackPluginServerActor_ClearMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceAttackPluginServerActor_ClearMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttackTCPServer" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginServerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceAttackPluginServerActor_ClearMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceAttackPluginServerActor, nullptr, "ClearMessage", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceAttackPluginServerActor_ClearMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVoiceAttackPluginServerActor_ClearMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceAttackPluginServerActor_ClearMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoiceAttackPluginServerActor_ClearMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage_Statics
	{
		struct VoiceAttackPluginServerActor_eventGetMessage_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginServerActor_eventGetMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttackTCPServer" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginServerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceAttackPluginServerActor, nullptr, "GetMessage", sizeof(VoiceAttackPluginServerActor_eventGetMessage_Parms), Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics
	{
		struct VoiceAttackPluginServerActor_eventSendMessage_Parms
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
	void Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceAttackPluginServerActor_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackPluginServerActor_eventSendMessage_Parms), &Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::NewProp_messageOut = { "messageOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginServerActor_eventSendMessage_Parms, messageOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginServerActor_eventSendMessage_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::NewProp_messageOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttackTCPServer" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginServerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceAttackPluginServerActor, nullptr, "SendMessage", sizeof(VoiceAttackPluginServerActor_eventSendMessage_Parms), Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage_Statics
	{
		struct VoiceAttackPluginServerActor_eventSetMessage_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginServerActor_eventSetMessage_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttackTCPServer" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginServerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceAttackPluginServerActor, nullptr, "SetMessage", sizeof(VoiceAttackPluginServerActor_eventSetMessage_Parms), Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceAttackPluginServerActor_StartRunning_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceAttackPluginServerActor_StartRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttackTCPServer" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginServerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceAttackPluginServerActor_StartRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceAttackPluginServerActor, nullptr, "StartRunning", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceAttackPluginServerActor_StartRunning_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVoiceAttackPluginServerActor_StartRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceAttackPluginServerActor_StartRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoiceAttackPluginServerActor_StartRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVoiceAttackPluginServerActor_NoRegister()
	{
		return AVoiceAttackPluginServerActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics
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
	UObject* (*const Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttackPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoiceAttackPluginServerActor_ClearMessage, "ClearMessage" }, // 1148787359
		{ &Z_Construct_UFunction_AVoiceAttackPluginServerActor_GetMessage, "GetMessage" }, // 3652672988
		{ &Z_Construct_UFunction_AVoiceAttackPluginServerActor_SendMessage, "SendMessage" }, // 1533813772
		{ &Z_Construct_UFunction_AVoiceAttackPluginServerActor_SetMessage, "SetMessage" }, // 23815929
		{ &Z_Construct_UFunction_AVoiceAttackPluginServerActor_StartRunning, "StartRunning" }, // 451936269
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoiceAttackPluginServerActor.h" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginServerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setPortNum_MetaData[] = {
		{ "Category", "VoiceAttackTCPServer" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginServerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setPortNum = { "setPortNum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoiceAttackPluginServerActor, setPortNum), METADATA_PARAMS(Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setPortNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setPortNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setIpAddress_MetaData[] = {
		{ "Category", "VoiceAttackTCPServer" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginServerActor.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"VoiceAttackTCPServer\")\n       AActor* GuestActor;" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setIpAddress = { "setIpAddress", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoiceAttackPluginServerActor, setIpAddress), METADATA_PARAMS(Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setIpAddress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setIpAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setConnectionTimeout_MetaData[] = {
		{ "Category", "VoiceAttackTCPServer" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginServerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setConnectionTimeout = { "setConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoiceAttackPluginServerActor, setConnectionTimeout), METADATA_PARAMS(Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setConnectionTimeout_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setConnectionTimeout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setPortNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setIpAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::NewProp_setConnectionTimeout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoiceAttackPluginServerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::ClassParams = {
		&AVoiceAttackPluginServerActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoiceAttackPluginServerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoiceAttackPluginServerActor, 2931166047);
	template<> VOICEATTACKPLUGIN_API UClass* StaticClass<AVoiceAttackPluginServerActor>()
	{
		return AVoiceAttackPluginServerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoiceAttackPluginServerActor(Z_Construct_UClass_AVoiceAttackPluginServerActor, &AVoiceAttackPluginServerActor::StaticClass, TEXT("/Script/VoiceAttackPlugin"), TEXT("AVoiceAttackPluginServerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoiceAttackPluginServerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
