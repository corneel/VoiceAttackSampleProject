// Fill out your copyright notice in the Description page of Project Settings.
#pragma once	//comment(lib, "rpcrt4.lib")


#include "TCPServerImp.h"
#include <string>
#include "Engine.h"
#include "NetworkMessage.h"

// Sets default values
FTCPServer::FTCPServer() : ClientThread(NULL)
{
	// Create a counter
	FThreadSafeCounter  WorkerCounter;

	// Increment the counter and create an unique name.
	FString ThreadName(FString::Printf(TEXT("MyThreadName%i"), WorkerCounter.Increment()));

	// Create the actual thread
	ClientThread = FRunnableThread::Create(this, *ThreadName, 8 * 1024, TPri_Normal);
	
	
//	Thread = FRunnableThread::Create(this, TEXT("FRemoteServer"), 8 * 1024, TPri_Normal);
}


FTCPServer::~FTCPServer()
{
	// Stop the runnable
	Stop();

	// Stop accepting clients first
	if (Listener != NULL)
	{
		Listener->Stop();
		delete Listener;
		Listener = NULL;
	}

	// Kill all pending connections and current connections
	if (!PendingClients.IsEmpty())
	{
		FSocket *Client = NULL;

		while (PendingClients.Dequeue(Client))
		{
			Client->Close();
			delete Client;
			Client = NULL;
		}
	}

	for (TArray<class FSocket*>::TIterator ClientIt(Clients); ClientIt; ++ClientIt)
	{
		(*ClientIt)->Close();
		delete (*ClientIt);
		(*ClientIt) = NULL;
	}

	// And last but not least stop the main thread
	if (ClientThread != NULL)
	{
		ClientThread->Kill(true);
		delete ClientThread;
	}
}


bool FTCPServer::Init()
{
//	if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("DEBUG - FTCPServer::Init()")));
	
	if (Listener == NULL)
	{
		FIPv4Address address;
		
		FIPv4Address::Parse(ipAddressIn, address);
		
		FIPv4Endpoint endPoint = FIPv4Endpoint(address, portNum);
		
		Listener = new FTcpListener(endPoint, FTimespan::FromMilliseconds(300));

		Listener->OnConnectionAccepted().BindRaw(this, &FTCPServer::HandleListenerConnectionAccepted);
		
		Stopping = false;
	}

	TArray<FString> Tokens;

	//bool sucessful = ParseMessage("Bob|BigD23|E621E45845E7B84765F63FA0C216C64C|32,54,78|.56,.34,.78,1", Tokens);//This is a test to parse messages... will need to go away from here

	//UE_LOG(LogTemp, Warning, TEXT("The split string is - Name: %s, Password: %s, ClientID: %s, Location: %s, Rotation: %s"), *Tokens[0], *Tokens[1], *Tokens[2], *Tokens[3], *Tokens[4]);
	
	return (Listener != NULL);
}


uint32  FTCPServer::Run()
{
	while (!Stopping)
	{

		if (!PendingClients.IsEmpty())
		{
			FSocket *Client = NULL;
			
			while (PendingClients.Dequeue(Client))
			{
				Clients.Add(Client);
				//This is to add a client to the connection timer array zeroed,
				//and disconnects the client when the timer reaches a set time.
				connectionTimer.AddZeroed(1);
			}
		}

		if (Clients.Num() > 0)
		{
			uint32 DataSize = 0;
			// remove closed connections
			for (int32 ClientIndex = Clients.Num() - 1; ClientIndex >= 0; --ClientIndex)
			{
				if (Clients[ClientIndex]->GetConnectionState() == SCS_NotConnected)
				{
					//UE_LOG(LogTemp, Warning, TEXT("Client %i has disconnected..."), Clients[ClientIndex]);
					
					Clients.RemoveAtSwap(ClientIndex);

					connectionTimer.RemoveAtSwap(ClientIndex);
				}
				// Remove clients if connected for more than a given time...
				else if (connectionTimer[ClientIndex] > connectionTimeout*3)
				{
					//UE_LOG(LogTemp, Warning, TEXT("Client connection timeout is: %i"), connectionTimer[ClientIndex]);

					SendMessage(Clients[ClientIndex], "\nServer connection timed out...\n");

					Clients[ClientIndex]->Close();

				}
				//Check if connected clients need more time
				else if (Clients[ClientIndex]->HasPendingData(DataSize) && (connectionTimer[ClientIndex] - 10) > 0)
				{
					connectionTimer[ClientIndex] -= 10;
				}

				else
				{
					//countdown for each client connected
					connectionTimer[ClientIndex]++;
				}
			}

			// Poll data from every connected client
			for (TArray<class FSocket*>::TIterator ClientIt(Clients); ClientIt; ++ClientIt)
			{
				FSocket *Client = *ClientIt;
				
				DataSize = 0;

				FString Request;

				TArray<uint8> data;

				bool haveMessage = false;

				while (Client->HasPendingData(DataSize))
				{
					haveMessage = RecvMessage(Client, DataSize, Request);

					if (haveMessage)
					{
						

						//UE_LOG(LogTemp, Warning, TEXT("TCPServerImp: Message received from client: %s"), *Request);


						int32 timer = 0;

						SetReceivedMessage(Request);

						while (GetMessageToSend().IsEmpty())
						{
							FPlatformProcess::Sleep(0.001f);

							if (timer > 2001)
								break;

							timer++;
						}

						SendMessage(Client, "\n" + GetMessageToSend() + "\n"); //This sends  the message to the client(s)...

//						SendEncryptedData(Client, data, success);

//------------------------------------------------------------------------------------------------------------------------
						//Testing clientID creation... needs moved to another logical place?
						//UE_LOG(LogTemp, Warning, TEXT("The Client ID is: %s"), *CreateClientID());

//------------------------------------------------------------------------------------------------------------------------

						ClearMessage();

						//ClearLoginInfo();



						Request.Empty();

						haveMessage = false;
					}
				}
			}
		}


		FPlatformProcess::Sleep(0.3f);
	}
	
	return 0;
}

