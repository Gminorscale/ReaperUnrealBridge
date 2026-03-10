#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ReaperAudioCaptureComponent.generated.h"

class UAudioComponent;

/**
 * Lightweight orchestrator component for the ReaperUnrealBridge plugin.
 * Provides helper functions (Copy Settings, Debug Log) that operate on
 * a user-assigned AudioCapture target. Does NOT create or own an
 * AudioCaptureComponent — that lives in your Blueprint actor.
 *
 * Set AudioCaptureTarget in your Blueprint to point to your
 * AudioCaptureComponent (e.g. AudioCaptureInBP on BP_AudioFromReaper).
 */
UCLASS(ClassGroup = (ReaperUnrealBridge), meta = (BlueprintSpawnableComponent))
class REAPERUNREALBRIDGE_API UReaperAudioCaptureComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UReaperAudioCaptureComponent();

	/**
	 * The AudioCaptureComponent to apply settings to.
	 * Set this from Blueprint to your AudioCaptureInBP reference.
	 */
	UPROPERTY(BlueprintReadWrite, Category = "ReaperUnrealBridge",
		meta = (DisplayName = "Audio Capture Target"))
	TObjectPtr<USceneComponent> AudioCaptureTarget;

	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Audio",
		meta = (DisplayName = "Copy Settings from Audio Component"))
	void CopySettingsFromAudioComponent(UAudioComponent* SourceComponent, bool bMuteSource, float& OriginalVolumeMultiplier);

	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Audio",
		meta = (DisplayName = "Restore Volume Multiplier to Original Value"))
	void RestoreVolumeMultiplier(UAudioComponent* ComponentToRestore, float OriginalVolumeMultiplier);

	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|Debug",
		meta = (DisplayName = "Debug Log Audio Settings"))
	void DebugLogAudioSettings(bool bPrintToScreen = true);
};
