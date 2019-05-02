// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "VoiceAttackPluginBPLibrary.h"
#include "VoiceAttackPlugin.h"

UVoiceAttackPluginBPLibrary::UVoiceAttackPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UJSONHandle* UVoiceAttackPluginBPLibrary::VoiceAttackNewJSONObject()
{
	UJSONHandle* JsonHandle = NewObject<UJSONHandle>();
	JsonHandle->JSONObject = MakeShareable(new FJsonObject);
	return JsonHandle;
}

UJSONHandleArray* UVoiceAttackPluginBPLibrary::VoiceAttackNewJSONObjectArray()
{
	UJSONHandleArray* JSONHandleArray = NewObject<UJSONHandleArray>();
	return JSONHandleArray;
}

void UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONElement(UJSONHandle* JSONHandle, FString Name, FString Value)
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
				UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONElement: The name of the element must be provided"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONElement: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONElement: exception caught"));
	}
}

void UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONNumericElement(UJSONHandle* JSONHandle, FString Name, float Value)
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
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONNumericElement: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONNumericElement: exception caught"));
	}
}

void UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONObject(UJSONHandle* JSONHandle, FString Name, UJSONHandle* Value)
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
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONObject: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONObject: exception caught"));
	}
}

void UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONObjectToArray(UJSONHandleArray* JSONHandleArray, UJSONHandle* Value)
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
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONObjectToArray: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONObjectToArray: exception caught"));
	}
}

void UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONArrayToObject(UJSONHandle* JSONHandle, FString Name, UJSONHandleArray* Value)
{
	try
	{
		if (JSONHandle && JSONHandle->JSONObject && Value)
		{
			JSONHandle->JSONObject->SetArrayField(Name, Value->JSONObjectArray);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONArrayToObject: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONArrayToObject: exception caught"));
	}
}



void UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONArrayToArray(UJSONHandleArray* JSONHandleArray, FString Name, UJSONHandleArray* Value)
{
	try
	{
		if (JSONHandleArray && Value)
		{
			UJSONHandle* JSONHandle = NewObject<UJSONHandle>();
			UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONArrayToObject(JSONHandle, Name, Value);
			TSharedRef<FJsonValueObject> JsonValue = MakeShareable(new FJsonValueObject(JSONHandle->JSONObject));
			JSONHandleArray->JSONObjectArray.Add(JsonValue);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONArrayToArray: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackAddJSONArrayToArray: exception caught"));
	}
}

void UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONElement(UJSONHandle* JSONHandle, FString Name, FString& Value)
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
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONElement: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONElement: exception caught"));
	}
}

void UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONNumericElement(UJSONHandle* JSONHandle, FString Name, float& Value)
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
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONNumericElement: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONNumericElement: exception caught"));
	}
}


UJSONHandle* UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONObject(UJSONHandle* JSONHandle, FString Name)
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
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONObject: null pointer detected"));
		}
		return OutHandle;
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONObject: exception caught"));
	}
	return nullptr;
}

void UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONElementMultiple(UJSONHandleArray* JSONHandleArray, int Index, FString Name, FString& Value)
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
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONElementMultiple: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONElementMultiple: exception caught"));
	}
}

void UVoiceAttackPluginBPLibrary::VoiceAttackSerializeJSONObject(UJSONHandle* JSONHandle, FString & Value, bool & Success)
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
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackSerializeJSONObject: Unknown exception caught while serializing object"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackSerializeJSONObject: null pointer detected"));
	}
}

void UVoiceAttackPluginBPLibrary::VoiceAttackSerializeJSONObjectArray(UJSONHandleArray* JSONHandleArray, FString & Value, bool & Success)
{

	if (JSONHandleArray)
	{
		/*if (JSONHandleArray->JSONObjectArray.Num() > 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackSerializeJSONObjectArray: Array is empty"));
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
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackSerializeJSONObjectArray: Unknown exception caught while serializing object"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackSerializeJSONObjectArray: null pointer detected"));
	}

}

UJSONHandleArray* UVoiceAttackPluginBPLibrary::VoiceAttackParseMultiple(FString JSONString, int & ElementCount, bool & Success)
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
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackParseMultiple: Unknown exception caught while parsing string"));
	}
	return nullptr;
}

UJSONHandle* UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONObjectFromArray(UJSONHandleArray* JSONHandleArray, int Index, bool& Success)
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
			UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONObjectFromArray: null pointer detected"));
		}
	}
	catch (...)
	{
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackGetJSONObjectFromArray: exception caught"));
	}
	return nullptr;
}

//void UVoiceAttackPluginBPLibrary::VoiceAttackListVoices(TArray<FString>& Voices)
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
//void UVoiceAttackPluginBPLibrary::VoiceAttackTTS(FString Value)
//{
//	ISpVoice * pVoice = NULL;
//
//	if (FAILED(::CoInitialize(NULL)))
//	{
//		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackTTS: FAILED(::CoInitialize(NULL))"));
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

//UJSONHandleArray* UVoiceAttackPluginBPLibrary::VoiceAttackParseFile(FString FileName, int& ElementCount, bool& Success)
//{
//	Success = false;
//	try
//	{
//		FString FileContents;
//		FString projectDir = FPaths::ProjectDir() + FileName;
//		if (FFileHelper::LoadFileToString(FileContents, *projectDir, FFileHelper::EHashOptions::None))
//		{
//			FString JSONArrayString = "[" + FileContents + "]";
//			return UVoiceAttackPluginBPLibrary::VoiceAttackParseMultiple(JSONArrayString, ElementCount, Success);
//		}
//	}
//	catch (...)
//	{
//		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackParseFile: Unknown exception caught while parsing string"));
//	}
//	return nullptr;
//}

void UVoiceAttackPluginBPLibrary::VoiceAttackParseString(UJSONHandle* JSONHandle, FString JSONString, bool& Success)
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
		UE_LOG(LogTemp, Warning, TEXT("UVoiceAttackPluginBPLibrary::VoiceAttackParseString: Unknown exception caught while parsing string"));
	}
}

/************************************************************************************************************************/



