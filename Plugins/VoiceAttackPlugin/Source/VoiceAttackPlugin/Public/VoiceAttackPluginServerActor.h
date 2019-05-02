// Copyright 2019 Augmented Enterprise, Inc. All Rights Reserved.

#pragma once

#include "VoiceAttackTCPServerImp.h"
#include "Runtime/Networking/Public/Common/TcpListener.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VoiceAttackPluginServerActor.generated.h"

UCLASS()
class AVoiceAttackPluginServerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVoiceAttackPluginServerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool Init();

	FVoiceAttackTCPServer *tcpServer = NULL;

	UFUNCTION(BlueprintCallable, Category = "VoiceAttackTCPServer")
		void StartRunning();

	UFUNCTION(BlueprintCallable, Category = "VoiceAttackTCPServer")
	void SetMessage(FString message);

	UFUNCTION(BlueprintPure, Category = "VoiceAttackTCPServer")
	FString GetMessage();

	UFUNCTION(BlueprintCallable, Category = "VoiceAttackTCPServer")
	void ClearMessage();
	
	UFUNCTION(BlueprintCallable, Category = "VoiceAttackTCPServer")
	bool SendMessage(FString message, FString& messageOut);

	UPROPERTY(BlueprintReadWrite, Category = "VoiceAttackTCPServer")
	int32 setConnectionTimeout;

	//UPROPERTY(EditAnywhere, Category = "VoiceAttackTCPServer")
	//	AActor* GuestActor;

	UPROPERTY(EditAnywhere, Category = "VoiceAttackTCPServer")
	FString setIpAddress = "127.0.0.1";

	UPROPERTY(EditAnywhere, Category = "VoiceAttackTCPServer")
	int32 setPortNum = 8080;

};

