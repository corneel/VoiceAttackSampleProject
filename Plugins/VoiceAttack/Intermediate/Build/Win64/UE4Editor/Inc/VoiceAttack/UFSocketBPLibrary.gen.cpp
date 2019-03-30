// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoiceAttack/Public/UFSocketBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUFSocketBPLibrary() {}
// Cross Module References
	VOICEATTACK_API UClass* Z_Construct_UClass_UFSocketBPLibrary_NoRegister();
	VOICEATTACK_API UClass* Z_Construct_UClass_UFSocketBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VoiceAttack();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection();
	VOICEATTACK_API UClass* Z_Construct_UClass_UFSocket_NoRegister();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UFSocketBPLibrary_Connect();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UFSocketBPLibrary_GetMessage();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UFSocketBPLibrary_SendMessage();
	VOICEATTACK_API UFunction* Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket();
// End Cross Module References
	void UFSocketBPLibrary::StaticRegisterNativesUFSocketBPLibrary()
	{
		UClass* Class = UFSocketBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseConnection", &UFSocketBPLibrary::execCloseConnection },
			{ "Connect", &UFSocketBPLibrary::execConnect },
			{ "GetMessage", &UFSocketBPLibrary::execGetMessage },
			{ "HasPendingData", &UFSocketBPLibrary::execHasPendingData },
			{ "ReadConfig", &UFSocketBPLibrary::execReadConfig },
			{ "SendMessage", &UFSocketBPLibrary::execSendMessage },
			{ "ValidateSocket", &UFSocketBPLibrary::execValidateSocket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics
	{
		struct FSocketBPLibrary_eventCloseConnection_Parms
		{
			UFSocket* Connection;
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
	void Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FSocketBPLibrary_eventCloseConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSocketBPLibrary_eventCloseConnection_Parms), &Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventCloseConnection_Parms, Connection), Z_Construct_UClass_UFSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Sockets" },
		{ "DisplayName", "Close connection to TCP server" },
		{ "Keywords", "Sockets disconnect close tcpclose tcp tcpdisconnect socketdisconnect" },
		{ "ModuleRelativePath", "Public/UFSocketBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSocketBPLibrary, nullptr, "CloseConnection", sizeof(FSocketBPLibrary_eventCloseConnection_Parms), Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics
	{
		struct FSocketBPLibrary_eventConnect_Parms
		{
			FString IP;
			int32 port;
			bool success;
			UFSocket* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventConnect_Parms, ReturnValue), Z_Construct_UClass_UFSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FSocketBPLibrary_eventConnect_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSocketBPLibrary_eventConnect_Parms), &Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventConnect_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventConnect_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::NewProp_port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::NewProp_IP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Sockets" },
		{ "DisplayName", "Connect to a TCP server" },
		{ "Keywords", "Sockets connect tcp tcpconnect socketconnect" },
		{ "ModuleRelativePath", "Public/UFSocketBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSocketBPLibrary, nullptr, "Connect", sizeof(FSocketBPLibrary_eventConnect_Parms), Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSocketBPLibrary_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSocketBPLibrary_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics
	{
		struct FSocketBPLibrary_eventGetMessage_Parms
		{
			UFSocket* Connection;
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
	void Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FSocketBPLibrary_eventGetMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSocketBPLibrary_eventGetMessage_Parms), &Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventGetMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventGetMessage_Parms, Connection), Z_Construct_UClass_UFSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Sockets" },
		{ "DisplayName", "Get buffer (converted to FText) from server" },
		{ "Keywords", "Sockets send message tcpsend tcp tcpdisconnect socketsend" },
		{ "ModuleRelativePath", "Public/UFSocketBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSocketBPLibrary, nullptr, "GetMessage", sizeof(FSocketBPLibrary_eventGetMessage_Parms), Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSocketBPLibrary_GetMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSocketBPLibrary_GetMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics
	{
		struct FSocketBPLibrary_eventHasPendingData_Parms
		{
			UFSocket* Connection;
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
	void Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FSocketBPLibrary_eventHasPendingData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSocketBPLibrary_eventHasPendingData_Parms), &Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventHasPendingData_Parms, Connection), Z_Construct_UClass_UFSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Sockets" },
		{ "DisplayName", "HasPendingData" },
		{ "Keywords", "Sockets send message tcpsend tcp tcpdisconnect socketsend" },
		{ "ModuleRelativePath", "Public/UFSocketBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSocketBPLibrary, nullptr, "HasPendingData", sizeof(FSocketBPLibrary_eventHasPendingData_Parms), Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics
	{
		struct FSocketBPLibrary_eventReadConfig_Parms
		{
			FString FileName;
			FString Section;
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventReadConfig_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventReadConfig_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventReadConfig_Parms, Section), METADATA_PARAMS(Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_Section_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventReadConfig_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_FileName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_FileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Sockets" },
		{ "DisplayName", "Read Config File" },
		{ "Keywords", "Sockets config configuration file ini" },
		{ "ModuleRelativePath", "Public/UFSocketBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSocketBPLibrary, nullptr, "ReadConfig", sizeof(FSocketBPLibrary_eventReadConfig_Parms), Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics
	{
		struct FSocketBPLibrary_eventSendMessage_Parms
		{
			UFSocket* Connection;
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
	void Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FSocketBPLibrary_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSocketBPLibrary_eventSendMessage_Parms), &Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventSendMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventSendMessage_Parms, Connection), Z_Construct_UClass_UFSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Sockets" },
		{ "DisplayName", "Send message to the server" },
		{ "Keywords", "Sockets send message tcpsend tcp tcpdisconnect socketsend" },
		{ "ModuleRelativePath", "Public/UFSocketBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSocketBPLibrary, nullptr, "SendMessage", sizeof(FSocketBPLibrary_eventSendMessage_Parms), Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSocketBPLibrary_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSocketBPLibrary_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics
	{
		struct FSocketBPLibrary_eventValidateSocket_Parms
		{
			UFSocket* Connection;
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
	void Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FSocketBPLibrary_eventValidateSocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSocketBPLibrary_eventValidateSocket_Parms), &Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketBPLibrary_eventValidateSocket_Parms, Connection), Z_Construct_UClass_UFSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::NewProp_Connection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking|Sockets" },
		{ "DisplayName", "Validate Socket" },
		{ "Keywords", "Sockets validate" },
		{ "ModuleRelativePath", "Public/UFSocketBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFSocketBPLibrary, nullptr, "ValidateSocket", sizeof(FSocketBPLibrary_eventValidateSocket_Parms), Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFSocketBPLibrary_NoRegister()
	{
		return UFSocketBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFSocketBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFSocketBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFSocketBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFSocketBPLibrary_CloseConnection, "CloseConnection" }, // 481242090
		{ &Z_Construct_UFunction_UFSocketBPLibrary_Connect, "Connect" }, // 1913724520
		{ &Z_Construct_UFunction_UFSocketBPLibrary_GetMessage, "GetMessage" }, // 3539784402
		{ &Z_Construct_UFunction_UFSocketBPLibrary_HasPendingData, "HasPendingData" }, // 194643206
		{ &Z_Construct_UFunction_UFSocketBPLibrary_ReadConfig, "ReadConfig" }, // 560063111
		{ &Z_Construct_UFunction_UFSocketBPLibrary_SendMessage, "SendMessage" }, // 2951428224
		{ &Z_Construct_UFunction_UFSocketBPLibrary_ValidateSocket, "ValidateSocket" }, // 3637173031
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSocketBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UFSocketBPLibrary.h" },
		{ "ModuleRelativePath", "Public/UFSocketBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFSocketBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSocketBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFSocketBPLibrary_Statics::ClassParams = {
		&UFSocketBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFSocketBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFSocketBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFSocketBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFSocketBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFSocketBPLibrary, 296663050);
	template<> VOICEATTACK_API UClass* StaticClass<UFSocketBPLibrary>()
	{
		return UFSocketBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFSocketBPLibrary(Z_Construct_UClass_UFSocketBPLibrary, &UFSocketBPLibrary::StaticClass, TEXT("/Script/VoiceAttack"), TEXT("UFSocketBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFSocketBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
