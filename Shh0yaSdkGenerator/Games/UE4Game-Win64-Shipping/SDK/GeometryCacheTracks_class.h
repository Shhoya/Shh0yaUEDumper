// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// Size : 0x120 (Inherited : 0xE0)
struct UMovieSceneGeometryCacheSection : UMovieSceneSection {
	struct FMovieSceneGeometryCacheParams Params; // 0xE0(0x40)
};

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Size : 0x68 (Inherited : 0x58)
struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x58(0x10)
};

