// Class MovieScene.MovieSceneSignedObject
// Size : 0x50 (Inherited : 0x28)
struct UMovieSceneSignedObject : UObject {
	struct FGuid Signature; // 0x28(0x10)
	unsigned char UnknownData_38[0x0018]; // 0x38(0x18)
};

// Class MovieScene.MovieSceneSection
// Size : 0xE0 (Inherited : 0x50)
struct UMovieSceneSection : UMovieSceneSignedObject {
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x50(0x2)
	unsigned char UnknownData_52[0x0006]; // 0x52(0x6)
	struct FMovieSceneEasingSettings Easing; // 0x58(0x38)
	struct FMovieSceneFrameRange SectionRange; // 0x90(0x10)
	struct FFrameNumber PreRollFrames; // 0xA0(0x4)
	struct FFrameNumber PostRollFrames; // 0xA4(0x4)
	int32_t RowIndex; // 0xA8(0x4)
	int32_t OverlapPriority; // 0xAC(0x4)
	unsigned char bIsActive : 1; // 0xB0(0x1)
	unsigned char bIsLocked : 1; // 0xB0(0x1)
	unsigned char UnknownData_B0_2 : 6; // 0xB0(0x1)
	unsigned char UnknownData_B1[0x0003]; // 0xB1(0x3)
	float StartTime; // 0xB4(0x4)
	float EndTime; // 0xB8(0x4)
	float PrerollTime; // 0xBC(0x4)
	float PostrollTime; // 0xC0(0x4)
	unsigned char bIsInfinite : 1; // 0xC4(0x1)
	unsigned char UnknownData_C4_1 : 7; // 0xC4(0x1)
	unsigned char UnknownData_C5[0x0003]; // 0xC5(0x3)
	bool bSupportsInfiniteRange; // 0xC8(0x1)
	struct FOptionalMovieSceneBlendType BlendType; // 0xC9(0x2)
	unsigned char UnknownData_CB[0x0015]; // 0xCB(0x15)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775E38730
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775E386A0
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775E38610
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775E38590
	void SetIsLocked(bool bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775E38500
	void SetIsActive(bool bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775E38470
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775E383F0
	void SetBlendType(enum class EMovieSceneBlendType InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType // (RequiredAPI|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775E38370
	bool IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775E38340
	bool IsActive(); // Function MovieScene.MovieSceneSection.IsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775E38310
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775E382F0
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775E382D0
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775E382B0
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775E38290
	enum class EMovieSceneCompletionMode GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775E38270
	struct FOptionalMovieSceneBlendType GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x2, 0x7FF775E38240
};

// Class MovieScene.MovieSceneTrack
// Size : 0x58 (Inherited : 0x50)
struct UMovieSceneTrack : UMovieSceneSignedObject {
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x50(0x4)
	unsigned char UnknownData_54[0x0001]; // 0x54(0x1)
	bool bIsEvalDisabled; // 0x55(0x1)
	unsigned char UnknownData_56[0x0002]; // 0x56(0x2)
};

// Class MovieScene.MovieSceneNameableTrack
// Size : 0x58 (Inherited : 0x58)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

// Class MovieScene.MovieSceneSequence
// Size : 0x348 (Inherited : 0x50)
struct UMovieSceneSequence : UMovieSceneSignedObject {
	struct FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x50(0x2F0)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x340(0x1)
	bool bParentContextsAreSignificant; // 0x341(0x1)
	bool bPlayableDirectly; // 0x342(0x1)
	unsigned char UnknownData_343[0x0005]; // 0x343(0x5)

	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF775E38160
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x20, 0x7FF775E380B0
};

// Class MovieScene.MovieSceneSequencePlayer
// Size : 0x888 (Inherited : 0x28)
struct UMovieSceneSequencePlayer : UObject {
	unsigned char UnknownData_28[0x03E0]; // 0x28(0x3E0)
	struct FMulticastInlineDelegate OnPlay; // 0x408(0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x418(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x428(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x438(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x448(0x10)
	enum class EMovieScenePlayerStatus Status; // 0x458(0x1)
	unsigned char UnknownData_459[0x0003]; // 0x459(0x3)
	unsigned char bReversePlayback : 1; // 0x45C(0x1)
	unsigned char UnknownData_45C_1 : 7; // 0x45C(0x1)
	unsigned char UnknownData_45D[0x0003]; // 0x45D(0x3)
	struct UMovieSceneSequence* Sequence; // 0x460(0x8)
	struct FFrameNumber StartTime; // 0x468(0x4)
	int32_t DurationFrames; // 0x46C(0x4)
	int32_t CurrentNumLoops; // 0x470(0x4)
	unsigned char UnknownData_474[0x0014]; // 0x474(0x14)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x488(0x14)
	unsigned char UnknownData_49C[0x0004]; // 0x49C(0x4)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4A0(0x320)
	unsigned char UnknownData_7C0[0x0068]; // 0x7C0(0x68)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x828(0x10)
	struct TScriptInterface<None> PlaybackClient; // 0x838(0x10)
	unsigned char UnknownData_848[0x0040]; // 0x848(0x40)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775E3C880
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775E3C860
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775E3C7A0
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775E3C4E0
	void SetPlaybackRange(float NewStartTime, float NewEndTime); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775E3C660
	void SetPlaybackPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775E3C560
	void SetFrameRate(struct FFrameRate FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775E3C450
	void SetFrameRange(int32_t StartFrame, int32_t Duration); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775E3C390
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775E3C300
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775E3BCA0
	bool ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF775E3C250
	void ScrubToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775E3C1C0
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775E3C1A0
	void RPC_OnStopEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent // (Final|Net|NetReliable|Native|Event|NetMulticast|Private) // Param Size : 0x8, 0x7FF775E3C110
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent // (Final|Net|NetReliable|Native|Event|NetMulticast|Private) // Param Size : 0xC, 0x7FF775E3C040
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775E3BFC0
	bool PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF775E3BF10
	void PlayToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775E3BE80
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775E3BE60
	void PlayLooping(int32_t NumLoops); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775E3BDE0
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775E3BDC0
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775E3BDA0
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775E3BD20
	void JumpToPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToPosition // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775E3BCA0
	bool JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF775E3BBF0
	void JumpToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775E3BB60
	bool IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775E3BB30
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775E3BB00
	bool IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775E3BAD0
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775E3BAB0
	struct FQualifiedFrameTime GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775E3BA60
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775E3B800
	float GetPlaybackStart(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775E3B9B0
	float GetPlaybackPosition(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775E3B8C0
	float GetPlaybackEnd(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775E3B830
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775E3B720
	float GetLength(); // Function MovieScene.MovieSceneSequencePlayer.GetLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775E3B6F0
	struct FFrameRate GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775E3B6D0
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775E3B6A0
	struct FQualifiedFrameTime GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775E3B640
	struct FQualifiedFrameTime GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775E3B600
	bool GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775E3B5D0
	struct FQualifiedFrameTime GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775E3B590
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects // (Final|Native|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF775E3B490
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775E3B470
};

// Class MovieScene.MovieSceneSubSection
// Size : 0x158 (Inherited : 0xE0)
struct UMovieSceneSubSection : UMovieSceneSection {
	struct FMovieSceneSectionParameters Parameters; // 0xE0(0x24)
	float StartOffset; // 0x104(0x4)
	float TimeScale; // 0x108(0x4)
	float PrerollTime; // 0x10C(0x4)
	struct UMovieSceneSequence* SubSequence; // 0x110(0x8)
	LazyObjectProperty ActorToRecord; // 0x118(0x1C)
	unsigned char UnknownData_134[0x0004]; // 0x134(0x4)
	struct FString TargetSequenceName; // 0x138(0x10)
	struct FDirectoryPath TargetPathToRecordTo; // 0x148(0x10)

	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775E3C720
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775E3BA30
};

// Class MovieScene.MovieSceneSubTrack
// Size : 0x68 (Inherited : 0x58)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class MovieScene.MovieSceneCustomClockSource
// Size : 0x28 (Inherited : 0x28)
struct UMovieSceneCustomClockSource : UInterface {

	void OnTick(float DeltaSeconds, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnTick // (Native|Public) // Param Size : 0x8, 0x7FF775E33B10
	void OnStopPlaying(struct FQualifiedFrameTime InStopTime); // Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying // (Native|Public|HasOutParms) // Param Size : 0x10, 0x7FF775E33A60
	void OnStartPlaying(struct FQualifiedFrameTime InStartTime); // Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying // (Native|Public|HasOutParms) // Param Size : 0x10, 0x7FF775E339B0
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime InCurrentTime, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime // (Native|Public|HasOutParms) // Param Size : 0x1C, 0x7FF775E338B0
};

// Class MovieScene.MovieScenePlaybackClient
// Size : 0x28 (Inherited : 0x28)
struct UMovieScenePlaybackClient : UInterface {
};

// Class MovieScene.MovieScene
// Size : 0x148 (Inherited : 0x50)
struct UMovieScene : UMovieSceneSignedObject {
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x50(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x60(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x70(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x80(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xD0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xE0(0x8)
	struct FMovieSceneFrameRange SelectionRange; // 0xE8(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0xF8(0x10)
	struct FFrameRate TickResolution; // 0x108(0x8)
	struct FFrameRate DisplayRate; // 0x110(0x8)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x118(0x1)
	enum class EUpdateClockSource ClockSource; // 0x119(0x1)
	unsigned char UnknownData_11A[0x0006]; // 0x11A(0x6)
	struct FSoftObjectPath CustomClockSourcePath; // 0x120(0x18)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x138(0x10)
};

// Class MovieScene.MovieSceneBindingOverrides
// Size : 0x90 (Inherited : 0x28)
struct UMovieSceneBindingOverrides : UObject {
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x28(0x10)
	unsigned char UnknownData_38[0x0058]; // 0x38(0x58)
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// Size : 0x28 (Inherited : 0x28)
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size : 0x38 (Inherited : 0x28)
struct UMovieSceneBuiltInEasingFunction : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	enum class EMovieSceneBuiltInEasing Type; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// Class MovieScene.MovieSceneEasingExternalCurve
// Size : 0x38 (Inherited : 0x28)
struct UMovieSceneEasingExternalCurve : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct UCurveFloat* Curve; // 0x30(0x8)
};

// Class MovieScene.MovieSceneEasingFunction
// Size : 0x28 (Inherited : 0x28)
struct UMovieSceneEasingFunction : UInterface {

	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate // (Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // Param Size : 0x8, 0x7FF77510D9D0
};

// Class MovieScene.MovieSceneFolder
// Size : 0x70 (Inherited : 0x28)
struct UMovieSceneFolder : UObject {
	struct FName FolderName; // 0x28(0x8)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x40(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x50(0x10)
	unsigned char UnknownData_60[0x0010]; // 0x60(0x10)
};

// Class MovieScene.MovieSceneKeyProxy
// Size : 0x28 (Inherited : 0x28)
struct UMovieSceneKeyProxy : UInterface {
};

// Class MovieScene.TestMovieSceneTrack
// Size : 0x70 (Inherited : 0x58)
struct UTestMovieSceneTrack : UMovieSceneTrack {
	bool bHighPassFilter; // 0x58(0x1)
	unsigned char UnknownData_59[0x0007]; // 0x59(0x7)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x60(0x10)
};

// Class MovieScene.TestMovieSceneSection
// Size : 0xE0 (Inherited : 0xE0)
struct UTestMovieSceneSection : UMovieSceneSection {
};

// Class MovieScene.TestMovieSceneSequence
// Size : 0x350 (Inherited : 0x348)
struct UTestMovieSceneSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x8)
};

// Class MovieScene.TestMovieSceneSubTrack
// Size : 0x78 (Inherited : 0x68)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x68(0x10)
};

// Class MovieScene.TestMovieSceneSubSection
// Size : 0x158 (Inherited : 0x158)
struct UTestMovieSceneSubSection : UMovieSceneSubSection {
};

