// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreUObject.h"
#include "Engine.h"
#include "Networking.h"
#include "TimerManager.h"
#include "Misc/FileHelper.h"

#include "AllowWindowsPlatformTypes.h"
#include <sapi.h>
//#include <sphelper.h>
#include "HideWindowsPlatformTypes.h"

#include "Windows/COMPointer.h"

#include "Runtime/JsonUtilities/Public/JsonUtilities.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"
#include "Runtime/Json/Public/Dom/JsonObject.h"
#include "SharedPointer.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoiceAttackBPLibrary.generated.h"

UCLASS(BlueprintType)
class USocket : public UObject
{
	GENERATED_BODY()
public:
	bool SetSocket(FSocket* Socket);
	FSocket* GetSocket();

private:
	FSocket * _Socket;

};

UCLASS()
class UVoiceAttackSocketBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Connect to a TCP server", Keywords = "Socket tcp connect"), Category = "VoiceAttack")
		static USocket* Connect(FString IP, int32 port, bool &success);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Send message to the server", Keywords = "Socket TCP send"), Category = "VoiceAttack")
		static bool SendMessage(USocket* Connection, FString Message);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get message from server", Keywords = "Socket TCP get"), Category = "VoiceAttack")
		static bool GetMessage(USocket* Connection, FString &Message);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "HasPendingData", Keywords = "Socket test if there is data to get"), Category = "VoiceAttack")
		static bool HasPendingData(USocket* Connection);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Close TCP connection", Keywords = "Socket close connection"), Category = "VoiceAttack")
		static bool CloseConnection(USocket* Connection);

};

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

UCLASS(BlueprintType, Blueprintable)
class UVoiceAttackBPLibrary : public UBlueprintFunctionLibrary
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

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackParseFile", Keywords = "VoiceAttack Parse Content of Text File"), Category = "VoiceAttack")
		static UJSONHandleArray* VoiceAttackParseFile(FString FileName, int& ElementCount, bool& Success);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackGetJSONObjectFromArray", Keywords = "VoiceAttack Get JSONObject From Array"), Category = "VoiceAttack")
		static UJSONHandle* VoiceAttackGetJSONObjectFromArray(UJSONHandleArray* JSONHandleArray, int Index, bool& Success);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackTTS", Keywords = "VoiceAttack TTS"), Category = "VoiceAttack")
		static void VoiceAttackTTS(FString Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "VoiceAttackListVoices", Keywords = "VoiceAttack ListVoices"), Category = "VoiceAttack")
		static void VoiceAttackListVoices(TArray<FString>& Voices);

	FSocket* ListenerSocket;
	FSocket* ConnectionSocket;
	FIPv4Endpoint RemoteAddressForConnection;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "StartTCPReceiver", Keywords = "VoiceAttack Start TCP Receiver"), Category = "VoiceAttack")
	bool StartTCPReceiver(
		const FString& YourChosenSocketName,
		const FString& TheIP,
		const int32 ThePort
	);

	FSocket* CreateTCPConnectionListener(
		const FString& YourChosenSocketName,
		const FString& TheIP,
		const int32 ThePort,
		const int32 ReceiveBufferSize = 2 * 1024 * 1024
	);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "TCPConnectionListener", Keywords = "VoiceAttack TCP Connection Listener"), Category = "VoiceAttack")
		void TCPConnectionListener(FString& Message);

	void TCPSocketListener(FString& Message);
	bool FormatIP4ToNumber(const FString& TheIP, uint8(&Out)[4]);
	FTimerHandle fhandle;

private:
	//TSharedPtr<FJsonObject> JsonObject;
	/*TArray<TSharedPtr<FJsonValue>> JsonObjectArray;*/
};
