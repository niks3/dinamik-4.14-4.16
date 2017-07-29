// Fill out your copyright notice in the Description page of Project Settings.

#include "dinamik.h"
#include "dinamikViewportClient.h"

void URollerGameViewportClient::PostInitProperties()
{
	Super::PostInitProperties();

	P2Keys.Add(EKeys::Up);		// skok
	P2Keys.Add(EKeys::Left);	// lijevo
	P2Keys.Add(EKeys::Right);	// desno
	P2Keys.Add(EKeys::NumPadOne);	// pucanje po iksu
	P2Keys.Add(EKeys::NumPadTwo);		// pucanje po zedu
	P2Keys.Add(EKeys::NumPadThree);		// blink
	P2Keys.Add(EKeys::Down);			
}

bool URollerGameViewportClient::InputKey(FViewport* Viewport, int32 ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed, bool bGamepad)
{
	if (P2Keys.Find(Key))
	{
		ControllerId = 1;
	}

	return Super::InputKey(Viewport, ControllerId, Key, EventType, AmountDepressed, bGamepad);
}


