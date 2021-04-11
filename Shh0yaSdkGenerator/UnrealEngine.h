#ifndef _UNREALENGINE_H_
#define _UNREALENGINE_H_

#include "utility.h"
#include "memory.h"

#pragma warning(disable:4996)

enum { NAME_SIZE = 1024, FNameBlockOffsets = 65536, FNameMaxBlocks = 8192 };

struct TArray {
	PVOID Instance;
	DWORD ArrayNum;
	DWORD ArrayMax;
};

struct FString {
	PCWCHAR String;
	DWORD Length;
	DWORD Max;
};

enum EPropertyFlags : DWORD64
{
	CPF_None = 0,

	CPF_Edit = 0x0000000000000001,	///< Property is user-settable in the editor.
	CPF_ConstParm = 0x0000000000000002,	///< This is a constant function parameter
	CPF_BlueprintVisible = 0x0000000000000004,	///< This property can be read by blueprint code
	CPF_ExportObject = 0x0000000000000008,	///< Object can be exported with actor.
	CPF_BlueprintReadOnly = 0x0000000000000010,	///< This property cannot be modified by blueprint code
	CPF_Net = 0x0000000000000020,	///< Property is relevant to network replication.
	CPF_EditFixedSize = 0x0000000000000040,	///< Indicates that elements of an array can be modified, but its size cannot be changed.
	CPF_Parm = 0x0000000000000080,	///< Function/When call parameter.
	CPF_OutParm = 0x0000000000000100,	///< Value is copied out after function call.
	CPF_ZeroConstructor = 0x0000000000000200,	///< memset is fine for construction
	CPF_ReturnParm = 0x0000000000000400,	///< Return value.
	CPF_DisableEditOnTemplate = 0x0000000000000800,	///< Disable editing of this property on an archetype/sub-blueprint
	//CPF_      						= 0x0000000000001000,	///< 
	CPF_Transient = 0x0000000000002000,	///< Property is transient: shouldn't be saved or loaded, except for Blueprint CDOs.
	CPF_Config = 0x0000000000004000,	///< Property should be loaded/saved as permanent profile.
	//CPF_								= 0x0000000000008000,	///< 
	CPF_DisableEditOnInstance = 0x0000000000010000,	///< Disable editing on an instance of this class
	CPF_EditConst = 0x0000000000020000,	///< Property is uneditable in the editor.
	CPF_GlobalConfig = 0x0000000000040000,	///< Load config from base class, not subclass.
	CPF_InstancedReference = 0x0000000000080000,	///< Property is a component references.
	//CPF_								= 0x0000000000100000,	///<
	CPF_DuplicateTransient = 0x0000000000200000,	///< Property should always be reset to the default value during any type of duplication (copy/paste, binary duplication, etc.)
	CPF_SubobjectReference = 0x0000000000400000,	///< Property contains subobject references (TSubobjectPtr)
	//CPF_    							= 0x0000000000800000,	///< 
	CPF_SaveGame = 0x0000000001000000,	///< Property should be serialized for save games, this is only checked for game-specific archives with ArIsSaveGame
	CPF_NoClear = 0x0000000002000000,	///< Hide clear (and browse) button.
	//CPF_  							= 0x0000000004000000,	///<
	CPF_ReferenceParm = 0x0000000008000000,	///< Value is passed by reference; CPF_OutParam and CPF_Param should also be set.
	CPF_BlueprintAssignable = 0x0000000010000000,	///< MC Delegates only.  Property should be exposed for assigning in blueprint code
	CPF_Deprecated = 0x0000000020000000,	///< Property is deprecated.  Read it from an archive, but don't save it.
	CPF_IsPlainOldData = 0x0000000040000000,	///< If this is set, then the property can be memcopied instead of CopyCompleteValue / CopySingleValue
	CPF_RepSkip = 0x0000000080000000,	///< Not replicated. For non replicated properties in replicated structs 
	CPF_RepNotify = 0x0000000100000000,	///< Notify actors when a property is replicated
	CPF_Interp = 0x0000000200000000,	///< interpolatable property for use with matinee
	CPF_NonTransactional = 0x0000000400000000,	///< Property isn't transacted
	CPF_EditorOnly = 0x0000000800000000,	///< Property should only be loaded in the editor
	CPF_NoDestructor = 0x0000001000000000,	///< No destructor
	//CPF_								= 0x0000002000000000,	///<
	CPF_AutoWeak = 0x0000004000000000,	///< Only used for weak pointers, means the export type is autoweak
	CPF_ContainsInstancedReference = 0x0000008000000000,	///< Property contains component references.
	CPF_AssetRegistrySearchable = 0x0000010000000000,	///< asset instances will add properties with this flag to the asset registry automatically
	CPF_SimpleDisplay = 0x0000020000000000,	///< The property is visible by default in the editor details view
	CPF_AdvancedDisplay = 0x0000040000000000,	///< The property is advanced and not visible by default in the editor details view
	CPF_Protected = 0x0000080000000000,	///< property is protected from the perspective of script
	CPF_BlueprintCallable = 0x0000100000000000,	///< MC Delegates only.  Property should be exposed for calling in blueprint code
	CPF_BlueprintAuthorityOnly = 0x0000200000000000,	///< MC Delegates only.  This delegate accepts (only in blueprint) only events with BlueprintAuthorityOnly.
	CPF_TextExportTransient = 0x0000400000000000,	///< Property shouldn't be exported to text format (e.g. copy/paste)
	CPF_NonPIEDuplicateTransient = 0x0000800000000000,	///< Property should only be copied in PIE
	CPF_ExposeOnSpawn = 0x0001000000000000,	///< Property is exposed on spawn
	CPF_PersistentInstance = 0x0002000000000000,	///< A object referenced by the property is duplicated like a component. (Each actor should have an own instance.)
	CPF_UObjectWrapper = 0x0004000000000000,	///< Property was parsed as a wrapper class like TSubclassOf<T>, FScriptInterface etc., rather than a USomething*
	CPF_HasGetValueTypeHash = 0x0008000000000000,	///< This property can generate a meaningful hash value.
	CPF_NativeAccessSpecifierPublic = 0x0010000000000000,	///< Public native access specifier
	CPF_NativeAccessSpecifierProtected = 0x0020000000000000,	///< Protected native access specifier
	CPF_NativeAccessSpecifierPrivate = 0x0040000000000000,	///< Private native access specifier
	CPF_SkipSerialization = 0x0080000000000000,	///< Property shouldn't be serialized, can still be exported to text
};
enum EObjectFlags
{
	// Do not add new flags unless they truly belong here. There are alternatives.
	// if you change any the bit of any of the RF_Load flags, then you will need legacy serialization
	RF_NoFlags = 0x00000000,	///< No flags, used to avoid a cast

