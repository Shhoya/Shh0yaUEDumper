// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// Size : 0xB8 (Inherited : 0x0)
struct FBlueprintSessionResult {
	unsigned char UnknownData_0[0x00B8]; // 0x0(0xB8)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
// Size : 0x30 (Inherited : 0x0)
struct FInAppPurchaseReceiptInfo2 {
	struct FString ItemName; // 0x0(0x10)
	struct FString ItemId; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
// Size : 0x110 (Inherited : 0x0)
struct FOnlineProxyStoreOffer {
	struct FString OfferId; // 0x0(0x10)
	struct FText Title; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText LongDescription; // 0x40(0x18)
	struct FText RegularPriceText; // 0x58(0x18)
	int32_t RegularPrice; // 0x70(0x4)
	unsigned char UnknownData_74[0x0004]; // 0x74(0x4)
	struct FText PriceText; // 0x78(0x18)
	int32_t NumericPrice; // 0x90(0x4)
	unsigned char UnknownData_94[0x0004]; // 0x94(0x4)
	struct FString CurrencyCode; // 0x98(0x10)
	struct FDateTime ReleaseDate; // 0xA8(0x8)
	struct FDateTime ExpirationDate; // 0xB0(0x8)
	enum class EOnlineProxyStoreOfferDiscountType DiscountType; // 0xB8(0x1)
	unsigned char UnknownData_B9[0x0007]; // 0xB9(0x7)
	struct TMap<struct FString, struct FString> DynamicFields; // 0xC0(0x50)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
// Size : 0x30 (Inherited : 0x0)
struct FInAppPurchaseRestoreInfo2 {
	struct FString ItemName; // 0x0(0x10)
	struct FString ItemId; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
// Size : 0x30 (Inherited : 0x0)
struct FInAppPurchaseReceiptInfo {
	struct FString ItemName; // 0x0(0x10)
	struct FString ItemId; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
// Size : 0xF8 (Inherited : 0x0)
struct FInAppPurchaseProductInfo2 {
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
	struct TMap<struct FString, struct FString> DynamicFields; // 0xA8(0x50)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
// Size : 0x18 (Inherited : 0x0)
struct FInAppPurchaseProductRequest2 {
	struct FString ProductIdentifier; // 0x0(0x10)
	bool bIsConsumable; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// Size : 0x50 (Inherited : 0x0)
struct FPlayerReservation {
	struct FUniqueNetIdRepl UniqueId; // 0x0(0x28)
	struct FString ValidationStr; // 0x28(0x10)
	struct FString Platform; // 0x38(0x10)
	bool bAllowCrossplay; // 0x48(0x1)
	unsigned char UnknownData_49[0x0003]; // 0x49(0x3)
	float ElapsedTime; // 0x4C(0x4)
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// Size : 0x40 (Inherited : 0x0)
struct FPIELoginSettingsInternal {
	struct FString ID; // 0x0(0x10)
	struct FString Token; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct TArray<enum class None> TokenBytes; // 0x30(0x10)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// Size : 0x50 (Inherited : 0x0)
struct FPartyReservation {
	int32_t TeamNum; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct FUniqueNetIdRepl PartyLeader; // 0x8(0x28)
	struct TArray<struct FPlayerReservation> PartyMembers; // 0x30(0x10)
	struct TArray<struct FPlayerReservation> RemovedPartyMembers; // 0x40(0x10)
};

// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// Size : 0x78 (Inherited : 0x0)
struct FSpectatorReservation {
	struct FUniqueNetIdRepl SpectatorId; // 0x0(0x28)
	struct FPlayerReservation Spectator; // 0x28(0x50)
};

