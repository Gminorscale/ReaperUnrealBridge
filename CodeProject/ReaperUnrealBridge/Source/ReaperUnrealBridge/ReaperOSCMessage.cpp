#include "ReaperOSCMessage.h"

void FReaperOSCMessage::PadToFourBytes(TArray<uint8>& Data)
{
	while (Data.Num() % 4 != 0)
	{
		Data.Add(0);
	}
}

TArray<uint8> FReaperOSCMessage::BuildFloatMessage(const FString& Address, float Value)
{
	TArray<uint8> Packet;

	// OSC address string (UTF-8, null-terminated, padded to 4 bytes)
	FTCHARToUTF8 AddressUTF8(*Address);
	for (int32 i = 0; i < AddressUTF8.Length(); ++i)
	{
		Packet.Add(static_cast<uint8>(AddressUTF8.Get()[i]));
	}
	Packet.Add(0); // null terminator
	PadToFourBytes(Packet);

	// Type tag string: ",f" null-terminated, padded to 4 bytes
	Packet.Add(',');
	Packet.Add('f');
	Packet.Add(0);
	Packet.Add(0); // already 4 bytes: ',', 'f', '\0', '\0'

	// Float argument in big-endian (network byte order)
	uint32 FloatBits;
	FMemory::Memcpy(&FloatBits, &Value, sizeof(float));
	Packet.Add(static_cast<uint8>((FloatBits >> 24) & 0xFF));
	Packet.Add(static_cast<uint8>((FloatBits >> 16) & 0xFF));
	Packet.Add(static_cast<uint8>((FloatBits >> 8)  & 0xFF));
	Packet.Add(static_cast<uint8>( FloatBits        & 0xFF));

	return Packet;
}

TArray<uint8> FReaperOSCMessage::BuildBangMessage(const FString& Address)
{
	TArray<uint8> Packet;

	FTCHARToUTF8 AddressUTF8(*Address);
	for (int32 i = 0; i < AddressUTF8.Length(); ++i)
	{
		Packet.Add(static_cast<uint8>(AddressUTF8.Get()[i]));
	}
	Packet.Add(0);
	PadToFourBytes(Packet);

	// Type tag: "," with no args, padded to 4 bytes
	Packet.Add(',');
	Packet.Add(0);
	Packet.Add(0);
	Packet.Add(0);

	return Packet;
}
