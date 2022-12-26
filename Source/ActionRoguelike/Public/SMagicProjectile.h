// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#include "SProjectileBase.h"
#include "GameplayTagContainer.h"
#include "SMagicProjectile.generated.h"

class USActionEffect;
=======
#include "GameFramework/Actor.h"
#include "SMagicProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;
>>>>>>> parent of 903e875 (Assignment 2 Solution Examples (Blackhole, Dash, Targeting))
=======
#include "GameFramework/Actor.h"
#include "SMagicProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;
>>>>>>> parent of 903e875 (Assignment 2 Solution Examples (Blackhole, Dash, Targeting))
=======
#include "GameFramework/Actor.h"
#include "SMagicProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;
>>>>>>> parent of 903e875 (Assignment 2 Solution Examples (Blackhole, Dash, Targeting))

UCLASS()
class ACTIONROGUELIKE_API ASMagicProjectile : public AActor
{
	GENERATED_BODY()
	
public:	

	ASMagicProjectile();

protected:
<<<<<<< HEAD
<<<<<<< HEAD

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	FGameplayTag ParryTag;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	TSubclassOf<USActionEffect> BurningActionClass;
=======
>>>>>>> parent of 903e875 (Assignment 2 Solution Examples (Blackhole, Dash, Targeting))
=======
>>>>>>> parent of 903e875 (Assignment 2 Solution Examples (Blackhole, Dash, Targeting))

	UFUNCTION()
	void OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	virtual void PostInitializeComponents() override;

public:
=======
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USphereComponent* SphereComp;
>>>>>>> parent of 903e875 (Assignment 2 Solution Examples (Blackhole, Dash, Targeting))

=======
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USphereComponent* SphereComp;

>>>>>>> parent of 903e875 (Assignment 2 Solution Examples (Blackhole, Dash, Targeting))
=======
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USphereComponent* SphereComp;

>>>>>>> parent of 903e875 (Assignment 2 Solution Examples (Blackhole, Dash, Targeting))
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UProjectileMovementComponent* MovementComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UParticleSystemComponent* EffectComp;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
