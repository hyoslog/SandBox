// Copyright Hyojin Kang. All Rights Reserved.

#pragma once

// Default
#include "CoreMinimal.h"

// Engine

// Project
#include "SBAttributeSet.h"

// Third-party

// Last
#include "SBHealthAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class SANDBOX_API USBHealthAttributeSet : public USBAttributeSet
{
	GENERATED_BODY()

public:	
	SB_ATTRIBUTE_ACCESSORS(USBHealthAttributeSet, Health)
	SB_ATTRIBUTE_ACCESSORS(USBHealthAttributeSet, MaxHealth)

protected:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& InOldValue);

	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& InOldValue);

private:
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health, Category = "Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Health;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth, Category = "Health", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxHealth;
};
