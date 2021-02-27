// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOICEATTACK_ServerControl_generated_h
#error "ServerControl.generated.h already included, missing '#pragma once' in ServerControl.h"
#endif
#define VOICEATTACK_ServerControl_generated_h

#define VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_SPARSE_DATA
#define VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execClearMessage); \
	DECLARE_FUNCTION(execGetMessage); \
	DECLARE_FUNCTION(execSetMessage); \
	DECLARE_FUNCTION(execStartRunning);


#define VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execClearMessage); \
	DECLARE_FUNCTION(execGetMessage); \
	DECLARE_FUNCTION(execSetMessage); \
	DECLARE_FUNCTION(execStartRunning);


#define VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAServerControl(); \
	friend struct Z_Construct_UClass_AServerControl_Statics; \
public: \
	DECLARE_CLASS(AServerControl, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(AServerControl)


#define VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAServerControl(); \
	friend struct Z_Construct_UClass_AServerControl_Statics; \
public: \
	DECLARE_CLASS(AServerControl, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(AServerControl)


#define VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_STANDARD_CONSTRUCTORS \
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


#define VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AServerControl(AServerControl&&); \
	NO_API AServerControl(const AServerControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AServerControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AServerControl); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AServerControl)


#define VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_PRIVATE_PROPERTY_OFFSET
#define VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_11_PROLOG
#define VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_SPARSE_DATA \
	VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_RPC_WRAPPERS \
	VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_INCLASS \
	VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_SPARSE_DATA \
	VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_INCLASS_NO_PURE_DECLS \
	VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOICEATTACK_API UClass* StaticClass<class AServerControl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VoiceAttackSampleProject_Plugins_VoiceAttack_Source_VoiceAttack_Public_ServerControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
