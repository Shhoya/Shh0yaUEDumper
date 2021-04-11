// AnimBlueprintGeneratedClass FirstPerson_AnimBP.FirstPerson_AnimBP_C
// Size : 0x802 (Inherited : 0x270)
struct UFirstPerson_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x2A8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2D0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2F8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x398(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x3C0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x438(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x468(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x4E0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x510(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x588(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x5B8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x630(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x660(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x6D8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x708(0xB0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x7B8(0x48)
	bool IsMoving; // 0x800(0x1)
	bool bIsInAir; // 0x801(0x1)

	void AnimGraph(struct FPoseLink AnimGraph); // Function FirstPerson_AnimBP.FirstPerson_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_DF5EA38F40899E6FA34A95A078F6AC7B(); // Function FirstPerson_AnimBP.FirstPerson_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_DF5EA38F40899E6FA34A95A078F6AC7B // (BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_FD08A51A4E3E4A767C7ED6B9E0A8B8C8(); // Function FirstPerson_AnimBP.FirstPerson_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_FD08A51A4E3E4A767C7ED6B9E0A8B8C8 // (BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function FirstPerson_AnimBP.FirstPerson_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // Param Size : 0x4, 0x7FF77510D9D0
	void ExecuteUbergraph_FirstPerson_AnimBP(int32_t EntryPoint); // Function FirstPerson_AnimBP.FirstPerson_AnimBP_C.ExecuteUbergraph_FirstPerson_AnimBP // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF77510D9D0
};

