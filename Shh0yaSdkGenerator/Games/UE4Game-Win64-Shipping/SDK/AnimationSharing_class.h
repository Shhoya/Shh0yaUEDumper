// Class AnimationSharing.AnimSharingStateInstance
// Size : 0x290 (Inherited : 0x270)
struct UAnimSharingStateInstance : UAnimInstance {
	struct UAnimSequence* AnimationToPlay; // 0x268(0x8)
	float PermutationTimeOffset; // 0x270(0x4)
	float PlayRate; // 0x274(0x4)
	bool bStateBool; // 0x278(0x1)
	struct UAnimSharingInstance* Instance; // 0x280(0x8)
	unsigned char UnknownData_289[0x0007]; // 0x289(0x7)

	void GetInstancedActors(struct TArray<struct AActor*> Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors // (Final|Native|Protected|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF77496FAF0
};

// Class AnimationSharing.AnimSharingTransitionInstance
// Size : 0x280 (Inherited : 0x270)
struct UAnimSharingTransitionInstance : UAnimInstance {
	struct FWeakObjectPtr<struct USkeletalMeshComponent> FromComponent; // 0x268(0x8)
	struct FWeakObjectPtr<struct USkeletalMeshComponent> ToComponent; // 0x270(0x8)
	float BlendTime; // 0x278(0x4)
	bool bBlendBool; // 0x27C(0x1)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
// Size : 0x280 (Inherited : 0x270)
struct UAnimSharingAdditiveInstance : UAnimInstance {
	struct FWeakObjectPtr<struct USkeletalMeshComponent> BaseComponent; // 0x268(0x8)
	struct FWeakObjectPtr<struct UAnimSequence> AdditiveAnimation; // 0x270(0x8)
	float Alpha; // 0x278(0x4)
	bool bStateBool; // 0x27C(0x1)
};

// Class AnimationSharing.AnimSharingInstance
// Size : 0x138 (Inherited : 0x28)
struct UAnimSharingInstance : UObject {
	struct TArray<struct AActor*> RegisteredActors; // 0x28(0x10)
	unsigned char UnknownData_38[0x0070]; // 0x38(0x70)
	struct UAnimationSharingStateProcessor* StateProcessor; // 0xA8(0x8)
	unsigned char UnknownData_B0[0x0038]; // 0xB0(0x38)
	struct TArray<struct UAnimSequence*> UsedAnimationSequences; // 0xE8(0x10)
	unsigned char UnknownData_F8[0x0010]; // 0xF8(0x10)
	struct UEnum* StateEnum; // 0x108(0x8)
	struct AActor* SharingActor; // 0x110(0x8)
	unsigned char UnknownData_118[0x0020]; // 0x118(0x20)
};

// Class AnimationSharing.AnimationSharingManager
// Size : 0x88 (Inherited : 0x28)
struct UAnimationSharingManager : UObject {
	struct TArray<struct USkeleton*> Skeletons; // 0x28(0x10)
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData; // 0x38(0x10)
	unsigned char UnknownData_48[0x0040]; // 0x48(0x40)

	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF77496FD50
	struct UAnimationSharingManager* GetAnimationSharingManager(struct UObject* WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF77496FA40
	bool CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF77496F980
	bool AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF77496F950
};

// Class AnimationSharing.AnimationSharingSetup
// Size : 0x48 (Inherited : 0x28)
struct UAnimationSharingSetup : UObject {
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28(0x10)
	struct FAnimationSharingScalability ScalabilitySettings; // 0x38(0x10)
};

// Class AnimationSharing.AnimationSharingStateProcessor
// Size : 0x50 (Inherited : 0x28)
struct UAnimationSharingStateProcessor : UObject {
	struct TSoftObjectPtr<struct UEnum> AnimationStateEnum; // 0x28(0x28)

	void ProcessActorState(int32_t OutState, struct AActor* InActor, enum class None CurrentState, enum class None OnDemandState, bool bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState // (Native|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x13, 0x7FF77496FBA0
	struct UEnum* GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum // (Native|Event|Public|BlueprintEvent) // Param Size : 0x8, 0x7FF77496FAC0
};

