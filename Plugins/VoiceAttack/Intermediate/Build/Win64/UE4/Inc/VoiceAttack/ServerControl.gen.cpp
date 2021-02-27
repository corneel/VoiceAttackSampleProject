// Copyright Epic Games, Inc. All Rights Reserved.
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
// End Cross Module References
	DEFINE_FUNCTION(AServerControl::execSendMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_messageOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendMessage(Z_Param_message,Z_Param_Out_messageOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AServerControl::execClearMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMessage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AServerControl::execGetMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMessage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AServerControl::execSetMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMessage(Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AServerControl::execStartRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRunning();
		P_NATIVE_END;
	}
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
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AServerControl_ClearMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AServerControl, nullptr, "ClearMessage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AServerControl_ClearMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AServerControl_ClearMessage_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AServerControl_GetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AServerControl, nullptr, "GetMessage", nullptr, nullptr, sizeof(ServerControl_eventGetMessage_Parms), Z_Construct_UFunction_AServerControl_GetMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AServerControl_GetMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AServerControl_GetMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AServerControl_GetMessage_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_messageOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerControl_eventSendMessage_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_messageOut = { "messageOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerControl_eventSendMessage_Parms, messageOut), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ServerControl_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ServerControl_eventSendMessage_Parms), &Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AServerControl_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_messageOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AServerControl_SendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AServerControl_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "TCPServer" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AServerControl_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AServerControl, nullptr, "SendMessage", nullptr, nullptr, sizeof(ServerControl_eventSendMessage_Parms), Z_Construct_UFunction_AServerControl_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AServerControl_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AServerControl_SendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AServerControl_SendMessage_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AServerControl_SetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AServerControl, nullptr, "SetMessage", nullptr, nullptr, sizeof(ServerControl_eventSetMessage_Parms), Z_Construct_UFunction_AServerControl_SetMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AServerControl_SetMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AServerControl_SetMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AServerControl_SetMessage_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AServerControl_StartRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AServerControl, nullptr, "StartRunning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AServerControl_StartRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AServerControl_StartRunning_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_setConnectionTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_setConnectionTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_setIpAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_setIpAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_setPortNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_setPortNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AServerControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AServerControl_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AServerControl_ClearMessage, "ClearMessage" }, // 3851841578
		{ &Z_Construct_UFunction_AServerControl_GetMessage, "GetMessage" }, // 2834225526
		{ &Z_Construct_UFunction_AServerControl_SendMessage, "SendMessage" }, // 3805496549
		{ &Z_Construct_UFunction_AServerControl_SetMessage, "SetMessage" }, // 1032324629
		{ &Z_Construct_UFunction_AServerControl_StartRunning, "StartRunning" }, // 1997221344
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerControl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ServerControl.h" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerControl_Statics::NewProp_setConnectionTimeout_MetaData[] = {
		{ "Category", "TCPServer" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AServerControl_Statics::NewProp_setConnectionTimeout = { "setConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerControl, setConnectionTimeout), METADATA_PARAMS(Z_Construct_UClass_AServerControl_Statics::NewProp_setConnectionTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerControl_Statics::NewProp_setConnectionTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerControl_Statics::NewProp_setIpAddress_MetaData[] = {
		{ "Category", "TCPServer" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AServerControl_Statics::NewProp_setIpAddress = { "setIpAddress", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerControl, setIpAddress), METADATA_PARAMS(Z_Construct_UClass_AServerControl_Statics::NewProp_setIpAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerControl_Statics::NewProp_setIpAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerControl_Statics::NewProp_setPortNum_MetaData[] = {
		{ "Category", "TCPServer" },
		{ "ModuleRelativePath", "Public/ServerControl.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AServerControl_Statics::NewProp_setPortNum = { "setPortNum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerControl, setPortNum), METADATA_PARAMS(Z_Construct_UClass_AServerControl_Statics::NewProp_setPortNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerControl_Statics::NewProp_setPortNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AServerControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerControl_Statics::NewProp_setConnectionTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerControl_Statics::NewProp_setIpAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerControl_Statics::NewProp_setPortNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AServerControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AServerControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AServerControl_Statics::ClassParams = {
		&AServerControl::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AServerControl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AServerControl_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AServerControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AServerControl_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(AServerControl, 85669656);
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