	// This first group of flags mostly has to do with what kind of object it is. Other than transient, these are the persistent object flags.
	// The garbage collector also tends to look at these.
	RF_Public = 0x00000001,	///< Object is visible outside its package.
	RF_Standalone = 0x00000002,	///< Keep object around for editing even if unreferenced.
	RF_MarkAsNative = 0x00000004,	///< Object (UField) will be marked as native on construction (DO NOT USE THIS FLAG in HasAnyFlags() etc)
	RF_Transactional = 0x00000008,	///< Object is transactional.
	RF_ClassDefaultObject = 0x00000010,	///< This object is its class's default object
	RF_ArchetypeObject = 0x00000020,	///< This object is a template for another object - treat like a class default object
	RF_Transient = 0x00000040,	///< Don't save object.

	// This group of flags is primarily concerned with garbage collection.
	RF_MarkAsRootSet = 0x00000080,	///< Object will be marked as root set on construction and not be garbage collected, even if unreferenced (DO NOT USE THIS FLAG in HasAnyFlags() etc)
	RF_TagGarbageTemp = 0x00000100,	///< This is a temp user flag for various utilities that need to use the garbage collector. The garbage collector itself does not interpret it.

	// The group of flags tracks the stages of the lifetime of a uobject
	RF_NeedInitialization = 0x00000200,	///< This object has not completed its initialization process. Cleared when ~FObjectInitializer completes
	RF_NeedLoad = 0x00000400,	///< During load, indicates object needs loading.
	RF_KeepForCooker = 0x00000800,	///< Keep this object during garbage collection because it's still being used by the cooker
	RF_NeedPostLoad = 0x00001000,	///< Object needs to be postloaded.
	RF_NeedPostLoadSubobjects = 0x00002000,	///< During load, indicates that the object still needs to instance subobjects and fixup serialized component references
	RF_NewerVersionExists = 0x00004000,	///< Object has been consigned to oblivion due to its owner package being reloaded, and a newer version currently exists
	RF_BeginDestroyed = 0x00008000,	///< BeginDestroy has been called on the object.
	RF_FinishDestroyed = 0x00010000,	///< FinishDestroy has been called on the object.

