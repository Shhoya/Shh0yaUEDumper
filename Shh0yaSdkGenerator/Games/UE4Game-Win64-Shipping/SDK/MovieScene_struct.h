// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size : 0x10 (Inherited : 0x0)
struct FMovieSceneEvalTemplateBase {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size : 0x20 (Inherited : 0x10)
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	enum class EMovieSceneCompletionMode CompletionMode; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	struct FWeakObjectPtr<struct UMovieSceneSection> SourceSectionPtr; // 0x14(0x8)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct MovieScene.MovieSceneChannel
// Size : 0x8 (Inherited : 0x0)
struct FMovieSceneChannel {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct MovieScene.MovieSceneBoolChannel
// Size : 0x90 (Inherited : 0x8)
struct FMovieSceneBoolChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	bool DefaultValue; // 0x18(0x1)
	bool bHasDefaultValue; // 0x19(0x1)
	unsigned char UnknownData_1A[0x0006]; // 0x1A(0x6)
	struct TArray<bool> Values; // 0x20(0x10)
	unsigned char UnknownData_30[0x0060]; // 0x30(0x60)
};

// ScriptStruct MovieScene.MovieSceneFloatChannel
// Size : 0xA0 (Inherited : 0x8)
struct FMovieSceneFloatChannel : FMovieSceneChannel {
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x8(0x1)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x9(0x1)
	unsigned char UnknownData_A[0x0006]; // 0xA(0x6)
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FMovieSceneFloatValue> Values; // 0x20(0x10)
	float DefaultValue; // 0x30(0x4)
	bool bHasDefaultValue; // 0x34(0x1)
	unsigned char UnknownData_35[0x0003]; // 0x35(0x3)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x38(0x60)
	struct FFrameRate TickResolution; // 0x98(0x8)
};

// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// Size : 0x60 (Inherited : 0x60)
struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable {
};

// ScriptStruct MovieScene.MovieSceneFloatValue
// Size : 0x1C (Inherited : 0x0)
struct FMovieSceneFloatValue {
	float Value; // 0x0(0x4)
	struct FMovieSceneTangentData Tangent; // 0x4(0x14)
	enum class ERichCurveInterpMode InterpMode; // 0x18(0x1)
	enum class ERichCurveTangentMode TangentMode; // 0x19(0x1)
	enum class None PaddingByte; // 0x1A(0x1)
	unsigned char UnknownData_1B[0x0001]; // 0x1B(0x1)
};

// ScriptStruct MovieScene.MovieSceneTangentData
// Size : 0x14 (Inherited : 0x0)
struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0(0x4)
	float LeaveTangent; // 0x4(0x4)
	float ArriveTangentWeight; // 0x8(0x4)
	float LeaveTangentWeight; // 0xC(0x4)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
// Size : 0x90 (Inherited : 0x8)
struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	int32_t DefaultValue; // 0x18(0x4)
	bool bHasDefaultValue; // 0x1C(0x1)
	unsigned char UnknownData_1D[0x0003]; // 0x1D(0x3)
	struct TArray<int32_t> Values; // 0x20(0x10)
	unsigned char UnknownData_30[0x0060]; // 0x30(0x60)
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// Size : 0x10 (Inherited : 0x10)
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase {
};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size : 0x48 (Inherited : 0x20)
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x20(0x28)
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// Size : 0x28 (Inherited : 0x0)
struct FMovieScenePropertySectionData {
	struct FName PropertyName; // 0x0(0x8)
	struct FString PropertyPath; // 0x8(0x10)
	struct FName FunctionName; // 0x18(0x8)
	struct FName NotifyFunctionName; // 0x20(0x8)
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// Size : 0x8 (Inherited : 0x0)
struct FMovieSceneSequenceInstanceData {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// Size : 0x14 (Inherited : 0x0)
struct FMovieSceneEvaluationOperand {
	struct FGuid ObjectBindingID; // 0x0(0x10)
	struct FMovieSceneSequenceID SequenceID; // 0x10(0x4)
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// Size : 0x4 (Inherited : 0x0)
struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0(0x4)
};

// ScriptStruct MovieScene.MovieSceneSectionGroup
// Size : 0x10 (Inherited : 0x0)
struct FMovieSceneSectionGroup {
	struct TArray<struct FWeakObjectPtr<struct UMovieSceneSection>> Sections; // 0x0(0x10)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// Size : 0x10 (Inherited : 0x0)
struct FMovieSceneObjectBindingIDs {
	struct TArray<struct FMovieSceneObjectBindingID> IDs; // 0x0(0x10)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size : 0x18 (Inherited : 0x0)
struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0(0x4)
	enum class EMovieSceneObjectBindingSpace Space; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
	struct FGuid Guid; // 0x8(0x10)
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// Size : 0x10 (Inherited : 0x0)
struct FMovieSceneTrackLabels {
	struct TArray<struct FString> Strings; // 0x0(0x10)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// Size : 0xF0 (Inherited : 0x0)
struct FMovieSceneEditorData {
	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates; // 0x0(0x50)
	struct TArray<struct FString> PinnedNodes; // 0x50(0x10)
	double ViewStart; // 0x60(0x8)
	double ViewEnd; // 0x68(0x8)
	double WorkStart; // 0x70(0x8)
	double WorkEnd; // 0x78(0x8)
	struct TSet<struct FFrameNumber> MarkedFrames; // 0x80(0x50)
	struct FFloatRange WorkingRange; // 0xD0(0x10)
	struct FFloatRange ViewRange; // 0xE0(0x10)
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// Size : 0x1 (Inherited : 0x0)
struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0(0x1)
};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
// Size : 0x18 (Inherited : 0x0)
struct FMovieSceneMarkedFrame {
	struct FFrameNumber FrameNumber; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct FString Label; // 0x8(0x10)
};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
// Size : 0x18 (Inherited : 0x0)
struct FMovieSceneTimecodeSource {
	struct FTimecode Timecode; // 0x0(0x14)
	struct FFrameNumber DeltaFrame; // 0x14(0x4)
};

// ScriptStruct MovieScene.MovieSceneBinding
// Size : 0x30 (Inherited : 0x0)
struct FMovieSceneBinding {
	struct FGuid ObjectGuid; // 0x0(0x10)
	struct FString BindingName; // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size : 0x24 (Inherited : 0x0)
struct FMovieSceneBindingOverrideData {
	struct FMovieSceneObjectBindingID ObjectBindingID; // 0x0(0x18)
	struct FWeakObjectPtr<struct UObject> Object; // 0x18(0x8)
	bool bOverridesDefault; // 0x20(0x1)
	unsigned char UnknownData_21[0x0003]; // 0x21(0x3)
};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// Size : 0x2 (Inherited : 0x0)
struct FOptionalMovieSceneBlendType {
	enum class EMovieSceneBlendType BlendType; // 0x0(0x1)
	bool bIsValid; // 0x1(0x1)
};

// ScriptStruct MovieScene.MovieSceneByteChannel
// Size : 0x98 (Inherited : 0x8)
struct FMovieSceneByteChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	enum class None DefaultValue; // 0x18(0x1)
	bool bHasDefaultValue; // 0x19(0x1)
	unsigned char UnknownData_1A[0x0006]; // 0x1A(0x6)
	struct TArray<enum class None> Values; // 0x20(0x10)
	struct UEnum* Enum; // 0x30(0x8)
	unsigned char UnknownData_38[0x0060]; // 0x38(0x60)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// Size : 0x88 (Inherited : 0x0)
struct FMovieSceneEvalTemplatePtr {
	unsigned char UnknownData_0[0x0088]; // 0x0(0x88)
};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// Size : 0x1 (Inherited : 0x0)
struct FMovieSceneEmptyStruct {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// Size : 0x30 (Inherited : 0x0)
struct FMovieSceneEvaluationField {
	struct TArray<struct FMovieSceneFrameRange> Ranges; // 0x0(0x10)
	struct TArray<struct FMovieSceneEvaluationGroup> Groups; // 0x10(0x10)
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// Size : 0x70 (Inherited : 0x0)
struct FMovieSceneEvaluationMetaData {
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences; // 0x0(0x10)
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10(0x10)
	struct TMap<struct FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20(0x50)
};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// Size : 0x10 (Inherited : 0x0)
struct FMovieSceneOrderedEvaluationKey {
	struct FMovieSceneEvaluationKey Key; // 0x0(0xC)
	uint16 SetupIndex; // 0xC(0x2)
	uint16 TearDownIndex; // 0xE(0x2)
};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
// Size : 0xC (Inherited : 0x0)
struct FMovieSceneEvaluationKey {
	struct FMovieSceneSequenceID SequenceID; // 0x0(0x4)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4(0x4)
	uint32_t SectionIndex; // 0x8(0x4)
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// Size : 0x4 (Inherited : 0x0)
struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0(0x4)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// Size : 0x20 (Inherited : 0x0)
struct FMovieSceneEvaluationGroup {
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size : 0x8 (Inherited : 0x0)
struct FMovieSceneEvaluationFieldTrackPtr {
	struct FMovieSceneSequenceID SequenceID; // 0x0(0x4)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4(0x4)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Size : 0xC (Inherited : 0x8)
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	struct FMovieSceneSegmentIdentifier SegmentID; // 0x8(0x4)
};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// Size : 0x4 (Inherited : 0x0)
struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0(0x4)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// Size : 0xC (Inherited : 0x0)
struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t LUTOffset; // 0x0(0x4)
	int32_t NumInitPtrs; // 0x4(0x4)
	int32_t NumEvalPtrs; // 0x8(0x4)
};

// ScriptStruct MovieScene.MovieSceneFrameRange
// Size : 0x10 (Inherited : 0x0)
struct FMovieSceneFrameRange {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// Size : 0x2F0 (Inherited : 0x0)
struct FMovieSceneEvaluationTemplate {
	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks; // 0x0(0x50)
	unsigned char UnknownData_50[0x0050]; // 0x50(0x50)
	struct FMovieSceneEvaluationField EvaluationField; // 0xA0(0x30)
	struct FMovieSceneSequenceHierarchy Hierarchy; // 0xD0(0xA0)
	struct FGuid SequenceSignature; // 0x170(0x10)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0x180(0x4)
	unsigned char UnknownData_184[0x0004]; // 0x184(0x4)
	struct FMovieSceneTemplateGenerationLedger TemplateLedger; // 0x188(0xA8)
	struct FMovieSceneTrackFieldData TrackFieldData; // 0x230(0x60)
	struct FMovieSceneSubSectionFieldData SubSectionFieldData; // 0x290(0x60)
};

// ScriptStruct MovieScene.MovieSceneSubSectionFieldData
// Size : 0x60 (Inherited : 0x0)
struct FMovieSceneSubSectionFieldData {
	unsigned char UnknownData_0[0x0060]; // 0x0(0x60)
};

// ScriptStruct MovieScene.MovieSceneTrackFieldData
// Size : 0x60 (Inherited : 0x0)
struct FMovieSceneTrackFieldData {
	unsigned char UnknownData_0[0x0060]; // 0x0(0x60)
};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// Size : 0xA8 (Inherited : 0x0)
struct FMovieSceneTemplateGenerationLedger {
	struct FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8(0x50)
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges; // 0x58(0x50)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// Size : 0x4 (Inherited : 0x0)
struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0(0x4)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// Size : 0xA0 (Inherited : 0x0)
struct FMovieSceneSequenceHierarchy {
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences; // 0x0(0x50)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50(0x50)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// Size : 0x18 (Inherited : 0x0)
struct FMovieSceneSequenceHierarchyNode {
	struct FMovieSceneSequenceID ParentID; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct TArray<struct FMovieSceneSequenceID> Children; // 0x8(0x10)
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// Size : 0xE8 (Inherited : 0x0)
struct FMovieSceneSubSequenceData {
	struct FSoftObjectPath Sequence; // 0x0(0x18)
	struct FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18(0x20)
	struct FFrameRate TickResolution; // 0x38(0x8)
	struct FMovieSceneSequenceID DeterministicSequenceID; // 0x40(0x4)
	struct FMovieSceneFrameRange PlayRange; // 0x44(0x10)
	struct FMovieSceneFrameRange FullPlayRange; // 0x54(0x10)
	struct FMovieSceneFrameRange UnwarpedPlayRange; // 0x64(0x10)
	struct FMovieSceneFrameRange PreRollRange; // 0x74(0x10)
	struct FMovieSceneFrameRange PostRollRange; // 0x84(0x10)
	int32_t HierarchicalBias; // 0x94(0x4)
	struct FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x98(0x18)
	unsigned char UnknownData_B0[0x0008]; // 0xB0(0x8)
	struct FGuid SubSectionSignature; // 0xB8(0x10)
	struct FMovieSceneSequenceTransform OuterToInnerTransform; // 0xC8(0x20)
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// Size : 0x20 (Inherited : 0x0)
struct FMovieSceneSequenceTransform {
	struct FMovieSceneTimeTransform LinearTransform; // 0x0(0xC)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10(0x10)
};

// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
// Size : 0x14 (Inherited : 0x0)
struct FMovieSceneNestedSequenceTransform {
	struct FMovieSceneTimeTransform LinearTransform; // 0x0(0xC)
	struct FMovieSceneTimeWarping Warping; // 0xC(0x8)
};

// ScriptStruct MovieScene.MovieSceneTimeWarping
// Size : 0x8 (Inherited : 0x0)
struct FMovieSceneTimeWarping {
	struct FFrameNumber Start; // 0x0(0x4)
	struct FFrameNumber End; // 0x4(0x4)
};

// ScriptStruct MovieScene.MovieSceneTimeTransform
// Size : 0xC (Inherited : 0x0)
struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0(0x4)
	struct FFrameTime Offset; // 0x4(0x8)
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// Size : 0x18 (Inherited : 0x0)
struct FMovieSceneSequenceInstanceDataPtr {
	unsigned char UnknownData_0[0x0018]; // 0x0(0x18)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// Size : 0xF8 (Inherited : 0x0)
struct FMovieSceneEvaluationTrack {
	struct FGuid ObjectBindingID; // 0x0(0x10)
	uint16 EvaluationPriority; // 0x10(0x2)
	enum class EEvaluationMethod EvaluationMethod; // 0x12(0x1)
	unsigned char UnknownData_13[0x0005]; // 0x13(0x5)
	struct FMovieSceneEvaluationTrackSegments Segments; // 0x18(0x20)
	struct UMovieSceneTrack* SourceTrack; // 0x38(0x8)
	struct FSectionEvaluationDataTree EvaluationTree; // 0x40(0x60)
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; // 0xA0(0x10)
	struct FMovieSceneTrackImplementationPtr TrackTemplate; // 0xB0(0x38)
	struct FName EvaluationGroup; // 0xE8(0x8)
	unsigned char bEvaluateInPreroll : 1; // 0xF0(0x1)
	unsigned char bEvaluateInPostroll : 1; // 0xF0(0x1)
	unsigned char bTearDownPriority : 1; // 0xF0(0x1)
	unsigned char UnknownData_F0_3 : 5; // 0xF0(0x1)
	unsigned char UnknownData_F1[0x0007]; // 0xF1(0x7)
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// Size : 0x38 (Inherited : 0x0)
struct FMovieSceneTrackImplementationPtr {
	unsigned char UnknownData_0[0x0038]; // 0x0(0x38)
};

// ScriptStruct MovieScene.SectionEvaluationDataTree
// Size : 0x60 (Inherited : 0x0)
struct FSectionEvaluationDataTree {
	unsigned char UnknownData_0[0x0060]; // 0x0(0x60)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
// Size : 0x20 (Inherited : 0x0)
struct FMovieSceneEvaluationTrackSegments {
	struct TArray<int32_t> SegmentIdentifierToIndex; // 0x0(0x10)
	struct TArray<struct FMovieSceneSegment> SortedSegments; // 0x10(0x10)
};

// ScriptStruct MovieScene.MovieSceneSegment
// Size : 0x58 (Inherited : 0x0)
struct FMovieSceneSegment {
	unsigned char UnknownData_0[0x0058]; // 0x0(0x58)
};

// ScriptStruct MovieScene.MovieSceneSubSectionData
// Size : 0x1C (Inherited : 0x0)
struct FMovieSceneSubSectionData {
	struct FWeakObjectPtr<struct UMovieSceneSubSection> Section; // 0x0(0x8)
	struct FGuid ObjectBindingID; // 0x8(0x10)
	enum class ESectionEvaluationFlags Flags; // 0x18(0x1)
	unsigned char UnknownData_19[0x0003]; // 0x19(0x3)
};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// Size : 0x320 (Inherited : 0x0)
struct FMovieSceneRootEvaluationTemplateInstance {
	unsigned char UnknownData_0[0x0018]; // 0x0(0x18)
	struct TMap<struct FMovieSceneSequenceID, struct UObject*> DirectorInstances; // 0x18(0x50)
	unsigned char UnknownData_68[0x02B8]; // 0x68(0x2B8)
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// Size : 0x8 (Inherited : 0x0)
struct FMovieSceneKeyStruct {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// Size : 0x28 (Inherited : 0x8)
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	struct FFrameNumber Time; // 0x8(0x4)
	unsigned char UnknownData_C[0x001C]; // 0xC(0x1C)
};

// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// Size : 0x50 (Inherited : 0x0)
struct FGeneratedMovieSceneKeyStruct {
	unsigned char UnknownData_0[0x0050]; // 0x0(0x50)
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// Size : 0xC0 (Inherited : 0x8)
struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	class UObject* PropertyClass; // 0x8(0x8)
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values; // 0x20(0x10)
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30(0x30)
	unsigned char UnknownData_60[0x0060]; // 0x60(0x60)
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// Size : 0x30 (Inherited : 0x0)
struct FMovieSceneObjectPathChannelKeyValue {
	struct TSoftObjectPtr<struct UObject> SoftPtr; // 0x0(0x28)
	struct UObject* HardPtr; // 0x28(0x8)
};

// ScriptStruct MovieScene.MovieScenePossessable
// Size : 0x48 (Inherited : 0x0)
struct FMovieScenePossessable {
	struct TArray<struct FName> Tags; // 0x0(0x10)
	struct FGuid Guid; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	class UObject* PossessedObjectClass; // 0x30(0x8)
	struct FGuid ParentGuid; // 0x38(0x10)
};

// ScriptStruct MovieScene.MovieSceneEasingSettings
// Size : 0x38 (Inherited : 0x0)
struct FMovieSceneEasingSettings {
	int32_t AutoEaseInDuration; // 0x0(0x4)
	int32_t AutoEaseOutDuration; // 0x4(0x4)
	struct TScriptInterface<None> EaseIn; // 0x8(0x10)
	bool bManualEaseIn; // 0x18(0x1)
	unsigned char UnknownData_19[0x0003]; // 0x19(0x3)
	int32_t ManualEaseInDuration; // 0x1C(0x4)
	struct TScriptInterface<None> EaseOut; // 0x20(0x10)
	bool bManualEaseOut; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	int32_t ManualEaseOutDuration; // 0x34(0x4)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size : 0x2 (Inherited : 0x0)
struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0(0x1)
	enum class EMovieSceneCompletionMode CompletionMode; // 0x1(0x1)
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// Size : 0x24 (Inherited : 0x0)
struct FMovieSceneSectionParameters {
	struct FFrameNumber StartFrameOffset; // 0x0(0x4)
	bool bCanLoop; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
	struct FFrameNumber EndFrameOffset; // 0x8(0x4)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0xC(0x4)
	float TimeScale; // 0x10(0x4)
	int32_t HierarchicalBias; // 0x14(0x4)
	float StartOffset; // 0x18(0x4)
	float PrerollTime; // 0x1C(0x4)
	float PostrollTime; // 0x20(0x4)
};

// ScriptStruct MovieScene.SectionEvaluationData
// Size : 0xC (Inherited : 0x0)
struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0(0x4)
	struct FFrameNumber ForcedTime; // 0x4(0x4)
	enum class ESectionEvaluationFlags Flags; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size : 0x14 (Inherited : 0x0)
struct FMovieSceneSequencePlaybackSettings {
	unsigned char bAutoPlay : 1; // 0x0(0x1)
	unsigned char UnknownData_0_1 : 7; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FMovieSceneSequenceLoopCount LoopCount; // 0x4(0x4)
	float PlayRate; // 0x8(0x4)
	float StartTime; // 0xC(0x4)
	unsigned char bRandomStartTime : 1; // 0x10(0x1)
	unsigned char bRestoreState : 1; // 0x10(0x1)
	unsigned char bDisableMovementInput : 1; // 0x10(0x1)
	unsigned char bDisableLookAtInput : 1; // 0x10(0x1)
	unsigned char bHidePlayer : 1; // 0x10(0x1)
	unsigned char bHideHud : 1; // 0x10(0x1)
	unsigned char bDisableCameraCuts : 1; // 0x10(0x1)
	unsigned char bPauseAtEnd : 1; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// Size : 0x4 (Inherited : 0x0)
struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0(0x4)
};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// Size : 0x10 (Inherited : 0x0)
struct FMovieSceneSequenceReplProperties {
	struct FFrameTime LastKnownPosition; // 0x0(0x8)
	enum class EMovieScenePlayerStatus LastKnownStatus; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	int32_t LastKnownNumLoops; // 0xC(0x4)
};

// ScriptStruct MovieScene.MovieSceneWarpCounter
// Size : 0x10 (Inherited : 0x0)
struct FMovieSceneWarpCounter {
	struct TArray<uint32_t> WarpCounts; // 0x0(0x10)
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// Size : 0x90 (Inherited : 0x0)
struct FMovieSceneSpawnable {
	struct FTransform SpawnTransform; // 0x0(0x30)
	struct TArray<struct FName> Tags; // 0x30(0x10)
	bool bContinuouslyRespawn; // 0x40(0x1)
	unsigned char UnknownData_41[0x0003]; // 0x41(0x3)
	struct FGuid Guid; // 0x44(0x10)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
	struct FString Name; // 0x58(0x10)
	struct UObject* ObjectTemplate; // 0x68(0x8)
	struct TArray<struct FGuid> ChildPossessables; // 0x70(0x10)
	enum class ESpawnOwnership Ownership; // 0x80(0x1)
	unsigned char UnknownData_81[0x0003]; // 0x81(0x3)
	struct FName LevelName; // 0x84(0x8)
	unsigned char UnknownData_8C[0x0004]; // 0x8C(0x4)
};

// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// Size : 0x20 (Inherited : 0x20)
struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// Size : 0x4 (Inherited : 0x0)
struct FMovieSceneTrackDisplayOptions {
	unsigned char bShowVerticalFrames : 1; // 0x0(0x1)
	unsigned char UnknownData_0_1 : 7; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size : 0x4 (Inherited : 0x0)
struct FMovieSceneTrackEvalOptions {
	unsigned char bCanEvaluateNearestSection : 1; // 0x0(0x1)
	unsigned char bEvalNearestSection : 1; // 0x0(0x1)
	unsigned char bEvaluateInPreroll : 1; // 0x0(0x1)
	unsigned char bEvaluateInPostroll : 1; // 0x0(0x1)
	unsigned char bEvaluateNearestSection : 1; // 0x0(0x1)
	unsigned char UnknownData_0_5 : 3; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
};

