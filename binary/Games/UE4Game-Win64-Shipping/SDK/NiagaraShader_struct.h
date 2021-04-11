// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// Size : 0x30 (Inherited : 0x0)
struct FNiagaraDataInterfaceGPUParamInfo {
	struct FString DataInterfaceHLSLSymbol; // 0x0(0x10)
	struct FString DIClassName; // 0x10(0x10)
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20(0x10)
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// Size : 0x28 (Inherited : 0x0)
struct FNiagaraDataInterfaceGeneratedFunction {
	unsigned char UnknownData_0[0x0028]; // 0x0(0x28)
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// Size : 0x48 (Inherited : 0x0)
struct FNiagaraCompileEvent {
	enum class FNiagaraCompileEventSeverity Severity; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct FString Message; // 0x8(0x10)
	struct FGuid NodeGuid; // 0x18(0x10)
	struct FGuid PinGuid; // 0x28(0x10)
	struct TArray<struct FGuid> StackGuids; // 0x38(0x10)
};

