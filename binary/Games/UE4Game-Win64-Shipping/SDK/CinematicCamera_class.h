// Class CinematicCamera.CameraRig_Crane
// Size : 0x250 (Inherited : 0x220)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x220(0x4)
	float CraneYaw; // 0x224(0x4)
	float CraneArmLength; // 0x228(0x4)
	bool bLockMountPitch; // 0x22C(0x1)
	bool bLockMountYaw; // 0x22D(0x1)
	unsigned char UnknownData_22E[0x0002]; // 0x22E(0x2)
	struct USceneComponent* TransformComponent; // 0x230(0x8)
	struct USceneComponent* CraneYawControl; // 0x238(0x8)
	struct USceneComponent* CranePitchControl; // 0x240(0x8)
	struct USceneComponent* CraneCameraMount; // 0x248(0x8)
};

// Class CinematicCamera.CameraRig_Rail
// Size : 0x240 (Inherited : 0x220)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x220(0x4)
	bool bLockOrientationToRail; // 0x224(0x1)
	unsigned char UnknownData_225[0x0003]; // 0x225(0x3)
	struct USceneComponent* TransformComponent; // 0x228(0x8)
	struct USplineComponent* RailSplineComponent; // 0x230(0x8)
	struct USceneComponent* RailCameraMount; // 0x238(0x8)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF775FE6030
};

// Class CinematicCamera.CineCameraActor
// Size : 0x7F0 (Inherited : 0x790)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x790(0x50)
	unsigned char UnknownData_7E0[0x0010]; // 0x7E0(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FE5D40
};

// Class CinematicCamera.CineCameraComponent
// Size : 0x8B0 (Inherited : 0x7B0)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x7B0(0xC)
	struct FCameraFilmbackSettings Filmback; // 0x7BC(0xC)
	struct FCameraLensSettings LensSettings; // 0x7C8(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x7E0(0x58)
	float CurrentFocalLength; // 0x838(0x4)
	float CurrentAperture; // 0x83C(0x4)
	float CurrentFocusDistance; // 0x840(0x4)
	unsigned char UnknownData_844[0x000C]; // 0x844(0xC)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x850(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x860(0x10)
	struct FString DefaultFilmbackPresetName; // 0x870(0x10)
	struct FString DefaultFilmbackPreset; // 0x880(0x10)
	struct FString DefaultLensPresetName; // 0x890(0x10)
	float DefaultLensFocalLength; // 0x8A0(0x4)
	float DefaultLensFStop; // 0x8A4(0x4)
	unsigned char UnknownData_8A8[0x0008]; // 0x8A8(0x8)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FE61C0
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FE6120
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x4, 0x7FF775FE6080
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FE6050
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FE5F50
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FE5ED0
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FE5EA0
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FE5E20
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FE5D60
};

