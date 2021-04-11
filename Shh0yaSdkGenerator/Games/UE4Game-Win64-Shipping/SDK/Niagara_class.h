// Class Niagara.NiagaraDataInterface
// Size : 0x30 (Inherited : 0x28)
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class Niagara.MovieSceneNiagaraTrack
// Size : 0x68 (Inherited : 0x58)
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class Niagara.MovieSceneNiagaraParameterTrack
// Size : 0x90 (Inherited : 0x68)
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	struct FNiagaraVariable Parameter; // 0x68(0x28)
};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size : 0x90 (Inherited : 0x90)
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size : 0x90 (Inherited : 0x90)
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size : 0x90 (Inherited : 0x90)
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size : 0x90 (Inherited : 0x90)
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size : 0xF0 (Inherited : 0xE0)
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xE0(0x4)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xE4(0x4)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xE8(0x4)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0xEC(0x1)
	unsigned char UnknownData_ED[0x0003]; // 0xED(0x3)
};

// Class Niagara.MovieSceneNiagaraSystemTrack
// Size : 0x68 (Inherited : 0x68)
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack {
};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size : 0x98 (Inherited : 0x90)
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	int32_t ChannelsUsed; // 0x90(0x4)
	unsigned char UnknownData_94[0x0004]; // 0x94(0x4)
};

// Class Niagara.NiagaraActor
// Size : 0x230 (Inherited : 0x220)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x220(0x8)
	unsigned char bDestroyOnSystemFinish : 1; // 0x228(0x1)
	unsigned char UnknownData_228_1 : 7; // 0x228(0x1)
	unsigned char UnknownData_229[0x0007]; // 0x229(0x7)

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish // (Final|RequiredAPI|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C00310
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent); // Function Niagara.NiagaraActor.OnNiagaraSystemFinished // (Final|Native|Private) // Param Size : 0x8, 0x7FF774BFFEA0
};

// Class Niagara.NiagaraComponent
// Size : 0x5C0 (Inherited : 0x410)
struct UNiagaraComponent : UFXSystemComponent {
	struct UNiagaraSystem* Asset; // 0x408(0x8)
	enum class ENiagaraTickBehavior TickBehavior; // 0x410(0x1)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x418(0x108)
	unsigned char bForceSolo : 1; // 0x520(0x1)
	unsigned char UnknownData_521_1 : 7; // 0x521(0x1)
	unsigned char UnknownData_522[0x002A]; // 0x522(0x2A)
	unsigned char bAutoDestroy : 1; // 0x54C(0x1)
	unsigned char bRenderingEnabled : 1; // 0x54C(0x1)
	unsigned char bAutoManageAttachment : 1; // 0x54C(0x1)
	unsigned char bAutoAttachWeldSimulatedBodies : 1; // 0x54C(0x1)
	unsigned char UnknownData_54C_4 : 4; // 0x54C(0x1)
	unsigned char UnknownData_54D[0x0003]; // 0x54D(0x3)
	float MaxTimeBeforeForceUpdateTransform; // 0x550(0x4)
	unsigned char UnknownData_554[0x0004]; // 0x554(0x4)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x558(0x10)
	struct FWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x568(0x8)
	struct FName AutoAttachSocketName; // 0x570(0x8)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x578(0x1)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x579(0x1)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x57A(0x1)
	unsigned char UnknownData_57B[0x0045]; // 0x57B(0x45)

