// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoiceAttackPlugin/Public/VoiceAttackPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceAttackPluginBPLibrary() {}
// Cross Module References
	VOICEATTACKPLUGIN_API UClass* Z_Construct_UClass_UJSONHandle_NoRegister();
	VOICEATTACKPLUGIN_API UClass* Z_Construct_UClass_UJSONHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VoiceAttackPlugin();
	VOICEATTACKPLUGIN_API UClass* Z_Construct_UClass_UJSONHandleArray_NoRegister();
	VOICEATTACKPLUGIN_API UClass* Z_Construct_UClass_UJSONHandleArray();
	VOICEATTACKPLUGIN_API UClass* Z_Construct_UClass_UVoiceAttackPluginBPLibrary_NoRegister();
	VOICEATTACKPLUGIN_API UClass* Z_Construct_UClass_UVoiceAttackPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject();
	VOICEATTACKPLUGIN_API UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray();
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
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttackPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJSONHandle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoiceAttackPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
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
	IMPLEMENT_CLASS(UJSONHandle, 2666828528);
	template<> VOICEATTACKPLUGIN_API UClass* StaticClass<UJSONHandle>()
	{
		return UJSONHandle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJSONHandle(Z_Construct_UClass_UJSONHandle, &UJSONHandle::StaticClass, TEXT("/Script/VoiceAttackPlugin"), TEXT("UJSONHandle"), false, nullptr, nullptr, nullptr);
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
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttackPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJSONHandleArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoiceAttackPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
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
	IMPLEMENT_CLASS(UJSONHandleArray, 954012527);
	template<> VOICEATTACKPLUGIN_API UClass* StaticClass<UJSONHandleArray>()
	{
		return UJSONHandleArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJSONHandleArray(Z_Construct_UClass_UJSONHandleArray, &UJSONHandleArray::StaticClass, TEXT("/Script/VoiceAttackPlugin"), TEXT("UJSONHandleArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJSONHandleArray);
	void UVoiceAttackPluginBPLibrary::StaticRegisterNativesUVoiceAttackPluginBPLibrary()
	{
		UClass* Class = UVoiceAttackPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "VoiceAttackAddJSONArrayToArray", &UVoiceAttackPluginBPLibrary::execVoiceAttackAddJSONArrayToArray },
			{ "VoiceAttackAddJSONArrayToObject", &UVoiceAttackPluginBPLibrary::execVoiceAttackAddJSONArrayToObject },
			{ "VoiceAttackAddJSONElement", &UVoiceAttackPluginBPLibrary::execVoiceAttackAddJSONElement },
			{ "VoiceAttackAddJSONNumericElement", &UVoiceAttackPluginBPLibrary::execVoiceAttackAddJSONNumericElement },
			{ "VoiceAttackAddJSONObject", &UVoiceAttackPluginBPLibrary::execVoiceAttackAddJSONObject },
			{ "VoiceAttackAddJSONObjectToArray", &UVoiceAttackPluginBPLibrary::execVoiceAttackAddJSONObjectToArray },
			{ "VoiceAttackGetJSONElement", &UVoiceAttackPluginBPLibrary::execVoiceAttackGetJSONElement },
			{ "VoiceAttackGetJSONElementMultiple", &UVoiceAttackPluginBPLibrary::execVoiceAttackGetJSONElementMultiple },
			{ "VoiceAttackGetJSONNumericElement", &UVoiceAttackPluginBPLibrary::execVoiceAttackGetJSONNumericElement },
			{ "VoiceAttackGetJSONObject", &UVoiceAttackPluginBPLibrary::execVoiceAttackGetJSONObject },
			{ "VoiceAttackGetJSONObjectFromArray", &UVoiceAttackPluginBPLibrary::execVoiceAttackGetJSONObjectFromArray },
			{ "VoiceAttackNewJSONObject", &UVoiceAttackPluginBPLibrary::execVoiceAttackNewJSONObject },
			{ "VoiceAttackNewJSONObjectArray", &UVoiceAttackPluginBPLibrary::execVoiceAttackNewJSONObjectArray },
			{ "VoiceAttackParseMultiple", &UVoiceAttackPluginBPLibrary::execVoiceAttackParseMultiple },
			{ "VoiceAttackParseString", &UVoiceAttackPluginBPLibrary::execVoiceAttackParseString },
			{ "VoiceAttackSerializeJSONObject", &UVoiceAttackPluginBPLibrary::execVoiceAttackSerializeJSONObject },
			{ "VoiceAttackSerializeJSONObjectArray", &UVoiceAttackPluginBPLibrary::execVoiceAttackSerializeJSONObjectArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms, Value), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::NewProp_JSONHandleArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONArrayToArray" },
		{ "Keywords", "VoiceAttack Add Array to JSON Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackAddJSONArrayToArray", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONArrayToArray_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms, Value), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONArrayToObject" },
		{ "Keywords", "VoiceAttack Add Array to JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackAddJSONArrayToObject", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONArrayToObject_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONElement_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONElement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONElement_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONElement_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONElement" },
		{ "Keywords", "VoiceAttack Add JSON Element String" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackAddJSONElement", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONElement_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONNumericElement" },
		{ "Keywords", "VoiceAttack Add JSON Numeric Element" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackAddJSONNumericElement", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONNumericElement_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONObject_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONObject_Parms, Value), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONObject_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONObject_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONObject" },
		{ "Keywords", "VoiceAttack Add JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackAddJSONObject", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONObject_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONObjectToArray_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONObjectToArray_Parms, Value), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONObjectToArray_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::NewProp_JSONHandleArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackAddJSONObjectToArray" },
		{ "Keywords", "VoiceAttack Add JSON Object To Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackAddJSONObjectToArray", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackAddJSONObjectToArray_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONElement_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONElement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONElement_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONElement_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONElement" },
		{ "Keywords", "VoiceAttack Get JSON Element" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackGetJSONElement", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONElement_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::NewProp_JSONHandleArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONElement" },
		{ "Keywords", "VoiceAttack Get JSON Element from object array" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackGetJSONElementMultiple", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONElementMultiple_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONNumericElement" },
		{ "Keywords", "VoiceAttack Get JSON Numeric Element" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackGetJSONNumericElement", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONNumericElement_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONObject_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONObject_Parms, ReturnValue), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONObject_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONObject_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONObject" },
		{ "Keywords", "VoiceAttack Get JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackGetJSONObject", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONObject_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms, ReturnValue), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms), &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::NewProp_JSONHandleArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackGetJSONObjectFromArray" },
		{ "Keywords", "VoiceAttack Get JSONObject From Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"VoiceAttackParseFile\", Keywords = \"VoiceAttack Parse Content of Text File\"), Category = \"VoiceAttack\")\n       static UJSONHandleArray* VoiceAttackParseFile(FString FileName, int& ElementCount, bool& Success);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackGetJSONObjectFromArray", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackGetJSONObjectFromArray_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackNewJSONObject_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackNewJSONObject_Parms, ReturnValue), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackNewJSONObject" },
		{ "Keywords", "VoiceAttack New JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackNewJSONObject", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackNewJSONObject_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackNewJSONObjectArray_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackNewJSONObjectArray_Parms, ReturnValue), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackNewJSONObjectArray" },
		{ "Keywords", "VoiceAttack New JSON Object Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackNewJSONObjectArray", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackNewJSONObjectArray_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackParseMultiple_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackParseMultiple_Parms, ReturnValue), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackPluginBPLibrary_eventVoiceAttackParseMultiple_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackParseMultiple_Parms), &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_ElementCount = { "ElementCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackParseMultiple_Parms, ElementCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackParseMultiple_Parms, JSONString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_ElementCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::NewProp_JSONString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackParseMultiple" },
		{ "Keywords", "VoiceAttack Parse Multiple" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackParseMultiple", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackParseMultiple_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackParseString_Parms
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
	void Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackPluginBPLibrary_eventVoiceAttackParseString_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackParseString_Parms), &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackParseString_Parms, JSONString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackParseString_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::NewProp_JSONString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackParseString" },
		{ "Keywords", "VoiceAttack Parse String" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackParseString", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackParseString_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackSerializeJSONObject_Parms
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
	void Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackPluginBPLibrary_eventVoiceAttackSerializeJSONObject_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackSerializeJSONObject_Parms), &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackSerializeJSONObject_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_JSONHandle = { "JSONHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackSerializeJSONObject_Parms, JSONHandle), Z_Construct_UClass_UJSONHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::NewProp_JSONHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackSerializeJSONObject" },
		{ "Keywords", "VoiceAttack Serialize JSON Object" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackSerializeJSONObject", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackSerializeJSONObject_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics
	{
		struct VoiceAttackPluginBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms
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
	void Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VoiceAttackPluginBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms), &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_JSONHandleArray = { "JSONHandleArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceAttackPluginBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms, JSONHandleArray), Z_Construct_UClass_UJSONHandleArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::NewProp_JSONHandleArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VoiceAttack" },
		{ "DisplayName", "VoiceAttackSerializeJSONObjectArray" },
		{ "Keywords", "VoiceAttack Serialize JSON Object Array" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceAttackPluginBPLibrary, nullptr, "VoiceAttackSerializeJSONObjectArray", sizeof(VoiceAttackPluginBPLibrary_eventVoiceAttackSerializeJSONObjectArray_Parms), Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoiceAttackPluginBPLibrary_NoRegister()
	{
		return UVoiceAttackPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceAttackPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceAttackPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceAttackPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoiceAttackPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToArray, "VoiceAttackAddJSONArrayToArray" }, // 1622541213
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONArrayToObject, "VoiceAttackAddJSONArrayToObject" }, // 1338817331
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONElement, "VoiceAttackAddJSONElement" }, // 3992598325
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONNumericElement, "VoiceAttackAddJSONNumericElement" }, // 3826777694
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObject, "VoiceAttackAddJSONObject" }, // 2817166563
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackAddJSONObjectToArray, "VoiceAttackAddJSONObjectToArray" }, // 4037244410
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElement, "VoiceAttackGetJSONElement" }, // 3355709640
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONElementMultiple, "VoiceAttackGetJSONElementMultiple" }, // 133052205
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONNumericElement, "VoiceAttackGetJSONNumericElement" }, // 3509604247
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObject, "VoiceAttackGetJSONObject" }, // 864858559
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackGetJSONObjectFromArray, "VoiceAttackGetJSONObjectFromArray" }, // 1236778000
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObject, "VoiceAttackNewJSONObject" }, // 4162886998
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackNewJSONObjectArray, "VoiceAttackNewJSONObjectArray" }, // 1695390906
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseMultiple, "VoiceAttackParseMultiple" }, // 903604570
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackParseString, "VoiceAttackParseString" }, // 1477696431
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObject, "VoiceAttackSerializeJSONObject" }, // 3734445714
		{ &Z_Construct_UFunction_UVoiceAttackPluginBPLibrary_VoiceAttackSerializeJSONObjectArray, "VoiceAttackSerializeJSONObjectArray" }, // 2398953327
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceAttackPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoiceAttackPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/VoiceAttackPluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceAttackPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceAttackPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoiceAttackPluginBPLibrary_Statics::ClassParams = {
		&UVoiceAttackPluginBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoiceAttackPluginBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVoiceAttackPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceAttackPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoiceAttackPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoiceAttackPluginBPLibrary, 3268505492);
	template<> VOICEATTACKPLUGIN_API UClass* StaticClass<UVoiceAttackPluginBPLibrary>()
	{
		return UVoiceAttackPluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoiceAttackPluginBPLibrary(Z_Construct_UClass_UVoiceAttackPluginBPLibrary, &UVoiceAttackPluginBPLibrary::StaticClass, TEXT("/Script/VoiceAttackPlugin"), TEXT("UVoiceAttackPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceAttackPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
