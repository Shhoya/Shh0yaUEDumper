// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// Size : 0x1 (Inherited : 0x0)
struct FSessionServiceLogUnsubscribe {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// Size : 0x1 (Inherited : 0x0)
struct FSessionServiceLogSubscribe {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct SessionMessages.SessionServiceLog
// Size : 0x38 (Inherited : 0x0)
struct FSessionServiceLog {
	struct FName Category; // 0x0(0x8)
	struct FString Data; // 0x8(0x10)
	struct FGuid InstanceId; // 0x18(0x10)
	double TimeSeconds; // 0x28(0x8)
	enum class None Verbosity; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// ScriptStruct SessionMessages.SessionServicePong
// Size : 0x90 (Inherited : 0x0)
struct FSessionServicePong {
	bool Authorized; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct FString BuildDate; // 0x8(0x10)
	struct FString DeviceName; // 0x18(0x10)
	struct FGuid InstanceId; // 0x28(0x10)
	struct FString InstanceName; // 0x38(0x10)
	struct FString PlatformName; // 0x48(0x10)
	struct FGuid SessionId; // 0x58(0x10)
	struct FString SessionName; // 0x68(0x10)
	struct FString SessionOwner; // 0x78(0x10)
	bool Standalone; // 0x88(0x1)
	unsigned char UnknownData_89[0x0007]; // 0x89(0x7)
};

// ScriptStruct SessionMessages.SessionServicePing
// Size : 0x10 (Inherited : 0x0)
struct FSessionServicePing {
	struct FString UserName; // 0x0(0x10)
};

