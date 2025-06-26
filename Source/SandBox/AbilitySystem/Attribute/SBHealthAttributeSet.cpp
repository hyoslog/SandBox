// Copyright Hyojin Kang. All Rights Reserved.

#pragma once

// Default
#include "SBHealthAttributeSet.h"

// Engine
#include "Net/UnrealNetwork.h"

// Project

// Third-party

// Last

void USBHealthAttributeSet::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(USBHealthAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBHealthAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
}

void USBHealthAttributeSet::OnRep_Health(const FGameplayAttributeData& InOldValue)
{
}

void USBHealthAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& InOldValue)
{
}