	void SetVariableVec4(struct FName InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraComponent.SetVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF774C016E0
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x14, 0x7FF774C01610
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF774C01550
	void SetVariableQuat(struct FName InVariableName, struct FQuat InValue); // Function Niagara.NiagaraComponent.SetVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF774C01480
	void SetVariableObject(struct FName InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetVariableObject // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF774C013C0
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object); // Function Niagara.NiagaraComponent.SetVariableMaterial // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF774C01300
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraComponent.SetVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x18, 0x7FF774C01230
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetVariableInt // (Final|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF774C01170
	void SetVariableFloat(struct FName InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetVariableFloat // (Final|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF774C010A0
	void SetVariableBool(struct FName InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetVariableBool // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774C00FD0
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetVariableActor // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF774C00F10
	void SetSeekDelta(float InSeekDelta); // Function Niagara.NiagaraComponent.SetSeekDelta // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774C00E90
	void SetRenderingEnabled(bool bInRenderingEnabled); // Function Niagara.NiagaraComponent.SetRenderingEnabled // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C00E00
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance); // Function Niagara.NiagaraComponent.SetPreviewLODDistance // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774C00D30
	void SetPaused(bool bInPaused); // Function Niagara.NiagaraComponent.SetPaused // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C00CA0
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF774C00BB0
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x1C, 0x7FF774C00AC0
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x18, 0x7FF774C009F0
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF774C00910
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetNiagaraVariableObject // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774C004B0
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF774C00830
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableInt // (Final|Native|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF774C00750
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat // (Final|Native|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF774C00670
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableBool // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF774C00590
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetNiagaraVariableActor // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774C004B0
	void SetMaxSimTime(float InMaxTime); // Function Niagara.NiagaraComponent.SetMaxSimTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774C00430
	void SetForceSolo(bool bInForceSolo); // Function Niagara.NiagaraComponent.SetForceSolo // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C003A0
	void SetDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SetDesiredAge // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774C00290
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C00200
	void SetAutoDestroy(bool bInAutoDestroy); // Function Niagara.NiagaraComponent.SetAutoDestroy // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C00170
	void SetAsset(struct UNiagaraSystem* InAsset); // Function Niagara.NiagaraComponent.SetAsset // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774C000F0
	void SetAllowScalability(bool bAllow); // Function Niagara.NiagaraComponent.SetAllowScalability // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C00060
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode); // Function Niagara.NiagaraComponent.SetAgeUpdateMode // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774BFFFE0
	void SeekToDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SeekToDesiredAge // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774BFFF60
	void ResetSystem(); // Function Niagara.NiagaraComponent.ResetSystem // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774BFFF40
	void ReinitializeSystem(); // Function Niagara.NiagaraComponent.ReinitializeSystem // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774BFFF20
	bool IsPaused(); // Function Niagara.NiagaraComponent.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774BFFE70
	float GetSeekDelta(); // Function Niagara.NiagaraComponent.GetSeekDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774BFFE40
	bool GetPreviewLODDistanceEnabled(); // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774BFFE20
	int32_t GetPreviewLODDistance(); // Function Niagara.NiagaraComponent.GetPreviewLODDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774BFFE00
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly // (Final|Native|Public|BlueprintCallable) // Param Size : 0x30, 0x7FF774BFFB80
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly // (Final|Native|Public|BlueprintCallable) // Param Size : 0x30, 0x7FF774BFFCC0
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly // (Final|Native|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774BFFA90
	float GetMaxSimTime(); // Function Niagara.NiagaraComponent.GetMaxSimTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774BFFA60
	bool GetForceSolo(); // Function Niagara.NiagaraComponent.GetForceSolo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774BFFA30
	float GetDesiredAge(); // Function Niagara.NiagaraComponent.GetDesiredAge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774BFFA00
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name); // Function Niagara.NiagaraComponent.GetDataInterface // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774BFF950
	struct UNiagaraSystem* GetAsset(); // Function Niagara.NiagaraComponent.GetAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF774BFF930
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Function Niagara.NiagaraComponent.GetAgeUpdateMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774BFF900
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulationByTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774BFF840
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulation // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774BFF770
};

// Class Niagara.NiagaraComponentPool
// Size : 0x80 (Inherited : 0x28)
struct UNiagaraComponentPool : UObject {
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools; // 0x28(0x50)
	unsigned char UnknownData_78[0x0008]; // 0x78(0x8)
};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size : 0x28 (Inherited : 0x28)
struct UNiagaraConvertInPlaceUtilityBase : UObject {
};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size : 0x38 (Inherited : 0x30)
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x30(0x8)
};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size : 0x40 (Inherited : 0x30)
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x30(0x8)
	int32_t Resolution; // 0x38(0x4)
	float ScopeInMilliseconds; // 0x3C(0x4)
};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size : 0x48 (Inherited : 0x38)
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x38(0x4)
	float MinimumFrequency; // 0x3C(0x4)
	float MaximumFrequency; // 0x40(0x4)
	float NoiseFloorDb; // 0x44(0x4)
};

// Class Niagara.NiagaraDataInterfaceCamera
// Size : 0x38 (Inherited : 0x30)
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x30(0x4)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size : 0x40 (Inherited : 0x30)
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface {
	unsigned char UnknownData_30[0x0010]; // 0x30(0x10)
};

// Class Niagara.NiagaraDataInterfaceCurveBase
// Size : 0x58 (Inherited : 0x30)
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	struct TArray<float> ShaderLUT; // 0x30(0x10)
	float LUTMinTime; // 0x40(0x4)
	float LUTMaxTime; // 0x44(0x4)
	float LUTInvTimeRange; // 0x48(0x4)
	float LUTNumSamplesMinusOne; // 0x4C(0x4)
	unsigned char bUseLUT : 1; // 0x50(0x1)
	unsigned char UnknownData_50_1 : 7; // 0x50(0x1)
	unsigned char UnknownData_51[0x0007]; // 0x51(0x7)
};

