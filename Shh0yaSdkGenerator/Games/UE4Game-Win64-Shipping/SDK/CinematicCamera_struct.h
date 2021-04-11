// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// Size : 0x50 (Inherited : 0x0)
struct FCameraLookatTrackingSettings {
	unsigned char bEnableLookAtTracking : 1; // 0x0(0x1)
	unsigned char bDrawDebugLookAtTrackingPosition : 1; // 0x0(0x1)
	unsigned char UnknownData_0_2 : 6; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float LookAtTrackingInterpSpeed; // 0x4(0x4)
	unsigned char UnknownData_8[0x0010]; // 0x8(0x10)
	struct TSoftObjectPtr<struct AActor> ActorToTrack; // 0x18(0x28)
	struct FVector RelativeOffset; // 0x40(0xC)
	unsigned char bAllowRoll : 1; // 0x4C(0x1)
	unsigned char UnknownData_4C_1 : 7; // 0x4C(0x1)
	unsigned char UnknownData_4D[0x0003]; // 0x4D(0x3)
};

// ScriptStruct CinematicCamera.CameraFocusSettings
// Size : 0x58 (Inherited : 0x0)
struct FCameraFocusSettings {
	enum class ECameraFocusMethod FocusMethod; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float ManualFocusDistance; // 0x4(0x4)
	struct FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8(0x38)
	unsigned char bDrawDebugFocusPlane : 1; // 0x40(0x1)
	unsigned char UnknownData_40_1 : 7; // 0x40(0x1)
	unsigned char UnknownData_41[0x0003]; // 0x41(0x3)
	struct FColor DebugFocusPlaneColor; // 0x44(0x4)
	unsigned char bSmoothFocusChanges : 1; // 0x48(0x1)
	unsigned char UnknownData_48_1 : 7; // 0x48(0x1)
	unsigned char UnknownData_49[0x0003]; // 0x49(0x3)
	float FocusSmoothingInterpSpeed; // 0x4C(0x4)
	float FocusOffset; // 0x50(0x4)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// Size : 0x38 (Inherited : 0x0)
struct FCameraTrackingFocusSettings {
	struct TSoftObjectPtr<struct AActor> ActorToTrack; // 0x0(0x28)
	struct FVector RelativeOffset; // 0x28(0xC)
	unsigned char bDrawDebugTrackingFocusPoint : 1; // 0x34(0x1)
	unsigned char UnknownData_34_1 : 7; // 0x34(0x1)
	unsigned char UnknownData_35[0x0003]; // 0x35(0x3)
};

// ScriptStruct CinematicCamera.NamedLensPreset
// Size : 0x28 (Inherited : 0x0)
struct FNamedLensPreset {
	struct FString Name; // 0x0(0x10)
	struct FCameraLensSettings LensSettings; // 0x10(0x18)
};

// ScriptStruct CinematicCamera.CameraLensSettings
// Size : 0x18 (Inherited : 0x0)
struct FCameraLensSettings {
	float MinFocalLength; // 0x0(0x4)
	float MaxFocalLength; // 0x4(0x4)
	float MinFStop; // 0x8(0x4)
	float MaxFStop; // 0xC(0x4)
	float MinimumFocusDistance; // 0x10(0x4)
	int32_t DiaphragmBladeCount; // 0x14(0x4)
};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// Size : 0x20 (Inherited : 0x0)
struct FNamedFilmbackPreset {
	struct FString Name; // 0x0(0x10)
	struct FCameraFilmbackSettings FilmbackSettings; // 0x10(0xC)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// Size : 0xC (Inherited : 0x0)
struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0(0x4)
	float SensorHeight; // 0x4(0x4)
	float SensorAspectRatio; // 0x8(0x4)
};

