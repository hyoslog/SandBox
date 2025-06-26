// Copyright Hyojin Kang. All Rights Reserved.

#pragma once

// Default
#include "SBPlayerState.h"

// Engine

// Project
#include "AbilitySystem/SBAbilitySystemComponent.h"
#include "AbilitySystem/Attribute/SBHealthAttributeSet.h"

// Third-party

// Last

ASBPlayerState::ASBPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<USBAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	check(AbilitySystemComponent);
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	HealthAttributeSet = CreateDefaultSubobject<USBHealthAttributeSet>(TEXT("HealthAttributeSet"));
	check(HealthAttributeSet);
}