// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
// Size : 0x40 (Inherited : 0x0)
struct FMovieSceneGeometryCacheParams {
	struct UGeometryCache* GeometryCacheAsset; // 0x0(0x8)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x8(0x4)
	struct FFrameNumber StartFrameOffset; // 0xC(0x4)
	struct FFrameNumber EndFrameOffset; // 0x10(0x4)
	float PlayRate; // 0x14(0x4)
	unsigned char bReverse : 1; // 0x18(0x1)
	unsigned char UnknownData_18_1 : 7; // 0x18(0x1)
	unsigned char UnknownData_19[0x0003]; // 0x19(0x3)
	float StartOffset; // 0x1C(0x4)
	float EndOffset; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct FSoftObjectPath GeometryCache; // 0x28(0x18)
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// Size : 0x68 (Inherited : 0x20)
struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20(0x48)
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// Size : 0x48 (Inherited : 0x40)
struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	struct FFrameNumber SectionStartTime; // 0x40(0x4)
	struct FFrameNumber SectionEndTime; // 0x44(0x4)
};

