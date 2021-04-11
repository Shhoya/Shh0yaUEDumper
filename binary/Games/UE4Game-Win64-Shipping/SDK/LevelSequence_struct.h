// ScriptStruct LevelSequence.LevelSequenceCameraSettings
// Size : 0x2 (Inherited : 0x0)
struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0(0x1)
	enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1(0x1)
};

// ScriptStruct LevelSequence.BoundActorProxy
// Size : 0x1 (Inherited : 0x0)
struct FBoundActorProxy {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// Size : 0xA0 (Inherited : 0x0)
struct FLevelSequenceBindingReferences {
	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0(0x50)
	struct TSet<struct FGuid> AnimSequenceInstances; // 0x50(0x50)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// Size : 0x10 (Inherited : 0x0)
struct FLevelSequenceBindingReferenceArray {
	struct TArray<struct FLevelSequenceBindingReference> References; // 0x0(0x10)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// Size : 0x38 (Inherited : 0x0)
struct FLevelSequenceBindingReference {
	struct FString PackageName; // 0x0(0x10)
	struct FSoftObjectPath ExternalObjectPath; // 0x10(0x18)
	struct FString ObjectPath; // 0x28(0x10)
};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// Size : 0x50 (Inherited : 0x0)
struct FLevelSequenceObjectReferenceMap {
	unsigned char UnknownData_0[0x0050]; // 0x0(0x50)
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// Size : 0x20 (Inherited : 0x0)
struct FLevelSequenceLegacyObjectReference {
	unsigned char UnknownData_0[0x0020]; // 0x0(0x20)
};

// ScriptStruct LevelSequence.LevelSequenceObject
// Size : 0x38 (Inherited : 0x0)
struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0(0x1C)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
	struct FString ComponentName; // 0x20(0x10)
	struct FWeakObjectPtr<struct UObject> CachedComponent; // 0x30(0x8)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size : 0xB8 (Inherited : 0x0)
struct FLevelSequencePlayerSnapshot {
	struct FString MasterName; // 0x0(0x10)
	struct FQualifiedFrameTime MasterTime; // 0x10(0x10)
	struct FQualifiedFrameTime SourceTime; // 0x20(0x10)
	struct FString CurrentShotName; // 0x30(0x10)
	struct FQualifiedFrameTime CurrentShotLocalTime; // 0x40(0x10)
	struct FQualifiedFrameTime CurrentShotSourceTime; // 0x50(0x10)
	struct FString SourceTimecode; // 0x60(0x10)
	struct TSoftObjectPtr<struct UCameraComponent> CameraComponent; // 0x70(0x28)
	struct FLevelSequenceSnapshotSettings Settings; // 0x98(0xC)
	unsigned char UnknownData_A4[0x0004]; // 0xA4(0x4)
	struct ULevelSequence* ActiveShot; // 0xA8(0x8)
	struct FMovieSceneSequenceID ShotID; // 0xB0(0x4)
	unsigned char UnknownData_B4[0x0004]; // 0xB4(0x4)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// Size : 0xC (Inherited : 0x0)
struct FLevelSequenceSnapshotSettings {
	enum class None ZeroPadAmount; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FFrameRate FrameRate; // 0x4(0x8)
};