// Class Niagara.NiagaraDataInterfaceColorCurve
// Size : 0x258 (Inherited : 0x58)
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve RedCurve; // 0x58(0x80)
	struct FRichCurve GreenCurve; // 0xD8(0x80)
	struct FRichCurve BlueCurve; // 0x158(0x80)
	struct FRichCurve AlphaCurve; // 0x1D8(0x80)
};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// Size : 0x40 (Inherited : 0x30)
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x30(0x4)
	unsigned char UnknownData_34[0x000C]; // 0x34(0xC)
};

// Class Niagara.NiagaraDataInterfaceCurve
// Size : 0xD8 (Inherited : 0x58)
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve Curve; // 0x58(0x80)
};

// Class Niagara.NiagaraParticleCallbackHandler
// Size : 0x28 (Inherited : 0x28)
struct UNiagaraParticleCallbackHandler : UInterface {

	void ReceiveParticleData(struct TArray<struct FBasicParticleData> Data, struct UNiagaraSystem* NiagaraSystem); // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // Param Size : 0x18, 0x7FF774C06390
};

// Class Niagara.NiagaraDataInterfaceExport
// Size : 0x58 (Inherited : 0x30)
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	struct FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x30(0x28)
};

// Class Niagara.NiagaraDataInterfaceRWBase
// Size : 0xD0 (Inherited : 0x30)
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	struct TSet<int32_t> OutputShaderStages; // 0x30(0x50)
	struct TSet<int32_t> IterationShaderStages; // 0x80(0x50)
};

// Class Niagara.NiagaraDataInterfaceGrid2D
// Size : 0xF0 (Inherited : 0xD0)
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0xD0(0x4)
	int32_t NumCellsY; // 0xD4(0x4)
	int32_t NumCellsMaxAxis; // 0xD8(0x4)
	int32_t NumAttributes; // 0xDC(0x4)
	bool SetGridFromMaxAxis; // 0xE0(0x1)
	unsigned char UnknownData_E1[0x0003]; // 0xE1(0x3)
	struct FVector2D WorldBBoxSize; // 0xE4(0x8)
	unsigned char UnknownData_EC[0x0004]; // 0xEC(0x4)
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size : 0x140 (Inherited : 0xF0)
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	unsigned char UnknownData_F0[0x0050]; // 0xF0(0x50)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774C06270
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774C06150
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D // (Native|Public|BlueprintCallable) // Param Size : 0x15, 0x7FF774C06040
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t TilesX, int32_t TilesY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D // (Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x19, 0x7FF774C05ED0
};

// Class Niagara.NiagaraDataInterfaceGrid3D
// Size : 0xF0 (Inherited : 0xD0)
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	struct FIntVector NumVoxels; // 0xD0(0xC)
	float VoxelSize; // 0xDC(0x4)
	bool SetGridFromVoxelSize; // 0xE0(0x1)
	unsigned char UnknownData_E1[0x0003]; // 0xE1(0x3)
	struct FVector WorldBBoxSize; // 0xE4(0xC)
};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size : 0xF8 (Inherited : 0xF0)
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerVoxel; // 0xF0(0x4)
	unsigned char UnknownData_F4[0x0004]; // 0xF4(0x4)
};

// Class Niagara.NiagaraDataInterfaceOcclusion
// Size : 0x30 (Inherited : 0x30)
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceParticleRead
// Size : 0x40 (Inherited : 0x30)
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterface {
	struct FString EmitterName; // 0x30(0x10)
};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size : 0x30 (Inherited : 0x30)
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size : 0xB8 (Inherited : 0x30)
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	struct AActor* Source; // 0x30(0x8)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x38(0x28)
	struct USkeletalMeshComponent* SourceComponent; // 0x60(0x8)
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; // 0x68(0x1)
	unsigned char UnknownData_69[0x0007]; // 0x69(0x7)
	struct TArray<struct FName> SamplingRegions; // 0x70(0x10)
	int32_t WholeMeshLOD; // 0x80(0x4)
	unsigned char UnknownData_84[0x0004]; // 0x84(0x4)
	struct TArray<struct FName> FilteredBones; // 0x88(0x10)
	struct TArray<struct FName> FilteredSockets; // 0x98(0x10)
	struct FName ExcludeBoneName; // 0xA8(0x8)
	unsigned char bExcludeBone : 1; // 0xB0(0x1)
	unsigned char UnknownData_B0_1 : 7; // 0xB0(0x1)
	unsigned char UnknownData_B1[0x0007]; // 0xB1(0x7)
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size : 0x38 (Inherited : 0x30)
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	struct AActor* Source; // 0x30(0x8)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size : 0x60 (Inherited : 0x30)
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	struct UStaticMesh* DefaultMesh; // 0x30(0x8)
	struct AActor* Source; // 0x38(0x8)
	struct UStaticMeshComponent* SourceComponent; // 0x40(0x8)
	struct FNDIStaticMeshSectionFilter SectionFilter; // 0x48(0x10)
	unsigned char UnknownData_58[0x0008]; // 0x58(0x8)
};

