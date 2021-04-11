// Class CoreUObject.Object
// Size : 0x28 (Inherited : 0x0)
struct UObject {
	unsigned char UnknownData_0[0x0028]; // 0x0(0x28)

	void ExecuteUbergraph(int32_t EntryPoint); // Function CoreUObject.Object.ExecuteUbergraph // (Event|Public|BlueprintEvent) // Param Size : 0x4, 0x7FF77510D9D0
};

// Class CoreUObject.Interface
// Size : 0x28 (Inherited : 0x28)
struct UInterface : UObject {
};

// Class CoreUObject.GCObjectReferencer
// Size : 0x70 (Inherited : 0x28)
struct UGCObjectReferencer : UObject {
	unsigned char UnknownData_28[0x0048]; // 0x28(0x48)
};

// Class CoreUObject.TextBuffer
// Size : 0x50 (Inherited : 0x28)
struct UTextBuffer : UObject {
	unsigned char UnknownData_28[0x0028]; // 0x28(0x28)
};

// Class CoreUObject.Field
// Size : 0x30 (Inherited : 0x28)
struct UField : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class CoreUObject.Struct
// Size : 0xB0 (Inherited : 0x30)
struct UStruct : UField {
	unsigned char UnknownData_30[0x0080]; // 0x30(0x80)
};

// Class CoreUObject.ScriptStruct
// Size : 0xC0 (Inherited : 0xB0)
struct UScriptStruct : UStruct {
	unsigned char UnknownData_B0[0x0010]; // 0xB0(0x10)
};

// Class CoreUObject.Package
// Size : 0x98 (Inherited : 0x28)
struct UPackage : UObject {
	unsigned char UnknownData_28[0x0070]; // 0x28(0x70)
};

// Class CoreUObject.Class
// Size : 0x230 (Inherited : 0xB0)
struct UClass : UStruct {
	unsigned char UnknownData_B0[0x0180]; // 0xB0(0x180)
};

// Class CoreUObject.Function
// Size : 0xE0 (Inherited : 0xB0)
struct UFunction : UStruct {
	unsigned char UnknownData_B0[0x0030]; // 0xB0(0x30)
};

// Class CoreUObject.DelegateFunction
// Size : 0xE0 (Inherited : 0xE0)
struct UDelegateFunction : UFunction {
};

// Class CoreUObject.SparseDelegateFunction
// Size : 0xF0 (Inherited : 0xE0)
struct USparseDelegateFunction : UDelegateFunction {
	unsigned char UnknownData_E0[0x0010]; // 0xE0(0x10)
};

// Class CoreUObject.DynamicClass
// Size : 0x2B0 (Inherited : 0x230)
struct UDynamicClass : UClass {
	unsigned char UnknownData_230[0x0080]; // 0x230(0x80)
};

// Class CoreUObject.PackageMap
// Size : 0xE0 (Inherited : 0x28)
struct UPackageMap : UObject {
	unsigned char UnknownData_28[0x00B8]; // 0x28(0xB8)
};

// Class CoreUObject.Enum
// Size : 0x60 (Inherited : 0x30)
struct UEnum : UField {
	unsigned char UnknownData_30[0x0030]; // 0x30(0x30)
};

// Class CoreUObject.LinkerPlaceholderClass
// Size : 0x3E8 (Inherited : 0x230)
struct ULinkerPlaceholderClass : UClass {
	unsigned char UnknownData_230[0x01B8]; // 0x230(0x1B8)
};

// Class CoreUObject.LinkerPlaceholderExportObject
// Size : 0xF0 (Inherited : 0x28)
struct ULinkerPlaceholderExportObject : UObject {
	unsigned char UnknownData_28[0x00C8]; // 0x28(0xC8)
};

// Class CoreUObject.LinkerPlaceholderFunction
// Size : 0x298 (Inherited : 0xE0)
struct ULinkerPlaceholderFunction : UFunction {
	unsigned char UnknownData_E0[0x01B8]; // 0xE0(0x1B8)
};

// Class CoreUObject.MetaData
// Size : 0xC8 (Inherited : 0x28)
struct UMetaData : UObject {
	unsigned char UnknownData_28[0x00A0]; // 0x28(0xA0)
};

// Class CoreUObject.ObjectRedirector
// Size : 0x30 (Inherited : 0x28)
struct UObjectRedirector : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class CoreUObject.Property
// Size : 0x70 (Inherited : 0x30)
struct UProperty : UField {
	unsigned char UnknownData_30[0x0040]; // 0x30(0x40)
};

// Class CoreUObject.EnumProperty
// Size : 0x80 (Inherited : 0x70)
struct UEnumProperty : UProperty {
	unsigned char UnknownData_70[0x0010]; // 0x70(0x10)
};

// Class CoreUObject.ArrayProperty
// Size : 0x78 (Inherited : 0x70)
struct UArrayProperty : UProperty {
	unsigned char UnknownData_70[0x0008]; // 0x70(0x8)
};

// Class CoreUObject.ObjectPropertyBase
// Size : 0x78 (Inherited : 0x70)
struct UObjectPropertyBase : UProperty {
	unsigned char UnknownData_70[0x0008]; // 0x70(0x8)
};