	// Misc. Flags
	RF_BeingRegenerated = 0x00020000,	///< Flagged on UObjects that are used to create UClasses (e.g. Blueprints) while they are regenerating their UClass on load (See FLinkerLoad::CreateExport())
	RF_DefaultSubObject = 0x00040000,	///< Flagged on subobjects that are defaults
	RF_WasLoaded = 0x00080000,	///< Flagged on UObjects that were loaded
	RF_TextExportTransient = 0x00100000,	///< Do not export object to text form (e.g. copy/paste). Generally used for sub-objects that can be regenerated from data in their parent object.
	RF_LoadCompleted = 0x00200000,	///< Object has been completely serialized by linkerload at least once. DO NOT USE THIS FLAG, It should be replaced with RF_WasLoaded.
	RF_InheritableComponentTemplate = 0x00400000, ///< Archetype of the object can be in its super class
	RF_DuplicateTransient = 0x00800000,	///< Object should not be included in any type of duplication (copy/paste, binary duplication, etc.)
	RF_StrongRefOnFrame = 0x01000000,	///< References to this object from persistent function frame are handled as strong ones.
	RF_NonPIEDuplicateTransient = 0x02000000,	///< Object should not be included for duplication unless it's being duplicated for a PIE session
	RF_Dynamic = 0x04000000,	///< Field Only. Dynamic field - doesn't get constructed during static initialization, can be constructed multiple times
	RF_WillBeLoaded = 0x08000000,	///< This object was constructed during load and will be loaded shortly
};
enum class PropertyType {
	Unknown,
	StructProperty,
	ObjectProperty,
	SoftObjectProperty,
	FloatProperty,
	ByteProperty,
	BoolProperty,
	IntProperty,
	Int8Property,
	Int16Property,
	Int64Property,
	UInt16Property,
	UInt32Property,
	UInt64Property,
	NameProperty,
	DelegateProperty,
	SetProperty,
	ArrayProperty,
	WeakObjectProperty,
	StrProperty,
	TextProperty,
	MulticastSparseDelegateProperty,
	EnumProperty,
	DoubleProperty,
	MulticastDelegateProperty,
	ClassProperty,
	MulticastInlineDelegateProperty,
	MapProperty,
	InterfaceProperty
};
enum EFunctionFlags : DWORD
{
	// Function flags.
	FUNC_None = 0x00000000,

