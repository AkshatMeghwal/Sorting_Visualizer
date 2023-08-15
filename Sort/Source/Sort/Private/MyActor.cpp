#include "MyActor.h"

AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;
}
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	insertion(9989);
	insertion(9);
	insertion(100);
	insertion(9);
	insertion(18);
	insertion(12);

	//insertion(10);








	while (maxi != 0)
	{
		digit++;
		maxi = maxi / 10;
	}
	margin = digit * 35 + 100;
}


void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	time += DeltaTime;
	if (flag == 0 )
	{
		if (count == size)
		{
			flag = 1;
		}
		else 
		{
			UE_LOG(LogTemp, Warning, TEXT("%f  %f"), obj[swapl[count]]->GetActorLocation().Y, (obj[swapr[count]]->GetActorLocation()).Y);
			obj[swapl[count]]->AddActorWorldOffset(FVector(0.0f, - (Amp * DeltaTime * .5f), Ampyr * FMath::Sin((time - sttime) * 3.14f)));
			obj[swapr[count]]->AddActorWorldOffset(FVector(0.0f, Amp * DeltaTime * .5f, Ampyl * FMath::Sin((time - sttime) * 3.14f)));
			if (time >= sttime+2)
			{
				sp = obj[swapl[count]];
				obj[swapl[count]] = obj[swapr[count]];
				obj[swapr[count]] = sp;
				count++;
				sttime = time; 
				if(count!=size)
				Amp= (obj[swapl[count]]->GetActorLocation()).Y - (obj[swapr[count]]->GetActorLocation()).Y;
			}
		}		
	}
}

ANums* AMyActor::spawn(int32 no, FVector plc)
{
	if (ToSpawn[no])
	{
		UWorld* world = GetWorld();
		if (world)
		{
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = this;
			FRotator rotator(0.f, 180.f,0.0f);
			return world->SpawnActor<ANums>(ToSpawn[no], plc, rotator, spawnParams);
		}
	}
	return nullptr;
}

void AMyActor::spawningproc()
{
	int32 rep;

	for (int32 i = 0; i < arr.Num(); i++)
	{
		TArray<int32>del;
		rep = arr[i];
		while (rep != 0)
		{
			del.Push(rep % 10);
			rep = rep / 10;
		}
		int32 j = del.Num() - 1;
		obj.Push(spawn(del[j], FVector(1500.0f, margin * i, 200.0f)));
		j--;
		float pt = 35.0f;
		ANums* trmp = nullptr;
		for (; j >= 0; j--)
		{
			(spawn(del[j], FVector(1500.0f, margin * i+pt, 200.0f)))->AttachToActor(obj.Last(), FAttachmentTransformRules(EAttachmentRule::KeepWorld, true));
			pt += 35.0f;
		}
	}
	int32 temp;

	//Selection sort..
	/*
	for (int32 i = 0; i < arr.Num(); i++)
	{
		for (int32 j = i + 1; j < arr.Num(); j++)
		{
			if (arr[i] > arr[j])
			{
				size++;
				swapr.Push(i);
				swapl.Push(j);
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	*/
	//Bubble sort..
	for (int32 i = 0; i < arr.Num() - 1; i++)
	{
		for (int32 j = 0; j < arr.Num()-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				size++;
				swapr.Push(j);
				swapl.Push(j+1);
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	if (size != 0)
		Amp = (obj[swapl[0]]->GetActorLocation()).Y - (obj[swapr[0]]->GetActorLocation()).Y;

}

void AMyActor::insertion(int32 ele)
{
	if (ele > maxi)
		maxi = ele;
	arr.Push(ele);
}



//This is for attachment purpose
//obj[1]->AttachToActor(obj[0], FAttachmentTransformRules(EAttachmentRule::KeepWorld, true));

//printing on screen
/*
	if (GEngine)
	{
		FString a = FString::Printf(TEXT("time : %f  %f"), time, FMath::Sin(time));
		GEngine->AddOnScreenDebugMessage(1, 4.0f, FColor::Black, a);
	}
	UE_LOG(LogTemp, Warning, TEXT("%f count %d"),Amp,count);
	*/