// Class VariantManagerContent.LevelVariantSets
// Size : 0x90 (Inherited : 0x28)
struct ULevelVariantSets : UObject {
	class UObject* DirectorClass; // 0x28(0x8)
	struct TArray<struct UVariantSet*> VariantSets; // 0x30(0x10)
	unsigned char UnknownData_40[0x0050]; // 0x40(0x50)

	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF77498AE50
	struct UVariantSet* GetVariantSet(int32_t VariantSetIndex); // Function VariantManagerContent.LevelVariantSets.GetVariantSet // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF77498ADC0
	int32_t GetNumVariantSets(); // Function VariantManagerContent.LevelVariantSets.GetNumVariantSets // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF77498AA60
};

// Class VariantManagerContent.LevelVariantSetsActor
// Size : 0x238 (Inherited : 0x220)
struct ALevelVariantSetsActor : AActor {
	struct FSoftObjectPath LevelVariantSets; // 0x220(0x18)

	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName // (Final|Native|Public|BlueprintCallable) // Param Size : 0x21, 0x7FF77498B250
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF77498B190
	void SetLevelVariantSets(struct ULevelVariantSets* InVariantSets); // Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF77498B0F0
	struct ULevelVariantSets* GetLevelVariantSets(bool bLoad); // Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF77498A990
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size : 0x40 (Inherited : 0x28)
struct ULevelVariantSetsFunctionDirector : UObject {
	unsigned char UnknownData_28[0x0018]; // 0x28(0x18)
};

// Class VariantManagerContent.PropertyValue
// Size : 0x1B8 (Inherited : 0x28)
struct UPropertyValue : UObject {
	unsigned char UnknownData_28[0x0060]; // 0x28(0x60)
	struct TArray<FieldPathProperty> Properties; // 0x88(0x10)
	struct TArray<int32_t> PropertyIndices; // 0x98(0x10)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; // 0xA8(0x10)
	struct FString FullDisplayString; // 0xB8(0x10)
	struct FName PropertySetterName; // 0xC8(0x8)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0xD0(0x50)
	bool bHasRecordedData; // 0x120(0x1)
	unsigned char UnknownData_121[0x0007]; // 0x121(0x7)
	class UObject* LeafPropertyClass; // 0x128(0x8)
	unsigned char UnknownData_130[0x0008]; // 0x130(0x8)
	struct TArray<enum class None> ValueBytes; // 0x138(0x10)
	enum class EPropertyValueCategory PropCategory; // 0x148(0x1)
	unsigned char UnknownData_149[0x006F]; // 0x149(0x6F)

	bool HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF77498AF40
	struct FText GetPropertyTooltip(); // Function VariantManagerContent.PropertyValue.GetPropertyTooltip // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF77498AB40
	struct FString GetFullDisplayString(); // Function VariantManagerContent.PropertyValue.GetFullDisplayString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF77498A950
};

// Class VariantManagerContent.PropertyValueTransform
// Size : 0x1B8 (Inherited : 0x1B8)
struct UPropertyValueTransform : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueVisibility
// Size : 0x1B8 (Inherited : 0x1B8)
struct UPropertyValueVisibility : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueColor
// Size : 0x1B8 (Inherited : 0x1B8)
struct UPropertyValueColor : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueMaterial
// Size : 0x1B8 (Inherited : 0x1B8)
struct UPropertyValueMaterial : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueOption
// Size : 0x1B8 (Inherited : 0x1B8)
struct UPropertyValueOption : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueSoftObject
// Size : 0x1B8 (Inherited : 0x1B8)
struct UPropertyValueSoftObject : UPropertyValue {
};

// Class VariantManagerContent.SwitchActor
// Size : 0x248 (Inherited : 0x220)
struct ASwitchActor : AActor {
	unsigned char UnknownData_220[0x0018]; // 0x220(0x18)
	struct USceneComponent* SceneComponent; // 0x238(0x8)
	int32_t LastSelectedOption; // 0x240(0x4)
	unsigned char UnknownData_244[0x0004]; // 0x244(0x4)

	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF77498AFA0
	int32_t GetSelectedOption(); // Function VariantManagerContent.SwitchActor.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF77498ABE0
	struct TArray<struct AActor*> GetOptions(); // Function VariantManagerContent.SwitchActor.GetOptions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF77498AAC0
};

// Class VariantManagerContent.Variant
// Size : 0x70 (Inherited : 0x28)
struct UVariant : UObject {
	struct FText DisplayText; // 0x28(0x18)
	unsigned char UnknownData_40[0x0018]; // 0x40(0x18)
	struct TArray<struct UVariantObjectBinding*> ObjectBindings; // 0x58(0x10)
	struct UTexture2D* Thumbnail; // 0x68(0x8)

	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF77498B170
	void SetDisplayText(struct FText NewDisplayText); // Function VariantManagerContent.Variant.SetDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF77498B020
	bool IsActive(); // Function VariantManagerContent.Variant.IsActive // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF77498AF70
	struct UTexture2D* GetThumbnail(); // Function VariantManagerContent.Variant.GetThumbnail // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF77498AC10
	int32_t GetNumActors(); // Function VariantManagerContent.Variant.GetNumActors // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF77498AA30
	struct FText GetDisplayText(); // Function VariantManagerContent.Variant.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF77498A8B0
	struct AActor* GetActor(int32_t ActorIndex); // Function VariantManagerContent.Variant.GetActor // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF77498A820
};

// Class VariantManagerContent.VariantObjectBinding
// Size : 0x90 (Inherited : 0x28)
struct UVariantObjectBinding : UObject {
	struct FString CachedActorLabel; // 0x28(0x10)
	struct FSoftObjectPath ObjectPtr; // 0x38(0x18)
	LazyObjectProperty LazyObjectPtr; // 0x50(0x1C)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
	struct TArray<struct UPropertyValue*> CapturedProperties; // 0x70(0x10)
	struct TArray<struct FFunctionCaller> FunctionCallers; // 0x80(0x10)
};

// Class VariantManagerContent.VariantSet
// Size : 0x70 (Inherited : 0x28)
struct UVariantSet : UObject {
	struct FText DisplayText; // 0x28(0x18)
	unsigned char UnknownData_40[0x0018]; // 0x40(0x18)
	bool bExpanded; // 0x58(0x1)
	unsigned char UnknownData_59[0x0007]; // 0x59(0x7)
	struct TArray<struct UVariant*> Variants; // 0x60(0x10)

	void SetDisplayText(struct FText NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF77498B020
	struct UVariant* GetVariantByName(struct FString VariantName); // Function VariantManagerContent.VariantSet.GetVariantByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF77498ACD0
	struct UVariant* GetVariant(int32_t VariantIndex); // Function VariantManagerContent.VariantSet.GetVariant // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF77498AC40
	int32_t GetNumVariants(); // Function VariantManagerContent.VariantSet.GetNumVariants // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF77498AA90
	struct FText GetDisplayText(); // Function VariantManagerContent.VariantSet.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF77498A8B0
};

