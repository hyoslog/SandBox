// Copyright Hyojin Kang. All Rights Reserved.

#pragma once

// Default
#include "CoreMinimal.h"

// Engine
#include "GameFramework/PlayerState.h"

// Project

// Third-party

// Last
#include "SBPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class SANDBOX_API ASBPlayerState : public APlayerState
{
	GENERATED_BODY()

protected:
	ASBPlayerState();

protected:
	UPROPERTY(Transient)
	class USBAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(Transient)
	class USBHealthAttributeSet* HealthAttributeSet;
};