	FUNC_Final = 0x00000001,	// Function is final (prebindable, non-overridable function).
	FUNC_RequiredAPI = 0x00000002,	// Indicates this function is DLL exported/imported.
	FUNC_BlueprintAuthorityOnly = 0x00000004,   // Function will only run if the object has network authority
	FUNC_BlueprintCosmetic = 0x00000008,   // Function is cosmetic in nature and should not be invoked on dedicated servers
	// FUNC_				= 0x00000010,   // unused.
	// FUNC_				= 0x00000020,   // unused.
	FUNC_Net = 0x00000040,   // Function is network-replicated.
	FUNC_NetReliable = 0x00000080,   // Function should be sent reliably on the network.
	FUNC_NetRequest = 0x00000100,	// Function is sent to a net service
	FUNC_Exec = 0x00000200,	// Executable from command line.
	FUNC_Native = 0x00000400,	// Native function.
	FUNC_Event = 0x00000800,   // Event function.
	FUNC_NetResponse = 0x00001000,   // Function response from a net service
	FUNC_Static = 0x00002000,   // Static function.
	FUNC_NetMulticast = 0x00004000,	// Function is networked multicast Server -> All Clients
	FUNC_UbergraphFunction = 0x00008000,   // Function is used as the merge 'ubergraph' for a blueprint, only assigned when using the persistent 'ubergraph' frame
	FUNC_MulticastDelegate = 0x00010000,	// Function is a multi-cast delegate signature (also requires FUNC_Delegate to be set!)
	FUNC_Public = 0x00020000,	// Function is accessible in all classes (if overridden, parameters must remain unchanged).
	FUNC_Private = 0x00040000,	// Function is accessible only in the class it is defined in (cannot be overridden, but function name may be reused in subclasses.  IOW: if overridden, parameters don't need to match, and Super.Func() cannot be accessed since it's private.)
	FUNC_Protected = 0x00080000,	// Function is accessible only in the class it is defined in and subclasses (if overridden, parameters much remain unchanged).
	FUNC_Delegate = 0x00100000,	// Function is delegate signature (either single-cast or multi-cast, depending on whether FUNC_MulticastDelegate is set.)
	FUNC_NetServer = 0x00200000,	// Function is executed on servers (set by replication code if passes check)
	FUNC_HasOutParms = 0x00400000,	// function has out (pass by reference) parameters
	FUNC_HasDefaults = 0x00800000,	// function has structs that contain defaults
	FUNC_NetClient = 0x01000000,	// function is executed on clients
	FUNC_DLLImport = 0x02000000,	// function is imported from a DLL
	FUNC_BlueprintCallable = 0x04000000,	// function can be called from blueprint code
	FUNC_BlueprintEvent = 0x08000000,	// function can be overridden/implemented from a blueprint
	FUNC_BlueprintPure = 0x10000000,	// function can be called from blueprint code, and is also pure (produces no side effects). If you set this, you should set FUNC_BlueprintCallable as well.
	FUNC_EditorOnly = 0x20000000,	// function can only be called from an editor scrippt.
	FUNC_Const = 0x40000000,	// function can be called from blueprint code, and only reads state (never writes state)
	FUNC_NetValidate = 0x80000000,	// function must supply a _Validate implementation

	FUNC_AllFlags = 0xFFFFFFFF,
};

typedef struct FNameEntryId {
	UINT Value;
}NAME_INDEX;

struct FName {
	FNameEntryId ComparisonIndex;
	UINT Number;

	std::string GetName();
};

struct FNameEntryHeader {
	USHORT bIsWide : 1;
	USHORT Len : 15;
};

struct FNameEntryAllocator {
	enum { Stride = alignof(FNameEntryHeader) };
	enum { BlockSizeBytes = Stride * FNameBlockOffsets };

	mutable PVOID Lock;
	UINT CurrentBlock = 0;
	UINT CurrentByCursor = 0;
	PVOID Blocks[FNameMaxBlocks] = {};
};

struct FNamePool {
	FNameEntryAllocator Entries;

	DWORD GetBlockSize();
};

class FNameEntry {
private:
	FNameEntryHeader Header = { 0, };
	union
	{
		char	AnsiName[NAME_SIZE] = { 0, };
		wchar_t	WideName[NAME_SIZE];
	};

protected:
	PVOID Object;

public:
	FNameEntry(PVOID obj) :Object(obj) {}
	FNameEntry() :Object(nullptr) {}

	DWORD GetNameDump(DWORD BlockId, std::filesystem::path Path);
	std::string GetName();
	DWORD GetEntrySize();
	DWORD GetLength();
	BOOLEAN IsWide();
};

class UClass;
class FField;

class FFieldVariant
{
public:
	union FFieldObjectUnion
	{
		FField* Field;
		PVOID Object;
	} Container;

	bool bIsUObject;
};

class FFieldClass
{
private:
	FName Name;
	DWORD64 Id;
	DWORD64 CastFlags;
	FFieldClass* SuperClass;
	FField* DefaultObject;
public:
	FName GetNameInfo();
};

class FField
{
private:
	PVOID VTable;
	FFieldClass* ClassPrivate;
	FFieldVariant Owner;
	FField* Next;
	FName NamePrivate;
	EObjectFlags FlagsPrivate;

public:
	FField* GetNext();
	FFieldClass* GetClass();
	std::string GetName();
};

