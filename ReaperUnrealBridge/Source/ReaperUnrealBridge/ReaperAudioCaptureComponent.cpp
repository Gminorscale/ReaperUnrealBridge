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

void UReaperAudioCaptureComponent::CopySettingsFromSoundBase(USoundBase* SoundAsset, bool bMuteSource, float& OriginalVolume)
{
	if (AudioCaptureTarget)
	{
		UReaperAudioHelpers::CopySettingsFromSoundBase(AudioCaptureTarget, SoundAsset, bMuteSource, OriginalVolume);
	}
}

void UReaperAudioCaptureComponent::RestoreVolumeMultiplier(UAudioComponent* ComponentToRestore, float OriginalVolumeMultiplier)
{
	UReaperAudioHelpers::RestoreVolumeMultiplier(ComponentToRestore, OriginalVolumeMultiplier);
}

void UReaperAudioCaptureComponent::RestoreSoundBaseVolume(USoundBase* SoundAsset, float OriginalVolume)
{
	UReaperAudioHelpers::RestoreSoundBaseVolume(SoundAsset, OriginalVolume);
}

void UReaperAudioCaptureComponent::DebugLogAudioSettings(bool bPrintToScreen)
{
	if (AudioCaptureTarget)
	{
		UReaperAudioHelpers::DebugLogAudioSettings(AudioCaptureTarget, bPrintToScreen);
	}
}
