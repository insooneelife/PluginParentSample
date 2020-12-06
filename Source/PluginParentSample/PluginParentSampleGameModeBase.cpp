// Copyright Epic Games, Inc. All Rights Reserved.


#include "PluginParentSampleGameModeBase.h"
#include "PluginExample.h"

void APluginParentSampleGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    IInferenceEngine* IE = IInferenceEngine::Get();

    IE->RunTestcase();
}