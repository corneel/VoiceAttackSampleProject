// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//#include "Runtime/Networking/Public/Networking.h"
#include "Runtime/Sockets/Public/Sockets.h"
//#include "Runtime/Sockets/Public/SocketSubsystem.h"

//#include "SocketTypes.h"
#include "UFSocket.generated.h"

class FInternetAddr;
/**
 * 
 */
UCLASS(BlueprintType)
class UFSocket : public UObject
{
	GENERATED_BODY()

public:

	bool SetSocket(FSocket* Socket);
	FSocket* GetSocket();
	void AddTCPClients(FSocket* Socket);
	void RemoveTCPClients(FSocket* Socket, int32 index);
	TArray<UFSocket*>* GetTCPClients();

	

private:
	FSocket* _Socket;
	TArray<UFSocket*>* _UFSocketClients;
	TArray<FSocket*>* _FSocketClients;
};
