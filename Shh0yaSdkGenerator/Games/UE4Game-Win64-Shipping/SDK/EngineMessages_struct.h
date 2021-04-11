// ScriptStruct EngineMessages.EngineServiceNotification
// Size : 0x18 (Inherited : 0x0)
struct FEngineServiceNotification {
	struct FString Text; // 0x0(0x10)
	double TimeSeconds; // 0x10(0x8)
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// Size : 0x10 (Inherited : 0x0)
struct FEngineServiceTerminate {
	struct FString UserName; // 0x0(0x10)
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// Size : 0x20 (Inherited : 0x0)
struct FEngineServiceExecuteCommand {
	struct FString Command; // 0x0(0x10)
	struct FString UserName; // 0x10(0x10)
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// Size : 0x20 (Inherited : 0x0)
struct FEngineServiceAuthGrant {
	struct FString UserName; // 0x0(0x10)
	struct FString UserToGrant; // 0x10(0x10)
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// Size : 0x20 (Inherited : 0x0)
struct FEngineServiceAuthDeny {
	struct FString UserName; // 0x0(0x10)
	struct FString UserToDeny; // 0x10(0x10)
};

// ScriptStruct EngineMessages.EngineServicePong
// Size : 0x50 (Inherited : 0x0)
struct FEngineServicePong {
	struct FString CurrentLevel; // 0x0(0x10)
	int32_t EngineVersion; // 0x10(0x4)
	bool HasBegunPlay; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
	struct FGuid InstanceId; // 0x18(0x10)
	struct FString InstanceType; // 0x28(0x10)
	struct FGuid SessionId; // 0x38(0x10)
	float WorldTimeSeconds; // 0x48(0x4)
	unsigned char UnknownData_4C[0x0004]; // 0x4C(0x4)
};

// ScriptStruct EngineMessages.EngineServicePing
// Size : 0x1 (Inherited : 0x0)
struct FEngineServicePing {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

