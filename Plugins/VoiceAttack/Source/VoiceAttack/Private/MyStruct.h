#pragma once

#include "CoreMinimal.h"
#include "UFSocket.h"
#include "MyStruct.generated.h"

USTRUCT(BlueprintType)
struct FMyStruct
{
	GENERATED_BODY();

	UPROPERTY(BlueprintReadOnly)
	UFSocket* Socket;

//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 Port;

//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	FString IP;



	FMyStruct()
	{
		Socket = NewObject<UFSocket>();	//NewObject<USocket>();	//nullptr;
		
//		Port = 8080;

//		IP = TEXT("127.0.0.1");

	}
};

