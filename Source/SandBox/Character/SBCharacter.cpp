// Copyright Hyojin Kang. All Rights Reserved.

#pragma once

// Default
#include "SBCharacter.h"

// Engine

// Project
#include "AbilitySystem/SBAbilitySystemComponent.h"
#include "Player/SBPlayerState.h"

// Third-party

// Last

void ASBCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Server Only

	SetupAbilitySystem();
}

void ASBCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
	// Client Only

	SetupAbilitySystem();
}

void ASBCharacter::SetupAbilitySystem()
{
	// AbilitySystemComponent 초기화
	InitAbilitySystemComponent();

	// GE를 통해 디폴트 값 설정(예: MaxHealth 디폴트 값 설정)
	ApplyDefaultAttributes();

	// 디폴트 값 설정(예: MaxHealth 기준으로 Health의 디폴트 값 설정)
	SetAttributesToDefault();
}

void ASBCharacter::InitAbilitySystemComponent()
{
	if (WeakAbilitySystemComponent.IsValid())
	{
		WeakAbilitySystemComponent.Reset();
	}

	ASBPlayerState* PS = GetPlayerState<ASBPlayerState>();
	if (ensure(IsValid(PS)))
	{
		USBAbilitySystemComponent* ASC = PS->GetAbilitySystemComponent();
		if (ensure(IsValid(ASC)))
		{
			ASC->InitAbilityActorInfo(PS, this);

			WeakAbilitySystemComponent = ASC;
		}
	}
}

void ASBCharacter::ApplyDefaultAttributes()
{
	if (DefaultAttributes != nullptr)
	{
		if (ensure(WeakAbilitySystemComponent.IsValid()))
		{
			FGameplayEffectContextHandle EffectContext = WeakAbilitySystemComponent->MakeEffectContext();
			EffectContext.AddSourceObject(this);

			FGameplayEffectSpecHandle EffectHandle = WeakAbilitySystemComponent->MakeOutgoingSpec(DefaultAttributes, 1.0f, EffectContext);
			if (ensure(EffectHandle.IsValid()))
			{
				FActiveGameplayEffectHandle ActiveEffectHandle = WeakAbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*EffectHandle.Data.Get(), WeakAbilitySystemComponent.Get());
			}
		}
	}
}

void ASBCharacter::SetAttributesToDefault()
{
	ASBPlayerState* PS = GetPlayerState<ASBPlayerState>();
	if (ensure(IsValid(PS)))
	{
		PS->SetAttributesToDefault();
	}
}