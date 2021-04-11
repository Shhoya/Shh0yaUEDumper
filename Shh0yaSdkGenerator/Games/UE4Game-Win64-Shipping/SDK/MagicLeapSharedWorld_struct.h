// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
// Size : 0x10 (Inherited : 0x0)
struct FMagicLeapSharedWorldSharedData {
	struct TArray<struct FGuid> PinIDs; // 0x0(0x10)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
// Size : 0x10 (Inherited : 0x0)
struct FMagicLeapSharedWorldAlignmentTransforms {
	struct TArray<struct FTransform> AlignmentTransforms; // 0x0(0x10)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
// Size : 0x10 (Inherited : 0x0)
struct FMagicLeapSharedWorldLocalData {
	struct TArray<struct FMagicLeapSharedWorldPinData> LocalPins; // 0x0(0x10)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
// Size : 0x20 (Inherited : 0x0)
struct FMagicLeapSharedWorldPinData {
	struct FGuid PinID; // 0x0(0x10)
	struct FMagicLeapARPinState PinState; // 0x10(0x10)
};

