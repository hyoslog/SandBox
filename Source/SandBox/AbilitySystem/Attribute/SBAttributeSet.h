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

/** 속성에 접근하고 초기화하는 데 필요한 헬퍼 함수들을 정의하는 매크로 */
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