bool FTCPServer::ParseMessage(const FString& message, TArray<FString>& Tokens)
{
//	FString aString = message;

//	TArray<FString> Tokens;

	if (message.ParseIntoArray(Tokens, TEXT("|"), false) == 5)
	{
		return true;
	}

	return false;
}


FString FTCPServer::CreateClientID()
{
	return FGuid::NewGuid().ToString();
}

void FTCPServer::SendEncryptedData(FSocket *sock, TArray<uint8> data, bool& success)
{

	check(sock);
	
//	success = FNFSMessageHeader::WrapAndSendPayload(data, FSimpleAbstractSocket_FSocket(sock));

//	SendMessage(sock, TEXT("\\ENC\\"));	//This is the "header" for Encrypted Data so it can be parsed
	
	int32 BytesSent = 0;

	success = sock->Send(data.GetData(), data.Num(), BytesSent);
}

void FTCPServer::RecvEncryptedData(FSocket *sock, TArray<uint8>& data, bool& success)
{
	
	check(sock);
	uint32 DataSize;
	FArrayReaderPtr Datagram = MakeShareable(new FArrayReader(true));
	bool hasData = sock->HasPendingData(DataSize);

	if (hasData) 
	{
		success = true;
		Datagram->Init(FMath::Min(DataSize, 65507u), 128);

		int32 BytesRead = 0;

		success = sock->Recv(Datagram->GetData(), Datagram->Num(), BytesRead);

		data = *Datagram;
		return;
	}
		
	success = false;

}

FString FTCPServer::ReceivedMessage()
{
	//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("From Client ~> %s"), *message));

	return _receivedMessage;
}

void FTCPServer::SetReceivedMessage(FString message)
{
	//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("From Client ~> %s"), *message));
	_receivedMessage = message;
}

/** Send a string message over to a socket */
bool FTCPServer::SendMessage(FSocket *Socket, FString Message)
{
	check(Socket);
	int32 BytesSent = 0;
	try 
	{
		if (Socket)
		{
			return Socket->Send((uint8*)TCHAR_TO_UTF8(*Message), Message.Len(), BytesSent);
		}
	}
	catch (...)
	{

	}
	return false;
}

/** Receive a string message from a socket */
bool FTCPServer::RecvMessage(FSocket *Socket, uint32 DataSize, FString& Message)
{
	check(Socket);

	FArrayReaderPtr Datagram = MakeShareable(new FArrayReader(true));
	int32 stuff = 16;
	Datagram->Init(FMath::Min(DataSize, 128000u), 127999);

	int32 BytesRead = 0;
	if (Socket)
	{
		if (Socket->Recv(Datagram->GetData(), Datagram->Num(), BytesRead))
		{
			char* Data = (char*)Datagram->GetData();
			Data[BytesRead] = '\0';
			FString message = UTF8_TO_TCHAR(Data);
			Message = message;

			/*UE_LOG(LogTemp, Warning, TEXT("FTCPServer::RecvMessage: Data received: %s"), *Message);
			UE_LOG(LogTemp, Warning, TEXT("FTCPServer::RecvMessage: Data length: %d"), Message.Len());
			UE_LOG(LogTemp, Warning, TEXT("FTCPServer::RecvMessage: BytesRead: %d"), BytesRead);*/

			return true;
		}
	}

	return false;
}


bool FTCPServer::HandleListenerConnectionAccepted(class FSocket *ClientSocket, const FIPv4Endpoint& ClientEndpoint)
{
	PendingClients.Enqueue(ClientSocket);
	return true;
}


FString FTCPServer::GetMessageToSend()
{
	return _tempString;
}


void FTCPServer::SetMessage(FString message)
{
	_tempString = message;
}

void FTCPServer::ClearReceivedMessage()
{
	_receivedMessage.Empty();
}

void FTCPServer::ClearMessage()
{
	_tempString.Empty();
}

bool FTCPServer::SocketCheckPendingData(FSocket* Sock)
{
	uint32 dataSize = 0;
	return Sock->HasPendingData(dataSize);
}


