// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "VoiceAttackBPLibrary.h"
#include "VoiceAttack.h"

UVoiceAttackBPLibrary::UVoiceAttackBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

UJSONHandle* UVoiceAttackBPLibrary::VoiceAttackNewJSONObject()
{
	UJSONHandle* JsonHandle = NewObject<UJSONHandle>();
	JsonHandle->JSONObject = MakeShareable(new FJsonObject);
	return JsonHandle;
}

UJSONHandleArray* UVoiceAttackBPLibrary::VoiceAttackNewJSONObjectArray()
{
	UJSONHandleArray* JSONHandleArray = NewObject<UJSONHandleArray>();
	return JSONHandleArray;
}

void UVoiceAttackBPLibrary::VoiceAttackAddJSONElement(UJSONHandle* JSONHandle, FString Name, FString Value)
{
	try
	{
		if (JSONHandle)
		{
			FString NewName = Name.ReplaceEscapedCharWithChar();
			if (NewName != "")
			{
				JSONHandle->JSONObject->SetStringField(NewName, Value);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONElement: The name of the element must be provided"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONElement: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONElement: exception caught"));
	}
}

void UVoiceAttackBPLibrary::VoiceAttackAddJSONNumericElement(UJSONHandle* JSONHandle, FString Name, float Value)
{
	try
	{
		if (JSONHandle)
		{
			FString NewName = Name.ReplaceEscapedCharWithChar();
			JSONHandle->JSONObject->SetNumberField(NewName, (double)Value);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONNumericElement: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONNumericElement: exception caught"));
	}
}

void UVoiceAttackBPLibrary::VoiceAttackAddJSONObject(UJSONHandle* JSONHandle, FString Name, UJSONHandle* Value)
{
	try
	{
		if (JSONHandle && Value)
		{
			FString NewName = Name.ReplaceEscapedCharWithChar();
			JSONHandle->JSONObject->SetObjectField(Name, Value->JSONObject);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONObject: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONObject: exception caught"));
	}
}

void UVoiceAttackBPLibrary::VoiceAttackAddJSONObjectToArray(UJSONHandleArray* JSONHandleArray, UJSONHandle* Value)
{
	try
	{
		if (JSONHandleArray && Value)
		{
			TSharedRef<FJsonValueObject> JsonValue = MakeShareable(new FJsonValueObject(Value->JSONObject));
			JSONHandleArray->JSONObjectArray.Add(JsonValue);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONObjectToArray: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONObjectToArray: exception caught"));
	}
}

void UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToObject(UJSONHandle* JSONHandle, FString Name, UJSONHandleArray* Value)
{
	try
	{
		if (JSONHandle && JSONHandle->JSONObject && Value)
		{
			JSONHandle->JSONObject->SetArrayField(Name, Value->JSONObjectArray);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToObject: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToObject: exception caught"));
	}
}



void UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToArray(UJSONHandleArray* JSONHandleArray, FString Name, UJSONHandleArray* Value)
{
	try
	{
		if (JSONHandleArray && Value)
		{
			UJSONHandle* JSONHandle = NewObject<UJSONHandle>();
			UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToObject(JSONHandle, Name, Value);
			TSharedRef<FJsonValueObject> JsonValue = MakeShareable(new FJsonValueObject(JSONHandle->JSONObject));
			JSONHandleArray->JSONObjectArray.Add(JsonValue);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToArray: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackAddJSONArrayToArray: exception caught"));
	}
}

void UVoiceAttackBPLibrary::VoiceAttackGetJSONElement(UJSONHandle* JSONHandle, FString Name, FString& Value)
{
	try
	{
	if (JSONHandle)
	{
		FString NewName = Name.ReplaceEscapedCharWithChar();
		Value = "";
		JSONHandle->JSONObject->TryGetStringField(NewName, Value);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackGetJSONElement: null pointer detected"));
	}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackGetJSONElement: exception caught"));
	}
}

void UVoiceAttackBPLibrary::VoiceAttackGetJSONNumericElement(UJSONHandle* JSONHandle, FString Name, float& Value)
{
	try
	{
	if (JSONHandle)
	{
		FString NewName = Name.ReplaceEscapedCharWithChar();
		Value = 0;
		double Temp = 0;
		JSONHandle->JSONObject->TryGetNumberField(NewName, Temp);
		Value = (float)Temp;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackGetJSONNumericElement: null pointer detected"));
	}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackGetJSONNumericElement: exception caught"));
	}
}


UJSONHandle* UVoiceAttackBPLibrary::VoiceAttackGetJSONObject(UJSONHandle* JSONHandle, FString Name)
{
	try
	{
	UJSONHandle* OutHandle = NewObject<UJSONHandle>();
	if (JSONHandle)
	{
		FString NewName = Name.ReplaceEscapedCharWithChar();
		OutHandle->JSONObject = JSONHandle->JSONObject->GetObjectField(NewName);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackGetJSONObject: null pointer detected"));
	}
	return OutHandle;
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackGetJSONObject: exception caught"));
	}
	return nullptr;
}

void UVoiceAttackBPLibrary::VoiceAttackGetJSONElementMultiple(UJSONHandleArray* JSONHandleArray, int Index, FString Name, FString& Value)
{
	try
	{
		if (JSONHandleArray)
		{
			Value = "";
			if (Index <= JSONHandleArray->JSONObjectArray.Num() - 1)
			{
				Value = JSONHandleArray->JSONObjectArray[Index]->AsObject()->GetStringField(Name);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackGetJSONElementMultiple: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackGetJSONElementMultiple: exception caught"));
	}
}

void UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObject(UJSONHandle* JSONHandle, FString & Value, bool & Success)
{
	if (JSONHandle)
	{		
		Value = "";
		Success = false;
		FString OutputString;
		try
		{
			TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
			FJsonSerializer::Serialize(JSONHandle->JSONObject.ToSharedRef(), Writer);
			Success = true;
			Value = OutputString;
			return;
		}
		catch (...)
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObject: Unknown exception caught while serializing object"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObject: null pointer detected"));
	}
}

void UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObjectArray(UJSONHandleArray* JSONHandleArray, FString & Value, bool & Success)
{

	if (JSONHandleArray)
	{
		/*if (JSONHandleArray->JSONObjectArray.Num() > 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObjectArray: Array is empty"));
			Value = "";
			Success = false;
			return;
		}*/
		Value = "";
		Success = false;
		FString OutputString;
		try
		{
			TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
			FJsonSerializer::Serialize(JSONHandleArray->JSONObjectArray, Writer);
		
			Success = true;
			Value = OutputString;
			return;
		}
		catch (...)
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObjectArray: Unknown exception caught while serializing object"));
		}
	}
	else
	{
	UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackSerializeJSONObjectArray: null pointer detected"));
	}

}

UJSONHandleArray* UVoiceAttackBPLibrary::VoiceAttackParseMultiple(FString JSONString, int & ElementCount, bool & Success)
{
	try
	{
		Success = false;
		ElementCount = 0;
		UJSONHandleArray* JSONHandleArray = NewObject<UJSONHandleArray>();

		TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JSONString);
		if (FJsonSerializer::Deserialize(JsonReader, JSONHandleArray->JSONObjectArray))
		{
			ElementCount = JSONHandleArray->JSONObjectArray.Num();
			Success = true;
		}
		return JSONHandleArray;
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackParseMultiple: Unknown exception caught while parsing string"));
	}
	return nullptr;
}

UJSONHandle* UVoiceAttackBPLibrary::VoiceAttackGetJSONObjectFromArray(UJSONHandleArray* JSONHandleArray, int Index, bool& Success)
{
	try
	{
		UJSONHandle* JSONHandle = NewObject<UJSONHandle>();
		if (JSONHandleArray)
		{
			if (Index <= JSONHandleArray->JSONObjectArray.Num())
			{
				Success = true;
				JSONHandle->JSONObject = JSONHandleArray->JSONObjectArray[Index]->AsObject();
				return JSONHandle;
			}
			Success = false;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackGetJSONObjectFromArray: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackGetJSONObjectFromArray: exception caught"));
	}
	return nullptr;
}

void UVoiceAttackBPLibrary::VoiceAttackListVoices(TArray<FString>& Voices)
{
	HRESULT hr = S_OK;

	//TComPtr<ISpObjectTokenCategory> cpSpCategory = NULL;
	ISpObjectTokenCategory * cpSpCategory = NULL;

	hr = CoCreateInstance(CLSID_SpObjectTokenCategory, NULL, CLSCTX_INPROC_SERVER, __uuidof(ISpObjectTokenCategory), (void **)&cpSpCategory);

	if (SUCCEEDED(hr))
	{
		//TComPtr<IEnumSpObjectTokens> cpSpEnumTokens;
		hr = cpSpCategory->SetId(SPCAT_VOICES, false);
		if (SUCCEEDED(hr))
		{

			IEnumSpObjectTokens * cpSpEnumTokens;

			if (SUCCEEDED(hr = cpSpCategory->EnumTokens(NULL, NULL, &cpSpEnumTokens)))
			{
				//TComPtr<ISpObjectToken> pSpTok;
				ISpObjectToken * pSpTok;
				while (SUCCEEDED(hr = cpSpEnumTokens->Next(1, &pSpTok, NULL)))
				{

				}

			}
		}
	}
}

void UVoiceAttackBPLibrary::VoiceAttackTTS(FString Value)
{
	ISpVoice * pVoice = NULL;

	if (FAILED(::CoInitialize(NULL)))
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackTTS: FAILED(::CoInitialize(NULL))"));
	}

	HRESULT hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void **)&pVoice);

	if (SUCCEEDED(hr))
	{
		hr = pVoice->Speak(*Value, 0, NULL);
		pVoice->Release();
		pVoice = NULL;
	}

	::CoUninitialize();
}

UJSONHandleArray* UVoiceAttackBPLibrary::VoiceAttackParseFile(FString FileName, int& ElementCount, bool& Success)
{
	Success = false;
	try
	{
		FString FileContents;
		FString projectDir = FPaths::ProjectDir() + FileName;
		if (FFileHelper::LoadFileToString(FileContents, *projectDir, FFileHelper::EHashOptions::None))
		{
			FString JSONArrayString = "[" + FileContents + "]";
			return UVoiceAttackBPLibrary::VoiceAttackParseMultiple(JSONArrayString, ElementCount, Success);
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackParseFile: Unknown exception caught while parsing string"));
	}
	return nullptr;
}

void UVoiceAttackBPLibrary::VoiceAttackParseString(UJSONHandle* JSONHandle, FString JSONString, bool& Success)
{
	Success = false;	
	try
	{
		TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JSONString);
		if (FJsonSerializer::Deserialize(JsonReader, JSONHandle->JSONObject))
		{
			Success = true;
			return;
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackParseString: Unknown exception caught while parsing string"));
	}
}

bool UVoiceAttackBPLibrary::StartTCPReceiver(
	const FString& YourChosenSocketName,
	const FString& TheIP,
	const int32 ThePort
) {
	ListenerSocket = CreateTCPConnectionListener(YourChosenSocketName, TheIP, ThePort);

	if (!ListenerSocket)
	{
		UE_LOG(LogTemp, Warning, TEXT("Listen socket could not be created!"));
		return false;
	}

	//GetWorld()->GetTimerManager().SetTimer(fhandle, this, &UVoiceAttackBPLibrary::TCPConnectionListener, 0.01, true);

	/*FString Message;
	TCPConnectionListener(Message);*/

	return true;
}

bool UVoiceAttackBPLibrary::FormatIP4ToNumber(const FString& TheIP, uint8(&Out)[4])
{
	TheIP.Replace(TEXT(" "), TEXT(""));
	TArray<FString> Parts;
	TheIP.ParseIntoArrayWS(Parts, TEXT("."), true);
	if (Parts.Num() != 4)
		return false;

	for (int32 i = 0; i < 4; ++i)
	{
		Out[i] = FCString::Atoi(*Parts[i]);
	}

	return true;
}

FSocket* UVoiceAttackBPLibrary::CreateTCPConnectionListener(const FString& YourChosenSocketName, const FString& TheIP, const int32 ThePort, const int32 ReceiveBufferSize)
{
	uint8 IP4Nums[4];
	if (!FormatIP4ToNumber(TheIP, IP4Nums))
	{
		UE_LOG(LogTemp, Warning, TEXT("Expecting 4 ip addr parts"));
		return false;
	}

	//FIPv4Endpoint Endpoint(FIPv4Address(IP4Nums[0], IP4Nums[1], IP4Nums[2], IP4Nums[3]), ThePort);
	FIPv4Endpoint Endpoint(FIPv4Address(127, 0, 0, 1), 32001);
	FSocket* ListenSocket = FTcpSocketBuilder(*YourChosenSocketName)
		.AsReusable()
		.BoundToEndpoint(Endpoint)
		.Listening(8);

	int32 NewSize = 0;
	ListenSocket->SetReceiveBufferSize(ReceiveBufferSize, NewSize);

	return ListenSocket;
}

void UVoiceAttackBPLibrary::TCPConnectionListener(FString& Message)
{
	Message = "";
	if (!ListenerSocket) return;

	TSharedRef<FInternetAddr> RemoteAddress = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	bool Pending;

	if (ListenerSocket->HasPendingConnection(Pending) && Pending)
	{

		if (ConnectionSocket)
		{
			ConnectionSocket->Close();
			ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(ConnectionSocket);
		}

		ConnectionSocket = ListenerSocket->Accept(*RemoteAddress, TEXT("Received socket connection"));

		if (ConnectionSocket != NULL)
		{
			//Global cache of current Remote Address
			RemoteAddressForConnection = FIPv4Endpoint(RemoteAddress);
			TCPSocketListener(Message);
			//GetWorld()->GetTimerManager().SetTimer(fhandle, this, &UVoiceAttackBPLibrary::TCPConnectionListener, 0.01, true);
		}
	}
}


void UVoiceAttackBPLibrary::TCPSocketListener(FString& Message)
{
	Message = "";
	if (!ConnectionSocket) return;

	TArray<uint8> ReceivedData;

	uint32 Size;

	while (ConnectionSocket->HasPendingData(Size))
	{
		ReceivedData.Init(0x00, 65507u);

		int32 Read = 0;
		ConnectionSocket->Recv(ReceivedData.GetData(), ReceivedData.Num(), Read);

		UE_LOG(LogTemp, Warning, TEXT("Number of bytes read %d"), ReceivedData.Num());
	}

	if (ReceivedData.Num() <= 0)
	{
		//No Data Received
		return;
	}
	
	Message = FString(UTF8_TO_TCHAR(ReceivedData.GetData()));

	UE_LOG(LogTemp, Warning, TEXT("Data Read %s"), *Message);

}

///**********************************************************************
//*	UJSONHandle
//**********************************************************************/
//UJSONHandle::UJSONHandle(const FObjectInitializer& ObjectInitializer)
//	: Super(ObjectInitializer)
//{
//
//}

/**********************************************************************
 *	USocket
 **********************************************************************/
bool USocket::SetSocket(FSocket* Socket)
{
	_Socket = Socket;
	return false;
}

FSocket* USocket::GetSocket()
{
	return _Socket;
}

/**********************************************************************
*	UVoiceAttackSocketBPLibrary
**********************************************************************/
UVoiceAttackSocketBPLibrary::UVoiceAttackSocketBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

USocket* UVoiceAttackSocketBPLibrary::Connect(FString IP, int32 port, bool& success)
{
	// Create an FSocket pointer to work with and an USocke pointer to return.
	//FSocket* MySockTemp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("Socketer Managed TCP Socket"), false);
	//ISocketSubsystem::GetLocalBindAddr()
	USocket* NetSock = NewObject<USocket>();
	
	// Create & set a variable to store the parsed ip address
	FIPv4Address ipv4ip;
	FIPv4Address::Parse(IP, ipv4ip);
	UE_LOG(LogTemp, Warning, TEXT("Connect: FIPv4Address created: %s"), *ipv4ip.ToString());

	TSharedRef<FInternetAddr> addr2 = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalBindAddr(*GLog);
	addr2->SetPort(port);
	// Now combine that with the port to create the address
	//TSharedRef<FInternetAddr> SockAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr(ipv4ip.Value, port);

	/*TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(ipv4ip.Value);
	addr->SetPort(port);
	UE_LOG(LogTemp, Warning, TEXT("Connect: FInternetAddr created: %s"), *addr->ToString(true));*/

	FTcpSocketBuilder builder = FTcpSocketBuilder("SOCKETNAME");
	builder.BoundToAddress(ipv4ip);
	builder.AsBlocking();
	//builder.AsNonBlocking();
	builder.AsReusable();
	int32 backlog = 10;
	builder.Listening(backlog);

	FSocket* TCPSocket = builder.Build();
	//FSocket* TCPSocket = FTcpSocketBuilder("SOCKETNAME").AsNonBlocking().AsReusable().Listening(1000).Build();

	bool didConnect = false; 

	if (TCPSocket != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Connect: Socket created! Connecting to server..."));
		didConnect = TCPSocket->Connect(*addr2);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Connect: FTcpSocketBuilder returned null pointer"));
	}

	if (!didConnect)
	{
		UE_LOG(LogTemp, Error, TEXT("Connect: Could not connect to socket %d"), ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLastErrorCode());
		success = false;
		return nullptr;
	}

	NetSock->SetSocket(TCPSocket);

	success = true;
	return NetSock;
}

bool UVoiceAttackSocketBPLibrary::SendMessage(USocket * Connection, FString Message)
{

	if (!IsValid(Connection))
	{
		UE_LOG(LogTemp, Warning, TEXT("SendMessage: Connection is not valid."));
		return false;
	}

	FSocket* MySocket = Connection->GetSocket();


	if (MySocket == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("SendMessage: GetSocket returned nullptr."));
		return false;
	}

	TCHAR *serializedChar = Message.GetCharArray().GetData();
	if (serializedChar)
	{
		int32 size = FCString::Strlen(serializedChar);
		int32 sent = 0;

		bool successful = MySocket->Send((uint8*)TCHAR_TO_UTF8(serializedChar), size, sent);

		if (!successful)
		{
			UE_LOG(LogTemp, Error, TEXT("SendMessage: Error sending message!! %d"), ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLastErrorCode());

		
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool UVoiceAttackSocketBPLibrary::GetMessage(USocket* Connection, FString &Message)
{
	if (!IsValid(Connection))
	{
		UE_LOG(LogTemp, Warning, TEXT("GetMessage: Connection is not valid."));
		return false;
	}

	FSocket* MySocket = Connection->GetSocket();

	if (MySocket == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("GetMessage: GetSocket returned nullptr."));
		return false;
	}

	TArray<uint8> BinaryData;
	uint32 Size;

	while (MySocket->HasPendingData(Size))
	{
		BinaryData.Init(0, FMath::Min(Size, 65507u));
		int32 Read = 0;
		MySocket->Recv(BinaryData.GetData(), BinaryData.Num(), Read);
	}

	if (BinaryData.Num() <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("GetMessage: No data to read!"));
		return false;
	}
	else
	{
		BinaryData.Add(0);
		Message = FString(ANSI_TO_TCHAR(reinterpret_cast<const char*>(BinaryData.GetData())));
		return true;
	}

}

bool UVoiceAttackSocketBPLibrary::HasPendingData(USocket * Connection)
{
	if (!IsValid(Connection))
	{
		UE_LOG(LogTemp, Warning, TEXT("HasPendingData: Connection is not valid."));
		return false;
	}

	FSocket* MySocket = Connection->GetSocket();

	if (MySocket == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("HasPendingData: GetSocket returned nullptr."));
		return false;
	}

	uint32 Size;

	return MySocket->HasPendingData(Size);
}

bool UVoiceAttackSocketBPLibrary::CloseConnection(USocket * Connection)
{

	if (!IsValid(Connection))
	{
		UE_LOG(LogTemp, Warning, TEXT("CloseConnection: Connection is not valid."));
		return false;
	}

	FSocket* MySocket = Connection->GetSocket();

	if (MySocket == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("CloseConnection: GetSocket returned nullptr."));
		return false;
	}

	return MySocket->Close();
}


