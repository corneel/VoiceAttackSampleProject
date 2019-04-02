// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TCPServerImp.h"
#include "Runtime/Networking/Public/Common/TcpListener.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ServerControl.generated.h"

UCLASS()
class AServerControl : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AServerControl();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool Init();

	FTCPServer *tcpServer = NULL;

	UFUNCTION(BlueprintCallable, Category = "TCPServer")
	void SetMessage(FString message);

	UFUNCTION(BlueprintPure, Category = "TCPServer")
	FString GetMessage();

	UFUNCTION(BlueprintCallable, Category = "TCPServer")
	void ClearMessage();
	
	UFUNCTION(BlueprintCallable, Category = "TCPServer")
	bool SendMessage(FString message, FString& messageOut);

	UPROPERTY(BlueprintReadWrite, Category = "TCPServer")
	int32 setConnectionTimeout;

	UPROPERTY(BlueprintReadWrite, Category = "TCPServer")
	FString setIpAddress;

	UPROPERTY(BlueprintReadWrite, Category = "TCPServer")
	int32 setPortNum;

};