// Class Niagara.NiagaraDataInterfaceTexture
// Size : 0x38 (Inherited : 0x30)
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	struct UTexture* Texture; // 0x30(0x8)
};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size : 0x158 (Inherited : 0x58)
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x58(0x80)
	struct FRichCurve YCurve; // 0xD8(0x80)
};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// Size : 0x258 (Inherited : 0x58)
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x58(0x80)
	struct FRichCurve YCurve; // 0xD8(0x80)
	struct FRichCurve ZCurve; // 0x158(0x80)
	struct FRichCurve WCurve; // 0x1D8(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// Size : 0x1D8 (Inherited : 0x58)
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x58(0x80)
	struct FRichCurve YCurve; // 0xD8(0x80)
	struct FRichCurve ZCurve; // 0x158(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorField
// Size : 0x40 (Inherited : 0x30)
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	struct UVectorField* Field; // 0x30(0x8)
	bool bTileX; // 0x38(0x1)
	bool bTileY; // 0x39(0x1)
	bool bTileZ; // 0x3A(0x1)
	unsigned char UnknownData_3B[0x0005]; // 0x3B(0x5)
};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size : 0x38 (Inherited : 0x30)
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	struct UVolumeTexture* Texture; // 0x30(0x8)
};

// Class Niagara.NiagaraEditorDataBase
// Size : 0x28 (Inherited : 0x28)
struct UNiagaraEditorDataBase : UObject {
};

// Class Niagara.NiagaraEffectType
// Size : 0x100 (Inherited : 0x28)
struct UNiagaraEffectType : UObject {
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28(0x4)
	enum class ENiagaraCullReaction CullReaction; // 0x2C(0x4)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x30(0x10)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x40(0x10)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x50(0x10)
	unsigned char UnknownData_60[0x00A0]; // 0x60(0xA0)
};

// Class Niagara.NiagaraEmitter
// Size : 0x2B0 (Inherited : 0x28)
struct UNiagaraEmitter : UObject {
	bool bLocalSpace; // 0x28(0x1)
	bool bDeterminism; // 0x29(0x1)
	unsigned char UnknownData_2A[0x0002]; // 0x2A(0x2)
	int32_t RandomSeed; // 0x2C(0x4)
	enum class EParticleAllocationMode AllocationMode; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	int32_t PreAllocationCount; // 0x34(0x4)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x38(0x28)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x60(0x28)
	struct FNiagaraEmitterScriptProperties EmitterSpawnScriptProps; // 0x88(0x28)
	struct FNiagaraEmitterScriptProperties EmitterUpdateScriptProps; // 0xB0(0x28)
	enum class ENiagaraSimTarget SimTarget; // 0xD8(0x1)
	unsigned char UnknownData_D9[0x0003]; // 0xD9(0x3)
	struct FBox FixedBounds; // 0xDC(0x1C)
	int32_t MinDetailLevel; // 0xF8(0x4)
	int32_t MaxDetailLevel; // 0xFC(0x4)
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0x100(0x14)
	unsigned char UnknownData_114[0x0004]; // 0x114(0x4)
	struct FNiagaraPlatformSet Platforms; // 0x118(0x20)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0x138(0x10)
	unsigned char bInterpolatedSpawning : 1; // 0x148(0x1)
	unsigned char bFixedBounds : 1; // 0x148(0x1)
	unsigned char bUseMinDetailLevel : 1; // 0x148(0x1)
	unsigned char bUseMaxDetailLevel : 1; // 0x148(0x1)
	unsigned char bOverrideGlobalSpawnCountScale : 1; // 0x148(0x1)
	unsigned char bRequiresPersistentIDs : 1; // 0x148(0x1)
	unsigned char UnknownData_148_6 : 2; // 0x148(0x1)
	unsigned char UnknownData_149[0x0003]; // 0x149(0x3)
	float MaxDeltaTimePerTick; // 0x14C(0x4)
	uint32_t DefaultShaderStageIndex; // 0x150(0x4)
	uint32_t MaxUpdateIterations; // 0x154(0x4)
	struct TSet<uint32_t> SpawnStages; // 0x158(0x50)
	unsigned char bSimulationStagesEnabled : 1; // 0x1A8(0x1)
	unsigned char bDeprecatedShaderStagesEnabled : 1; // 0x1A8(0x1)
	unsigned char bLimitDeltaTime : 1; // 0x1A8(0x1)
	unsigned char UnknownData_1A8_3 : 5; // 0x1A8(0x1)
	unsigned char UnknownData_1A9[0x0007]; // 0x1A9(0x7)
	struct FString UniqueEmitterName; // 0x1B0(0x10)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; // 0x1C0(0x10)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x1D0(0x10)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages; // 0x1E0(0x10)
	struct UNiagaraScript* GPUComputeScript; // 0x1F0(0x8)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0x1F8(0x10)
	unsigned char UnknownData_208[0x00A8]; // 0x208(0xA8)
};

