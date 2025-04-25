
#include "YvrCameraComponent.h"
#include "Misc/CoreDelegates.h"

UYvrBusinessDelegates::FCameraFrameDelegate UYvrBusinessDelegates::CameraFrameDelegate;

void UYvrCameraComponent::OnRegister()
{
    Super::OnRegister();

    UYvrBusinessDelegates::CameraFrameDelegate.AddUObject(this, &UYvrCameraComponent::FNewYvrCameraComponentDetected_Handler);
}

void UYvrCameraComponent::OnUnregister()
{
    Super::OnUnregister();

    UYvrBusinessDelegates::CameraFrameDelegate.RemoveAll(this);
}