class FProperty : public FField
{
private:
	DWORD ArrayDim;
	DWORD ElementSize;
	EPropertyFlags PropertyFlags;
	USHORT RepIndex;
	USHORT BlueprintReplicationCondition;
	DWORD Offset_internal;
	FName RepNotifyFunc;
	FProperty* PropertyLinkNext;
	FProperty* NextRef;
	FProperty* DestructorLinkNext;
	FProperty* PostConstructLinkNext;

public:
	using FField::FField;
	
	DWORD GetSize();
	DWORD GetArrayDim();
	DWORD GetOffset();
	DWORD64 GetPropertyFlags();
	std::pair<PropertyType, std::string> GetType();

};

class UObject {
private:
	PVOID VTable = nullptr;
	EObjectFlags ObjectFlags = RF_NoFlags;
	DWORD InternalIndex = 0;
	UObject* ClassPrivate = nullptr;
	FName NamePrivate = { 0, };
	UObject* OuterPrivate = nullptr;

public:

	std::string GetFullName();
	std::string GetName();
	std::string GetCppName();
	UObject* GetClass();
	UObject* GetOuter();
	UObject* GetPackageObject();
	FName GetNameInfo();
	BOOLEAN IsValid();
	template<typename T>
	bool IsA();
	bool IsA(UObject* cmp);
	static UObject* StaticClass();

};

class AActor : public UObject
{
public:
	static UObject* StaticClass();


};

class UField : public UObject
{
public:
	using UObject::UObject;
	PVOID Next;
	static UObject* StaticClass();

	UField* GetNext();
};

class UProperty : public UField
{
public:
	using UField::UField;
	static UObject* StaticClass();


};

class UStruct : public UField
{
private:
	BYTE UnknownValue[0x10];
	PVOID SuperStruct;
	PVOID Children;
	FField* ChildProperties;
	DWORD PropertySize;
	DWORD MinAlignment;
	TArray Script;
	FProperty* PropertyLink;
	FProperty* RefLink;
	FProperty* DestructorLink;
	FProperty* PostConstructLink;
	TArray* ScriptAndPropertyObjectReferences;
	PVOID UnresolvedScriptProperties;
	TArray* PropertyWrappers;
	DWORD FieldPathSerialNumber;
public:
	using UField::UField;
	

	UObject* GetSuper();
	DWORD GetSize();
	FProperty* GetChildProperty();
	UField* GetChild();

	static UObject* StaticClass();

};

class UEnum :public UField
{
private:
	FString CppType;
	TArray Names;

public:
	using UField::UField;
	static UObject* StaticClass();
	std::string GetCppType();
	TArray GetNames();
};

class UFunction : public UStruct
{
private:
	EFunctionFlags FunctionFlags;
	USHORT NumParms;
	USHORT ParmsSize;
	USHORT ReturnValueOffset;
	USHORT RPCId;
	USHORT RPCResponseId;
	FProperty* FirstPropertyToInit;
	UFunction* EventGraphFunction;
	DWORD EventGraphCallOffset;
	PVOID Func;
public:
	using UStruct::UStruct;
	static UObject* StaticClass();

	USHORT GetParamSize();
	std::string GetFlags();
	PVOID GetFunction();

};

class UScriptStruct : public UStruct
{
public:
	using UStruct::UStruct;
	static UObject* StaticClass();

};

class UClass : public UStruct
{
public:
	using UStruct::UStruct;
	static UObject* StaticClass();

};

struct FUObjectItem {
	PVOID Object;
	DWORD Flags;
	DWORD ClusterRootIndex;
	DWORD SerialNumber;
	DWORD Reserved;
};

struct TUObjectArray {
	enum
	{
		NumElementsPerChunk = 64 * 1024,
	};

	FUObjectItem** Objects;
	FUObjectItem* PreAllocatedObjects;
	DWORD MaxElements;
	DWORD NumElements;
	DWORD MaxChunks;
	DWORD NumChunks;

