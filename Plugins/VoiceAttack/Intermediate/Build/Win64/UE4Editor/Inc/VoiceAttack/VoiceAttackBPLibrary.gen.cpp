// Copyright Epic Games, Inc. All Rights Reserved.
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
	VOICEATTACK_API UClass* Z_Construct_UClass_UJSONHandle_NoRegister();
	VOICEATTACK_API UClass* Z_Construct_UClass_UJSONHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VoiceAttack();
	VOICEATTACK_API UClass* Z_Construct_UClass_UJSONHandleArray_NoRegister();
	VOICEATTACK_API UClass* Z_Construct_UClass_UJSONHandleArray();
	VOICEATTACK_API UClass* Z_Construct_UClass_UVoiceAttackBPLibrary_NoRegister();
	VOICEATTACK_API UClass* Z_Construct_UClass_UVoiceAttackBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
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
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJSONHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJSONHandle_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UJSONHandle, 2275784749);
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
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJSONHandleArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJSONHandleArray_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UJSONHandleArray, 1890628193);
	template<> VOICEATTACK_API UClass* StaticClass<UJSONHandleArray>()
	{
		return UJSONHandleArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJSONHandleArray(Z_Construct_UClass_UJSONHandleArray, &UJSONHandleArray::StaticClass, TEXT("/Script/VoiceAttack"), TEXT("UJSONHandleArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJSONHandleArray);
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackGetJSONObjectFromArray)
	{
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJSONHandle**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackGetJSONObjectFromArray(Z_Param_JSONHandleArray,Z_Param_Index,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackParseMultiple)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JSONString);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ElementCount);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJSONHandleArray**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackParseMultiple(Z_Param_JSONString,Z_Param_Out_ElementCount,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackParseString)
	{
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_JSONString);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoiceAttackBPLibrary::VoiceAttackParseString(Z_Param_JSONHandle,Z_Param_JSONString,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackSerializeJSONObjectArray)
	{
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObjectArray(Z_Param_JSONHandleArray,Z_Param_Out_Value,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackSerializeJSONObject)
	{
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObject(Z_Param_JSONHandle,Z_Param_Out_Value,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackGetJSONElementMultiple)
	{
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoiceAttackBPLibrary::VoiceAttackGetJSONElementMultiple(Z_Param_JSONHandleArray,Z_Param_Index,Z_Param_Name,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackGetJSONObject)
	{
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJSONHandle**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackGetJSONObject(Z_Param_JSONHandle,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackGetJSONNumericElement)
	{
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoiceAttackBPLibrary::VoiceAttackGetJSONNumericElement(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackGetJSONElement)
	{
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoiceAttackBPLibrary::VoiceAttackGetJSONElement(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackAddJSONArrayToArray)
	{
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UJSONHandleArray,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToArray(Z_Param_JSONHandleArray,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackAddJSONArrayToObject)
	{
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UJSONHandleArray,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToObject(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackAddJSONObjectToArray)
	{
		P_GET_OBJECT(UJSONHandleArray,Z_Param_JSONHandleArray);
		P_GET_OBJECT(UJSONHandle,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoiceAttackBPLibrary::VoiceAttackAddJSONObjectToArray(Z_Param_JSONHandleArray,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackAddJSONObject)
	{
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UJSONHandle,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoiceAttackBPLibrary::VoiceAttackAddJSONObject(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackAddJSONNumericElement)
	{
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoiceAttackBPLibrary::VoiceAttackAddJSONNumericElement(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackAddJSONElement)
	{
		P_GET_OBJECT(UJSONHandle,Z_Param_JSONHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoiceAttackBPLibrary::VoiceAttackAddJSONElement(Z_Param_JSONHandle,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackNewJSONObjectArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJSONHandleArray**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackNewJSONObjectArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoiceAttackBPLibrary::execVoiceAttackNewJSONObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJSONHandle**)Z_Param__Result=UVoiceAttackBPLibrary::VoiceAttackNewJSONObject();
		P_NATIVE_END;
	}
	void UVoiceAttackBPLibrary::StaticRegisterNativesUVoiceAttackBPLibrary()
	{
		UClass* Class = UVoiceAttackBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
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
			{ "VoiceAttackNewJSONObject", &UVoiceAttackBPLibrary::execVoiceAttackNewJSONObject },
			{ "VoiceAttackNewJSONObjectArray", &UVoiceAttackBPLibrary::execVoiceAttackNewJSONObjectArray },
			{ "VoiceAttackParseMultiple", &UVoiceAttackBPLibrary::execVoiceAttackParseMultiple },
			{ "VoiceAttackParseString", &UVoiceAttackBPLibrary::execVoiceAttackParseString },
			{ "VoiceAttackSerializeJSONObject", &UVoiceAttackBPLibrary::execVoiceAttackSerializeJSONObject },
			{ "VoiceAttackSerializeJSONObjectArray", &UVoiceAttackBPLibrary::execVoiceAttackSerializeJSONObjectArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics
	{
		struct VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms
		{
			UJSONHandleArray* JSONHandleArray;
			FString Name;
			UJSONHandleArray* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandleArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms, Value), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_JSONHandleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONArrayToArray" },
		{ "Keywords", "VoiceAttack Add Array to JSON Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackAddJSONArrayToArray", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms, Value), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_JSONHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONArrayToObject" },
		{ "Keywords", "VoiceAttack Add Array to JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackAddJSONArrayToObject", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONElement_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONElement_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONElement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_JSONHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONElement" },
		{ "Keywords", "VoiceAttack Add JSON Element String" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackAddJSONElement", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackAddJSONElement_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_JSONHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONNumericElement" },
		{ "Keywords", "VoiceAttack Add JSON Numeric Element" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackAddJSONNumericElement", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObject_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObject_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObject_Parms, Value), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_JSONHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONObject" },
		{ "Keywords", "VoiceAttack Add JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackAddJSONObject", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObject_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandleArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObjectToArray_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObjectToArray_Parms, Value), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::NewProp_JSONHandleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONObjectToArray" },
		{ "Keywords", "VoiceAttack Add JSON Object To Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackAddJSONObjectToArray", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackAddJSONObjectToArray_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElement_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElement_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_JSONHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONElement" },
		{ "Keywords", "VoiceAttack Get JSON Element" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackGetJSONElement", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElement_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandleArray;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_JSONHandleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONElement" },
		{ "Keywords", "VoiceAttack Get JSON Element from object array" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackGetJSONElementMultiple", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_JSONHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONNumericElement" },
		{ "Keywords", "VoiceAttack Get JSON Numeric Element" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackGetJSONNumericElement", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObject_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObject_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObject_Parms, ReturnValue), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_JSONHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONObject" },
		{ "Keywords", "VoiceAttack Get JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackGetJSONObject", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObject_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandleArray;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms), &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms, ReturnValue), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_JSONHandleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (DisplayName = \"VoiceAttackParseFile\", Keywords = \"VoiceAttack Parse Content of Text File\"), Category = \"VoiceAttack\")\n//\x09static UJSONHandleArray* VoiceAttackParseFile(FString FileName, int& ElementCount, bool& Success);\n" },
		{ "DisplayName", "VoiceAttackGetJSONObjectFromArray" },
		{ "Keywords", "VoiceAttack Get JSONObject From Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"VoiceAttackParseFile\", Keywords = \"VoiceAttack Parse Content of Text File\"), Category = \"VoiceAttack\")\n       static UJSONHandleArray* VoiceAttackParseFile(FString FileName, int& ElementCount, bool& Success);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackGetJSONObjectFromArray", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackNewJSONObject", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackNewJSONObject_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackNewJSONObjectArray", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackNewJSONObjectArray_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JSONString;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ElementCount;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms, JSONString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_ElementCount = { "ElementCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms, ElementCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms), &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms, ReturnValue), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_JSONString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_ElementCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackParseMultiple" },
		{ "Keywords", "VoiceAttack Parse Multiple" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackParseMultiple", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackParseMultiple_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JSONString;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseString_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackParseString_Parms, JSONString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackBPLibrary_eventVoiceAttackParseString_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackBPLibrary_eventVoiceAttackParseString_Parms), &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_JSONHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_JSONString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackParseString" },
		{ "Keywords", "VoiceAttack Parse String" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackParseString", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackParseString_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObject_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObject_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObject_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObject_Parms), &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_JSONHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackSerializeJSONObject" },
		{ "Keywords", "VoiceAttack Serialize JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackSerializeJSONObject", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObject_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSONHandleArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms), &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_JSONHandleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackSerializeJSONObjectArray" },
		{ "Keywords", "VoiceAttack Serialize JSON Object Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackBPLibrary, nullptr, "VoiceAttackSerializeJSONObjectArray", nullptr, nullptr, sizeof(VoiceAttackBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms), Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToArray, "VoiceAttackAddJSONArrayToArray" }, // 3289693757
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONArrayToObject, "VoiceAttackAddJSONArrayToObject" }, // 2009148456
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONElement, "VoiceAttackAddJSONElement" }, // 1174561366
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONNumericElement, "VoiceAttackAddJSONNumericElement" }, // 3707339157
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObject, "VoiceAttackAddJSONObject" }, // 3779071190
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackAddJSONObjectToArray, "VoiceAttackAddJSONObjectToArray" }, // 1199195291
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElement, "VoiceAttackGetJSONElement" }, // 2535185686
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONElementMultiple, "VoiceAttackGetJSONElementMultiple" }, // 719882947
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONNumericElement, "VoiceAttackGetJSONNumericElement" }, // 1593224825
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObject, "VoiceAttackGetJSONObject" }, // 1567391557
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackGetJSONObjectFromArray, "VoiceAttackGetJSONObjectFromArray" }, // 2779072891
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObject, "VoiceAttackNewJSONObject" }, // 1265654562
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackNewJSONObjectArray, "VoiceAttackNewJSONObjectArray" }, // 348513647
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseMultiple, "VoiceAttackParseMultiple" }, // 2417806938
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackParseString, "VoiceAttackParseString" }, // 1747144248
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObject, "VoiceAttackSerializeJSONObject" }, // 3784530466
		{ &Z_Construct_UFunction_UVoiceAttackBPLibrary_VoiceAttackSerializeJSONObjectArray, "VoiceAttackSerializeJSONObjectArray" }, // 236603371
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
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoiceAttackBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceAttackBPLibrary_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UVoiceAttackBPLibrary, 3936392276);
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
