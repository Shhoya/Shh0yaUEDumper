// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
// Size : 0xC (Inherited : 0x0)
struct FTemplateSequenceBindingOverrideData {
	struct FWeakObjectPtr<struct UObject> Object; // 0x0(0x8)
	bool bOverridesDefault; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
};

// ScriptStruct TemplateSequence.TemplateSequenceInstanceData
// Size : 0x20 (Inherited : 0x8)
struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData {
	struct FMovieSceneEvaluationOperand Operand; // 0x8(0x14)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
// Size : 0x48 (Inherited : 0x20)
struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate {
	struct FFrameNumber SectionStartTime; // 0x20(0x4)
	struct FGuid OuterBindingId; // 0x24(0x10)
	struct FMovieSceneEvaluationOperand InnerOperand; // 0x34(0x14)
};

