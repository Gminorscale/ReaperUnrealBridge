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
 * Provides runtime access to SoundClass and Attenuation on SynthComponent.
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
	 * Copy SoundClass and Attenuation from an AudioComponent onto a SynthComponent.
	 * Optionally mutes the source component (non-destructive, component-level only).
	 * Save the returned OriginalVolumeMultiplier and pass it to RestoreVolumeMultiplier on End Play.
	 *
	 * Recommended: Stop the capture stream before calling this, then Start Stream after,
	 * so the audio mixer picks up the SoundClass and applies volume in real-time.
	 *
	 * @param TargetComponent         SynthComponent to apply settings to
	 * @param SourceComponent         AudioComponent to read SoundClass and Attenuation from
	 * @param bMuteSource             If true, sets SourceComponent volume multiplier to 0
	 * @param OriginalVolumeMultiplier Output: volume multiplier before muting (pass to Restore on End Play)
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Audio",
		meta = (DisplayName = "Copy Settings from Audio Component"))
	static void CopySettingsFromAudioComponent(
		USceneComponent* TargetComponent,
		UAudioComponent* SourceComponent,
		bool bMuteSource,
		float& OriginalVolumeMultiplier);

	/**
	 * Copy SoundClass and Attenuation from a USoundBase asset onto a SynthComponent.
	 * Works with SoundCue, SoundWave, MetaSound, etc. No AudioComponent required.
	 * If bMuteSource is true, mutes the SoundBase asset directly (sets its volume to 0).
	 * Call RestoreSoundBaseVolume on End Play to restore the original volume.
	 *
	 * Recommended: Stop the capture stream before calling this, then Start Stream after,
	 * so the audio mixer picks up the SoundClass and applies volume in real-time.
	 *
	 * @param TargetComponent   SynthComponent to apply settings to
	 * @param SoundAsset        The Sound asset to read SoundClass and Attenuation from
	 * @param bMuteSource       If true, sets the Sound asset volume to 0
	 * @param OriginalVolume    Output: the asset volume before muting (pass to RestoreSoundBaseVolume on End Play)
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Audio",
		meta = (DisplayName = "Copy Settings from Sound Base"))
	static void CopySettingsFromSoundBase(
		USceneComponent* TargetComponent,
		USoundBase* SoundAsset,
		bool bMuteSource,
		float& OriginalVolume);

	/**
	 * Restore the volume multiplier on an AudioComponent to the value captured
	 * by CopySettingsFromAudioComponent. Call this on End Play.
	 *
	 * @param ComponentToRestore      The same AudioComponent that was muted
	 * @param OriginalVolumeMultiplier The value returned by CopySettingsFromAudioComponent
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Audio",
		meta = (DisplayName = "Restore Volume Multiplier to Original Value"))
	static void RestoreVolumeMultiplier(
		UAudioComponent* ComponentToRestore,
		float OriginalVolumeMultiplier);

	/**
	 * Restore the volume on a USoundBase asset to the value captured
	 * by CopySettingsFromSoundBase. Call this on End Play.
	 *
	 * @param SoundAsset       The same Sound asset that was muted
	 * @param OriginalVolume   The value returned by CopySettingsFromSoundBase
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Audio",
		meta = (DisplayName = "Restore Sound Base Volume"))
	static void RestoreSoundBaseVolume(
		USoundBase* SoundAsset,
		float OriginalVolume);

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
	 * Print the current SoundClass, Attenuation, and spatialization state
	 * of a SynthComponent to the Output Log and optionally to screen.
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Debug",
		meta = (DisplayName = "Debug Log Audio Settings"))
	static void DebugLogAudioSettings(USceneComponent* TargetComponent, bool bPrintToScreen = true);
};
