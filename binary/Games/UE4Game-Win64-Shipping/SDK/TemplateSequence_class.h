// Class TemplateSequence.TemplateSequence
// Size : 0x3F0 (Inherited : 0x348)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x8)
	SoftClassProperty BoundActorClass; // 0x350(0x28)
	struct TSoftObjectPtr<struct AActor> BoundPreviewActor; // 0x378(0x28)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0x3A0(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size : 0x3F0 (Inherited : 0x3F0)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.TemplateSequenceActor
// Size : 0x270 (Inherited : 0x220)
struct ATemplateSequenceActor : AActor {
	unsigned char UnknownData_220[0x0008]; // 0x220(0x8)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x228(0x14)
	unsigned char UnknownData_23C[0x0004]; // 0x23C(0x4)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x240(0x8)
	struct FSoftObjectPath TemplateSequence; // 0x248(0x18)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x260(0xC)
	unsigned char UnknownData_26C[0x0004]; // 0x26C(0x4)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774CB58D0
	void SetBinding(struct AActor* Actor); // Function TemplateSequence.TemplateSequenceActor.SetBinding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774CB5850
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF774CB5820
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF774CB57F0
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF774CB57C0
};

// Class TemplateSequence.TemplateSequencePlayer
// Size : 0x890 (Inherited : 0x888)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	unsigned char UnknownData_888[0x0008]; // 0x888(0x8)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor* OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF774CB5650
};

// Class TemplateSequence.TemplateSequenceSection
// Size : 0x158 (Inherited : 0x158)
struct UTemplateSequenceSection : UMovieSceneSubSection {
};

// Class TemplateSequence.TemplateSequenceTrack
// Size : 0x68 (Inherited : 0x68)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

