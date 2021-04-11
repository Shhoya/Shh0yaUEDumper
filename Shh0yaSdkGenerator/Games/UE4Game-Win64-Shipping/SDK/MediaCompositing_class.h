// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// Size : 0xF0 (Inherited : 0xE0)
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xE0(0x8)
	bool bLoop; // 0xE8(0x1)
	unsigned char UnknownData_E9[0x0007]; // 0xE9(0x7)
};

// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack {
};

// Class MediaCompositing.MovieSceneMediaSection
// Size : 0x110 (Inherited : 0xE0)
struct UMovieSceneMediaSection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xE0(0x8)
	bool bLooping; // 0xE8(0x1)
	unsigned char UnknownData_E9[0x0003]; // 0xE9(0x3)
	struct FFrameNumber StartFrameOffset; // 0xEC(0x4)
	struct UMediaTexture* MediaTexture; // 0xF0(0x8)
	struct UMediaSoundComponent* MediaSoundComponent; // 0xF8(0x8)
	bool bUseExternalMediaPlayer; // 0x100(0x1)
	unsigned char UnknownData_101[0x0007]; // 0x101(0x7)
	struct UMediaPlayer* ExternalMediaPlayer; // 0x108(0x8)
};

// Class MediaCompositing.MovieSceneMediaTrack
// Size : 0x68 (Inherited : 0x58)
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> MediaSections; // 0x58(0x10)
};

