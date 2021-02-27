// Copyright 2020 Augmented Enterprise, Inc. All Rights Reserved.

#pragma once

#pragma once

#include "CoreMinimal.h"
//#include "Engine.h"
#include "GameFramework/Actor.h"

//#include "CoreUObject.h"
#include "CoreMinimal.h"
#include <string>
#include "Sockets.h"
#include "Runtime/Core/Public/Containers/Queue.h"
#include "Runtime/Networking/Public/Common/UdpSocketReceiver.h"
#include "Runtime/Networking/Public/Common/TcpListener.h"
//#include "Networking.h"

class FTCPServer : public FRunnable
{

public:
	// Sets default values for this actor's properties
	FTCPServer();
	~FTCPServer();
	
		/** FRunnable init */
	virtual bool Init() override;

	/** FRunnable loop */
	virtual uint32 Run() override;
	
	bool IsActive() const
	{
		return (!Stopping);
	}

	virtual void Stop() override
	{
		Stopping = true;
	}

	virtual void Exit() override { }

	FString ReceivedMessage();
	void SetReceivedMessage(FString message);
	bool SendMessage(FSocket *Socket, FString Message);
	void SendEncryptedData(FSocket *sock, TArray<uint8> data, bool& success);
	bool RecvMessage(FSocket *Socket, uint32 DataSize, FString& Message);
	void RecvEncryptedData(FSocket *sock, TArray<uint8>& data, bool& success);
	bool HandleListenerConnectionAccepted(class FSocket *ClientSocket, const FIPv4Endpoint& ClientEndpoint);

public:
	
	FSocket* ListenerSocket;
	FSocket* ConnectionSocket;
	FIPv4Endpoint RemoteAddressForConnection;
	FString ipAddressIn = "127.0.0.1";	// = "127.0.0.1"
	int32 portNum = 8080;	// = 8080
	FString GetMessage();
	FString GetMessageToSend();
	void SetMessage(FString message);
	void ClearMessage();
	void ClearReceivedMessage();
	int32 connectionTimeout;
	bool ParseMessage(const FString& message, TArray<FString>& Tokens);
	TArray<class FSocket*> Clients;
	bool SocketCheckPendingData(FSocket* Sock);
	//TArray<class UFSocket*>* GetConnectedClients();
	
private:

	/** Current clients and pending to get accepted clients */
	TQueue<class FSocket*, EQueueMode::Mpsc> PendingClients;
	FString CreateClientID();
	/** Used to tell that the thread is stopping */
	bool Stopping;
	/** Connection thread, used to not block the editor when waiting for connections */
	FRunnableThread* ClientThread = NULL;
	class FTcpListener *Listener = NULL;
	FString _LoginInfo;
	FString _tempString;
	FString _receivedMessage;
	FDateTime *getRealTime = NULL;
	TArray<int32> connectionTimer;
};



