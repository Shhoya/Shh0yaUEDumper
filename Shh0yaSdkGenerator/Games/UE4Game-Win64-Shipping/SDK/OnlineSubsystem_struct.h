// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// Size : 0xA8 (Inherited : 0x0)
struct FInAppPurchaseProductInfo {
	struct FString Identifier; // 0x0(0x10)
	struct FString TransactionIdentifier; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	struct FString DisplayDescription; // 0x30(0x10)
	struct FString DisplayPrice; // 0x40(0x10)
	float RawPrice; // 0x50(0x4)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
	struct FString CurrencyCode; // 0x58(0x10)
	struct FString CurrencySymbol; // 0x68(0x10)
	struct FString DecimalSeparator; // 0x78(0x10)
	struct FString GroupingSeparator; // 0x88(0x10)
	struct FString ReceiptData; // 0x98(0x10)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// Size : 0x30 (Inherited : 0x0)
struct FInAppPurchaseRestoreInfo {
	struct FString Identifier; // 0x0(0x10)
	struct FString ReceiptData; // 0x10(0x10)
	struct FString TransactionIdentifier; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// Size : 0x18 (Inherited : 0x0)
struct FNamedInterfaceDef {
	struct FName InterfaceName; // 0x0(0x8)
	struct FString InterfaceClassName; // 0x8(0x10)
};

// ScriptStruct OnlineSubsystem.NamedInterface
// Size : 0x10 (Inherited : 0x0)
struct FNamedInterface {
	struct FName InterfaceName; // 0x0(0x8)
	struct UObject* InterfaceObject; // 0x8(0x8)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// Size : 0x18 (Inherited : 0x0)
struct FInAppPurchaseProductRequest {
	struct FString ProductIdentifier; // 0x0(0x10)
	bool bIsConsumable; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
};

