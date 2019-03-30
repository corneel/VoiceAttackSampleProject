// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFSocket;
#ifdef VOICEATTACK_UFSocketBPLibrary_generated_h
#error "UFSocketBPLibrary.generated.h already included, missing '#pragma once' in UFSocketBPLibrary.h"
#endif
#define VOICEATTACK_UFSocketBPLibrary_generated_h

#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execValidateSocket) \
	{ \
		P_GET_OBJECT(UFSocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFSocketBPLibrary::ValidateSocket(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadConfig) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Section); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFSocketBPLibrary::ReadConfig(Z_Param_FileName,Z_Param_Section,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseConnection) \
	{ \
		P_GET_OBJECT(UFSocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFSocketBPLibrary::CloseConnection(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPendingData) \
	{ \
		P_GET_OBJECT(UFSocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFSocketBPLibrary::HasPendingData(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMessage) \
	{ \
		P_GET_OBJECT(UFSocket,Z_Param_Connection); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFSocketBPLibrary::GetMessage(Z_Param_Connection,Z_Param_Out_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessage) \
	{ \
		P_GET_OBJECT(UFSocket,Z_Param_Connection); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFSocketBPLibrary::SendMessage(Z_Param_Connection,Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_port); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFSocket**)Z_Param__Result=UFSocketBPLibrary::Connect(Z_Param_IP,Z_Param_port,Z_Param_Out_success); \
		P_NATIVE_END; \
	}


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execValidateSocket) \
	{ \
		P_GET_OBJECT(UFSocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFSocketBPLibrary::ValidateSocket(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadConfig) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Section); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFSocketBPLibrary::ReadConfig(Z_Param_FileName,Z_Param_Section,Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseConnection) \
	{ \
		P_GET_OBJECT(UFSocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFSocketBPLibrary::CloseConnection(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPendingData) \
	{ \
		P_GET_OBJECT(UFSocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFSocketBPLibrary::HasPendingData(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMessage) \
	{ \
		P_GET_OBJECT(UFSocket,Z_Param_Connection); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFSocketBPLibrary::GetMessage(Z_Param_Connection,Z_Param_Out_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessage) \
	{ \
		P_GET_OBJECT(UFSocket,Z_Param_Connection); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFSocketBPLibrary::SendMessage(Z_Param_Connection,Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_port); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFSocket**)Z_Param__Result=UFSocketBPLibrary::Connect(Z_Param_IP,Z_Param_port,Z_Param_Out_success); \
		P_NATIVE_END; \
	}


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFSocketBPLibrary(); \
	friend struct Z_Construct_UClass_UFSocketBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFSocketBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(UFSocketBPLibrary)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFSocketBPLibrary(); \
	friend struct Z_Construct_UClass_UFSocketBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFSocketBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(UFSocketBPLibrary)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFSocketBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFSocketBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFSocketBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFSocketBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFSocketBPLibrary(UFSocketBPLibrary&&); \
	NO_API UFSocketBPLibrary(const UFSocketBPLibrary&); \
public:


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFSocketBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFSocketBPLibrary(UFSocketBPLibrary&&); \
	NO_API UFSocketBPLibrary(const UFSocketBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFSocketBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFSocketBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFSocketBPLibrary)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_PRIVATE_PROPERTY_OFFSET
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_17_PROLOG
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_RPC_WRAPPERS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_INCLASS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_INCLASS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FSocketBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOICEATTACK_API UClass* StaticClass<class UFSocketBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_UFSocketBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
