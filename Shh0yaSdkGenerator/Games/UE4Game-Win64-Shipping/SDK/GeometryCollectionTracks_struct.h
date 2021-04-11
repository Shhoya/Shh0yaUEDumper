// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
// Size : 0x30 (Inherited : 0x0)
struct FMovieSceneGeometryCollectionParams {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct FSoftObjectPath GeometryCollectionCache; // 0x8(0x18)
	struct FFrameNumber StartFrameOffset; // 0x20(0x4)
	struct FFrameNumber EndFrameOffset; // 0x24(0x4)
	float PlayRate; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
// Size : 0x58 (Inherited : 0x20)
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20(0x38)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// Size : 0x38 (Inherited : 0x30)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	struct FFrameNumber SectionStartTime; // 0x30(0x4)
	struct FFrameNumber SectionEndTime; // 0x34(0x4)
};

