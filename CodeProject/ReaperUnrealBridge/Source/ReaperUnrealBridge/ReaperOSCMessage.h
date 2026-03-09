#pragma once

#include "CoreMinimal.h"

/**
 * Builds raw OSC packets. Used internally by UReaperOSCSender.
 * No UObject, no UCLASS — just plain C++ helpers.
 */
struct REAPERUNREALBRIDGE_API FReaperOSCMessage
{
	/**
	 * Build an OSC 1.0 packet with a single float32 argument.
	 * Format: address (null-padded to 4-byte boundary) + type tag ",f\0\0" + float (big-endian)
	 */
	static TArray<uint8> BuildFloatMessage(const FString& Address, float Value);

	/**
	 * Build an OSC 1.0 packet with no arguments (bang / trigger).
	 * Format: address (null-padded to 4-byte boundary) + type tag ",\0\0\0"
	 */
	static TArray<uint8> BuildBangMessage(const FString& Address);

private:
	/** Pad a byte array to the next 4-byte boundary with null bytes. */
	static void PadToFourBytes(TArray<uint8>& Data);
};
