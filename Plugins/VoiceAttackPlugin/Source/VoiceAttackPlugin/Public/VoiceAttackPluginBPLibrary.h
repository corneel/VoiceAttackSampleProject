// Copyright 2019 Augmented Enterprise, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Runtime/Json/Public/Dom/JsonValue.h"
#include "Runtime/Json/Public/Dom/JsonObject.h"
#include "Runtime/Json/Public/Serialization/JsonTypes.h"
#include "Runtime/Json/Public/Serialization/JsonReader.h"
#include "Runtime/Json/Public/Serialization/JsonSerializer.h"

#include "JsonGlobals.h"

#include "Policies/JsonPrintPolicy.h"
#include "Policies/PrettyJsonPrintPolicy.h"
#include "Policies/CondensedJsonPrintPolicy.h"

#include "Serialization/JsonTypes.h"
#include "Dom/JsonValue.h"
#include "Dom/JsonObject.h"

#include "Serialization/JsonReader.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonSerializerMacros.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoiceAttackPluginBPLibrary.generated.h"

UCLASS(BlueprintType)
class UJSONHandle : public UObject
{
	GENERATED_BODY()
public:
	TSharedPtr<FJsonObject> JSONObject;
};

UCLASS(BlueprintType)
class UJSONHandleArray : public UObject
{
	GENERATED_BODY()
public:
	TArray<TSharedPtr<FJsonValue>> JSONObjectArray;
};

UCLASS()
class UVoiceAttackPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackNewJSONObject", Keywords = "VoiceAttack New JSON Object"), Category = "VoiceAttack")
		static UJSONHandle* VoiceAttackNewJSONObject();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackNewJSONObjectArray", Keywords = "VoiceAttack New JSON Object Array"), Category = "VoiceAttack")
		static UJSONHandleArray* VoiceAttackNewJSONObjectArray();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackAddJSONElement", Keywords = "VoiceAttack Add JSON Element String"), Category = "VoiceAttack")
		static void VoiceAttackAddJSONElement(UJSONHandle* JSONHandle, FString Name, FString Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackAddJSONNumericElement", Keywords = "VoiceAttack Add JSON Numeric Element"), Category = "VoiceAttack")
		static void VoiceAttackAddJSONNumericElement(UJSONHandle* JSONHandle, FString Name, float Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackAddJSONObject", Keywords = "VoiceAttack Add JSON Object"), Category = "VoiceAttack")
		static void VoiceAttackAddJSONObject(UJSONHandle* JSONHandle, FString Name, UJSONHandle* Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackAddJSONObjectToArray", Keywords = "VoiceAttack Add JSON Object To Array"), Category = "VoiceAttack")
		static void VoiceAttackAddJSONObjectToArray(UJSONHandleArray* JSONHandleArray, UJSONHandle* Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackAddJSONArrayToObject", Keywords = "VoiceAttack Add Array to JSON Object"), Category = "VoiceAttack")
		static void VoiceAttackAddJSONArrayToObject(UJSONHandle* JSONHandle, FString Name, UJSONHandleArray* Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackAddJSONArrayToArray", Keywords = "VoiceAttack Add Array to JSON Array"), Category = "VoiceAttack")
		static void VoiceAttackAddJSONArrayToArray(UJSONHandleArray* JSONHandleArray, FString Name, UJSONHandleArray* Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackGetJSONElement", Keywords = "VoiceAttack Get JSON Element"), Category = "VoiceAttack")
		static void VoiceAttackGetJSONElement(UJSONHandle* JSONHandle, FString Name, FString& Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackGetJSONNumericElement", Keywords = "VoiceAttack Get JSON Numeric Element"), Category = "VoiceAttack")
		static void VoiceAttackGetJSONNumericElement(UJSONHandle* JSONHandle, FString Name, float& Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackGetJSONObject", Keywords = "VoiceAttack Get JSON Object"), Category = "VoiceAttack")
		static UJSONHandle* VoiceAttackGetJSONObject(UJSONHandle* JSONHandle, FString Name);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackGetJSONElement", Keywords = "VoiceAttack Get JSON Element from object array"), Category = "VoiceAttack")
		static void VoiceAttackGetJSONElementMultiple(UJSONHandleArray* JSONHandleArray, int Index, FString Name, FString& Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackSerializeJSONObject", Keywords = "VoiceAttack Serialize JSON Object"), Category = "VoiceAttack")
		static void VoiceAttackSerializeJSONObject(UJSONHandle* JSONHandle, FString& Value, bool& Success);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackSerializeJSONObjectArray", Keywords = "VoiceAttack Serialize JSON Object Array"), Category = "VoiceAttack")
		static void VoiceAttackSerializeJSONObjectArray(UJSONHandleArray* JSONHandleArray, FString& Value, bool& Success);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackParseString", Keywords = "VoiceAttack Parse String"), Category = "VoiceAttack")
		static void VoiceAttackParseString(UJSONHandle* JSONHandle, FString JSONString, bool& Success);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackParseMultiple", Keywords = "VoiceAttack Parse Multiple"), Category = "VoiceAttack")
		static UJSONHandleArray* VoiceAttackParseMultiple(FString JSONString, int& ElementCount, bool& Success);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackParseFile", Keywords = "VoiceAttack Parse Content of Text File"), Category = "VoiceAttack")
	//	static UJSONHandleArray* VoiceAttackParseFile(FString FileName, int& ElementCount, bool& Success);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackGetJSONObjectFromArray", Keywords = "VoiceAttack Get JSONObject From Array"), Category = "VoiceAttack")
		static UJSONHandle* VoiceAttackGetJSONObjectFromArray(UJSONHandleArray* JSONHandleArray, int Index, bool& Success);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackTTS", Keywords = "VoiceAttack TTS"), Category = "VoiceAttack")
	//	static void VoiceAttackTTS(FString Value);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackListVoices", Keywords = "VoiceAttack ListVoices"), Category = "VoiceAttack")
	//	static void VoiceAttackListVoices(TArray<FString>& Voices);


	FTimerHandle fhandle;

private:

};