// Class Niagara.NiagaraEventReceiverEmitterAction
// Size : 0x28 (Inherited : 0x28)
struct UNiagaraEventReceiverEmitterAction : UObject {
};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size : 0x30 (Inherited : 0x28)
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// Class Niagara.NiagaraFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x40, 0x7FF774C09760
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x40, 0x7FF774C094B0
	void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774C093A0
	void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTextureObject // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774C08FE0
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774C08A70
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774C08960
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774C08850
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774C084C0
};

// Class Niagara.NiagaraRendererProperties
// Size : 0x50 (Inherited : 0x28)
struct UNiagaraRendererProperties : UNiagaraMergeable {
	int32_t SortOrderHint; // 0x28(0x4)
	bool bIsEnabled; // 0x2C(0x1)
	bool bMotionBlurEnabled; // 0x2D(0x1)
	unsigned char UnknownData_2E[0x0022]; // 0x2E(0x22)
};

// Class Niagara.NiagaraLightRendererProperties
// Size : 0x338 (Inherited : 0x50)
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	unsigned char bUseInverseSquaredFalloff : 1; // 0x50(0x1)
	unsigned char bAffectsTranslucency : 1; // 0x50(0x1)
	unsigned char bOverrideRenderingEnabled : 1; // 0x50(0x1)
	unsigned char UnknownData_50_3 : 5; // 0x50(0x1)
	unsigned char UnknownData_51[0x0003]; // 0x51(0x3)
	float RadiusScale; // 0x54(0x4)
	struct FVector ColorAdd; // 0x58(0xC)
	unsigned char UnknownData_64[0x0004]; // 0x64(0x4)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x68(0x78)
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // 0xE0(0x78)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x158(0x78)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x1D0(0x78)
	struct FNiagaraVariableAttributeBinding RadiusBinding; // 0x248(0x78)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x2C0(0x78)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size : 0x728 (Inherited : 0x50)
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	struct UStaticMesh* ParticleMesh; // 0x50(0x8)
	enum class ENiagaraSortMode SortMode; // 0x58(0x1)
	unsigned char UnknownData_59[0x0003]; // 0x59(0x3)
	unsigned char bOverrideMaterials : 1; // 0x5C(0x1)
	unsigned char bSortOnlyWhenTranslucent : 1; // 0x5C(0x1)
	unsigned char UnknownData_5C_2 : 6; // 0x5C(0x1)
	unsigned char UnknownData_5D[0x0003]; // 0x5D(0x3)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x60(0x10)
	struct FVector2D SubImageSize; // 0x70(0x8)
	unsigned char bSubImageBlend : 1; // 0x78(0x1)
	unsigned char UnknownData_78_1 : 7; // 0x78(0x1)
	unsigned char UnknownData_79[0x0003]; // 0x79(0x3)
	enum class ENiagaraMeshFacingMode FacingMode; // 0x7C(0x1)
	unsigned char UnknownData_7D[0x0003]; // 0x7D(0x3)
	unsigned char bLockedAxisEnable : 1; // 0x80(0x1)
	unsigned char UnknownData_80_1 : 7; // 0x80(0x1)
	unsigned char UnknownData_81[0x0003]; // 0x81(0x3)
	struct FVector LockedAxis; // 0x84(0xC)
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0x90(0x1)
	unsigned char UnknownData_91[0x0007]; // 0x91(0x7)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x98(0x78)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x110(0x78)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x188(0x78)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x200(0x78)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x278(0x78)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x2F0(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x368(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x3E0(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x458(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4D0(0x78)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x548(0x78)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x5C0(0x78)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x638(0x78)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x6B0(0x78)
};

