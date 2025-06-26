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
	/** Ability 시스템 관련 초기 설정 */
	virtual void SetupAbilitySystem();

	/** AbilitySystemComponent 초기화 */
	virtual void InitAbilitySystemComponent();

	/** DefaultAttributes 적용 */
	virtual void ApplyDefaultAttributes();

	/** Attribute 디폴트 값 설정 */
	virtual void SetAttributesToDefault();

protected:
	/** 캐릭터의 기본 능력치 */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

protected:
	TWeakObjectPtr<class USBAbilitySystemComponent> WeakAbilitySystemComponent;
};