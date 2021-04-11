// Class MovieSceneTracks.MovieScenePropertyTrack
// Size : 0x88 (Inherited : 0x58)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct UMovieSceneSection* SectionToKey; // 0x58(0x8)
	struct FName PropertyName; // 0x60(0x8)
	struct FString PropertyPath; // 0x68(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
};

// Class MovieSceneTracks.MovieSceneTransformOrigin
// Size : 0x28 (Inherited : 0x28)
struct UMovieSceneTransformOrigin : UInterface {

	struct FTransform BP_GetTransformOrigin(); // Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // Param Size : 0x30, 0x7FF77510D9D0
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size : 0x108 (Inherited : 0xE0)
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	struct FGuid ConstraintId; // 0xE0(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0xF0(0x18)

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF775EF7C20
	struct FMovieSceneObjectBindingID GetConstraintBindingID(); // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF775EF7BA0
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// Size : 0x120 (Inherited : 0x108)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	struct FName AttachSocketName; // 0x108(0x8)
	struct FName AttachComponentName; // 0x110(0x8)
	enum class EAttachmentRule AttachmentLocationRule; // 0x118(0x1)
	enum class EAttachmentRule AttachmentRotationRule; // 0x119(0x1)
	enum class EAttachmentRule AttachmentScaleRule; // 0x11A(0x1)
	enum class EDetachmentRule DetachmentLocationRule; // 0x11B(0x1)
	enum class EDetachmentRule DetachmentRotationRule; // 0x11C(0x1)
	enum class EDetachmentRule DetachmentScaleRule; // 0x11D(0x1)
	unsigned char UnknownData_11E[0x0002]; // 0x11E(0x2)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size : 0x68 (Inherited : 0x58)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size : 0x68 (Inherited : 0x68)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathSection
// Size : 0x1B0 (Inherited : 0x108)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	struct FMovieSceneFloatChannel TimingCurve; // 0x108(0xA0)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1A8(0x1)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0x1A9(0x1)
	unsigned char UnknownData_1AA[0x0002]; // 0x1AA(0x2)
	unsigned char bFollow : 1; // 0x1AC(0x1)
	unsigned char bReverse : 1; // 0x1AC(0x1)
	unsigned char bForceUpright : 1; // 0x1AC(0x1)
	unsigned char UnknownData_1AC_3 : 5; // 0x1AC(0x1)
	unsigned char UnknownData_1AD[0x0003]; // 0x1AD(0x3)
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size : 0x68 (Inherited : 0x68)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size : 0x730 (Inherited : 0xE0)
struct UMovieScene3DTransformSection : UMovieSceneSection {
	struct FMovieSceneTransformMask TransformMask; // 0xE0(0x4)
	unsigned char UnknownData_E4[0x0004]; // 0xE4(0x4)
	struct FMovieSceneFloatChannel Translation[3]; // 0xE8(0x1E0)
	struct FMovieSceneFloatChannel Rotation[3]; // 0x2C8(0x1E0)
	struct FMovieSceneFloatChannel Scale[3]; // 0x4A8(0x1E0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x688(0xA0)
	unsigned char UnknownData_728[0x0004]; // 0x728(0x4)
	bool bUseQuaternionInterpolation; // 0x72C(0x1)
	unsigned char UnknownData_72D[0x0003]; // 0x72D(0x3)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size : 0x220 (Inherited : 0xE0)
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xE0(0xB0)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x190(0x80)
	struct TArray<struct FString> ActorGuidStrings; // 0x210(0x10)
};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size : 0x330 (Inherited : 0xE0)
struct UMovieSceneAudioSection : UMovieSceneSection {
	struct USoundBase* Sound; // 0xE0(0x8)
	struct FFrameNumber StartFrameOffset; // 0xE8(0x4)
	float StartOffset; // 0xEC(0x4)
	float AudioStartTime; // 0xF0(0x4)
	float AudioDilationFactor; // 0xF4(0x4)
	float AudioVolume; // 0xF8(0x4)
	unsigned char UnknownData_FC[0x0004]; // 0xFC(0x4)
	struct FMovieSceneFloatChannel SoundVolume; // 0x100(0xA0)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x1A0(0xA0)
	struct FMovieSceneActorReferenceData AttachActorData; // 0x240(0xB0)
	bool bSuppressSubtitles; // 0x2F0(0x1)
	bool bOverrideAttenuation; // 0x2F1(0x1)
	unsigned char UnknownData_2F2[0x0006]; // 0x2F2(0x6)
	struct USoundAttenuation* AttenuationSettings; // 0x2F8(0x8)
	struct FDelegate OnQueueSubtitles; // 0x300(0x10)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x310(0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x320(0x10)

