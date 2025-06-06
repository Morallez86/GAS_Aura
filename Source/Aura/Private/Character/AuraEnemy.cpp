// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraEnemy.h"
#include "Aura/Aura.h"

AAuraEnemy::AAuraEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
}

void AAuraEnemy::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true); // Enable custom depth rendering for highlighting
    GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED); // Set a custom stencil value for the mesh to be highlighted
    Weapon->SetRenderCustomDepth(true); // Enable custom depth rendering for the weapon
    Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED); // Set a custom stencil value for the weapon to be highlighted
}

void AAuraEnemy::UnHighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false); // Disable custom depth rendering to remove highlighting
    Weapon->SetRenderCustomDepth(false); // Disable custom depth rendering for the weapon
}