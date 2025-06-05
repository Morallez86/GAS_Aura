// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

AAuraCharacter::AAuraCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character will rotate to face the direction of movement
    GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f); // Set rotation rate to 400 degrees per second
    GetCharacterMovement()->bConstrainToPlane = true; // Constrain movement to a plane
    GetCharacterMovement()->bSnapToPlaneAtStart = true; // Snap to the plane at the start of movement

    bUseControllerRotationYaw = false; // Disable controller rotation yaw to allow character movement to control rotation
    bUseControllerRotationPitch = false; // Disable controller rotation pitch
    bUseControllerRotationRoll = false; // Disable controller rotation roll
}