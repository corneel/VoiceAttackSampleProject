// Fill out your copyright notice in the Description page of Project Settings.

#include "UFSocket.h"
#include "Engine.h"

bool UFSocket::SetSocket(FSocket* Socket)
{
	_Socket = Socket;

	if (_Socket != nullptr)
	{
		AddTCPClients(Socket);
		return true;
	}
	return false;
}

FSocket* UFSocket::GetSocket()
{
	if (_Socket != nullptr) {
		return _Socket;
	}
	return nullptr;
}

void UFSocket::AddTCPClients(FSocket* Socket)
{
	_FSocketClients->Add(Socket);
}

void UFSocket::RemoveTCPClients(FSocket* Socket, int32 index)
{
	_FSocketClients->RemoveAt(index);
}

TArray<UFSocket*>* UFSocket::GetTCPClients()
{
	if (_FSocketClients->Num() <= 0)
	{
//		success = false;
		_UFSocketClients = nullptr;
		return _UFSocketClients;
	}

	for (int32 index = 0; index <= _FSocketClients->Num() - 1; index++)
	{
		if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("DEBUG - before -- UFSocket *temp = NULL;"))); }
		UFSocket* sock = NewObject<UFSocket>();
		sock->SetSocket(_FSocketClients[index].Pop());
		_UFSocketClients[index].Add(sock);

	}
//	success = true;
	return _UFSocketClients;



}