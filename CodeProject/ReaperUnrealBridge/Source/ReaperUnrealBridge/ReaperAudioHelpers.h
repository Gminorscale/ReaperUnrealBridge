#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReaperAudioHelpers.generated.h"

class UAudioComponent;
class USceneComponent;
class USynthComponent;
class USoundBase;
class USoundClass;
class USoundAttenuation;

/**
 * Blueprint function library for Reaper audio helpers.
 * Provides runtime access to SoundClass and Attenuation on SynthComponent,
 * and a "Copy Settings from Existing Sound" flow with optional playback.
 *
 * The same copy function is also available on UReaperAudioCaptureComponent
 * (target = self, no Target pin).
 */
UCLASS()
class REAPERUNREALBRIDGE_API UReaperAudioHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Copy SoundClass and Attenuation from an existing sound onto a SynthComponent,
	 * with optional playback of the source sound.
	 *
	 * @param TargetComponent   SynthComponent to apply settings to (e.g. AudioCapture)
	 * @param SourceAudioComp   AudioComponent to copy settings from (and optionally play)
	 * @param bPlaySound        If true, play the source sound after copying
	 * @param bCopySoundClass   Whether to copy the SoundClass (default: true)
	 * @param bCopyAttenuation  Whether to copy the Attenuation settings (default: true)
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Audio",
		meta = (DisplayName = "Copy Settings from Existing Sound"))
	static void CopySettingsFromExistingSound(
		USceneComponent* TargetComponent,
		UAudioComponent* SourceAudioComp,
		bool bPlaySound = false,
		bool bCopySoundClass = true,
		bool bCopyAttenuation = true);

	/**
	 * Copy SoundClass and Attenuation from a Sound asset onto a SynthComponent.
	 * Use this when you have a USoundBase reference but no AudioComponent.
	 * Works with SoundCue, SoundWave, MetaSound, etc.
	 *
	 * @param TargetComponent   SynthComponent to apply settings to
	 * @param SoundAsset        The Sound asset to read SoundClass and Attenuation from
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Audio",
		meta = (DisplayName = "Copy Settings from Sound Asset"))
	static void CopySettingsFromSoundAsset(
		USceneComponent* TargetComponent,
		USoundBase* SoundAsset);

	/**
	 * Copy SoundClass and Attenuation from a UAudioComponent to a SynthComponent.
	 * Does not play the source sound.
	 */
	static void CopySoundSettingsToSynthComponent(
		USceneComponent* TargetComponent,
		UAudioComponent* SourceAudioComp,
		bool bCopySoundClass = true,
		bool bCopyAttenuation = true);

	/**
	 * Set the SoundClass on a SynthComponent at runtime.
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Audio",
		meta = (DisplayName = "Set Sound Class on Synth Component"))
	static void SetSoundClassOnSynthComponent(
		USceneComponent* TargetComponent,
		USoundClass* SoundClass);

	/**
	 * Set the Attenuation Settings on a SynthComponent at runtime.
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Audio",
		meta = (DisplayName = "Set Attenuation on Synth Component"))
	static void SetAttenuationOnSynthComponent(
		USceneComponent* TargetComponent,
		USoundAttenuation* Attenuation);

	/**
	 * Get the effective SoundClass from a UAudioComponent.
	 * Returns the SoundClassOverride if set, otherwise the SoundClass from the Sound asset.
	 */
	UFUNCTION(BlueprintPure, Category = "ReaperUnrealBridge|Audio",
		meta = (DisplayName = "Get Effective Sound Class"))
	static USoundClass* GetEffectiveSoundClass(UAudioComponent* AudioComp);

	/**
	 * Print the current SoundClass, Attenuation, and spatialization state
	 * of a SynthComponent to the Output Log and optionally to screen.
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Debug",
		meta = (DisplayName = "Debug Log Audio Settings"))
	static void DebugLogAudioSettings(USceneComponent* TargetComponent, bool bPrintToScreen = true);
};
