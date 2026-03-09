#include "ReaperAudioHelpers.h"
#include "Components/AudioComponent.h"
#include "Components/SynthComponent.h"
#include "Sound/SoundBase.h"
#include "Sound/SoundClass.h"
#include "Sound/SoundAttenuation.h"

DEFINE_LOG_CATEGORY_STATIC(LogReaperAudio, Log, All);

static USynthComponent* ToSynth(USceneComponent* Comp, const TCHAR* CallerName)
{
	if (!Comp)
	{
		UE_LOG(LogReaperAudio, Warning, TEXT("%s: Target component is null."), CallerName);
		return nullptr;
	}
	USynthComponent* SynthComp = Cast<USynthComponent>(Comp);
	if (!SynthComp)
	{
		UE_LOG(LogReaperAudio, Warning, TEXT("%s: '%s' is not a SynthComponent."),
			CallerName, *Comp->GetName());
	}
	return SynthComp;
}

void UReaperAudioHelpers::CopySoundSettingsToSynthComponent(
	USceneComponent* TargetComponent,
	UAudioComponent* SourceAudioComp,
	bool bCopySoundClass,
	bool bCopyAttenuation)
{
	USynthComponent* TargetSynthComp = ToSynth(TargetComponent, TEXT("CopySoundSettings"));
	if (!TargetSynthComp || !SourceAudioComp) return;

	if (bCopySoundClass)
	{
		USoundClass* EffectiveClass = GetEffectiveSoundClass(SourceAudioComp);
		if (EffectiveClass)
			SetSoundClassOnSynthComponent(TargetComponent, EffectiveClass);
	}
	if (bCopyAttenuation)
	{
		if (SourceAudioComp->bOverrideAttenuation)
		{
			TargetSynthComp->bOverrideAttenuation = true;
			TargetSynthComp->AttenuationOverrides = SourceAudioComp->AttenuationOverrides;
		}
		else if (SourceAudioComp->AttenuationSettings)
		{
			TargetSynthComp->bOverrideAttenuation = false;
			TargetSynthComp->AttenuationSettings = SourceAudioComp->AttenuationSettings;
		}
		TargetSynthComp->bAllowSpatialization = SourceAudioComp->bAllowSpatialization;
	}
}

void UReaperAudioHelpers::CopySettingsFromSoundAsset(
	USceneComponent* TargetComponent,
	USoundBase* SoundAsset)
{
	USynthComponent* SynthComp = ToSynth(TargetComponent, TEXT("CopySettingsFromSoundAsset"));
	if (!SynthComp || !SoundAsset) return;

	// --- SoundClass ---
	USoundClass* SC = SoundAsset->GetSoundClass();
	if (SC)
	{
		SetSoundClassOnSynthComponent(TargetComponent, SC);
	}

	// --- Attenuation ---
	if (SoundAsset->AttenuationSettings)
	{
		SetAttenuationOnSynthComponent(TargetComponent, SoundAsset->AttenuationSettings);
	}
	else
	{
		const FSoundAttenuationSettings* EffectiveAtt = SoundAsset->GetAttenuationSettingsToApply();
		if (EffectiveAtt)
		{
			SynthComp->bOverrideAttenuation = true;
			SynthComp->AttenuationOverrides = *EffectiveAtt;
			SynthComp->bAllowSpatialization = EffectiveAtt->bSpatialize;
			if (UAudioComponent* Internal = SynthComp->GetAudioComponent())
			{
				Internal->bOverrideAttenuation = true;
				Internal->AttenuationOverrides = *EffectiveAtt;
				Internal->bAllowSpatialization = EffectiveAtt->bSpatialize;
			}
		}
	}
}

void UReaperAudioHelpers::CopySettingsFromExistingSound(
	USceneComponent* TargetComponent,
	UAudioComponent* SourceAudioComp,
	bool bPlaySound,
	bool bCopySoundClass,
	bool bCopyAttenuation)
{
	CopySoundSettingsToSynthComponent(TargetComponent, SourceAudioComp, bCopySoundClass, bCopyAttenuation);
	if (bPlaySound && SourceAudioComp)
	{
		SourceAudioComp->Play();
	}
}

