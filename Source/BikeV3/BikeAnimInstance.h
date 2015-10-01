// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Vehicles/VehicleAnimInstance.h"
#include "BikeAnimInstance.generated.h"
//////////////////////////////////////////////////////////
// UBikeAnimInstance
UCLASS()  
class BIKEV3_API UBikeAnimInstance : public UVehicleAnimInstance
{
	GENERATED_BODY()

	UBikeAnimInstance();

public:
	/** Front Wheel Rotation */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Wheel)
	FRotator SkelControl_WheelRot_F;

	/** Back Wheel Rotation */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Wheel)
	FRotator SkelControl_WheelRot_B;

	/** Handle Rotation */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Wheel)
	FRotator SkelControl_HandleRot;
};