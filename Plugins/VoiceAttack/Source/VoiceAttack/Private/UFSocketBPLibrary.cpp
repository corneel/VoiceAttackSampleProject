// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UFSocketBPLibrary.h"
#include "Runtime/Core/Public/Misc/ConfigCacheIni.h"

UFSocketBPLibrary::UFSocketBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

UFSocket* UFSocketBPLibrary::Connect(FString IP, int32 port, bool& success)
{
	// Create an FSocket pointer to work with and an USocket pointer to return.
	FSocket* MySockTemp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("Managed TCP Socket"), false);
	UFSocket* NetSock = NewObject<UFSocket>();

	// Create & set a variable to store the parsed ip address
	FIPv4Address ipv4ip;
	FIPv4Address::Parse(IP, ipv4ip);

	// Now combine that with the port to create the address
	TSharedRef<FInternetAddr> SockAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr(ipv4ip.Value, port);

	// Attempt to connect, and store if it succeeded in a variable
	bool connected = MySockTemp->Connect(*SockAddr);

	// Verify it is connected
	if (!connected)
	{
		// And if not log an error and return an error
		UE_LOG(LogTemp, Error, TEXT("Could not connect"));
		success = false;
		return nullptr;
	}

	// Set the UObject wrappers its socket to the connected one
	NetSock->SetSocket(MySockTemp);

	success = true;
	return NetSock;
}

bool UFSocketBPLibrary::SendMessage(UFSocket * Connection, FString Message)
{
	
	// If the passed in socket is not valid
	if (!IsValid(Connection))
	{
		return false;
	}

	// Set an FSocket pointer to the socket inside of the passed in USocket
	FSocket* MySocket = Connection->GetSocket();

	// Check if it is not a null pointer
	if (MySocket == nullptr)
	{
		return false;
	}

	// Serialize the message
	TCHAR *serializedChar = Message.GetCharArray().GetData();
	// Get / setup parameters
	int32 size = FCString::Strlen(serializedChar);
	int32 sent = 0;

	// Send the message
	bool successful = MySocket->Send((uint8*)TCHAR_TO_UTF8(serializedChar), size, sent);

	// And check if there was an error
	if (!successful)
	{
		UE_LOG(LogTemp, Error, TEXT("Error sending message!!"));
		return false;
	}
	else
	{
		return true;
	}
}

bool UFSocketBPLibrary::GetMessage(UFSocket* Connection, FString &Message)
{
	// If the passed in socket is not valid
	if (!IsValid(Connection))
	{
		return false;
	}

	// Set an FSocket pointer to the socket inside of the passed in USocket
	FSocket* MySocket = Connection->GetSocket();

	// Check if it is not a null pointer
	if (MySocket == nullptr)
	{
		return false;
	}


	// Credit to RAMA for this converter!
	//Binary Array!
	TArray<uint8> BinaryData;
	uint32 Size;

	while (MySocket->HasPendingData(Size))
	{
		// Be sure that the array doesn't become absolutely insanely large
		BinaryData.Init(0, FMath::Min(Size, 65507u));

		// Set the counter for the ammount of bytes read to 0
		int32 Read = 0;
		// Recieve the data from the socket and put it into the binary array
		MySocket->Recv(BinaryData.GetData(), BinaryData.Num(), Read);
	}

	// Check if there was actually data read into the array
	if (BinaryData.Num() <= 0)
	{
		// No data was read!
		//UE_LOG(LogTemp, Warning, TEXT("No data to read!"));
		return false;
	}
	else
	{
		// Be sure to \0 terminate the array
		BinaryData.Add(0);
		// Convert it to an fstring and set the passed in message parameter
		Message = FString(ANSI_TO_TCHAR(reinterpret_cast<const char*>(BinaryData.GetData())));
		return true;
	}


}

bool UFSocketBPLibrary::HasPendingData(UFSocket * Connection)
{
	// If the passed in socket is not valid
	if (!IsValid(Connection))
	{
		return false;
	}

	// Set an FSocket pointer to the socket inside of the passed in USocket
	FSocket* MySocket = Connection->GetSocket();

	// Check if it is not a null pointer
	if (MySocket == nullptr)
	{
		return false;
	}

	// Unused but required for the function to work
	uint32 Size;

	// Return if the socket has pending data
	return MySocket->HasPendingData(Size);
}

bool UFSocketBPLibrary::CloseConnection(UFSocket * Connection)
{
	// If the passed in socket is not valid
	if (!IsValid(Connection))
	{
		return false;
	}

	// Set an FSocket pointer to the socket inside of the passed in USocket
	FSocket* MySocket = Connection->GetSocket();

	// Check if it is not a null pointer
	if (MySocket == nullptr)
	{
		return false;
	}

	// Attempt to close it and return if it was successful or not
	return MySocket->Close();
}

FString UFSocketBPLibrary::ReadConfig(const FString FileName, const FString Section, const FString Key)
{
	
	if (!GConfig) return "";
	
	const TCHAR* getSection = *Section;
	const TCHAR* getKey = *Key;

	FString configPath = FPaths::ProjectConfigDir() + FileName;	//Reading from filename Settings.ini

	FString KeyValue;
	GConfig->GetString(
		getSection,
		getKey,
		KeyValue,
		configPath
	);

	return KeyValue;
}


bool UFSocketBPLibrary::ValidateSocket(UFSocket* Connection)
{
	if (Connection->GetSocket() == nullptr)
	{
		return false;
	}
	return true;
}