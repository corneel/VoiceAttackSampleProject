// Copyright 2020 Augmented Enterprise, Inc. All Rights Reserved.

#include "ServerControl.h"
#include "TCPServerImp.h"
#include "Runtime/Sockets/Public/Sockets.h"

// Default endpoint for the server
//#define DEFAULT_ENDPOINT FIPv4Endpoint(FIPv4Address(127, 0, 0, 1), 8080)


// Sets default values
AServerControl::AServerControl()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AServerControl::BeginPlay()
{
	Super::BeginPlay();
	//Init();
}

void AServerControl::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (tcpServer != NULL)
	{
		delete tcpServer;
		tcpServer = NULL;
	}
}

// Called every frame
void AServerControl::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AServerControl::StartRunning()
{

	if (tcpServer == NULL)
	{
		tcpServer = new FTCPServer();	//this has been changed so that it doesn't have to be manually deleted...
//		tcpServer = NewObject<FTCPServer>();
	}

	tcpServer->connectionTimeout = setConnectionTimeout;

	tcpServer->ipAddressIn = setIpAddress;

	tcpServer->portNum = setPortNum;
}

bool AServerControl::SendMessage(FString messageIn, FString& messageOut)
{
	//if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("DEBUG - AServerControl::RSSendMessage(): %s"), *messageIn));
	messageOut = messageIn;
	tcpServer->SetMessage(messageIn);

	return true;
}


void AServerControl::SetMessage(FString message)
{
	tcpServer->SetMessage(message);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("DEBUG - AServerControl::SetMessage(): %s"), *message));

}

FString AServerControl::GetMessage()
{
	FString TempMessage = tcpServer->ReceivedMessage();
	//ClearMessage();
	if (TempMessage.Len() > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("AServerControl::GetMessage: %s"), *TempMessage);
	}
	return TempMessage;
}

void AServerControl::ClearMessage()
{
	tcpServer->ClearReceivedMessage();
}
