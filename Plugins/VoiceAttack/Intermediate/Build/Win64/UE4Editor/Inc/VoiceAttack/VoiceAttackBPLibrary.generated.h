// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USocket;
class UJSONHandleArray;
class UJSONHandle;
#ifdef VOICEATTACK_VoiceAttackBPLibrary_generated_h
#error "VoiceAttackBPLibrary.generated.h already included, missing '#pragma once' in VoiceAttackBPLibrary.h"
#endif
#define VOICEATTACK_VoiceAttackBPLibrary_generated_h

#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_RPC_WRAPPERS
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocket(); \
	friend struct Z_Construct_UClass_USocket_Statics; \
public: \
	DECLARE_CLASS(USocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(USocket)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUSocket(); \
	friend struct Z_Construct_UClass_USocket_Statics; \
public: \
	DECLARE_CLASS(USocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(USocket)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocket(USocket&&); \
	NO_API USocket(const USocket&); \
public:


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocket(USocket&&); \
	NO_API USocket(const USocket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocket)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_26_PROLOG
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_RPC_WRAPPERS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_INCLASS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOICEATTACK_API UClass* StaticClass<class USocket>();

#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseConnection) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVoiceAttackSocketBPLibrary::CloseConnection(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPendingData) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVoiceAttackSocketBPLibrary::HasPendingData(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMessage) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVoiceAttackSocketBPLibrary::GetMessage(Z_Param_Connection,Z_Param_Out_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessage) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVoiceAttackSocketBPLibrary::SendMessage(Z_Param_Connection,Z_Param_Message); \
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
		*(USocket**)Z_Param__Result=UVoiceAttackSocketBPLibrary::Connect(Z_Param_IP,Z_Param_port,Z_Param_Out_success); \
		P_NATIVE_END; \
	}


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseConnection) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVoiceAttackSocketBPLibrary::CloseConnection(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPendingData) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVoiceAttackSocketBPLibrary::HasPendingData(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMessage) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVoiceAttackSocketBPLibrary::GetMessage(Z_Param_Connection,Z_Param_Out_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessage) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVoiceAttackSocketBPLibrary::SendMessage(Z_Param_Connection,Z_Param_Message); \
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
		*(USocket**)Z_Param__Result=UVoiceAttackSocketBPLibrary::Connect(Z_Param_IP,Z_Param_port,Z_Param_Out_success); \
		P_NATIVE_END; \
	}


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceAttackSocketBPLibrary(); \
	friend struct Z_Construct_UClass_UVoiceAttackSocketBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoiceAttackSocketBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(UVoiceAttackSocketBPLibrary)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceAttackSocketBPLibrary(); \
	friend struct Z_Construct_UClass_UVoiceAttackSocketBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoiceAttackSocketBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(UVoiceAttackSocketBPLibrary)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceAttackSocketBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceAttackSocketBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceAttackSocketBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceAttackSocketBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceAttackSocketBPLibrary(UVoiceAttackSocketBPLibrary&&); \
	NO_API UVoiceAttackSocketBPLibrary(const UVoiceAttackSocketBPLibrary&); \
public:


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceAttackSocketBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceAttackSocketBPLibrary(UVoiceAttackSocketBPLibrary&&); \
	NO_API UVoiceAttackSocketBPLibrary(const UVoiceAttackSocketBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceAttackSocketBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceAttackSocketBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceAttackSocketBPLibrary)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_PRIVATE_PROPERTY_OFFSET
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_39_PROLOG
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_RPC_WRAPPERS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_INCLASS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_INCLASS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VoiceAttackSocketBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOICEATTACK_API UClass* StaticClass<class UVoiceAttackSocketBPLibrary>();

#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_RPC_WRAPPERS
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJSONHandle(); \
	friend struct Z_Construct_UClass_UJSONHandle_Statics; \