// Class CoreUObject.BoolProperty
// Size : 0x78 (Inherited : 0x70)
struct UBoolProperty : UProperty {
	unsigned char UnknownData_70[0x0008]; // 0x70(0x8)
};

// Class CoreUObject.NumericProperty
// Size : 0x70 (Inherited : 0x70)
struct UNumericProperty : UProperty {
};

// Class CoreUObject.ByteProperty
// Size : 0x78 (Inherited : 0x70)
struct UByteProperty : UNumericProperty {
	unsigned char UnknownData_70[0x0008]; // 0x70(0x8)
};

// Class CoreUObject.ObjectProperty
// Size : 0x78 (Inherited : 0x78)
struct UObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.ClassProperty
// Size : 0x80 (Inherited : 0x78)
struct UClassProperty : UObjectProperty {
	unsigned char UnknownData_78[0x0008]; // 0x78(0x8)
};

// Class CoreUObject.DelegateProperty
// Size : 0x78 (Inherited : 0x70)
struct UDelegateProperty : UProperty {
	unsigned char UnknownData_70[0x0008]; // 0x70(0x8)
};

// Class CoreUObject.DoubleProperty
// Size : 0x70 (Inherited : 0x70)
struct UDoubleProperty : UNumericProperty {
};

// Class CoreUObject.FloatProperty
// Size : 0x70 (Inherited : 0x70)
struct UFloatProperty : UNumericProperty {
};

// Class CoreUObject.IntProperty
// Size : 0x70 (Inherited : 0x70)
struct UIntProperty : UNumericProperty {
};

// Class CoreUObject.Int8Property
// Size : 0x70 (Inherited : 0x70)
struct UInt8Property : UNumericProperty {
};

// Class CoreUObject.Int16Property
// Size : 0x70 (Inherited : 0x70)
struct UInt16Property : UNumericProperty {
};

// Class CoreUObject.Int64Property
// Size : 0x70 (Inherited : 0x70)
struct UInt64Property : UNumericProperty {
};

// Class CoreUObject.InterfaceProperty
// Size : 0x78 (Inherited : 0x70)
struct UInterfaceProperty : UProperty {
	unsigned char UnknownData_70[0x0008]; // 0x70(0x8)
};

// Class CoreUObject.LazyObjectProperty
// Size : 0x78 (Inherited : 0x78)
struct ULazyObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.MapProperty
// Size : 0x98 (Inherited : 0x70)
struct UMapProperty : UProperty {
	unsigned char UnknownData_70[0x0028]; // 0x70(0x28)
};

// Class CoreUObject.MulticastDelegateProperty
// Size : 0x78 (Inherited : 0x70)
struct UMulticastDelegateProperty : UProperty {
	unsigned char UnknownData_70[0x0008]; // 0x70(0x8)
};

// Class CoreUObject.MulticastInlineDelegateProperty
// Size : 0x78 (Inherited : 0x78)
struct UMulticastInlineDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.MulticastSparseDelegateProperty
// Size : 0x78 (Inherited : 0x78)
struct UMulticastSparseDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.NameProperty
// Size : 0x70 (Inherited : 0x70)
struct UNameProperty : UProperty {
};

// Class CoreUObject.SetProperty
// Size : 0x90 (Inherited : 0x70)
struct USetProperty : UProperty {
	unsigned char UnknownData_70[0x0020]; // 0x70(0x20)
};

// Class CoreUObject.SoftObjectProperty
// Size : 0x78 (Inherited : 0x78)
struct USoftObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.SoftClassProperty
// Size : 0x80 (Inherited : 0x78)
struct USoftClassProperty : USoftObjectProperty {
	unsigned char UnknownData_78[0x0008]; // 0x78(0x8)
};

// Class CoreUObject.StrProperty
// Size : 0x70 (Inherited : 0x70)
struct UStrProperty : UProperty {
};

// Class CoreUObject.StructProperty
// Size : 0x78 (Inherited : 0x70)
struct UStructProperty : UProperty {
	unsigned char UnknownData_70[0x0008]; // 0x70(0x8)
};

// Class CoreUObject.UInt16Property
// Size : 0x70 (Inherited : 0x70)
struct UUInt16Property : UNumericProperty {
};

// Class CoreUObject.UInt32Property
// Size : 0x70 (Inherited : 0x70)
struct UUInt32Property : UNumericProperty {
};

// Class CoreUObject.UInt64Property
// Size : 0x70 (Inherited : 0x70)
struct UUInt64Property : UNumericProperty {
};

// Class CoreUObject.WeakObjectProperty
// Size : 0x78 (Inherited : 0x78)
struct UWeakObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.TextProperty
// Size : 0x70 (Inherited : 0x70)
struct UTextProperty : UProperty {
};

// Class CoreUObject.PropertyWrapper
// Size : 0x30 (Inherited : 0x28)
struct UPropertyWrapper : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class CoreUObject.MulticastDelegatePropertyWrapper
// Size : 0x30 (Inherited : 0x30)
struct UMulticastDelegatePropertyWrapper : UPropertyWrapper {
};

// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// Size : 0x30 (Inherited : 0x30)
struct UMulticastInlineDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper {
};

