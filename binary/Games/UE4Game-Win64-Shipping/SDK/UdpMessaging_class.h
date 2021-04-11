// Class UdpMessaging.UdpMessagingSettings
// Size : 0xA0 (Inherited : 0x28)
struct UUdpMessagingSettings : UObject {
	bool EnableTransport; // 0x28(0x1)
	bool bAutoRepair; // 0x29(0x1)
	bool bStopServiceWhenAppDeactivates; // 0x2A(0x1)
	unsigned char UnknownData_2B[0x0005]; // 0x2B(0x5)
	struct FString UnicastEndpoint; // 0x30(0x10)
	struct FString MulticastEndpoint; // 0x40(0x10)
	enum class EUdpMessageFormat MessageFormat; // 0x50(0x1)
	enum class None MulticastTimeToLive; // 0x51(0x1)
	unsigned char UnknownData_52[0x0006]; // 0x52(0x6)
	struct TArray<struct FString> StaticEndpoints; // 0x58(0x10)
	bool EnableTunnel; // 0x68(0x1)
	unsigned char UnknownData_69[0x0007]; // 0x69(0x7)
	struct FString TunnelUnicastEndpoint; // 0x70(0x10)
	struct FString TunnelMulticastEndpoint; // 0x80(0x10)
	struct TArray<struct FString> RemoteTunnelEndpoints; // 0x90(0x10)
};

