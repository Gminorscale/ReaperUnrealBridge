#include "ReaperAudioCaptureComponent.h"
#include "ReaperAudioHelpers.h"
#include "Components/AudioComponent.h"

UReaperAudioCaptureComponent::UReaperAudioCaptureComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UReaperAudioCaptureComponent::CopySettingsFromExistingSound(
	UAudioComponent* SourceAudioComp,
	bool bPlaySound,
	bool bCopySoundClass,
	bool bCopyAttenuation)
{
	if (AudioCaptureTarget)
	{
		UReaperAudioHelpers::CopySettingsFromExistingSound(
			AudioCaptureTarget, SourceAudioComp, bPlaySound, bCopySoundClass, bCopyAttenuation);
	}
}

void UReaperAudioCaptureComponent::CopySettingsFromSoundAsset(USoundBase* SoundAsset)
{
	if (AudioCaptureTarget)
	{
		UReaperAudioHelpers::CopySettingsFromSoundAsset(AudioCaptureTarget, SoundAsset);
	}
}

void UReaperAudioCaptureComponent::DebugLogAudioSettings(bool bPrintToScreen)
{
	if (AudioCaptureTarget)
	{
		UReaperAudioHelpers::DebugLogAudioSettings(AudioCaptureTarget, bPrintToScreen);
	}
}
