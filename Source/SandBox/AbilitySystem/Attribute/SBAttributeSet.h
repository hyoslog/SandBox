// Copyright Hyojin Kang. All Rights Reserved.

#pragma once

// Default
#include "CoreMinimal.h"

// Engine
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"

// Project

// Third-party

// Last
#include "SBAttributeSet.generated.h"

/** �Ӽ��� �����ϰ� �ʱ�ȭ�ϴ� �� �ʿ��� ���� �Լ����� �����ϴ� ��ũ�� */
#define SB_ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class SANDBOX_API USBAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
};
