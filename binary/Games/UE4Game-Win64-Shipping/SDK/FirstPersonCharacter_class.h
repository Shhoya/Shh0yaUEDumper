// BlueprintGeneratedClass FirstPersonCharacter.FirstPersonCharacter_C
// Size : 0x51D (Inherited : 0x4C0)
struct AFirstPersonCharacter_C : ACharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4C0(0x8)
	struct USkeletalMeshComponent* VR_Gun; // 0x4C8(0x8)
	struct USphereComponent* VR_Marker; // 0x4D0(0x8)
	struct UMotionControllerComponent* R_MotionController; // 0x4D8(0x8)
	struct UMotionControllerComponent* L_MotionController; // 0x4E0(0x8)
	struct USphereComponent* Sphere; // 0x4E8(0x8)
	struct USkeletalMeshComponent* FP_Gun; // 0x4F0(0x8)
	struct USkeletalMeshComponent* Mesh2P; // 0x4F8(0x8)
	struct UCameraComponent* FirstPersonCamera; // 0x500(0x8)
	struct FVector GunOffset; // 0x508(0xC)
	float BaseTurnRate; // 0x514(0x4)
	float BaseLookUpRate; // 0x518(0x4)
	bool UsingMotionControllers?; // 0x51C(0x1)

	void UserConstructionScript(); // Function FirstPersonCharacter.FirstPersonCharacter_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void InpTchEvt_K2Node_InputTouchEvent_1(enum class ETouchIndex FingerIndex, struct FVector Location); // Function FirstPersonCharacter.FirstPersonCharacter_C.InpTchEvt_K2Node_InputTouchEvent_1 // (BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void InpActEvt_Fire_K2Node_InputActionEvent_4(struct FKey Key); // Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Fire_K2Node_InputActionEvent_4 // (BlueprintEvent) // Param Size : 0x18, 0x7FF77510D9D0
	void InpActEvt_ResetVR_K2Node_InputActionEvent_3(struct FKey Key); // Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_ResetVR_K2Node_InputActionEvent_3 // (BlueprintEvent) // Param Size : 0x18, 0x7FF77510D9D0
	void InpActEvt_Jump_K2Node_InputActionEvent_2(struct FKey Key); // Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_2 // (BlueprintEvent) // Param Size : 0x18, 0x7FF77510D9D0
	void InpActEvt_Jump_K2Node_InputActionEvent_1(struct FKey Key); // Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_1 // (BlueprintEvent) // Param Size : 0x18, 0x7FF77510D9D0
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_158(float AxisValue); // Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_158 // (BlueprintEvent) // Param Size : 0x4, 0x7FF77510D9D0
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_173(float AxisValue); // Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_173 // (BlueprintEvent) // Param Size : 0x4, 0x7FF77510D9D0
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182(float AxisValue); // Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182 // (BlueprintEvent) // Param Size : 0x4, 0x7FF77510D9D0
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193(float AxisValue); // Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193 // (BlueprintEvent) // Param Size : 0x4, 0x7FF77510D9D0
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35(float AxisValue); // Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35 // (BlueprintEvent) // Param Size : 0x4, 0x7FF77510D9D0
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_63(float AxisValue); // Function FirstPersonCharacter.FirstPersonCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_63 // (BlueprintEvent) // Param Size : 0x4, 0x7FF77510D9D0
	void ReceiveBeginPlay(); // Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void ExecuteUbergraph_FirstPersonCharacter(int32_t EntryPoint); // Function FirstPersonCharacter.FirstPersonCharacter_C.ExecuteUbergraph_FirstPersonCharacter // (Final|UbergraphFunction|HasDefaults) // Param Size : 0x4, 0x7FF77510D9D0
};