	DWORD GetObjectNum();
	DWORD GetObjectChunk();
	UObject* GetObjDump(DWORD Id, std::filesystem::path Path);
	UObject* GetObjectPtr(DWORD index);

	UObject* FindObject(std::string Name);
	BOOLEAN IsValidIndex(int index);
};

struct FUObjectArray {
	DWORD ObjFirstGCIndex;
	DWORD ObjLastNonGcIndex;
	DWORD MaxObjectsNotConsideredByGC;
	BOOLEAN OpenForDisregardForGC;
	TUObjectArray ObjObjects;
};


extern TUObjectArray ObjObjects;
extern FNamePool* NamePoolData;
VOID CloseOfs();

template<typename T>
bool UObject::IsA()
{
	auto cmp = T::StaticClass();
	if (!cmp) { return false; }
	return IsA(cmp);
}

class UPackage
{
private:
	struct Member
	{
		std::string Type;
		std::string Name;
		int Offset = 0;
		int Size = 0;
	};

	struct Function
	{
		std::string FullName;
		std::string CppName;
		std::string Params;
		std::string Flags;
		USHORT ParamSize;
		DWORD64 Func;
	};

	struct OutStruct
	{
		std::string Fullname;
		std::string CppName;
		int Inherited = 0; // UStruct::SuperStruct.PropertySize
		int Size = 0;	// UStruct::PropertySize
		std::vector<Member> Members;
		std::vector<Function> Functions;
	};

	struct Enum
	{
		std::string FullName;
		std::string CppName;
		std::vector<std::string> Members;
	};

	
	
private:
	std::pair<PVOID const, std::vector<UObject*>>* Package;
	std::vector<OutStruct> Classes;
	std::vector<OutStruct> Structures;
	std::vector<Enum> Enums;


public:
	UPackage(std::pair<PVOID const, std::vector<UObject*>>& package) : Package(&package) {};
	VOID Process();
	VOID Save(std::filesystem::path Path);
	VOID WriteSDK(std::vector<OutStruct>& ArrStruct, std::filesystem::path Path);
	VOID WriteSDK(std::vector<Enum>& ArrStruct, std::filesystem::path Path);
	VOID GenerateStruct(UStruct* StructObj, std::vector<OutStruct>& ArrStruct);
	VOID GenerateEnum(UEnum* EnumObj, std::vector<Enum>& ArrEnum);
	VOID GeneratePadding(std::vector<Member>& Members, int& MinOffset, int& BitOffset, int MaxOffset);
	VOID GenerateBitPadding(std::vector<Member>& Members, int& Offset, int& BitOffset, int Size);
	UObject* GetObject();

};

// SDK Generator, All properties

class FStructProperty : FProperty
{
public:
	using FProperty::FProperty;
	UStruct* GetStruct();
	std::string GetType();
};

class FObjectProperty : FProperty
{
public:
	using FProperty::FProperty;
	UClass* GetPropertyClass();
	std::string GetType();
};

class FByteProperty : FProperty
{
public:
	using FProperty::FProperty;
	UEnum* GetEnum();
	std::string GetType();
};

class FBoolProperty : FProperty
{
public:
	using FProperty::FProperty;
	BYTE GetFieldMask();
	std::string GetType();
};

class FSetProperty : FProperty
{
public:
	using FProperty::FProperty;
	FProperty* GetElementProperty();
	std::string GetType();
};

class FArrayProperty :FProperty
{
public:
	using FProperty::FProperty;
	FProperty* GetInner();
	std::string GetType();
};

class FEnumProperty : FProperty
{
public:
	using FProperty::FProperty;
	UClass* GetEnum();
	std::string GetType();
};

class FClassProperty : FProperty
{
public:
	using FProperty::FProperty;
	UClass* GetMetaClass();
	std::string GetType();
};

class FMapProperty : FProperty
{
public:
	using FProperty::FProperty;
	FProperty* GetKeyProperty();
	FProperty* GetValueProperty();
	std::string GetType();
};

class FInterfaceProperty : FProperty
{
public:
	using FProperty::FProperty;
	FProperty* GetInterfaceClass();
	std::string GetType();
};

#endif // !_UNREALENGINE_H_

