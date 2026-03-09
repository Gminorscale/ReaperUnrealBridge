#include "ReaperOSCSender.h"
#include "ReaperOSCMessage.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"

DEFINE_LOG_CATEGORY_STATIC(LogReaperOSC, Log, All);

bool UReaperOSCSender::QuickSendMessage(
	const FString& IPAddress,
	int32 Port,
	const FString& Address,
	float Value)
{
	ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
	if (!SocketSubsystem)
	{
		UE_LOG(LogReaperOSC, Warning, TEXT("QuickSendMessage: No socket subsystem."));
		return false;
	}

	TSharedRef<FInternetAddr> Addr = SocketSubsystem->CreateInternetAddr();
	bool bIsValid = false;
	Addr->SetIp(*IPAddress, bIsValid);
	if (!bIsValid)
	{
		UE_LOG(LogReaperOSC, Warning, TEXT("QuickSendMessage: Invalid IP address '%s'."), *IPAddress);
		return false;
	}
	Addr->SetPort(Port);

	FSocket* Socket = SocketSubsystem->CreateSocket(NAME_DGram, TEXT("ReaperOSC"), false);
	if (!Socket)
	{
		UE_LOG(LogReaperOSC, Warning, TEXT("QuickSendMessage: Failed to create UDP socket."));
		return false;
	}

	TArray<uint8> Packet = FReaperOSCMessage::BuildFloatMessage(Address, Value);

	int32 BytesSent = 0;
	bool bSuccess = Socket->SendTo(Packet.GetData(), Packet.Num(), BytesSent, *Addr);

	SocketSubsystem->DestroySocket(Socket);

	if (!bSuccess)
	{
		UE_LOG(LogReaperOSC, Warning, TEXT("QuickSendMessage: Failed to send to %s:%d"), *IPAddress, Port);
	}

	return bSuccess;
}
