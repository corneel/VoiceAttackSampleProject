// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFSocket;
#ifdef VOICEATTACK_ServerControl_generated_h
#error "ServerControl.generated.h already included, missing '#pragma once' in ServerControl.h"
#endif
#define VOICEATTACK_ServerControl_generated_h

#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendSockMessage) \
	{ \
		P_GET_OBJECT(UFSocket,Z_Param_sock); \
		P_GET_PROPERTY(UStrProperty,Z_Param_message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendSockMessage(Z_Param_sock,Z_Param_message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientConnections) \
	{ \
		P_GET_TARRAY_REF(UFSocket*,Z_Param_Out_Clients); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientConnections(Z_Param_Out_Clients); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_message); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_messageOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SendMessage(Z_Param_message,Z_Param_Out_messageOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMessage(Z_Param_message); \
		P_NATIVE_END; \
	}


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendSockMessage) \
	{ \
		P_GET_OBJECT(UFSocket,Z_Param_sock); \
		P_GET_PROPERTY(UStrProperty,Z_Param_message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendSockMessage(Z_Param_sock,Z_Param_message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientConnections) \
	{ \
		P_GET_TARRAY_REF(UFSocket*,Z_Param_Out_Clients); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientConnections(Z_Param_Out_Clients); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_message); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_messageOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SendMessage(Z_Param_message,Z_Param_Out_messageOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMessage(Z_Param_message); \
		P_NATIVE_END; \
	}


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAServerControl(); \
	friend struct Z_Construct_UClass_AServerControl_Statics; \
public: \
	DECLARE_CLASS(AServerControl, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(AServerControl)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAServerControl(); \
	friend struct Z_Construct_UClass_AServerControl_Statics; \
public: \
	DECLARE_CLASS(AServerControl, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(AServerControl)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AServerControl(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AServerControl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AServerControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AServerControl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AServerControl(AServerControl&&); \
	NO_API AServerControl(const AServerControl&); \
public:


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AServerControl(AServerControl&&); \
	NO_API AServerControl(const AServerControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AServerControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AServerControl); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AServerControl)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_PRIVATE_PROPERTY_OFFSET
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_12_PROLOG
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_RPC_WRAPPERS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_INCLASS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_INCLASS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOICEATTACK_API UClass* StaticClass<class AServerControl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
