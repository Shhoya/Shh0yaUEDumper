// Class ActorSequence.ActorSequence
// Size : 0x370 (Inherited : 0x348)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x8)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x350(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size : 0xD8 (Inherited : 0xB0)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xB0(0x14)
	unsigned char UnknownData_C4[0x0004]; // 0xC4(0x4)
	struct UActorSequence* Sequence; // 0xC8(0x8)
	struct UActorSequencePlayer* SequencePlayer; // 0xD0(0x8)
};

// Class ActorSequence.ActorSequencePlayer
// Size : 0x888 (Inherited : 0x888)
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

