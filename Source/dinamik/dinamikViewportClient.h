// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameViewportClient.h"
#include "dinamikViewportClient.generated.h"

/**
 * 
 */
UCLASS()
class DINAMIK_API URollerGameViewportClient : public UGameViewportClient
{
	GENERATED_BODY()

		virtual void PostInitProperties() override;

	virtual bool InputKey(FViewport* Viewport, int32 ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed = 1.f, bool bGamepad = false) override;

	TSet<FKey> P2Keys;
};