void UReaperAudioHelpers::SetSoundClassOnSynthComponent(
	USceneComponent* TargetComponent,
	USoundClass* SoundClass)
{
	USynthComponent* SynthComp = ToSynth(TargetComponent, TEXT("SetSoundClass"));
	if (!SynthComp) return;
	SynthComp->SoundClass = SoundClass;
	if (UAudioComponent* Internal = SynthComp->GetAudioComponent())
		Internal->SoundClassOverride = SoundClass;
}

void UReaperAudioHelpers::SetAttenuationOnSynthComponent(
	USceneComponent* TargetComponent,
	USoundAttenuation* Attenuation)
{
	USynthComponent* SynthComp = ToSynth(TargetComponent, TEXT("SetAttenuation"));
	if (!SynthComp) return;
	SynthComp->bOverrideAttenuation = false;
	SynthComp->AttenuationSettings = Attenuation;
	if (UAudioComponent* Internal = SynthComp->GetAudioComponent())
	{
		Internal->bOverrideAttenuation = false;
		Internal->AttenuationSettings = Attenuation;
	}
}

USoundClass* UReaperAudioHelpers::GetEffectiveSoundClass(UAudioComponent* AudioComp)
{
	if (!AudioComp) return nullptr;
	if (AudioComp->SoundClassOverride) return AudioComp->SoundClassOverride;
	if (AudioComp->Sound) return AudioComp->Sound->GetSoundClass();
	return nullptr;
}

void UReaperAudioHelpers::DebugLogAudioSettings(USceneComponent* TargetComponent, bool bPrintToScreen)
{
	if (!TargetComponent)
	{
		UE_LOG(LogReaperAudio, Warning, TEXT("DebugLogAudioSettings: Component is null."));
		if (bPrintToScreen && GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[ReaperBridge] Component is null"));
		return;
	}

	USynthComponent* SynthComp = Cast<USynthComponent>(TargetComponent);
	if (!SynthComp)
	{
		FString Msg = FString::Printf(TEXT("[ReaperBridge] '%s' is not a SynthComponent."), *TargetComponent->GetName());
		UE_LOG(LogReaperAudio, Warning, TEXT("%s"), *Msg);
		if (bPrintToScreen && GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, Msg);
		return;
	}

	FString CompName = SynthComp->GetName();
	FString SCName = SynthComp->SoundClass ? SynthComp->SoundClass->GetName() : TEXT("None");
	FString AttAssetName = SynthComp->AttenuationSettings ? SynthComp->AttenuationSettings->GetName() : TEXT("None");
	FString OverrideStr = SynthComp->bOverrideAttenuation ? TEXT("true") : TEXT("false");
	FString SpatialStr = SynthComp->bAllowSpatialization ? TEXT("true") : TEXT("false");

	FString InternalInfo = TEXT("N/A");
	if (UAudioComponent* Internal = SynthComp->GetAudioComponent())
	{
		FString IntSC = Internal->SoundClassOverride ? Internal->SoundClassOverride->GetName() : TEXT("None");
		FString IntAtt = Internal->AttenuationSettings ? Internal->AttenuationSettings->GetName() : TEXT("None");
		FString IntOverride = Internal->bOverrideAttenuation ? TEXT("true") : TEXT("false");
		InternalInfo = FString::Printf(TEXT("SC=%s, Att=%s, Override=%s"), *IntSC, *IntAtt, *IntOverride);
	}

	UE_LOG(LogReaperAudio, Log, TEXT("=== ReaperBridge Debug: %s ==="), *CompName);
	UE_LOG(LogReaperAudio, Log, TEXT("  SoundClass:          %s"), *SCName);
	UE_LOG(LogReaperAudio, Log, TEXT("  AttenuationSettings: %s"), *AttAssetName);
	UE_LOG(LogReaperAudio, Log, TEXT("  OverrideAttenuation: %s"), *OverrideStr);
	UE_LOG(LogReaperAudio, Log, TEXT("  AllowSpatialization: %s"), *SpatialStr);
	UE_LOG(LogReaperAudio, Log, TEXT("  InternalAudioComp:   %s"), *InternalInfo);

	if (bPrintToScreen && GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 8.f, FColor::Cyan,
			FString::Printf(TEXT("[ReaperBridge] %s | Class=%s | Att=%s | Override=%s | Spatial=%s"),
				*CompName, *SCName, *AttAssetName, *OverrideStr, *SpatialStr));
	}
}
