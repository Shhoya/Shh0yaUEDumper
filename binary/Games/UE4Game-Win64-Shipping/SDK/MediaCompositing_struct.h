// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
// Size : 0x58 (Inherited : 0x48)
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct UMediaSource* MediaSource; // 0x48(0x8)
	struct FFrameNumber SectionStartFrame; // 0x50(0x4)
	bool bLoop; // 0x54(0x1)
	unsigned char UnknownData_55[0x0003]; // 0x55(0x3)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// Size : 0x50 (Inherited : 0x20)
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneMediaSectionParams Params; // 0x20(0x30)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// Size : 0x30 (Inherited : 0x0)
struct FMovieSceneMediaSectionParams {
	struct UMediaSoundComponent* MediaSoundComponent; // 0x0(0x8)
	struct UMediaSource* MediaSource; // 0x8(0x8)
	struct UMediaTexture* MediaTexture; // 0x10(0x8)
	struct UMediaPlayer* MediaPlayer; // 0x18(0x8)
	struct FFrameNumber SectionStartFrame; // 0x20(0x4)
	struct FFrameNumber SectionEndFrame; // 0x24(0x4)
	bool bLooping; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	struct FFrameNumber StartFrameOffset; // 0x2C(0x4)
};