// Class Niagara.NiagaraParameterCollectionInstance
// Size : 0xF8 (Inherited : 0x28)
struct UNiagaraParameterCollectionInstance : UObject {
	struct UNiagaraParameterCollection* Collection; // 0x28(0x8)
	struct TArray<struct FNiagaraVariable> OverridenParameters; // 0x30(0x10)
	struct FNiagaraParameterStore ParameterStorage; // 0x40(0xB8)

	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x1C, 0x7FF774C092B0
	void SetVector4Parameter(struct FString InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF774C091C0
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x18, 0x7FF774C090F0
	void SetQuatParameter(struct FString InVariableName, struct FQuat InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF774C08F00
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter // (Final|Native|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF774C08E20
	void SetFloatParameter(struct FString InVariableName, float InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter // (Final|Native|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF774C08D40
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF774C08C60
	void SetBoolParameter(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF774C08B80
	struct FVector GetVectorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x1C, 0x7FF774C08790
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF774C086E0
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x18, 0x7FF774C08630
	struct FQuat GetQuatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF774C08580
	int32_t GetIntParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter // (Final|Native|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF774C08410
	float GetFloatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter // (Final|Native|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF774C08360
	struct FLinearColor GetColorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF774C082B0
	bool GetBoolParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF774C08200
};

// Class Niagara.NiagaraParameterCollection
// Size : 0x58 (Inherited : 0x28)
struct UNiagaraParameterCollection : UObject {
	struct FName Namespace; // 0x28(0x8)
	struct TArray<struct FNiagaraVariable> Parameters; // 0x30(0x10)
	struct UNiagaraParameterCollectionInstance* DefaultInstance; // 0x40(0x8)
	struct FGuid CompileId; // 0x48(0x10)
};

// Class Niagara.NiagaraPrecompileContainer
// Size : 0x40 (Inherited : 0x28)
struct UNiagaraPrecompileContainer : UObject {
	struct TArray<struct UNiagaraScript*> Scripts; // 0x28(0x10)
	struct UNiagaraSystem* System; // 0x38(0x8)
};

// Class Niagara.NiagaraPreviewBase
// Size : 0x220 (Inherited : 0x220)
struct ANiagaraPreviewBase : AActor {

	void SetSystem(struct UNiagaraSystem* InSystem); // Function Niagara.NiagaraPreviewBase.SetSystem // (Event|Public|BlueprintCallable|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void SetLabelText(struct FText InXAxisText, struct FText InYAxisText); // Function Niagara.NiagaraPreviewBase.SetLabelText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // Param Size : 0x30, 0x7FF77510D9D0
};

// Class Niagara.NiagaraPreviewAxis
// Size : 0x28 (Inherited : 0x28)
struct UNiagaraPreviewAxis : UObject {

	int32_t Num(); // Function Niagara.NiagaraPreviewAxis.Num // (Native|Event|Public|BlueprintEvent) // Param Size : 0x4, 0x7FF774C0D780
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString OutLabelText); // Function Niagara.NiagaraPreviewAxis.ApplyToPreview // (Native|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x20, 0x7FF774C0D540
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size : 0x38 (Inherited : 0x28)
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	struct FName Param; // 0x28(0x8)
	int32_t Count; // 0x30(0x4)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size : 0x40 (Inherited : 0x38)
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; // 0x38(0x4)
	int32_t Max; // 0x3C(0x4)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size : 0x40 (Inherited : 0x38)
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; // 0x38(0x4)
	float Max; // 0x3C(0x4)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size : 0x48 (Inherited : 0x38)
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector2D Min; // 0x38(0x8)
	struct FVector2D Max; // 0x40(0x8)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size : 0x50 (Inherited : 0x38)
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector Min; // 0x38(0xC)
	struct FVector Max; // 0x44(0xC)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size : 0x60 (Inherited : 0x38)
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
	struct FVector4 Min; // 0x40(0x10)
	struct FVector4 Max; // 0x50(0x10)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size : 0x58 (Inherited : 0x38)
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	struct FLinearColor Min; // 0x38(0x10)
	struct FLinearColor Max; // 0x48(0x10)
};

// Class Niagara.NiagaraPreviewGrid
// Size : 0x270 (Inherited : 0x220)
struct ANiagaraPreviewGrid : AActor {
	struct UNiagaraSystem* System; // 0x220(0x8)
	enum class ENiagaraPreviewGridResetMode ResetMode; // 0x228(0x1)
	unsigned char UnknownData_229[0x0007]; // 0x229(0x7)
	struct UNiagaraPreviewAxis* PreviewAxisX; // 0x230(0x8)
	struct UNiagaraPreviewAxis* PreviewAxisY; // 0x238(0x8)
	class ANiagaraPreviewBase* PreviewClass; // 0x240(0x8)
	float SpacingX; // 0x248(0x4)
	float SpacingY; // 0x24C(0x4)
	int32_t NumX; // 0x250(0x4)
	int32_t NumY; // 0x254(0x4)
	struct TArray<struct UChildActorComponent*> PreviewComponents; // 0x258(0x10)
	unsigned char UnknownData_268[0x0008]; // 0x268(0x8)

	void SetPaused(bool bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C0D7B0
	void GetPreviews(struct TArray<struct UNiagaraComponent*> OutPreviews); // Function Niagara.NiagaraPreviewGrid.GetPreviews // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774C0D6D0
	void DeactivatePreviews(); // Function Niagara.NiagaraPreviewGrid.DeactivatePreviews // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774C0D6B0
	void ActivatePreviews(bool bReset); // Function Niagara.NiagaraPreviewGrid.ActivatePreviews // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C0D4B0
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size : 0x760 (Inherited : 0x50)
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x50(0x8)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x58(0x28)
	enum class ENiagaraRibbonFacingMode FacingMode; // 0x80(0x1)
	unsigned char UnknownData_81[0x0003]; // 0x81(0x3)
	float UV0TilingDistance; // 0x84(0x4)
	struct FVector2D UV0Scale; // 0x88(0x8)
	struct FVector2D UV0Offset; // 0x90(0x8)
	enum class ENiagaraRibbonAgeOffsetMode UV0AgeOffsetMode; // 0x98(0x1)
	unsigned char UnknownData_99[0x0003]; // 0x99(0x3)
	float UV1TilingDistance; // 0x9C(0x4)
	struct FVector2D UV1Scale; // 0xA0(0x8)
	struct FVector2D UV1Offset; // 0xA8(0x8)
	enum class ENiagaraRibbonAgeOffsetMode UV1AgeOffsetMode; // 0xB0(0x1)
	enum class ENiagaraRibbonDrawDirection DrawDirection; // 0xB1(0x1)
	unsigned char UnknownData_B2[0x0002]; // 0xB2(0x2)
	float CurveTension; // 0xB4(0x4)
	enum class ENiagaraRibbonTessellationMode TessellationMode; // 0xB8(0x1)
	unsigned char UnknownData_B9[0x0003]; // 0xB9(0x3)
	int32_t TessellationFactor; // 0xBC(0x4)
	bool bUseConstantFactor; // 0xC0(0x1)
	unsigned char UnknownData_C1[0x0003]; // 0xC1(0x3)
	float TessellationAngle; // 0xC4(0x4)
	bool bScreenSpaceTessellation; // 0xC8(0x1)
	unsigned char UnknownData_C9[0x0007]; // 0xC9(0x7)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xD0(0x78)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x148(0x78)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1C0(0x78)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x238(0x78)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x2B0(0x78)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x328(0x78)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x3A0(0x78)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x418(0x78)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x490(0x78)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x508(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x580(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x5F8(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x670(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x6E8(0x78)
};

// Class Niagara.NiagaraScript
// Size : 0x520 (Inherited : 0x28)
struct UNiagaraScript : UObject {
	enum class ENiagaraScriptUsage Usage; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	int32_t UsageIndex; // 0x2C(0x4)
	struct FGuid UsageId; // 0x30(0x10)
	struct FNiagaraParameterStore RapidIterationParameters; // 0x40(0xB8)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xF8(0xD8)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x1D0(0x10)
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // 0x1E0(0x48)
	unsigned char UnknownData_228[0x01B0]; // 0x228(0x1B0)
	struct FNiagaraVMExecutableData CachedScriptVM; // 0x3D8(0x128)
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x500(0x10)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x510(0x10)

	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete // (Final|Native|Public) // Param Size : 0x0, 0x7FF774A435E0
};

// Class Niagara.NiagaraScriptSourceBase
// Size : 0x48 (Inherited : 0x28)
struct UNiagaraScriptSourceBase : UObject {
	unsigned char UnknownData_28[0x0020]; // 0x28(0x20)
};

// Class Niagara.NiagaraSettings
// Size : 0x98 (Inherited : 0x38)
struct UNiagaraSettings : UDeveloperSettings {
	struct TArray<struct FSoftObjectPath> AdditionalParameterTypes; // 0x38(0x10)
	struct TArray<struct FSoftObjectPath> AdditionalPayloadTypes; // 0x48(0x10)
	struct TArray<struct FSoftObjectPath> AdditionalParameterEnums; // 0x58(0x10)
	struct FSoftObjectPath DefaultEffectType; // 0x68(0x18)
	struct TArray<struct FText> QualityLevels; // 0x80(0x10)
	struct UNiagaraEffectType* DefaultEffectTypePtr; // 0x90(0x8)
};

// Class Niagara.NiagaraSimulationStageBase
// Size : 0x38 (Inherited : 0x28)
struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	struct UNiagaraScript* Script; // 0x28(0x8)
	struct FName SimulationStageName; // 0x30(0x8)
};

// Class Niagara.NiagaraSimulationStageGeneric
// Size : 0x70 (Inherited : 0x38)
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	enum class ENiagaraIterationSource IterationSource; // 0x38(0x1)
	unsigned char UnknownData_39[0x0003]; // 0x39(0x3)
	int32_t Iterations; // 0x3C(0x4)
	unsigned char bSpawnOnly : 1; // 0x40(0x1)
	unsigned char UnknownData_40_1 : 7; // 0x40(0x1)
	unsigned char UnknownData_41[0x0007]; // 0x41(0x7)
	struct FNiagaraVariableDataInterfaceBinding DataInterface; // 0x48(0x28)
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size : 0x8B0 (Inherited : 0x50)
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x50(0x8)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x58(0x28)
	enum class ENiagaraSpriteAlignment Alignment; // 0x80(0x1)
	enum class ENiagaraSpriteFacingMode FacingMode; // 0x81(0x1)
	unsigned char UnknownData_82[0x0002]; // 0x82(0x2)
	struct FVector2D PivotInUVSpace; // 0x84(0x8)
	enum class ENiagaraSortMode SortMode; // 0x8C(0x1)
	unsigned char UnknownData_8D[0x0003]; // 0x8D(0x3)
	struct FVector2D SubImageSize; // 0x90(0x8)
	unsigned char bSubImageBlend : 1; // 0x98(0x1)
	unsigned char bRemoveHMDRollInVR : 1; // 0x98(0x1)
	unsigned char bSortOnlyWhenTranslucent : 1; // 0x98(0x1)
	unsigned char UnknownData_98_3 : 5; // 0x98(0x1)
	unsigned char UnknownData_99[0x0003]; // 0x99(0x3)
	float MinFacingCameraBlendDistance; // 0x9C(0x4)
	float MaxFacingCameraBlendDistance; // 0xA0(0x4)
	unsigned char UnknownData_A4[0x0004]; // 0xA4(0x4)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xA8(0x78)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x120(0x78)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x198(0x78)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x210(0x78)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x288(0x78)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x300(0x78)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x378(0x78)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x3F0(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x468(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4E0(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x558(0x78)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5D0(0x78)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x648(0x78)
	struct FNiagaraVariableAttributeBinding UVScaleBinding; // 0x6C0(0x78)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x738(0x78)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x7B0(0x78)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x828(0x78)
	unsigned char UnknownData_8A0[0x0010]; // 0x8A0(0x10)
};

// Class Niagara.NiagaraSystem
// Size : 0x478 (Inherited : 0x30)
struct UNiagaraSystem : UFXSystemAsset {
	unsigned char UnknownData_30[0x0001]; // 0x30(0x1)
	bool bDumpDebugSystemInfo; // 0x31(0x1)
	bool bDumpDebugEmitterInfo; // 0x32(0x1)
	unsigned char UnknownData_33[0x0001]; // 0x33(0x1)
	unsigned char bFixedBounds : 1; // 0x34(0x1)
	unsigned char UnknownData_34_1 : 7; // 0x34(0x1)
	unsigned char UnknownData_35[0x0003]; // 0x35(0x3)
	struct UNiagaraEffectType* EffectType; // 0x38(0x8)
	bool bOverrideScalabilitySettings; // 0x40(0x1)
	unsigned char UnknownData_41[0x0007]; // 0x41(0x7)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x48(0x10)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x58(0x10)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; // 0x68(0x10)
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x78(0x10)
	struct UNiagaraScript* SystemSpawnScript; // 0x88(0x8)
	struct UNiagaraScript* SystemUpdateScript; // 0x90(0x8)
	unsigned char UnknownData_98[0x0010]; // 0x98(0x10)
	struct FNiagaraSystemCompiledData SystemCompiledData; // 0xA8(0x258)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x300(0x108)
	struct FBox FixedBounds; // 0x408(0x1C)
	bool bAutoDeactivate; // 0x424(0x1)
	unsigned char UnknownData_425[0x0003]; // 0x425(0x3)
	float WarmupTime; // 0x428(0x4)
	int32_t WarmupTickCount; // 0x42C(0x4)
	float WarmupTickDelta; // 0x430(0x4)
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x434(0x1)
	unsigned char UnknownData_435[0x0003]; // 0x435(0x3)
	struct TArray<struct FName> UserDINamesReadInSystemScripts; // 0x438(0x10)
	unsigned char UnknownData_448[0x0030]; // 0x448(0x30)
};

