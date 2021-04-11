// Class OculusInput.OculusHandComponent
// Size : 0x880 (Inherited : 0x7F0)
struct UOculusHandComponent : UPoseableMeshComponent {
	enum class EOculusHandType SkeletonType; // 0x7E8(0x1)
	enum class EOculusHandType MeshType; // 0x7E9(0x1)
	enum class EConfidenceBehavior ConfidenceBehavior; // 0x7EA(0x1)
	enum class ESystemGestureBehavior SystemGestureBehavior; // 0x7EB(0x1)
	struct UMaterialInterface* SystemGestureMaterial; // 0x7F0(0x8)
	bool bInitializePhysics; // 0x7F8(0x1)
	bool bUpdateHandScale; // 0x7F9(0x1)
	unsigned char UnknownData_7FE[0x0002]; // 0x7FE(0x2)
	struct UMaterialInterface* MaterialOverride; // 0x800(0x8)
	struct TMap<enum class EBone, struct FName> BoneNameMappings; // 0x808(0x50)
	struct TArray<struct FOculusCapsuleCollider> CollisionCapsules; // 0x858(0x10)
	bool bSkeletalMeshInitialized; // 0x868(0x1)
	unsigned char UnknownData_869[0x0017]; // 0x869(0x17)
};

// Class OculusInput.OculusInputFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UOculusInputFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsPointerPoseValid(enum class EOculusHandType DeviceHand, int32_t ControllerIndex); // Function OculusInput.OculusInputFunctionLibrary.IsPointerPoseValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x9, 0x7FF624AA2780
	bool IsHandTrackingEnabled(); // Function OculusInput.OculusInputFunctionLibrary.IsHandTrackingEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF624AA2750
	struct TArray<struct FOculusCapsuleCollider> InitializeHandPhysics(enum class EOculusHandType SkeletonType, struct USkinnedMeshComponent* HandComponent, float WorldToMeters); // Function OculusInput.OculusInputFunctionLibrary.InitializeHandPhysics // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF624AA2600
	enum class ETrackingConfidence GetTrackingConfidence(enum class EOculusHandType DeviceHand, int32_t ControllerIndex); // Function OculusInput.OculusInputFunctionLibrary.GetTrackingConfidence // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x9, 0x7FF624AA2530
	struct FTransform GetPointerPose(enum class EOculusHandType DeviceHand, int32_t ControllerIndex); // Function OculusInput.OculusInputFunctionLibrary.GetPointerPose // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x40, 0x7FF624AA2430
	bool GetHandSkeletalMesh(struct USkeletalMesh* HandSkeletalMesh, enum class EOculusHandType SkeletonType, enum class EOculusHandType MeshType, float WorldToMeters); // Function OculusInput.OculusInputFunctionLibrary.GetHandSkeletalMesh // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF624AA22E0
	float GetHandScale(enum class EOculusHandType DeviceHand, int32_t ControllerIndex); // Function OculusInput.OculusInputFunctionLibrary.GetHandScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0xC, 0x7FF624AA2210
	enum class EOculusHandType GetDominantHand(int32_t ControllerIndex); // Function OculusInput.OculusInputFunctionLibrary.GetDominantHand // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x5, 0x7FF624AA2180
	struct FQuat GetBoneRotation(enum class EOculusHandType DeviceHand, enum class EBone BoneId, int32_t ControllerIndex); // Function OculusInput.OculusInputFunctionLibrary.GetBoneRotation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x20, 0x7FF624AA2070
	struct FString GetBoneName(enum class EBone BoneId); // Function OculusInput.OculusInputFunctionLibrary.GetBoneName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF624AA1FA0
};

