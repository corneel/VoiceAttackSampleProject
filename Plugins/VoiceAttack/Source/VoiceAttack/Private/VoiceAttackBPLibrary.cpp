// Copyright 2020 Augmented Enterprise, Inc. All Rights Reserved.

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

//void UVoiceAttackBPLibrary::VoiceAttackListVoices(TArray<FString>& Voices)
//{
//	HRESULT hr = S_OK;
//
//	//TComPtr<ISpObjectTokenCategory> cpSpCategory = NULL;
//	ISpObjectTokenCategory * cpSpCategory = NULL;
//
//	hr = CoCreateInstance(CLSID_SpObjectTokenCategory, NULL, CLSCTX_INPROC_SERVER, __uuidof(ISpObjectTokenCategory), (void **)&cpSpCategory);
//
//	if (SUCCEEDED(hr))
//	{
//		//TComPtr<IEnumSpObjectTokens> cpSpEnumTokens;
//		hr = cpSpCategory->SetId(SPCAT_VOICES, false);
//		if (SUCCEEDED(hr))
//		{
//
//			IEnumSpObjectTokens * cpSpEnumTokens;
//
//			if (SUCCEEDED(hr = cpSpCategory->EnumTokens(NULL, NULL, &cpSpEnumTokens)))
//			{
//				//TComPtr<ISpObjectToken> pSpTok;
//				ISpObjectToken * pSpTok;
//				while (SUCCEEDED(hr = cpSpEnumTokens->Next(1, &pSpTok, NULL)))
//				{
//
//				}
//
//			}
//		}
//	}
//}
//
//void UVoiceAttackBPLibrary::VoiceAttackTTS(FString Value)
//{
//	ISpVoice * pVoice = NULL;
//
//	if (FAILED(::CoInitialize(NULL)))
//	{
//		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackTTS: FAILED(::CoInitialize(NULL))"));
//	}
//
//	HRESULT hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void **)&pVoice);
//
//	if (SUCCEEDED(hr))
//	{
//		hr = pVoice->Speak(*Value, 0, NULL);
//		pVoice->Release();
//		pVoice = NULL;
//	}
//
//	::CoUninitialize();
//}

//UJSONHandleArray* UVoiceAttackBPLibrary::VoiceAttackParseFile(FString FileName, int& ElementCount, bool& Success)
//{
//	Success = false;
//	try
//	{
//		FString FileContents;
//		FString projectDir = FPaths::ProjectDir() + FileName;
//		if (FFileHelper::LoadFileToString(FileContents, *projectDir, FFileHelper::EHashOptions::None))
//		{
//			FString JSONArrayString = "[" + FileContents + "]";
//			return UVoiceAttackBPLibrary::VoiceAttackParseMultiple(JSONArrayString, ElementCount, Success);
//		}
//	}
//	catch (...)
//	{
//		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackBPLibrary::VoiceAttackParseFile: Unknown exception caught while parsing string"));
//	}
//	return nullptr;
//}

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


