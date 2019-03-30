// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoiceAttack/Public/VoiceAttackBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceAttackBPLibrary() {}
// Cross Module References
	VOICEATTACK_API UClass* Z_Construct_UClass_USocket_NoRegister();
	VOICEATTACK_API UClass* Z_Construct_UClass_USocket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VoiceAttack();
	VOICEATTACK_API UClass* Z_Construct_UClass_UVoiceAttackSocketBPLibrary_NoRegister();
	VOICEATTACK_API UClass* Z_Construct_UClass_UVoiceAttackSocketBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage();
	VOICEATTACK_API UClass* Z_Construct_UClass_UJSONHandle_NoRegister();
	VOICEATTACK_API UClass* Z_Construct_UClass_UJSONHandle();
	VOICEATTACK_API UClass* Z_Construct_UClass_UJSONHandleArray_NoRegister();
	VOICEATTACK_API UClass* Z_Construct_UClass_UJSONHandleArray();
	VOICEATTACK_API UClass* Z_Construct_UClass_UVoiceAttackBPLibrary_NoRegister();
	VOICEATTACK_API UClass* Z_Construct_UClass_UVoiceAttackBPLibrary();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS();
// End Cross Module References
	void USocket::StaticRegisterNativesUSocket()
	{
	}
	UClass* Z_Construct_UClass_USocket_NoRegister()
	{
		return USocket::StaticClass();
	}
	struct Z_Construct_UClass_USocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoiceAttackBPLibrary.h" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocket_Statics::ClassParams = {
		&USocket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USocket_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocket, 792682699);
	template<> VOICEATTACK_API UClass* StaticClass<USocket>()
	{
		return USocket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocket(Z_Construct_UClass_USocket, &USocket::StaticClass, TEXT("/Script/VoiceAttack"), TEXT("USocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocket);
	void UVoiceAttackSocketBPLibrary::StaticRegisterNativesUVoiceAttackSocketBPLibrary()
	{
		UClass* Class = UVoiceAttackSocketBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseConnection", &UVoiceAttackSocketBPLibrary::execCloseConnection },
			{ "Connect", &UVoiceAttackSocketBPLibrary::execConnect },
			{ "GetMessage", &UVoiceAttackSocketBPLibrary::execGetMessage },
			{ "HasPendingData", &UVoiceAttackSocketBPLibrary::execHasPendingData },
			{ "SendMessage", &UVoiceAttackSocketBPLibrary::execSendMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics
	{
		struct VoiceAttackSocketBPLibrary_eventCloseConnection_Parms
		{
			USocket* Connection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceAttackSocketBPLibrary_eventCloseConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackSocketBPLibrary_eventCloseConnection_Parms), &Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackSocketBPLibrary_eventCloseConnection_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "Close TCP connection" },
		{ "Keywords", "Socket close connection" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackSocketBPLibrary, nullptr, "CloseConnection", sizeof(VoiceAttackSocketBPLibrary_eventCloseConnection_Parms), Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics
	{
		struct VoiceAttackSocketBPLibrary_eventConnect_Parms
		{
			FString IP;
			int32 port;
			bool success;
			USocket* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackSocketBPLibrary_eventConnect_Parms, ReturnValue), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::NewProp_success_SetBit(void* Obj)
	{
		((VoiceAttackSocketBPLibrary_eventConnect_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackSocketBPLibrary_eventConnect_Parms), &Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackSocketBPLibrary_eventConnect_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackSocketBPLibrary_eventConnect_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::NewProp_port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::NewProp_IP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "Connect to a TCP server" },
		{ "Keywords", "Socket tcp connect" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackSocketBPLibrary, nullptr, "Connect", sizeof(VoiceAttackSocketBPLibrary_eventConnect_Parms), Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics
	{
		struct VoiceAttackSocketBPLibrary_eventGetMessage_Parms
		{
			USocket* Connection;
			FString Message;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceAttackSocketBPLibrary_eventGetMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackSocketBPLibrary_eventGetMessage_Parms), &Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackSocketBPLibrary_eventGetMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackSocketBPLibrary_eventGetMessage_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "Get message from server" },
		{ "Keywords", "Socket TCP get" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackSocketBPLibrary, nullptr, "GetMessage", sizeof(VoiceAttackSocketBPLibrary_eventGetMessage_Parms), Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics
	{
		struct VoiceAttackSocketBPLibrary_eventHasPendingData_Parms
		{
			USocket* Connection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceAttackSocketBPLibrary_eventHasPendingData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackSocketBPLibrary_eventHasPendingData_Parms), &Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackSocketBPLibrary_eventHasPendingData_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "HasPendingData" },
		{ "Keywords", "Socket test if there is data to get" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackSocketBPLibrary, nullptr, "HasPendingData", sizeof(VoiceAttackSocketBPLibrary_eventHasPendingData_Parms), Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics
	{
		struct VoiceAttackSocketBPLibrary_eventSendMessage_Parms
		{
			USocket* Connection;
			FString Message;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceAttackSocketBPLibrary_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackSocketBPLibrary_eventSendMessage_Parms), &Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackSocketBPLibrary_eventSendMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackSocketBPLibrary_eventSendMessage_Parms, Connection), Z_Construct_UClass_USocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "Send message to the server" },
		{ "Keywords", "Socket TCP send" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackSocketBPLibrary, nullptr, "SendMessage", sizeof(VoiceAttackSocketBPLibrary_eventSendMessage_Parms), Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoiceAttackSocketBPLibrary_NoRegister()
	{
		return UVoiceAttackSocketBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceAttackSocketBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceAttackSocketBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoiceAttackSocketBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_CloseConnection, "CloseConnection" }, // 411227762
		{ &Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_Connect, "Connect" }, // 3516997720
		{ &Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_GetMessage, "GetMessage" }, // 1223077381
		{ &Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_HasPendingData, "HasPendingData" }, // 894533645
		{ &Z_Construct_UFunction_UVoiceAttackSocketBPLibrary_SendMessage, "SendMessage" }, // 2073988860
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceAttackSocketBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoiceAttackBPLibrary.h" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceAttackSocketBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceAttackSocketBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoiceAttackSocketBPLibrary_Statics::ClassParams = {
		&UVoiceAttackSocketBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoiceAttackSocketBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVoiceAttackSocketBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceAttackSocketBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoiceAttackSocketBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoiceAttackSocketBPLibrary, 2292415408);
	template<> VOICEATTACK_API UClass* StaticClass<UVoiceAttackSocketBPLibrary>()
	{
		return UVoiceAttackSocketBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoiceAttackSocketBPLibrary(Z_Construct_UClass_UVoiceAttackSocketBPLibrary, &UVoiceAttackSocketBPLibrary::StaticClass, TEXT("/Script/VoiceAttack"), TEXT("UVoiceAttackSocketBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceAttackSocketBPLibrary);
	void UJSONHandle::StaticRegisterNativesUJSONHandle()
	{
	}
	UClass* Z_Construct_UClass_UJSONHandle_NoRegister()
	{
		return UJSONHandle::StaticClass();
	}
	struct Z_Construct_UClass_UJSONHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJSONHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJSONHandle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoiceAttackBPLibrary.h" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJSONHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJSONHandle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJSONHandle_Statics::ClassParams = {
		&UJSONHandle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJSONHandle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UJSONHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJSONHandle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJSONHandle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJSONHandle, 2036986651);
	template<> VOICEATTACK_API UClass* StaticClass<UJSONHandle>()
	{
		return UJSONHandle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJSONHandle(Z_Construct_UClass_UJSONHandle, &UJSONHandle::StaticClass, TEXT("/Script/VoiceAttack"), TEXT("UJSONHandle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJSONHandle);
	void UJSONHandleArray::StaticRegisterNativesUJSONHandleArray()
	{
	}
	UClass* Z_Construct_UClass_UJSONHandleArray_NoRegister()
	{
		return UJSONHandleArray::StaticClass();
	}
	struct Z_Construct_UClass_UJSONHandleArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJSONHandleArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJSONHandleArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoiceAttackBPLibrary.h" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJSONHandleArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJSONHandleArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJSONHandleArray_Statics::ClassParams = {
		&UJSONHandleArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJSONHandleArray_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UJSONHandleArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJSONHandleArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJSONHandleArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJSONHandleArray, 1820079901);
	template<> VOICEATTACK_API UClass* StaticClass<UJSONHandleArray>()
	{
		return UJSONHandleArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJSONHandleArray(Z_Construct_UClass_UJSONHandleArray, &UJSONHandleArray::StaticClass, TEXT("/Script/VoiceAttack"), TEXT("UJSONHandleArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJSONHandleArray);
	void UVoiceAttackBPLibrary::StaticRegisterNativesUVoiceAttackBPLibrary()
	{
		UClass* Class = UVoiceAttackBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartTCPReceiver", &UVoiceAttackBPLibrary::execStartTCPReceiver },
			{ "TCPConnectionListener", &UVoiceAttackBPLibrary::execTCPConnectionListener },
			{ "VoiceAttackAddJSONArrayToArray", &UVoiceAttackBPLibrary::execVoiceAttackAddJSONArrayToArray },
			{ "VoiceAttackAddJSONArrayToObject", &UVoiceAttackBPLibrary::execVoiceAttackAddJSONArrayToObject },
			{ "VoiceAttackAddJSONElement", &UVoiceAttackBPLibrary::execVoiceAttackAddJSONElement },
			{ "VoiceAttackAddJSONNumericElement", &UVoiceAttackBPLibrary::execVoiceAttackAddJSONNumericElement },
			{ "VoiceAttackAddJSONObject", &UVoiceAttackBPLibrary::execVoiceAttackAddJSONObject },
			{ "VoiceAttackAddJSONObjectToArray", &UVoiceAttackBPLibrary::execVoiceAttackAddJSONObjectToArray },
			{ "VoiceAttackGetJSONElement", &UVoiceAttackBPLibrary::execVoiceAttackGetJSONElement },
			{ "VoiceAttackGetJSONElementMultiple", &UVoiceAttackBPLibrary::execVoiceAttackGetJSONElementMultiple },
			{ "VoiceAttackGetJSONNumericElement", &UVoiceAttackBPLibrary::execVoiceAttackGetJSONNumericElement },
			{ "VoiceAttackGetJSONObject", &UVoiceAttackBPLibrary::execVoiceAttackGetJSONObject },
			{ "VoiceAttackGetJSONObjectFromArray", &UVoiceAttackBPLibrary::execVoiceAttackGetJSONObjectFromArray },
			{ "VoiceAttackListVoices", &UVoiceAttackBPLibrary::execVoiceAttackListVoices },
			{ "VoiceAttackNewJSONObject", &UVoiceAttackBPLibrary::execVoiceAttackNewJSONObject },
			{ "VoiceAttackNewJSONObjectArray", &UVoiceAttackBPLibrary::execVoiceAttackNewJSONObjectArray },
			{ "VoiceAttackParseFile", &UVoiceAttackBPLibrary::execVoiceAttackParseFile },
			{ "VoiceAttackParseMultiple", &UVoiceAttackBPLibrary::execVoiceAttackParseMultiple },
			{ "VoiceAttackParseString", &UVoiceAttackBPLibrary::execVoiceAttackParseString },
			{ "VoiceAttackSerializeJSONObject", &UVoiceAttackBPLibrary::execVoiceAttackSerializeJSONObject },
			{ "VoiceAttackSerializeJSONObjectArray", &UVoiceAttackBPLibrary::execVoiceAttackSerializeJSONObjectArray },
			{ "VoiceAttackTTS", &UVoiceAttackBPLibrary::execVoiceAttackTTS },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics
	{
		struct VoiceAttackBPLibrary_eventStartTCPReceiver_Parms
		{
			FString YourChosenSocketName;
			FString TheIP;
			int32 ThePort;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThePort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThePort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TheIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YourChosenSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_YourChosenSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceAttackBPLibrary_eventStartTCPReceiver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackBPLibrary_eventStartTCPReceiver_Parms), &Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_ThePort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_ThePort = { "ThePort", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventStartTCPReceiver_Parms, ThePort), METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_ThePort_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_ThePort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_TheIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_TheIP = { "TheIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventStartTCPReceiver_Parms, TheIP), METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_TheIP_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_TheIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_YourChosenSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_YourChosenSocketName = { "YourChosenSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventStartTCPReceiver_Parms, YourChosenSocketName), METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_YourChosenSocketName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_YourChosenSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_ThePort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_TheIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::NewProp_YourChosenSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "StartTCPReceiver" },
		{ "Keywords", "VoiceAttack Start TCP Receiver" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "StartTCPReceiver", sizeof(VoiceAttackBPLibrary_eventStartTCPReceiver_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener_Statics
	{
		struct VoiceAttackBPLibrary_eventTCPConnectionListener_Parms
		{
			FString Message;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventTCPConnectionListener_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "TCPConnectionListener" },
		{ "Keywords", "VoiceAttack TCP Connection Listener" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "TCPConnectionListener", sizeof(VoiceAttackBPLibrary_eventTCPConnectionListener_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms
		{
			UJSONHandleArray* JSONHandleArray;
			FString Name;
			UJSONHandleArray* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandleArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms, Value), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_JSONHandleArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONArrayToArray" },
		{ "Keywords", "VoiceAttack Add Array to JSON Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackAddJSONArrayToArray", sizeof(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms
		{
			UJSONHandle* JSONHandle;
			FString Name;
			UJSONHandleArray* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms, Value), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONArrayToObject" },
		{ "Keywords", "VoiceAttack Add Array to JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackAddJSONArrayToObject", sizeof(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackAddJSONElement_Parms
		{
			UJSONHandle* JSONHandle;
			FString Name;
			FString Value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONElement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONElement_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONElement_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONElement" },
		{ "Keywords", "VoiceAttack Add JSON Element String" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackAddJSONElement", sizeof(VoiceAttackBPLibrary_eventVoiceAttackAddJSONElement_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms
		{
			UJSONHandle* JSONHandle;
			FString Name;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONNumericElement" },
		{ "Keywords", "VoiceAttack Add JSON Numeric Element" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackAddJSONNumericElement", sizeof(VoiceAttackBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackAddJSONObject_Parms
		{
			UJSONHandle* JSONHandle;
			FString Name;
			UJSONHandle* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObject_Parms, Value), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObject_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObject_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONObject" },
		{ "Keywords", "VoiceAttack Add JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackAddJSONObject", sizeof(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObject_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackAddJSONObjectToArray_Parms
		{
			UJSONHandleArray* JSONHandleArray;
			UJSONHandle* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandleArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObjectToArray_Parms, Value), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObjectToArray_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::NewProp_JSONHandleArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONObjectToArray" },
		{ "Keywords", "VoiceAttack Add JSON Object To Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackAddJSONObjectToArray", sizeof(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObjectToArray_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackGetJSONElement_Parms
		{
			UJSONHandle* JSONHandle;
			FString Name;
			FString Value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElement_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElement_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONElement" },
		{ "Keywords", "VoiceAttack Get JSON Element" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackGetJSONElement", sizeof(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElement_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms
		{
			UJSONHandleArray* JSONHandleArray;
			int32 Index;
			FString Name;
			FString Value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandleArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_JSONHandleArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONElement" },
		{ "Keywords", "VoiceAttack Get JSON Element from object array" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackGetJSONElementMultiple", sizeof(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms
		{
			UJSONHandle* JSONHandle;
			FString Name;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONNumericElement" },
		{ "Keywords", "VoiceAttack Get JSON Numeric Element" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackGetJSONNumericElement", sizeof(VoiceAttackBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackGetJSONObject_Parms
		{
			UJSONHandle* JSONHandle;
			FString Name;
			UJSONHandle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObject_Parms, ReturnValue), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObject_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObject_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONObject" },
		{ "Keywords", "VoiceAttack Get JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackGetJSONObject", sizeof(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObject_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms
		{
			UJSONHandleArray* JSONHandleArray;
			int32 Index;
			bool Success;
			UJSONHandle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandleArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms, ReturnValue), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms), &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_JSONHandleArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONObjectFromArray" },
		{ "Keywords", "VoiceAttack Get JSONObject From Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackGetJSONObjectFromArray", sizeof(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackListVoices_Parms
		{
			TArray<FString> Voices;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Voices;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Voices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics::NewProp_Voices = { "Voices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackListVoices_Parms, Voices), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics::NewProp_Voices_Inner = { "Voices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics::NewProp_Voices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics::NewProp_Voices_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackListVoices" },
		{ "Keywords", "VoiceAttack ListVoices" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackListVoices", sizeof(VoiceAttackBPLibrary_eventVoiceAttackListVoices_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackNewJSONObject_Parms
		{
			UJSONHandle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackNewJSONObject_Parms, ReturnValue), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackNewJSONObject" },
		{ "Keywords", "VoiceAttack New JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackNewJSONObject", sizeof(VoiceAttackBPLibrary_eventVoiceAttackNewJSONObject_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackNewJSONObjectArray_Parms
		{
			UJSONHandleArray* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackNewJSONObjectArray_Parms, ReturnValue), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackNewJSONObjectArray" },
		{ "Keywords", "VoiceAttack New JSON Object Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackNewJSONObjectArray", sizeof(VoiceAttackBPLibrary_eventVoiceAttackNewJSONObjectArray_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackParseFile_Parms
		{
			FString FileName;
			int32 ElementCount;
			bool Success;
			UJSONHandleArray* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ElementCount;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseFile_Parms, ReturnValue), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackBPLibrary_eventVoiceAttackParseFile_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackBPLibrary_eventVoiceAttackParseFile_Parms), &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::NewProp_ElementCount = { "ElementCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseFile_Parms, ElementCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::NewProp_ElementCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackParseFile" },
		{ "Keywords", "VoiceAttack Parse Content of Text File" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackParseFile", sizeof(VoiceAttackBPLibrary_eventVoiceAttackParseFile_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms
		{
			FString JSONString;
			int32 ElementCount;
			bool Success;
			UJSONHandleArray* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ElementCount;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JSONString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms, ReturnValue), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms), &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_ElementCount = { "ElementCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms, ElementCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms, JSONString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_ElementCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_JSONString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackParseMultiple" },
		{ "Keywords", "VoiceAttack Parse Multiple" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackParseMultiple", sizeof(VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackParseString_Parms
		{
			UJSONHandle* JSONHandle;
			FString JSONString;
			bool Success;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JSONString;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackBPLibrary_eventVoiceAttackParseString_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackBPLibrary_eventVoiceAttackParseString_Parms), &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseString_Parms, JSONString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseString_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_JSONString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackParseString" },
		{ "Keywords", "VoiceAttack Parse String" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackParseString", sizeof(VoiceAttackBPLibrary_eventVoiceAttackParseString_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObject_Parms
		{
			UJSONHandle* JSONHandle;
			FString Value;
			bool Success;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObject_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObject_Parms), &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObject_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObject_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackSerializeJSONObject" },
		{ "Keywords", "VoiceAttack Serialize JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackSerializeJSONObject", sizeof(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObject_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms
		{
			UJSONHandleArray* JSONHandleArray;
			FString Value;
			bool Success;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandleArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms), &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_JSONHandleArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackSerializeJSONObjectArray" },
		{ "Keywords", "VoiceAttack Serialize JSON Object Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackSerializeJSONObjectArray", sizeof(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackTTS_Parms
		{
			FString Value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackTTS_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackTTS" },
		{ "Keywords", "VoiceAttack TTS" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackTTS", sizeof(VoiceAttackBPLibrary_eventVoiceAttackTTS_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoiceAttackBPLibrary_NoRegister()
	{
		return UVoiceAttackBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceAttackBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceAttackBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoiceAttackBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_StartTCPReceiver, "StartTCPReceiver" }, // 770042333
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_TCPConnectionListener, "TCPConnectionListener" }, // 1222918909
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray, "VoiceAttackAddJSONArrayToArray" }, // 1518550860
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject, "VoiceAttackAddJSONArrayToObject" }, // 284471251
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement, "VoiceAttackAddJSONElement" }, // 527685120
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement, "VoiceAttackAddJSONNumericElement" }, // 2486017793
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject, "VoiceAttackAddJSONObject" }, // 1965893971
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray, "VoiceAttackAddJSONObjectToArray" }, // 1138770876
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement, "VoiceAttackGetJSONElement" }, // 3880220733
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple, "VoiceAttackGetJSONElementMultiple" }, // 435415618
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement, "VoiceAttackGetJSONNumericElement" }, // 303662569
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject, "VoiceAttackGetJSONObject" }, // 964850163
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray, "VoiceAttackGetJSONObjectFromArray" }, // 238211573
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackListVoices, "VoiceAttackListVoices" }, // 2825497328
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject, "VoiceAttackNewJSONObject" }, // 2106346665
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray, "VoiceAttackNewJSONObjectArray" }, // 2182567680
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseFile, "VoiceAttackParseFile" }, // 1576709617
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple, "VoiceAttackParseMultiple" }, // 1191210428
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString, "VoiceAttackParseString" }, // 1545360563
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject, "VoiceAttackSerializeJSONObject" }, // 616076724
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray, "VoiceAttackSerializeJSONObjectArray" }, // 4040500296
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackTTS, "VoiceAttackTTS" }, // 4277945802
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceAttackBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoiceAttackBPLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceAttackBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceAttackBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoiceAttackBPLibrary_Statics::ClassParams = {
		&UVoiceAttackBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoiceAttackBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVoiceAttackBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceAttackBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoiceAttackBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoiceAttackBPLibrary, 1156984527);
	template<> VOICEATTACK_API UClass* StaticClass<UVoiceAttackBPLibrary>()
	{
		return UVoiceAttackBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoiceAttackBPLibrary(Z_Construct_UClass_UVoiceAttackBPLibrary, &UVoiceAttackBPLibrary::StaticClass, TEXT("/Script/VoiceAttack"), TEXT("UVoiceAttackBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceAttackBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
