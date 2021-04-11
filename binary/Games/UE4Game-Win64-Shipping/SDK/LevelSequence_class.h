// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size : 0x70 (Inherited : 0x28)
struct UDefaultLevelSequenceInstanceData : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct AActor* TransformOriginActor; // 0x30(0x8)
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
	struct FTransform TransformOrigin; // 0x40(0x30)
};

// Class LevelSequence.LevelSequenceMetaData
// Size : 0x28 (Inherited : 0x28)
struct ULevelSequenceMetaData : UInterface {
};

// Class LevelSequence.LevelSequence
// Size : 0x498 (Inherited : 0x348)
struct ULevelSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x8)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x350(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0x3A0(0xA0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x440(0x50)
	class UObject* DirectorClass; // 0x490(0x8)

	void RemoveMetaDataByClass(class UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF7761358B0
	struct UObject* FindOrAddMetaDataByClass(class UObject* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776135210
	struct UObject* FindMetaDataByClass(class UObject* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF776135210
	struct UObject* CopyMetaData(struct UObject* InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776135210
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size : 0x28 (Inherited : 0x28)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size : 0x50 (Inherited : 0x28)
struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28(0x1)
	unsigned char UnknownData_29[0x0007]; // 0x29(0x7)
	struct FSoftClassPath BurnInClass; // 0x30(0x18)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x8)

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x18, 0x7FF776135C70
};

// Class LevelSequence.LevelSequenceActor
// Size : 0x2B0 (Inherited : 0x220)
struct ALevelSequenceActor : AActor {
	unsigned char UnknownData_220[0x0010]; // 0x220(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x230(0x14)
	unsigned char UnknownData_244[0x0004]; // 0x244(0x4)
	struct ULevelSequencePlayer* SequencePlayer; // 0x248(0x8)
	struct FSoftObjectPath LevelSequence; // 0x250(0x18)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x268(0x10)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x278(0x2)
	unsigned char UnknownData_27A[0x0006]; // 0x27A(0x6)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x280(0x8)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x288(0x8)
	unsigned char bAutoPlay : 1; // 0x290(0x1)
	unsigned char bOverrideInstanceData : 1; // 0x290(0x1)
	unsigned char bReplicatePlayback : 1; // 0x290(0x1)
	unsigned char UnknownData_290_3 : 5; // 0x290(0x1)
	unsigned char UnknownData_291[0x0007]; // 0x291(0x7)
	struct UObject* DefaultInstanceData; // 0x298(0x8)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x2A0(0x8)
	bool bShowBurnin; // 0x2A8(0x1)
	unsigned char UnknownData_2A9[0x0007]; // 0x2A9(0x7)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776135F80
	void SetSequence(struct ULevelSequence* InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776135F00
	void SetReplicatePlayback(bool ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776135E70
	void SetEventReceivers(struct TArray<struct AActor*> AdditionalReceivers); // Function LevelSequence.LevelSequenceActor.SetEventReceivers // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776135D30
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*> Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x19, 0x7FF776135B40
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*> Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x29, 0x7FF7761359F0
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7761359D0
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF776135920
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF7761357F0
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF776135700
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature // (Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
	struct ULevelSequence* LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF776135690
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776135670
	struct ULevelSequencePlayer* GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF776135620
	struct ULevelSequence* GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF7761355D0
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF7761354B0
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x20, 0x7FF776135400
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF776135100
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x21, 0x7FF776134FC0
};

// Class LevelSequence.LevelSequenceBurnIn
// Size : 0x2F0 (Inherited : 0x230)
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x230(0xB8)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x2E8(0x8)

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // (Event|Public|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	class ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // (Native|Event|Public|BlueprintEvent|Const) // Param Size : 0x8, 0x7FF776135650
};

// Class LevelSequence.LevelSequenceDirector
// Size : 0x30 (Inherited : 0x28)
struct ULevelSequenceDirector : UObject {
	struct ULevelSequencePlayer* Player; // 0x28(0x8)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size : 0xA0 (Inherited : 0xA0)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint {
};

// Class LevelSequence.LevelSequencePlayer
// Size : 0x9A0 (Inherited : 0x888)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; // 0x888(0x10)
	unsigned char UnknownData_898[0x0108]; // 0x898(0x108)

	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF776135590
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor* OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF776135290
};

// Class LevelSequence.LevelSequenceMediaController
// Size : 0x248 (Inherited : 0x220)
struct ALevelSequenceMediaController : AActor {
	unsigned char UnknownData_220[0x0008]; // 0x220(0x8)
	struct ALevelSequenceActor* Sequence; // 0x228(0x8)
	struct UMediaComponent* MediaComponent; // 0x230(0x8)
	float ServerStartTimeSeconds; // 0x238(0x4)
	unsigned char UnknownData_23C[0x000C]; // 0x23C(0xC)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF776135FA0
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7761356E0
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds // (Final|Native|Private) // Param Size : 0x0, 0x7FF7761356C0
	struct ALevelSequenceActor* GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF776135600
	struct UMediaComponent* GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FE6030
};

