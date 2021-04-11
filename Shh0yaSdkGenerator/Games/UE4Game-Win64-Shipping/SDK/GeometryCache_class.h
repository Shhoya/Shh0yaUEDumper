// Class GeometryCache.GeometryCache
// Size : 0x68 (Inherited : 0x28)
struct UGeometryCache : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x40(0x10)
	unsigned char UnknownData_50[0x0010]; // 0x50(0x10)
	int32_t StartFrame; // 0x60(0x4)
	int32_t EndFrame; // 0x64(0x4)
};

// Class GeometryCache.GeometryCacheActor
// Size : 0x228 (Inherited : 0x220)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x220(0x8)

	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF7749A0200
};

// Class GeometryCache.GeometryCacheCodecBase
// Size : 0x38 (Inherited : 0x28)
struct UGeometryCacheCodecBase : UObject {
	struct TArray<int32_t> TopologyRanges; // 0x28(0x10)
};

// Class GeometryCache.GeometryCacheCodecRaw
// Size : 0x40 (Inherited : 0x38)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38(0x4)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
};

// Class GeometryCache.GeometryCacheCodecV1
// Size : 0x40 (Inherited : 0x38)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase {
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
};

// Class GeometryCache.GeometryCacheComponent
// Size : 0x490 (Inherited : 0x430)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0x430(0x8)
	bool bRunning; // 0x438(0x1)
	bool bLooping; // 0x439(0x1)
	unsigned char UnknownData_43A[0x0002]; // 0x43A(0x2)
	float StartTimeOffset; // 0x43C(0x4)
	float PlaybackSpeed; // 0x440(0x4)
	int32_t NumTracks; // 0x444(0x4)
	float ElapsedTime; // 0x448(0x4)
	unsigned char UnknownData_44C[0x0030]; // 0x44C(0x30)
	float Duration; // 0x47C(0x4)
	bool bManualTick; // 0x480(0x1)
	unsigned char UnknownData_481[0x000F]; // 0x481(0xF)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x7, 0x7FF7749A0750
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7749A0730
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF7749A06B0
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF7749A0630
	void SetLooping(bool bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF7749A04B0
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF7749A0420
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7749A0400
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7749A03E0
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7749A03C0
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7749A03A0
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7749A0380
	bool IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF7749A0350
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF7749A0320
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF7749A02F0
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF7749A02C0
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF7749A0290
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF7749A0260
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF7749A0230
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF7749A01D0
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF7749A01A0
};

// Class GeometryCache.GeometryCacheTrack
// Size : 0x58 (Inherited : 0x28)
struct UGeometryCacheTrack : UObject {
	float Duration; // 0x28(0x4)
	unsigned char UnknownData_2C[0x002C]; // 0x2C(0x2C)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size : 0x80 (Inherited : 0x58)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58(0x4)
	unsigned char UnknownData_5C[0x0024]; // 0x5C(0x24)

	void AddMeshSample(struct FGeometryCacheMeshData MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample // (Final|Native|Public|HasOutParms) // Param Size : 0xAC, 0x7FF7749A0070
};

// Class GeometryCache.GeometryCacheTrackStreamable
// Size : 0xD0 (Inherited : 0x58)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	struct UGeometryCacheCodecBase* Codec; // 0x58(0x8)
	unsigned char UnknownData_60[0x0068]; // 0x60(0x68)
	float StartSampleTime; // 0xC8(0x4)
	unsigned char UnknownData_CC[0x0004]; // 0xCC(0x4)
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size : 0x100 (Inherited : 0x58)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack {
	unsigned char UnknownData_58[0x00A8]; // 0x58(0xA8)

	void SetMesh(struct FGeometryCacheMeshData NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh // (Final|Native|Public|HasOutParms) // Param Size : 0xA8, 0x7FF7749A0540
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size : 0x100 (Inherited : 0x58)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack {
	unsigned char UnknownData_58[0x00A8]; // 0x58(0xA8)

	void SetMesh(struct FGeometryCacheMeshData NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh // (Final|Native|Public|HasOutParms) // Param Size : 0xA8, 0x7FF7749A0540
};