public: \
	DECLARE_CLASS(UJSONHandle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(UJSONHandle)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUJSONHandle(); \
	friend struct Z_Construct_UClass_UJSONHandle_Statics; \
public: \
	DECLARE_CLASS(UJSONHandle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(UJSONHandle)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJSONHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJSONHandle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJSONHandle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJSONHandle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJSONHandle(UJSONHandle&&); \
	NO_API UJSONHandle(const UJSONHandle&); \
public:


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJSONHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJSONHandle(UJSONHandle&&); \
	NO_API UJSONHandle(const UJSONHandle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJSONHandle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJSONHandle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJSONHandle)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_PRIVATE_PROPERTY_OFFSET
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_61_PROLOG
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_RPC_WRAPPERS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_INCLASS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_INCLASS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOICEATTACK_API UClass* StaticClass<class UJSONHandle>();

#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_RPC_WRAPPERS
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_RPC_WRAPPERS_NO_PURE_DECLS
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJSONHandleArray(); \
	friend struct Z_Construct_UClass_UJSONHandleArray_Statics; \
public: \
	DECLARE_CLASS(UJSONHandleArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(UJSONHandleArray)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUJSONHandleArray(); \
	friend struct Z_Construct_UClass_UJSONHandleArray_Statics; \
public: \
	DECLARE_CLASS(UJSONHandleArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(UJSONHandleArray)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJSONHandleArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJSONHandleArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJSONHandleArray); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJSONHandleArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJSONHandleArray(UJSONHandleArray&&); \
	NO_API UJSONHandleArray(const UJSONHandleArray&); \
public:


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJSONHandleArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJSONHandleArray(UJSONHandleArray&&); \
	NO_API UJSONHandleArray(const UJSONHandleArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJSONHandleArray); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJSONHandleArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJSONHandleArray)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_PRIVATE_PROPERTY_OFFSET
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_69_PROLOG
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_RPC_WRAPPERS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_INCLASS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_INCLASS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOICEATTACK_API UClass* StaticClass<class UJSONHandleArray>();

#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTCPConnectionListener) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TCPConnectionListener(Z_Param_Out_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTCPReceiver) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_YourChosenSocketName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TheIP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ThePort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StartTCPReceiver(Z_Param_YourChosenSocketName,Z_Param_TheIP,Z_Param_ThePort); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackListVoices) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Voices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackListVoices(Z_Param_Out_Voices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackTTS) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackTTS(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackGetJSONObjectFromArray) \
	{ \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJSONHandle**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackGetJSONObjectFromArray(Z_Param_JSONHandleArray,Z_Param_Index,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackParseFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ElementCount); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJSONHandleArray**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackParseFile(Z_Param_FileName,Z_Param_Out_ElementCount,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackParseMultiple) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_JSONString); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ElementCount); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJSONHandleArray**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackParseMultiple(Z_Param_JSONString,Z_Param_Out_ElementCount,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackParseString) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_JSONString); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackParseString(Z_Param_JSONHandle,Z_Param_JSONString,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackSerializeJSONObjectArray) \
	{ \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObjectArray(Z_Param_JSONHandleArray,Z_Param_Out_Value,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackSerializeJSONObject) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObject(Z_Param_JSONHandle,Z_Param_Out_Value,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackGetJSONElementMultiple) \
	{ \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackGetJSONElementMultiple(Z_Param_JSONHandleArray,Z_Param_Index,Z_Param_Name,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackGetJSONObject) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJSONHandle**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackGetJSONObject(Z_Param_JSONHandle,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackGetJSONNumericElement) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackGetJSONNumericElement(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackGetJSONElement) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackGetJSONElement(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackAddJSONArrayToArray) \
	{ \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToArray(Z_Param_JSONHandleArray,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackAddJSONArrayToObject) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToObject(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackAddJSONObjectToArray) \
	{ \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray); \
		P_GET_OBJECT(UJSONHandle,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackAddJSONObjectToArray(Z_Param_JSONHandleArray,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackAddJSONObject) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_OBJECT(UJSONHandle,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackAddJSONObject(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackAddJSONNumericElement) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackAddJSONNumericElement(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackAddJSONElement) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackAddJSONElement(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackNewJSONObjectArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJSONHandleArray**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackNewJSONObjectArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackNewJSONObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJSONHandle**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackNewJSONObject(); \
		P_NATIVE_END; \
	}


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTCPConnectionListener) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TCPConnectionListener(Z_Param_Out_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTCPReceiver) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_YourChosenSocketName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TheIP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ThePort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StartTCPReceiver(Z_Param_YourChosenSocketName,Z_Param_TheIP,Z_Param_ThePort); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackListVoices) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Voices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackListVoices(Z_Param_Out_Voices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackTTS) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackTTS(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackGetJSONObjectFromArray) \
	{ \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJSONHandle**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackGetJSONObjectFromArray(Z_Param_JSONHandleArray,Z_Param_Index,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackParseFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ElementCount); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJSONHandleArray**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackParseFile(Z_Param_FileName,Z_Param_Out_ElementCount,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackParseMultiple) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_JSONString); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ElementCount); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJSONHandleArray**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackParseMultiple(Z_Param_JSONString,Z_Param_Out_ElementCount,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackParseString) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_JSONString); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackParseString(Z_Param_JSONHandle,Z_Param_JSONString,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackSerializeJSONObjectArray) \
	{ \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObjectArray(Z_Param_JSONHandleArray,Z_Param_Out_Value,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackSerializeJSONObject) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObject(Z_Param_JSONHandle,Z_Param_Out_Value,Z_Param_Out_Success); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackGetJSONElementMultiple) \
	{ \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackGetJSONElementMultiple(Z_Param_JSONHandleArray,Z_Param_Index,Z_Param_Name,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackGetJSONObject) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJSONHandle**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackGetJSONObject(Z_Param_JSONHandle,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackGetJSONNumericElement) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackGetJSONNumericElement(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackGetJSONElement) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackGetJSONElement(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackAddJSONArrayToArray) \
	{ \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToArray(Z_Param_JSONHandleArray,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackAddJSONArrayToObject) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToObject(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackAddJSONObjectToArray) \
	{ \
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray); \
		P_GET_OBJECT(UJSONHandle,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackAddJSONObjectToArray(Z_Param_JSONHandleArray,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackAddJSONObject) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_OBJECT(UJSONHandle,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackAddJSONObject(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackAddJSONNumericElement) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackAddJSONNumericElement(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackAddJSONElement) \
	{ \
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVoiceAttackBPLibrary::VoiceAttackAddJSONElement(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackNewJSONObjectArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJSONHandleArray**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackNewJSONObjectArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoiceAttackNewJSONObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UJSONHandle**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackNewJSONObject(); \
		P_NATIVE_END; \
	}


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceAttackBPLibrary(); \
	friend struct Z_Construct_UClass_UVoiceAttackBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoiceAttackBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(UVoiceAttackBPLibrary)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceAttackBPLibrary(); \
	friend struct Z_Construct_UClass_UVoiceAttackBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoiceAttackBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoiceAttack"), NO_API) \
	DECLARE_SERIALIZER(UVoiceAttackBPLibrary)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceAttackBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceAttackBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceAttackBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceAttackBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceAttackBPLibrary(UVoiceAttackBPLibrary&&); \
	NO_API UVoiceAttackBPLibrary(const UVoiceAttackBPLibrary&); \
public:


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoiceAttackBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceAttackBPLibrary(UVoiceAttackBPLibrary&&); \
	NO_API UVoiceAttackBPLibrary(const UVoiceAttackBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceAttackBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceAttackBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceAttackBPLibrary)


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_PRIVATE_PROPERTY_OFFSET
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_77_PROLOG
#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_RPC_WRAPPERS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_INCLASS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_PRIVATE_PROPERTY_OFFSET \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_INCLASS_NO_PURE_DECLS \
	VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h_80_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VoiceAttackBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOICEATTACK_API UClass* StaticClass<class UVoiceAttackBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VoiceAttackSamplePro_Plugins_VoiceAttack_Source_VoiceAttack_Public_VoiceAttackBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
