// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sort/Public/Items/Nums.h"
#include "MyActor.generated.h"

UCLASS()
class SORT_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AMyActor();
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		class ANums* spawn(int32 no, FVector plc);
	UFUNCTION(BlueprintCallable)
		void spawningproc();
	UFUNCTION(BlueprintCallable)
		void insertion(int32 ele);
	UPROPERTY(BlueprintReadOnly)
		double time = .0f;
	UPROPERTY(BlueprintReadWrite)
		double sttime = .0f;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class ANums> ToSpawn[10];
	UPROPERTY(BlueprintReadOnly, Category = Margins)
		float margin = 0.0f;

	UPROPERTY(BlueprintReadOnly)
		int32 maxi = 0, digit = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sine Parameters");
	float Amp = 0.0f, Ampyr = 5.0f, Ampyl = 2.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sine Parameters");
	float TimeConstant = 1.0f;

	UPROPERTY(BlueprintReadonly)
		class ANums* sp = nullptr;

	UPROPERTY(BlueprintReadWrite)
		int32 flag = 1, raise = 0, swapped = 0, count = 0, size=0, con = 4;

	UPROPERTY(BlueprintReadWrite)
		TArray<int32>arr;
	UPROPERTY(BlueprintReadOnly)
		TArray<ANums*>obj;
	UPROPERTY(BlueprintReadOnly)
		TArray<int32>swapl;
	UPROPERTY(BlueprintReadOnly)
		TArray<int32>swapr;


protected:
	virtual void BeginPlay() override;
};

