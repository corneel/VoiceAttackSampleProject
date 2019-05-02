// Copyright 2019 Augmented Enterprise, Inc. All Rights Reserved.

#include "VoiceAttackPluginServerActor.h"
#include "VoiceAttackTCPServerImp.h"
#include "Runtime/Sockets/Public/Sockets.h"

// Default endpoint for the server
//#define DEFAULT_ENDPOINT FIPv4Endpoint(FIPv4Address(127, 0, 0, 1), 8080)


// Sets default values
AVoiceAttackPluginServerActor::AVoiceAttackPluginServerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AVoiceAttackPluginServerActor::BeginPlay()
{
	Super::BeginPlay();
	//Init();
}

void AVoiceAttackPluginServerActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (tcpServer != NULL)
	{
		delete tcpServer;
		tcpServer = NULL;
	}
}

// Called every frame
void AVoiceAttackPluginServerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AVoiceAttackPluginServerActor::StartRunning()
{

	if (tcpServer == NULL)
	{
		tcpServer = new FVoiceAttackTCPServer();	//this has been changed so that it doesn't have to be manually deleted...
//		tcpServer = NewObject<FVoiceAttackTCPServer>();
	}

	tcpServer->connectionTimeout = setConnectionTimeout;

	tcpServer->ipAddressIn = setIpAddress;

	tcpServer->portNum = setPortNum;
}

bool AVoiceAttackPluginServerActor::SendMessage(FString messageIn, FString& messageOut)
{
	//UE_LOG(LogTemp, Warning, TEXT("DEBUG - AVoiceAttackPluginServerActor::RSSendMessage(): %s"), *messageIn);
	messageOut = messageIn;
	tcpServer->SetMessage(messageIn);

	return true;
}


void AVoiceAttackPluginServerActor::SetMessage(FString message)
{
	tcpServer->SetMessage(message);
	//UE_LOG(LogTemp, Warning, TEXT("DEBUG - AVoiceAttackPluginServerActor::SetMessage(): %s"), *message);

}

FString AVoiceAttackPluginServerActor::GetMessage()
{
	FString TempMessage = tcpServer->ReceivedMessage();
	//ClearMessage();
	if (TempMessage.Len() > 0)
	{
		//UE_LOG(LogTemp, Warning, TEXT("AVoiceAttackPluginServerActor::GetMessage: %s"), *TempMessage);
	}
	return TempMessage;
}

void AVoiceAttackPluginServerActor::ClearMessage()
{
	tcpServer->ClearReceivedMessage();
}
