// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOICEATTACKPLUGIN_VoiceAttackPluginServerActor_generated_h
#error "VoiceAttackPluginServerActor.generated.h already included, missing '#pragma once' in VoiceAttackPluginServerActor.h"
#endif
#define VOICEATTACKPLUGIN_VoiceAttackPluginServerActor_generated_h

#define VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_RPC_WRAPPERS \
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
	} \
 \
	DECLARE_FUNCTION(execStartRunning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRunning(); \
		P_NATIVE_END; \
	}


#define VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
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
	} \
 \
	DECLARE_FUNCTION(execStartRunning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRunning(); \
		P_NATIVE_END; \
	}


#define VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoiceAttackPluginServerActor(); \
	friend struct Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics; \
public: \
	DECLARE_CLASS(AVoiceAttackPluginServerActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttackPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVoiceAttackPluginServerActor)


#define VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAVoiceAttackPluginServerActor(); \
	friend struct Z_Construct_UClass_AVoiceAttackPluginServerActor_Statics; \
public: \
	DECLARE_CLASS(AVoiceAttackPluginServerActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttackPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVoiceAttackPluginServerActor)


#define VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoiceAttackPluginServerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoiceAttackPluginServerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoiceAttackPluginServerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoiceAttackPluginServerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoiceAttackPluginServerActor(AVoiceAttackPluginServerActor&&); \
	NO_API AVoiceAttackPluginServerActor(const AVoiceAttackPluginServerActor&); \
public:


#define VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoiceAttackPluginServerActor(AVoiceAttackPluginServerActor&&); \
	NO_API AVoiceAttackPluginServerActor(const AVoiceAttackPluginServerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoiceAttackPluginServerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoiceAttackPluginServerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoiceAttackPluginServerActor)


#define VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_PRIVATE_PROPERTY_OFFSET
#define VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_11_PROLOG
#define VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_RPC_WRAPPERS \
	VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_INCLASS \
	VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_INCLASS_NO_PURE_DECLS \
	VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOICEATTACKPLUGIN_API UClass* StaticClass<class AVoiceAttackPluginServerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VoiceAttackSampleProject_Plugins_VoiceAttackPlugin_Source_VoiceAttackPlugin_Public_VoiceAttackPluginServerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
