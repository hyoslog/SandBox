// Copyright Hyojin Kang. All Rights Reserved.

#pragma once

// Default
#include "CoreMinimal.h"

// Engine
#include "GameFramework/Character.h"

// Project

// Third-party

// Last
#include "SBCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SANDBOX_API ASBCharacter : public ACharacter
{
	GENERATED_BODY()
	
protected:
	virtual void PossessedBy(AController* NewController) override;

	virtual void OnRep_PlayerState() override;

protected:
	/** Ability �ý��� ���� �ʱ� ���� */
	virtual void SetupAbilitySystem();

	/** AbilitySystemComponent �ʱ�ȭ */
	virtual void InitAbilitySystemComponent();

	/** DefaultAttributes ���� */
	virtual void ApplyDefaultAttributes();

	/** Attribute ����Ʈ �� ���� */
	virtual void SetAttributesToDefault();

protected:
	/** ĳ������ �⺻ �ɷ�ġ */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

protected:
	TWeakObjectPtr<class USBAbilitySystemComponent> WeakAbilitySystemComponent;
};