	void SetStartOffset(struct FFrameNumber InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x4, 0x7FF775EF7D60
	void SetSound(struct USoundBase* InSound); // Function MovieSceneTracks.MovieSceneAudioSection.SetSound // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775EF7CE0
	struct FFrameNumber GetStartOffset(); // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775EF7C00
	struct USoundBase* GetSound(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSound // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775EF7BE0
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size : 0x68 (Inherited : 0x58)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AudioSections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieSceneBoolSection
// Size : 0x178 (Inherited : 0xE0)
struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xE0(0x1)
	unsigned char UnknownData_E1[0x0007]; // 0xE1(0x7)
	struct FMovieSceneBoolChannel BoolCurve; // 0xE8(0x90)
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size : 0x178 (Inherited : 0xE0)
struct UMovieSceneByteSection : UMovieSceneSection {
	struct FMovieSceneByteChannel ByteCurve; // 0xE0(0x98)
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size : 0x90 (Inherited : 0x88)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0x88(0x8)
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size : 0x120 (Inherited : 0xE0)
struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	struct FMovieSceneCameraAnimSectionData AnimData; // 0xE0(0x20)
	struct UCameraAnim* CameraAnim; // 0x100(0x8)
	float PlayRate; // 0x108(0x4)
	float PlayScale; // 0x10C(0x4)
	float BlendInTime; // 0x110(0x4)
	float BlendOutTime; // 0x114(0x4)
	bool bLooping; // 0x118(0x1)
	unsigned char UnknownData_119[0x0007]; // 0x119(0x7)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size : 0x68 (Inherited : 0x58)
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> CameraAnimSections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size : 0x108 (Inherited : 0xE0)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	struct FGuid CameraGuid; // 0xE0(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0xF0(0x18)

	void SetCameraBindingID(struct FMovieSceneObjectBindingID InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF775EF7C20
	struct FMovieSceneObjectBindingID GetCameraBindingID(); // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF775EF7BA0
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size : 0x70 (Inherited : 0x58)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x58(0x1)
	unsigned char UnknownData_59[0x0007]; // 0x59(0x7)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size : 0x120 (Inherited : 0xE0)
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xE0(0x20)
	class UCameraShake* ShakeClass; // 0x100(0x8)
	float PlayScale; // 0x108(0x4)
	enum class ECameraAnimPlaySpace PlaySpace; // 0x10C(0x1)
	unsigned char UnknownData_10D[0x0003]; // 0x10D(0x3)
	struct FRotator UserDefinedPlaySpace; // 0x110(0xC)
	unsigned char UnknownData_11C[0x0004]; // 0x11C(0x4)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size : 0x68 (Inherited : 0x58)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size : 0x180 (Inherited : 0x158)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	struct FString ShotDisplayName; // 0x158(0x10)
	struct FText DisplayName; // 0x168(0x18)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775EFE7B0
	struct FString GetShotDisplayName(); // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775EFE610
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size : 0x68 (Inherited : 0x68)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size : 0x360 (Inherited : 0xE0)
struct UMovieSceneColorSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel RedCurve; // 0xE0(0xA0)
	struct FMovieSceneFloatChannel GreenCurve; // 0x180(0xA0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x220(0xA0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x2C0(0xA0)
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size : 0x90 (Inherited : 0x88)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0x88(0x1)
	unsigned char UnknownData_89[0x0007]; // 0x89(0x7)
};

// Class MovieSceneTracks.MovieSceneEnumSection
// Size : 0x178 (Inherited : 0xE0)
struct UMovieSceneEnumSection : UMovieSceneSection {
	struct FMovieSceneByteChannel EnumCurve; // 0xE0(0x98)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
// Size : 0x90 (Inherited : 0x88)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0x88(0x8)
};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// Size : 0xE0 (Inherited : 0xE0)
struct UMovieSceneEventSectionBase : UMovieSceneSection {
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size : 0x108 (Inherited : 0xE0)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	struct FMovieSceneEvent Event; // 0xE0(0x28)
};

// Class MovieSceneTracks.MovieSceneEventSection
// Size : 0x1E0 (Inherited : 0xE0)
struct UMovieSceneEventSection : UMovieSceneSection {
	struct FNameCurve Events; // 0xE0(0x78)
	struct FMovieSceneEventSectionData EventData; // 0x158(0x88)
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size : 0x80 (Inherited : 0x58)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	unsigned char bFireEventsWhenForwards : 1; // 0x58(0x1)
	unsigned char bFireEventsWhenBackwards : 1; // 0x58(0x1)
	unsigned char UnknownData_58_2 : 6; // 0x58(0x1)
	unsigned char UnknownData_59[0x0003]; // 0x59(0x3)
	enum class EFireEventsAtPosition EventPosition; // 0x5C(0x1)
	unsigned char UnknownData_5D[0x0003]; // 0x5D(0x3)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x60(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x70(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size : 0x168 (Inherited : 0xE0)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	struct FMovieSceneEventChannel EventChannel; // 0xE0(0x88)
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size : 0x180 (Inherited : 0xE0)
struct UMovieSceneFloatSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; // 0xE0(0xA0)
};

// Class MovieSceneTracks.MovieSceneFadeSection
// Size : 0x198 (Inherited : 0x180)
struct UMovieSceneFadeSection : UMovieSceneFloatSection {
	struct FLinearColor FadeColor; // 0x180(0x10)
	unsigned char bFadeAudio : 1; // 0x190(0x1)
	unsigned char UnknownData_190_1 : 7; // 0x190(0x1)
	unsigned char UnknownData_191[0x0007]; // 0x191(0x7)
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneIntegerSection
// Size : 0x170 (Inherited : 0xE0)
struct UMovieSceneIntegerSection : UMovieSceneSection {
	struct FMovieSceneIntegerChannel IntegerCurve; // 0xE0(0x90)
};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size : 0xF8 (Inherited : 0xE0)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	enum class ELevelVisibility Visibility; // 0xE0(0x1)
	unsigned char UnknownData_E1[0x0007]; // 0xE1(0x7)
	struct TArray<struct FName> LevelNames; // 0xE8(0x10)

	void SetVisibility(enum class ELevelVisibility InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775EFE8A0
	void SetLevelNames(struct TArray<struct FName> InLevelNames); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF775EFE700
	enum class ELevelVisibility GetVisibility(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775EFE6D0
	struct TArray<struct FName> GetLevelNames(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775EFE5E0
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size : 0x68 (Inherited : 0x58)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size : 0x68 (Inherited : 0x58)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size : 0x70 (Inherited : 0x68)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	struct UMaterialParameterCollection* MPC; // 0x68(0x8)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size : 0x70 (Inherited : 0x68)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0x68(0x4)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size : 0x1A0 (Inherited : 0xE0)
struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xE0(0xC0)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size : 0x90 (Inherited : 0x88)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	class UObject* PropertyClass; // 0x88(0x8)
};

// Class MovieSceneTracks.MovieSceneParameterSection
// Size : 0x140 (Inherited : 0xE0)
struct UMovieSceneParameterSection : UMovieSceneSection {
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xE0(0x10)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xF0(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x100(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x110(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x120(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x130(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size : 0x68 (Inherited : 0x58)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size : 0x178 (Inherited : 0xE0)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct FMovieSceneParticleChannel ParticleKeys; // 0xE0(0x98)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size : 0x68 (Inherited : 0x58)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size : 0x1A0 (Inherited : 0xE0)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0xE0(0xC0)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size : 0x90 (Inherited : 0x88)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0x88(0x4)
	unsigned char UnknownData_8C[0x0004]; // 0x8C(0x4)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size : 0x1E0 (Inherited : 0xE0)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct FMovieSceneSkeletalAnimationParams Params; // 0xE0(0xD8)
	struct UAnimSequence* AnimSequence; // 0x1B8(0x8)
	struct UAnimSequenceBase* Animation; // 0x1C0(0x8)
	float StartOffset; // 0x1C8(0x4)
	float EndOffset; // 0x1CC(0x4)
	float PlayRate; // 0x1D0(0x4)
	unsigned char bReverse : 1; // 0x1D4(0x1)
	unsigned char UnknownData_1D4_1 : 7; // 0x1D4(0x1)
	unsigned char UnknownData_1D5[0x0003]; // 0x1D5(0x3)
	struct FName SlotName; // 0x1D8(0x8)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size : 0x70 (Inherited : 0x58)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x58(0x10)
	bool bUseLegacySectionIndexBlend; // 0x68(0x1)
	unsigned char UnknownData_69[0x0007]; // 0x69(0x7)
};

// Class MovieSceneTracks.MovieSceneSlomoSection
// Size : 0x180 (Inherited : 0x180)
struct UMovieSceneSlomoSection : UMovieSceneFloatSection {
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneSpawnSection
// Size : 0x178 (Inherited : 0x178)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection {
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// Size : 0x78 (Inherited : 0x58)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	struct FGuid ObjectGuid; // 0x68(0x10)
};

// Class MovieSceneTracks.MovieSceneStringSection
// Size : 0x180 (Inherited : 0xE0)
struct UMovieSceneStringSection : UMovieSceneSection {
	struct FMovieSceneStringChannel StringCurve; // 0xE0(0xA0)
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneTransformTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorSection
// Size : 0x368 (Inherited : 0xE0)
struct UMovieSceneVectorSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel Curves[4]; // 0xE0(0x280)
	int32_t ChannelsUsed; // 0x360(0x4)
	unsigned char UnknownData_364[0x0004]; // 0x364(0x4)
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size : 0x90 (Inherited : 0x88)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0x88(0x4)
	unsigned char UnknownData_8C[0x0004]; // 0x8C(0x4)
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

