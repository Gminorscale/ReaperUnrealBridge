#include "ReaperAudioCaptureComponent.h"
#include "ReaperAudioHelpers.h"
#include "Components/AudioComponent.h"

UReaperAudioCaptureComponent::UReaperAudioCaptureComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UReaperAudioCaptureComponent::CopySettingsFromAudioComponent(UAudioComponent* SourceComponent, bool bMuteSource, float& OriginalVolumeMultiplier)
{
	if (AudioCaptureTarget)
	{
		UReaperAudioHelpers::CopySettingsFromAudioComponent(AudioCaptureTarget, SourceComponent, bMuteSource, OriginalVolumeMultiplier);
	}
}

void UReaperAudioCaptureComponent::RestoreVolumeMultiplier(UAudioComponent* ComponentToRestore, float OriginalVolumeMultiplier)
{
	UReaperAudioHelpers::RestoreVolumeMultiplier(ComponentToRestore, OriginalVolumeMultiplier);
}

void UReaperAudioCaptureComponent::DebugLogAudioSettings(bool bPrintToScreen)
{
	if (AudioCaptureTarget)
	{
		UReaperAudioHelpers::DebugLogAudioSettings(AudioCaptureTarget, bPrintToScreen);
	}
}
