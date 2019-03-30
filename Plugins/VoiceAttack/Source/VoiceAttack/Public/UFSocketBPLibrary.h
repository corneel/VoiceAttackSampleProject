// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

//#include "Engine.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UFSocket.h"
#include "Runtime/Networking/Public/Networking.h"
#include "Runtime/Sockets/Public/Sockets.h"
#include "Runtime/Sockets/Public/SocketSubsystem.h"
#include "UFSocketBPLibrary.generated.h"

/* 

*/
UCLASS()
class UFSocketBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Connect to a TCP server", Keywords = "Sockets connect tcp tcpconnect socketconnect"), Category = "Networking|Sockets")
	static UFSocket* Connect(FString IP, int32 port, bool &success);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Send message to the server", Keywords = "Sockets send message tcpsend tcp tcpdisconnect socketsend"), Category = "Networking|Sockets")
	static bool SendMessage(UFSocket* Connection, FString Message);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get buffer (converted to FText) from server", Keywords = "Sockets send message tcpsend tcp tcpdisconnect socketsend"), Category = "Networking|Sockets")
	static bool GetMessage(UFSocket* Connection, FString &Message);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "HasPendingData", Keywords = "Sockets send message tcpsend tcp tcpdisconnect socketsend"), Category = "Networking|Sockets")
	static bool HasPendingData(UFSocket* Connection);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Close connection to TCP server", Keywords = "Sockets disconnect close tcpclose tcp tcpdisconnect socketdisconnect"), Category = "Networking|Sockets")
	static bool CloseConnection(UFSocket* Connection);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read Config File", Keywords = "Sockets config configuration file ini"), Category = "Networking|Sockets")
	static FString ReadConfig(const FString FileName, const FString Section, const FString Key);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Validate Socket", Keywords = "Sockets validate"), Category = "Networking|Sockets")
	static bool ValidateSocket(UFSocket* Connection);
};
