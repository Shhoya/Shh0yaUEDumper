// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// Size : 0x50 (Inherited : 0x20)
struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID AttachBindingID; // 0x20(0x18)
	struct FName AttachSocketName; // 0x38(0x8)
	struct FName AttachComponentName; // 0x40(0x8)
	enum class EAttachmentRule AttachmentLocationRule; // 0x48(0x1)
	enum class EAttachmentRule AttachmentRotationRule; // 0x49(0x1)
	enum class EAttachmentRule AttachmentScaleRule; // 0x4A(0x1)
	enum class EDetachmentRule DetachmentLocationRule; // 0x4B(0x1)
	enum class EDetachmentRule DetachmentRotationRule; // 0x4C(0x1)
	enum class EDetachmentRule DetachmentScaleRule; // 0x4D(0x1)
	unsigned char UnknownData_4E[0x0002]; // 0x4E(0x2)
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size : 0xE0 (Inherited : 0x20)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID PathBindingID; // 0x20(0x18)
	struct FMovieSceneFloatChannel TimingCurve; // 0x38(0xA0)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0xD8(0x1)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0xD9(0x1)
	unsigned char UnknownData_DA[0x0002]; // 0xDA(0x2)
	unsigned char bFollow : 1; // 0xDC(0x1)
	unsigned char bReverse : 1; // 0xDC(0x1)
	unsigned char bForceUpright : 1; // 0xDC(0x1)
	unsigned char UnknownData_DC_3 : 5; // 0xDC(0x1)
	unsigned char UnknownData_DD[0x0003]; // 0xDD(0x3)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size : 0x4 (Inherited : 0x0)
struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0(0x4)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size : 0x48 (Inherited : 0x8)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x8(0xC)
	struct FRotator Rotation; // 0x14(0xC)
	struct FVector Scale; // 0x20(0xC)
	struct FFrameNumber Time; // 0x2C(0x4)
	unsigned char UnknownData_30[0x0018]; // 0x30(0x18)
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size : 0x30 (Inherited : 0x8)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	struct FVector Scale; // 0x8(0xC)
	struct FFrameNumber Time; // 0x14(0x4)
	unsigned char UnknownData_18[0x0018]; // 0x18(0x18)
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size : 0x30 (Inherited : 0x8)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	struct FRotator Rotation; // 0x8(0xC)
	struct FFrameNumber Time; // 0x14(0x4)
	unsigned char UnknownData_18[0x0018]; // 0x18(0x18)
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size : 0x30 (Inherited : 0x8)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x8(0xC)
	struct FFrameNumber Time; // 0x14(0x4)
	unsigned char UnknownData_18[0x0018]; // 0x18(0x18)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// Size : 0x670 (Inherited : 0x20)
struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x20(0x650)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// Size : 0x650 (Inherited : 0x0)
struct FMovieScene3DTransformTemplateData {
	struct FMovieSceneFloatChannel TranslationCurve[3]; // 0x0(0x1E0)
	struct FMovieSceneFloatChannel RotationCurve[3]; // 0x1E0(0x1E0)
	struct FMovieSceneFloatChannel ScaleCurve[3]; // 0x3C0(0x1E0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x5A0(0xA0)
	enum class EMovieSceneBlendType BlendType; // 0x640(0x1)
	unsigned char UnknownData_641[0x0003]; // 0x641(0x3)
	struct FMovieSceneTransformMask Mask; // 0x644(0x4)
	bool bUseQuaternionInterpolation; // 0x648(0x1)
	unsigned char UnknownData_649[0x0007]; // 0x649(0x7)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size : 0xB0 (Inherited : 0x8)
struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x8(0x10)
	unsigned char UnknownData_18[0x0028]; // 0x18(0x28)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x40(0x10)
	unsigned char UnknownData_50[0x0060]; // 0x50(0x60)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size : 0x28 (Inherited : 0x0)
struct FMovieSceneActorReferenceKey {
	struct FMovieSceneObjectBindingID Object; // 0x0(0x18)
	struct FName ComponentName; // 0x18(0x8)
	struct FName SocketName; // 0x20(0x8)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size : 0xF8 (Inherited : 0x20)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x20(0x28)
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0x48(0xB0)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size : 0x28 (Inherited : 0x20)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAudioSection* AudioSection; // 0x20(0x8)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size : 0x20 (Inherited : 0x0)
struct FMovieSceneCameraAnimSectionData {
	struct UCameraAnim* CameraAnim; // 0x0(0x8)
	float PlayRate; // 0x8(0x4)
	float PlayScale; // 0xC(0x4)
	float BlendInTime; // 0x10(0x4)
	float BlendOutTime; // 0x14(0x4)
	bool bLooping; // 0x18(0x1)
	unsigned char UnknownData_19[0x0007]; // 0x19(0x7)
};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// Size : 0x20 (Inherited : 0x20)
struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size : 0x48 (Inherited : 0x20)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x20(0x20)
	struct FFrameNumber SectionStartTime; // 0x40(0x4)
	unsigned char UnknownData_44[0x0004]; // 0x44(0x4)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size : 0x20 (Inherited : 0x0)
struct FMovieSceneCameraShakeSectionData {
	class UCameraShake* ShakeClass; // 0x0(0x8)
	float PlayScale; // 0x8(0x4)
	enum class ECameraAnimPlaySpace PlaySpace; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
	struct FRotator UserDefinedPlaySpace; // 0x10(0xC)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Size : 0x48 (Inherited : 0x20)
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	struct FMovieSceneCameraAnimSectionData SourceData; // 0x20(0x20)
	struct FFrameNumber SectionStartTime; // 0x40(0x4)
	unsigned char UnknownData_44[0x0004]; // 0x44(0x4)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// Size : 0x80 (Inherited : 0x20)
struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x20(0x18)
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
	struct FTransform CutTransform; // 0x40(0x30)
	bool bHasCutTransform; // 0x70(0x1)
	bool bIsFinalSection; // 0x71(0x1)
	unsigned char UnknownData_72[0x000E]; // 0x72(0xE)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size : 0x38 (Inherited : 0x8)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	struct FLinearColor Color; // 0x8(0x10)
	struct FFrameNumber Time; // 0x18(0x4)
	unsigned char UnknownData_1C[0x001C]; // 0x1C(0x1C)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size : 0x2D0 (Inherited : 0x48)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel Curves[4]; // 0x48(0x280)
	enum class EMovieSceneBlendType BlendType; // 0x2C8(0x1)
	unsigned char UnknownData_2C9[0x0007]; // 0x2C9(0x7)
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
// Size : 0x28 (Inherited : 0x0)
struct FMovieSceneEvent {
	struct FMovieSceneEventPtrs Ptrs; // 0x0(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// Size : 0x28 (Inherited : 0x0)
struct FMovieSceneEventPtrs {
	struct UFunction* Function; // 0x0(0x8)
	FieldPathProperty BoundObjectProperty; // 0x8(0x20)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// Size : 0x10 (Inherited : 0x0)
struct FMovieSceneEventPayloadVariable {
	struct FString Value; // 0x0(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Size : 0x88 (Inherited : 0x8)
struct FMovieSceneEventChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x8(0x10)
	struct TArray<struct FMovieSceneEvent> KeyValues; // 0x18(0x10)
	unsigned char UnknownData_28[0x0060]; // 0x28(0x60)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size : 0x88 (Inherited : 0x8)
struct FMovieSceneEventSectionData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	struct TArray<struct FEventPayload> KeyValues; // 0x18(0x10)
	unsigned char UnknownData_28[0x0060]; // 0x28(0x60)
};

// ScriptStruct MovieSceneTracks.EventPayload
// Size : 0x30 (Inherited : 0x0)
struct FEventPayload {
	struct FName EventName; // 0x0(0x8)
	struct FMovieSceneEventParameters Parameters; // 0x8(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size : 0x28 (Inherited : 0x0)
struct FMovieSceneEventParameters {
	unsigned char UnknownData_0[0x0028]; // 0x0(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// Size : 0x38 (Inherited : 0x20)
struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate {
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x20(0x10)
	unsigned char bFireEventsWhenForwards : 1; // 0x30(0x1)
	unsigned char bFireEventsWhenBackwards : 1; // 0x30(0x1)
	unsigned char UnknownData_30_2 : 6; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// Size : 0x60 (Inherited : 0x38)
struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase {
	struct FMovieSceneEventPtrs EventToTrigger; // 0x38(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// Size : 0x58 (Inherited : 0x38)
struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase {
	struct TArray<struct FFrameNumber> EventTimes; // 0x38(0x10)
	struct TArray<struct FMovieSceneEventPtrs> Events; // 0x48(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size : 0xC0 (Inherited : 0x38)
struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase {
	struct FMovieSceneEventSectionData EventData; // 0x38(0x88)
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size : 0xD8 (Inherited : 0x20)
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel FadeCurve; // 0x20(0xA0)
	struct FLinearColor FadeColor; // 0xC0(0x10)
	unsigned char bFadeAudio : 1; // 0xD0(0x1)
	unsigned char UnknownData_D0_1 : 7; // 0xD0(0x1)
	unsigned char UnknownData_D1[0x0007]; // 0xD1(0x7)
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// Size : 0x38 (Inherited : 0x20)
struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	enum class ELevelVisibility Visibility; // 0x20(0x1)
	unsigned char UnknownData_21[0x0007]; // 0x21(0x7)
	struct TArray<struct FName> LevelNames; // 0x28(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size : 0x80 (Inherited : 0x20)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x20(0x10)
	struct TArray<struct FBoolParameterNameAndCurve> Bools; // 0x30(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds; // 0x40(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x50(0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x60(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x70(0x10)
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size : 0x5A8 (Inherited : 0x0)
struct FTransformParameterNameAndCurves {
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel Translation[3]; // 0x8(0x1E0)
	struct FMovieSceneFloatChannel Rotation[3]; // 0x1E8(0x1E0)
	struct FMovieSceneFloatChannel Scale[3]; // 0x3C8(0x1E0)
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size : 0x288 (Inherited : 0x0)
struct FColorParameterNameAndCurves {
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel RedCurve; // 0x8(0xA0)
	struct FMovieSceneFloatChannel GreenCurve; // 0xA8(0xA0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x148(0xA0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x1E8(0xA0)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size : 0x1E8 (Inherited : 0x0)
struct FVectorParameterNameAndCurves {
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel XCurve; // 0x8(0xA0)
	struct FMovieSceneFloatChannel YCurve; // 0xA8(0xA0)
	struct FMovieSceneFloatChannel ZCurve; // 0x148(0xA0)
};

// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// Size : 0x148 (Inherited : 0x0)
struct FVector2DParameterNameAndCurves {
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel XCurve; // 0x8(0xA0)
	struct FMovieSceneFloatChannel YCurve; // 0xA8(0xA0)
};

// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// Size : 0x98 (Inherited : 0x0)
struct FBoolParameterNameAndCurve {
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneBoolChannel ParameterCurve; // 0x8(0x90)
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size : 0xA8 (Inherited : 0x0)
struct FScalarParameterNameAndCurve {
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel ParameterCurve; // 0x8(0xA0)
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Size : 0x88 (Inherited : 0x80)
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	struct UMaterialParameterCollection* MPC; // 0x80(0x8)
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size : 0x108 (Inherited : 0x48)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0x48(0xC0)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size : 0x88 (Inherited : 0x80)
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80(0x4)
	unsigned char UnknownData_84[0x0004]; // 0x84(0x4)
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size : 0x80 (Inherited : 0x80)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Size : 0x98 (Inherited : 0x98)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel {
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size : 0xB8 (Inherited : 0x20)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneParticleChannel ParticleKeys; // 0x20(0x98)
};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Size : 0xE8 (Inherited : 0x20)
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0x28(0xC0)
};

// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// Size : 0x698 (Inherited : 0x48)
struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x48(0x650)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// Size : 0x698 (Inherited : 0x48)
struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x48(0x650)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// Size : 0x2D0 (Inherited : 0x48)
struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel ComponentCurves[4]; // 0x48(0x280)
	int32_t NumChannelsUsed; // 0x2C8(0x4)
	enum class EMovieSceneBlendType BlendType; // 0x2CC(0x1)
	unsigned char UnknownData_2CD[0x0003]; // 0x2CD(0x3)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size : 0xE8 (Inherited : 0x48)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneStringChannel StringCurve; // 0x48(0xA0)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size : 0xA0 (Inherited : 0x8)
struct FMovieSceneStringChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	struct TArray<struct FString> Values; // 0x18(0x10)
	struct FString DefaultValue; // 0x28(0x10)
	bool bHasDefaultValue; // 0x38(0x1)
	unsigned char UnknownData_39[0x0067]; // 0x39(0x67)
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// Size : 0xE0 (Inherited : 0x48)
struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneIntegerChannel IntegerCurve; // 0x48(0x90)
	enum class EMovieSceneBlendType BlendType; // 0xD8(0x1)
	unsigned char UnknownData_D9[0x0007]; // 0xD9(0x7)
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// Size : 0xE0 (Inherited : 0x48)
struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneByteChannel EnumCurve; // 0x48(0x98)
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// Size : 0xE0 (Inherited : 0x48)
struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneByteChannel ByteCurve; // 0x48(0x98)
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// Size : 0xF0 (Inherited : 0x48)
struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel FloatFunction; // 0x48(0xA0)
	enum class EMovieSceneBlendType BlendType; // 0xE8(0x1)
	unsigned char UnknownData_E9[0x0007]; // 0xE9(0x7)
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size : 0xD8 (Inherited : 0x48)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneBoolChannel BoolCurve; // 0x48(0x90)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size : 0xD8 (Inherited : 0x0)
struct FMovieSceneSkeletalAnimationParams {
	struct UAnimSequenceBase* Animation; // 0x0(0x8)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x8(0x4)
	struct FFrameNumber StartFrameOffset; // 0xC(0x4)
	struct FFrameNumber EndFrameOffset; // 0x10(0x4)
	float PlayRate; // 0x14(0x4)
	unsigned char bReverse : 1; // 0x18(0x1)
	unsigned char UnknownData_18_1 : 7; // 0x18(0x1)
	unsigned char UnknownData_19[0x0003]; // 0x19(0x3)
	struct FName SlotName; // 0x1C(0x8)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct FMovieSceneFloatChannel Weight; // 0x28(0xA0)
	bool bSkipAnimNotifiers; // 0xC8(0x1)
	bool bForceCustomMode; // 0xC9(0x1)
	unsigned char UnknownData_CA[0x0002]; // 0xCA(0x2)
	float StartOffset; // 0xCC(0x4)
	float EndOffset; // 0xD0(0x4)
	unsigned char UnknownData_D4[0x0004]; // 0xD4(0x4)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size : 0x100 (Inherited : 0x20)
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20(0xE0)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size : 0xE0 (Inherited : 0xD8)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	struct FFrameNumber SectionStartTime; // 0xD8(0x4)
	struct FFrameNumber SectionEndTime; // 0xDC(0x4)
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size : 0xC0 (Inherited : 0x20)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel SlomoCurve; // 0x20(0xA0)
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// Size : 0xB0 (Inherited : 0x20)
struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneBoolChannel Curve; // 0x20(0x90)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size : 0x28 (Inherited : 0x8)
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	struct FFrameNumber Time; // 0x8(0x4)
	unsigned char UnknownData_C[0x001C]; // 0xC(0x1C)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Size : 0x40 (Inherited : 0x28)
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct FVector4 Vector; // 0x30(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Size : 0x38 (Inherited : 0x28)
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector Vector; // 0x28(0xC)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size : 0x30 (Inherited : 0x28)
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector2D Vector; // 0x28(0x8)
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size : 0xD8 (Inherited : 0xD8)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
};

