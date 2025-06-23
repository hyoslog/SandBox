// Copyright Hyojin Kang. All Rights Reserved.

#pragma once

// Default
#include "SBPlayerState.h"

// Engine

// Project
#include "AbilitySystem/SBAbilitySystemComponent.h"

// Third-party

// Last

ASBPlayerState::ASBPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<USBAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
}