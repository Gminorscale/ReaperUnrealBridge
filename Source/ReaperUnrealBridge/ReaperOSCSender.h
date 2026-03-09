#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReaperOSCSender.generated.h"

/**
 * Lightweight OSC sender for the ReaperUnrealBridge plugin.
 * Sends a single OSC message (address + optional float value) over UDP.
 * No OSC plugin dependency required at runtime.
 */
UCLASS()
class REAPERUNREALBRIDGE_API UReaperOSCSender : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Send a simple OSC message to an IP address and port.
	 * Sends the address with a single float argument (default 1.0 for trigger/bang).
	 *
	 * @param IPAddress  Target IP address (e.g. "127.0.0.1" for local Reaper)
	 * @param Port       Target UDP port (Reaper default OSC port is 8000)
	 * @param Address    OSC address string (e.g. "/action/40044")
	 * @param Value      Float argument to send with the message (default 1.0)
	 * @return true if the message was sent successfully
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|OSC",
		meta = (DisplayName = "Quick Send Message"))
	static bool QuickSendMessage(
		const FString& IPAddress,
		int32 Port,
		const FString& Address,
		float Value = 1.0f);
};
