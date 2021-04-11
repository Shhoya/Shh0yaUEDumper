#include "UnrealEngine.h"

FNamePool* NamePoolData;
TUObjectArray ObjObjects;

std::ofstream ofs;

std::unordered_map<std::string, std::function<void(UProperty*, std::pair<PropertyType, std::string>&)>> types =
{
	{
		"StructProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			auto obj = reinterpret_cast<FStructProperty*>(Property);
			Type = { PropertyType::StructProperty, obj->GetType() };
		}
	},
	{
		"ObjectProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			auto obj = reinterpret_cast<FObjectProperty*>(Property);
			Type = { PropertyType::ObjectProperty, obj->GetType() };
		}
	},
	{
		"SoftObjectProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			auto obj = reinterpret_cast<FObjectProperty*>(Property);
			Type = { PropertyType::SoftObjectProperty, "struct TSoftObjectPtr<struct " + obj->GetPropertyClass()->GetCppName() + ">" };
		}
	},
	{
		"ByteProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			auto obj = reinterpret_cast<FByteProperty*>(Property);
			Type = { PropertyType::ByteProperty, obj->GetType() };
		}
	},
	{
		"BoolProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			auto obj = reinterpret_cast<FBoolProperty*>(Property);
			Type = { PropertyType::BoolProperty, obj->GetType() };
		}
	},
	{
		"IntProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::IntProperty, "int32_t"};
		}
	},
	{
		"Int8Property",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::Int8Property, "int8_t"};
		}
	},
	{
		"Int16Property",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::Int16Property, "int16_t"};
		}
	},
	{
		"Int64Property",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::Int64Property, "int64_t"};
		}
	},
	{
		"UInt16Property",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::UInt16Property, "uint16"};
		}
	},
	{
		"UInt32Property",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::UInt32Property, "uint32_t"};
		}
	},
	{
		"UInt64Property",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::UInt64Property, "uint64_t"};
		}
	},
	{
		"FloatProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::FloatProperty, "float"};
		}
	},
	{
		"DoubleProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::DoubleProperty, "double"};
		}
	},
	{
		"NameProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::NameProperty, "struct FName"};
		}
	},
	{
		"DelegateProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::DelegateProperty, "struct FDelegate"};
		}
	},
	{
		"StrProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::StrProperty, "struct FString"};
		}
	},
	{
		"TextProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::TextProperty, "struct FText"};
		}
	},
	{
		"MulticastSparseDelegateProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::MulticastSparseDelegateProperty, "struct FMulticastSparseDelegate"};
		}
	},
	{
		"MulticastDelegateProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::MulticastDelegateProperty, "struct FMulticastDelegate"};
		}
	},
	{
		"MulticastInlineDelegateProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			Type = { PropertyType::MulticastInlineDelegateProperty, "struct FMulticastInlineDelegate"};
		}
	},
	{
		"SetProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			auto obj= reinterpret_cast<FSetProperty*>(Property);
			Type = { PropertyType::SetProperty, obj->GetType()};
		}
	},
	{
		"ArrayProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			auto obj = reinterpret_cast<FArrayProperty*>(Property);
			Type = { PropertyType::ArrayProperty, obj->GetType()};
		}
	},
	{
		"WeakObjectProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			auto obj = reinterpret_cast<FStructProperty*>(Property);
			Type = { PropertyType::WeakObjectProperty, "struct FWeakObjectPtr<" + obj->GetType() + ">" };
		}
	},
	{
		"EnumProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			auto obj = reinterpret_cast<FEnumProperty*>(Property);
			Type = { PropertyType::EnumProperty, obj->GetType()};
		}
	},
	{
		"ClassProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			auto obj = reinterpret_cast<FClassProperty*>(Property);
			Type = { PropertyType::ClassProperty, obj->GetType()};
		}
	},
	{
		"MapProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			auto obj = reinterpret_cast<FMapProperty*>(Property);
			Type = { PropertyType::MapProperty, obj->GetType()};
		}
	},
	{
		"InterfaceProperty",
		[](UProperty* Property, std::pair<PropertyType, std::string>& Type)
		{
			auto obj = reinterpret_cast<FInterfaceProperty*>(Property);
			Type = { PropertyType::InterfaceProperty, obj->GetType()};
		}
	},
};

DWORD FNameEntry::GetNameDump(DWORD BlockId, std::filesystem::path Path)
{
	FNameEntry* NamePtr = this;
	DWORD Count = 0;
	DWORD NameId = BlockId*65536;

	if (!ofs.is_open()) { ofs.open(Path / "Names.txt"); }
	for (int i = 0; i < FNameEntryAllocator::BlockSizeBytes; i++)
	{
		FNameEntry NameEntry = { 0, };
		NameEntry = Read<FNameEntry>(NamePtr);

		auto name = NameEntry.GetName();
		if (name == "") { break; }
		auto size = NameEntry.GetEntrySize();

		NamePtr = (FNameEntry*)((DWORD64)NamePtr + size);
		
		char header[10] = { 0, };
		sprintf(header, "[%.6d] ", NameId);
		ofs << std::string(header) << name << std::endl;
		NameId += size / FNameEntryAllocator::Stride;
		Count++;
	}
	return Count;
}

std::string FNameEntry::GetName()
{
	DWORD Length = GetLength();
	if (Length == 0) { return ""; }
	char TmpName[NAME_SIZE] = { 0, };
	if (Header.bIsWide)
	{
		wchar_t TmpWideName[NAME_SIZE] = { 0, };
		wcsncpy(TmpWideName, WideName, Length);
		TmpWideName[Length] = 0;
		wcstombs(TmpName, TmpWideName, NAME_SIZE);
		return std::string(TmpName);

	}
	else
	{
		strncpy(TmpName, AnsiName, Length);
		TmpName[Length] = 0;
		return std::string(TmpName);

	}
}

DWORD FNameEntry::GetEntrySize()
{
	if (IsWide())
	{
		return ((GetLength() * 2) + alignof(FNameEntryHeader) + FNameEntryAllocator::Stride - 1) & ~(FNameEntryAllocator::Stride - 1);
	}
	else 
	{
		return ((GetLength()) + alignof(FNameEntryHeader) + FNameEntryAllocator::Stride - 1) & ~(FNameEntryAllocator::Stride - 1);
	}
}

DWORD FNameEntry::GetLength()
{
	return (this->Header.Len << 1) >> 6;
}

BOOLEAN FNameEntry::IsWide()
{
	return this->Header.bIsWide;
}

DWORD FNamePool::GetBlockSize()
{
	return Read<DWORD>(&Entries.CurrentBlock);
}

DWORD TUObjectArray::GetObjectNum()
{
	return NumElements;
}

DWORD TUObjectArray::GetObjectChunk()
{
	return NumChunks;
}

UObject* TUObjectArray::GetObjDump(DWORD Id, std::filesystem::path Path)
{
	if (!ofs.is_open()) { ofs.open(Path / "Objects.txt"); }
	UObject* Object = ObjObjects.GetObjectPtr(Id);
	if (Object == nullptr) { return nullptr; }

	std::string FullName = Object->GetFullName();
	char Buffer[256] = { 0, };
	sprintf(Buffer, "[%.6d] [0x%llX] ", Id, Object);
	ofs << std::string(Buffer) + FullName << std::endl;

	return Object;
}

UObject* TUObjectArray::GetObjectPtr(DWORD index)
{
	DWORD ChunkIndex = index / NumElementsPerChunk;
	DWORD WithinChunkIndex = index % NumElementsPerChunk;

	if (!IsValidIndex(index)) { ErrLog("Invalid object index\n"); return nullptr; }
	if (!(ChunkIndex < NumChunks)) { ErrLog("Invalid chunk index\n"); return nullptr; }
	FUObjectItem* Chunk = Read<FUObjectItem*>(&Objects[ChunkIndex]);
	FUObjectItem* Object = Read<FUObjectItem*>(Chunk + WithinChunkIndex);

	return (UObject*)Object;
}

UObject* TUObjectArray::FindObject(std::string Name)
{
	for (int i = 0; i < NumElements; i++)
	{
		UObject* Object = GetObjectPtr(i);
		if (Object->GetFullName() == Name)
		{
			return Object;
		}
	}
	return nullptr;
}

BOOLEAN TUObjectArray::IsValidIndex(int index)
{
	return index < NumElements && index >= 0;
}

std::string UObject::GetFullName()
{
	std::string FullName, ClassName;
	UObject* ClassObject = GetClass();
	if (ClassObject == nullptr) { return ""; }
	UObject* OuterObject = GetOuter();
	ClassName = ClassObject->GetName() + " ";

	while (true)
	{
		if (OuterObject != nullptr)
		{
			FullName = OuterObject->GetName()+"." + FullName;
			OuterObject = OuterObject->GetOuter();
		}
		else
		{
			break;
		}
	}
	FullName += GetName();

	return ClassName + FullName;
}

std::string UObject::GetName()
{
	FNameEntry* BlockEntry = nullptr;
	FNameEntry* NameEntryPtr = nullptr;

	FName Names = GetNameInfo();
	DWORD BlockId = Names.ComparisonIndex.Value >> 0x10;
	DWORD Offset = Names.ComparisonIndex.Value & 0xFFFF;

	BlockEntry = Read<FNameEntry*>(&NamePoolData->Entries.Blocks[BlockId]);
	NameEntryPtr = reinterpret_cast<FNameEntry*>((DWORD64)BlockEntry + 2 * Offset);
	
	FNameEntry NameEntry = Read<FNameEntry>(NameEntryPtr);

	std::string Name = NameEntry.GetName();

	if (Names.Number > 0)
	{
		Name += '_' + std::to_string(Names.Number);
	}
	auto pos = Name.rfind('/');
	if (pos != std::string::npos) { Name = Name.substr(pos + 1); }

	return Name;
}

std::string UObject::GetCppName()
{
	std::string CppName;
	if (IsA<UClass>())
	{
		for (auto c = reinterpret_cast<UStruct*>(this); c; c = reinterpret_cast<UStruct*>(c->GetSuper()))
		{
			if (c == AActor::StaticClass())
			{
				CppName = "A";
				break;
			}
			else if (c == UObject::StaticClass())
			{
				CppName = "U";
				break;
			}
		}
	}
	else
	{
		CppName = "F";
	}
	CppName += GetName();
	return CppName;
}

UObject* UObject::GetClass()
{
	return Read<UObject*>(&ClassPrivate);
}

UObject* UObject::GetOuter()
{
	return Read<UObject*>(&OuterPrivate);
}

UObject* UObject::GetPackageObject()
{
	UObject* Package = nullptr;
	UObject* Outer = GetOuter();
	while (true)
	{
		Package = Outer;
		Outer = Outer->GetOuter();
		if (!Outer) { return Package; }
	}
}


FName UObject::GetNameInfo()
{
	return Read<FName>(&NamePrivate);
}

BOOLEAN UObject::IsValid()
{
	if (VTable == nullptr) { return FALSE; }
	return TRUE;
}

bool UObject::IsA(UObject* cmp)
{
	UClass* super = reinterpret_cast<UClass*>(GetClass());
	while (true)
	{
		if (super == cmp)
		{
			return true;
		}
		super = reinterpret_cast<UClass*>(super->GetSuper());
		if (!super) { break; }
	}
	return false;
}

UObject* UObject::StaticClass()
{
	static auto obj = static_cast<UObject*>(ObjObjects.FindObject("Class CoreUObject.Object"));
	return obj;
}

UObject* AActor::StaticClass()
{
	static auto obj = static_cast<UObject*>(ObjObjects.FindObject("Class Engine.Actor"));
	return obj;
}

UObject* UField::StaticClass()
{
	static auto obj = static_cast<UObject*>(ObjObjects.FindObject("Class CoreUObject.Field"));
	return obj;
}

UField* UField::GetNext()
{
	return Read<UField*>(&Next);
}

UObject* UProperty::StaticClass()
{
	static auto obj = static_cast<UObject*>(ObjObjects.FindObject("Class CoreUObject.Property"));
	return obj;
}

UObject* UStruct::GetSuper()
{
	return Read<UObject*>(&SuperStruct);
}

DWORD UStruct::GetSize()
{
	return Read<DWORD>(&PropertySize);
}

FProperty* UStruct::GetChildProperty()
{
	return Read<FProperty*>(&ChildProperties);
}

UField* UStruct::GetChild()
{
	return Read<UField*>(&Children);
}

UObject* UStruct::StaticClass()
{
	static auto obj = static_cast<UObject*>(ObjObjects.FindObject("Class CoreUObject.Struct"));
	return obj;
}

UObject* UEnum::StaticClass()
{
	static auto obj = static_cast<UObject*>(ObjObjects.FindObject("Class CoreUObject.Enum"));
	return obj;
}

std::string UEnum::GetCppType()
{
	FString cpp = Read<FString>(&CppType);
	wchar_t str[NAME_SIZE] = { 0, };
	ReadProcessMemory(
		Memory::ProcessHandle,
		cpp.String,
		str,
		cpp.Length * 2,
		nullptr
	);
	std::wstring Temp = std::wstring(str);
	return std::string(Temp.begin(),Temp.end());
}

TArray UEnum::GetNames()
{
	return Read<TArray>(&Names);
}

UObject* UFunction::StaticClass()
{
	static auto obj = static_cast<UObject*>(ObjObjects.FindObject("Class CoreUObject.Function"));
	return obj;
}

USHORT UFunction::GetParamSize()
{
	return Read<USHORT>(&ParmsSize);
}

std::string UFunction::GetFlags()
{
	DWORD Flags = Read<DWORD>(&FunctionFlags);
	std::string FlagString;
	if (Flags == FUNC_None) { FlagString = "None"; }
	else
	{
		if (Flags & FUNC_Final) { FlagString += "Final|"; }
		if (Flags & FUNC_RequiredAPI) { FlagString += "RequiredAPI|"; }
		if (Flags & FUNC_BlueprintAuthorityOnly) { FlagString += "BlueprintAuthorityOnly|"; }
		if (Flags & FUNC_BlueprintCosmetic) { FlagString += "BlueprintCosmetic|"; }
		if (Flags & FUNC_Net) { FlagString += "Net|"; }
		if (Flags & FUNC_NetReliable) { FlagString += "NetReliable|"; }
		if (Flags & FUNC_NetRequest) { FlagString += "NetRequest|"; }
		if (Flags & FUNC_Exec) { FlagString += "Exec|"; }
		if (Flags & FUNC_Native) { FlagString += "Native|"; }
		if (Flags & FUNC_Event) { FlagString += "Event|"; }
		if (Flags & FUNC_NetResponse) { FlagString += "NetResponse|"; }
		if (Flags & FUNC_Static) { FlagString += "Static|"; }
		if (Flags & FUNC_NetMulticast) { FlagString += "NetMulticast|"; }
		if (Flags & FUNC_UbergraphFunction) { FlagString += "UbergraphFunction|"; }
		if (Flags & FUNC_MulticastDelegate) { FlagString += "MulticastDelegate|"; }
		if (Flags & FUNC_Public) { FlagString += "Public|"; }
		if (Flags & FUNC_Private) { FlagString += "Private|"; }
		if (Flags & FUNC_Protected) { FlagString += "Protected|"; }
		if (Flags & FUNC_Delegate) { FlagString += "Delegate|"; }
		if (Flags & FUNC_NetServer) { FlagString += "NetServer|"; }
		if (Flags & FUNC_HasOutParms) { FlagString += "HasOutParms|"; }
		if (Flags & FUNC_HasDefaults) { FlagString += "HasDefaults|"; }
		if (Flags & FUNC_NetClient) { FlagString += "NetClient|"; }
		if (Flags & FUNC_DLLImport) { FlagString += "DLLImport|"; }
		if (Flags & FUNC_BlueprintCallable) { FlagString += "BlueprintCallable|"; }
		if (Flags & FUNC_BlueprintEvent) { FlagString += "BlueprintEvent|"; }
		if (Flags & FUNC_BlueprintPure) { FlagString += "BlueprintPure|"; }
		if (Flags & FUNC_EditorOnly) { FlagString += "EditorOnly|"; }
		if (Flags & FUNC_Const) { FlagString += "Const|"; }
		if (Flags & FUNC_NetValidate) { FlagString += "NetValidate|"; }
		if (FlagString.size()) { FlagString.erase(FlagString.size() - 1); }
	}

	return FlagString;
}

PVOID UFunction::GetFunction()
{
	return Read<PVOID>(&Func);
}

UObject* UScriptStruct::StaticClass()
{
	static auto obj = static_cast<UObject*>(ObjObjects.FindObject("Class CoreUObject.ScriptStruct"));
	return obj;
}

UObject* UClass::StaticClass()
{
	static auto obj = static_cast<UObject*>(ObjObjects.FindObject("Class CoreUObject.Class"));
	return obj;
}

VOID CloseOfs()
{
	ofs.close();
}

VOID UPackage::Process()
{
	auto& objects = Package->second;
	for (auto& object : objects)
	{
		if (object->IsA<UClass>())
		{
			GenerateStruct(reinterpret_cast<UStruct*>(object), Classes);
		}

		else if (object->IsA<UScriptStruct>())
		{
			GenerateStruct(reinterpret_cast<UStruct*>(object), Structures);
		}

		else if (object->IsA<UEnum>())
		{
			GenerateEnum(reinterpret_cast<UEnum*>(object), Enums);
		}
	}
}

VOID UPackage::Save(std::filesystem::path Path)
{
	Path = Path / "SDK";
	if (!std::filesystem::exists(Path))
	{
		std::filesystem::create_directories(Path);
	}

	std::string PackageName = GetObject()->GetName();
	char FilterChar[] = "/\\:*?\"<>|";
	for (auto c : FilterChar)
	{
		auto pos = PackageName.find(c);
		if (pos != std::string::npos) { PackageName[pos] = '_'; }
	}

	std::string FileName = PackageName + "_class.h";
	if (Classes.size())
	{
		WriteSDK(Classes, Path / FileName);
	}

	
	if (Enums.size() || Structures.size())
	{
		
		if(Enums.size())
		{
			FileName = PackageName + "_enum.h";
			WriteSDK(Enums, Path / FileName);
		}
		if (Structures.size())
		{
			FileName = PackageName + "_struct.h";
			WriteSDK(Structures, Path / FileName);
		}
	}
}

VOID UPackage::WriteSDK(std::vector<OutStruct>& ArrStruct, std::filesystem::path Path)
{
	std::ofstream ofs;
	if (!ofs.is_open()) { ofs.open(Path); }
	for (auto& value : ArrStruct)
	{
		char Comment[4096] = { 0, };
		sprintf(Comment, "// %s\n// Size : 0x%X (Inherited : 0x%X)\n%s {", 
			value.Fullname.c_str(),value.Size, value.Inherited, value.CppName.c_str());
		ofs << Comment;

		for (auto& member : value.Members)
		{
			char Member[4096] = { 0, };
			sprintf(Member, "\n\t%s %s; // 0x%X(0x%X)", member.Type.c_str(), member.Name.c_str(), member.Offset, member.Size);
			ofs << Member;
		}
		if (value.Functions.size())
		{
			ofs << std::endl;
			for (auto& func : value.Functions)
			{
				char Function[4096] = { 0, };
				sprintf(Function, "\n\t%s(%s); // %s // (%s) // Param Size : 0x%X, 0x%llX",
					func.CppName.c_str(), func.Params.c_str(), func.FullName.c_str(), func.Flags.c_str(), func.ParamSize, func.Func);
				ofs << Function;
			}
		}
		ofs << std::endl << "};\n" << std::endl;
	}
	ofs.close();
}

VOID UPackage::WriteSDK(std::vector<Enum>& ArrStruct, std::filesystem::path Path)
{
	std::ofstream ofs;
	if (!ofs.is_open()) { ofs.open(Path); }
	for (auto& e : ArrStruct)
	{
		char TempBuffer[4096] = { 0, };
		sprintf(TempBuffer, "// %s\n%s {", e.FullName.c_str(), e.CppName.c_str());
		ofs << TempBuffer;

		for (auto& member : e.Members)
		{
			char eMember[4096] = { 0, };
			sprintf(eMember, "\n\t%s", member.c_str());
			ofs << eMember;
		}
		ofs << "\n};\n" << std::endl;
	}
	ofs.close();
}

VOID UPackage::GenerateStruct(UStruct* StructObj, std::vector<OutStruct>& ArrStruct)
{

	OutStruct os;
	os.Size = StructObj->GetSize();
	if (!os.Size) { return; }

	os.Inherited = 0;
	os.Fullname = StructObj->GetFullName();
	os.CppName = "struct "+StructObj->GetCppName();
	auto Super = reinterpret_cast<UStruct*>(StructObj->GetSuper());
	if (Super != nullptr)
	{
		os.CppName += " : " + Super->GetCppName();
		os.Inherited = Super->GetSize();
	}

	int Offset = os.Inherited;
	int BitOffset = 0;

	
	for (auto Property = StructObj->GetChildProperty(); Property; Property = reinterpret_cast<FProperty*>(Property->GetNext()))
	{
		DWORD ArrayDim = Property->GetArrayDim();
		Member m;
		m.Size = Property->GetSize() * ArrayDim;
		if (!m.Size) { return; }
		auto type = Property->GetType();
		m.Type = type.second;
		m.Name = Property->GetName();
		m.Offset = Property->GetOffset();

		if (m.Offset > Offset)
		{
			GeneratePadding(os.Members, Offset, BitOffset, m.Offset);
		}



		if (type.first == PropertyType::BoolProperty && *(DWORD*)type.second.data() != *(DWORD*)"bool")
		{
			auto BoolProperty = reinterpret_cast<FBoolProperty*>(Property);
			auto Mask = BoolProperty->GetFieldMask();
			char* TempBuffer = new char[1024];
			int Zero = 0, Ones = 0;

			while (Mask & ~1) { Mask >>= 1; Zero++; }
			while (Mask & 1) { Mask >>= 1; Ones++; }

			if (Zero > BitOffset)
			{
				GenerateBitPadding(os.Members, Offset, BitOffset, Zero - BitOffset);
				BitOffset = Zero;
			}
			
			sprintf(TempBuffer, " : %d", Ones);
			m.Name += std::string(TempBuffer);
			BitOffset += Ones;
			delete[] TempBuffer;
		}
		else
		{
			if (ArrayDim > 1)
			{
				char* TempBuffer = new char[1024];
				sprintf(TempBuffer, "[%X]", ArrayDim);
				m.Name += std::string(TempBuffer);
				delete[] TempBuffer;
			}
			Offset += m.Size;
		}

		os.Members.push_back(m);
	}

	if (os.Size > Offset)
	{
		GeneratePadding(os.Members, Offset, BitOffset, os.Size);
	}
	
	for (auto func = reinterpret_cast<UFunction*>(StructObj->GetChild()); func; func = reinterpret_cast<UFunction*>(func->GetNext()))
	{
		if (func->IsA<UFunction>())
		{
			Function f;
			f.FullName = func->GetFullName();
			f.Flags = func->GetFlags();
			f.Func = (DWORD64)func->GetFunction();
			f.ParamSize = func->GetParamSize();

			for (auto Property = func->GetChildProperty(); Property; Property = reinterpret_cast<FProperty*>(Property->GetNext()))
			{
				auto Flags = Property->GetPropertyFlags();
				if (Flags & CPF_ReturnParm)
				{
					f.CppName = Property->GetType().second + " " + func->GetName();
				}
				else if (Flags & CPF_Parm)
				{
					if (Property->GetArrayDim() > 1)
					{
						char* TempBuffer = new char[1024];
						sprintf(TempBuffer, "%s* %s, ", Property->GetType().second.c_str(), Property->GetName().c_str());
						f.Params += std::string(TempBuffer);
					}
					else
					{
						char* TempBuffer = new char[1024];
						sprintf(TempBuffer, "%s %s, ", Property->GetType().second.c_str(), Property->GetName().c_str());
						f.Params += std::string(TempBuffer);
					}
				}
			}

			if (f.Params.size()) { f.Params.erase(f.Params.size() - 2); }
			if (f.CppName.size() == 0) { f.CppName = "void " + func->GetName(); }
			os.Functions.push_back(f);
		}
		
	}

	ArrStruct.push_back(os);
}

VOID UPackage::GenerateEnum(UEnum* EnumObj, std::vector<Enum>& ArrEnum)
{
	Enum e;
	e.FullName = EnumObj->GetFullName();
	e.CppName = "enum class "+EnumObj->GetCppName() + " : uint8";
	auto Names = EnumObj->GetNames();
	
	for (auto i = 0; i < Names.ArrayNum; i++)
	{
		PVOID ArrayInstance = (PVOID)((DWORD64)Names.Instance + i * 16);
		FName Name = Read<FName>(ArrayInstance);
		auto name = Name.GetName();
		auto pos = name.find_last_of(':');
		if (pos != std::string::npos)
		{
			name = name.substr(pos + 1);
		}
		e.Members.push_back(name);
	}
	if (e.Members.size())
	{
		ArrEnum.push_back(e);
	}
}

VOID UPackage::GeneratePadding(std::vector<Member>& Members, int& MinOffset, int& BitOffset, int MaxOffset)
{
	if (BitOffset)
	{
		if (BitOffset < 7)
		{
			GenerateBitPadding(Members, MinOffset, BitOffset, 8 - BitOffset);
		}
		BitOffset = 0;
		MinOffset++;
	}
	if (MaxOffset > MinOffset)
	{
		Member Padding;
		char* TempBuffer = new char[128];
		auto Size = MaxOffset - MinOffset;
		sprintf(TempBuffer, "UnknownData_%X[0x%.4X]", MinOffset, Size);

		Padding.Type = "unsigned char";
		Padding.Name = std::string(TempBuffer);
		Padding.Offset = MinOffset;
		Padding.Size = Size;
		Members.push_back(Padding);
		MinOffset = MaxOffset;
		delete[] TempBuffer;
	}
	return;
}

VOID UPackage::GenerateBitPadding(std::vector<Member>& Members, int& Offset, int& BitOffset, int Size)
{
	Member Padding;
	char* TempBuffer = new char[128];
	sprintf(TempBuffer, "UnknownData_%X_%d : %d", Offset, BitOffset, Size);
	Padding.Type = "unsigned char";
	Padding.Name = std::string(TempBuffer);
	Padding.Offset = Offset;
	Padding.Size = 1;
	Members.push_back(Padding);
	delete[] TempBuffer;
	return;
}

UObject* UPackage::GetObject()
{
	return reinterpret_cast<UObject*>(Package->first);
}

FField* FField::GetNext()
{
	return Read<FField*>(&Next);
}

FFieldClass* FField::GetClass()
{
	return Read<FFieldClass*>(&ClassPrivate);
}

std::string FField::GetName()
{
	FName Names = Read<FName>(&NamePrivate);
	return Names.GetName();
}

DWORD FProperty::GetSize()
{
	return Read<DWORD>(&ElementSize);
}

DWORD FProperty::GetArrayDim()
{
	return Read<DWORD>(&ArrayDim);
}

DWORD FProperty::GetOffset()
{
	return Read<DWORD>(&Offset_internal);
}

DWORD64 FProperty::GetPropertyFlags()
{
	return Read<DWORD64>(&PropertyFlags);
}

std::pair<PropertyType, std::string> FProperty::GetType()
{
	auto ObjectClass = GetClass();
	std::pair<PropertyType, std::string> type = { PropertyType::Unknown, ObjectClass->GetNameInfo().GetName() };
	auto fn = types.find(type.second);
	if (fn != types.end())
	{
		fn->second((UProperty*)this, type);
	}
	
	return type;
}

FName FFieldClass::GetNameInfo()
{
	return Read<FName>(&Name);
}

std::string FName::GetName()
{
	DWORD BlockId = ComparisonIndex.Value >> 0x10;
	DWORD Offset = ComparisonIndex.Value & 0xFFFF;

	FNameEntry* BlockEntry = Read<FNameEntry*>(&NamePoolData->Entries.Blocks[BlockId]);
	FNameEntry* NameEntryPtr = reinterpret_cast<FNameEntry*>((DWORD64)BlockEntry + 2 * Offset);

	FNameEntry NameEntry = Read<FNameEntry>(NameEntryPtr);

	std::string Name = NameEntry.GetName();

	if (Number > 0)
	{
		Name += '_' + std::to_string(Number);
	}
	auto pos = Name.rfind('/');
	if (pos != std::string::npos) { Name = Name.substr(pos + 1); }

	return Name;
}


// StructProperty
UStruct* FStructProperty::GetStruct()
{
	return Read<UStruct*>((PVOID)((DWORD64)this + sizeof(FProperty)));
}

std::string FStructProperty::GetType()
{
	return "struct " + GetStruct()->GetCppName();
}

// ObjectProperty & SoftObjectProperty
UClass* FObjectProperty::GetPropertyClass()
{
	return Read<UClass*>((PVOID)((DWORD64)this + sizeof(FProperty)));
}

std::string FObjectProperty::GetType()
{
	return "struct " + GetPropertyClass()->GetCppName() + "*";
}

// ByteProperty
UEnum* FByteProperty::GetEnum()
{
	return Read<UEnum*>((PVOID)((DWORD64)this + sizeof(FProperty)));
}

std::string FByteProperty::GetType()
{
	return "enum class " + GetEnum()->GetName();
}

// BoolProperty
BYTE FBoolProperty::GetFieldMask()
{
	return Read<BYTE>((PVOID)((DWORD64)this + sizeof(FProperty) + 3));
}

std::string FBoolProperty::GetType()
{
	if (GetFieldMask() == 0xFF) { return "bool"; };
	return "unsigned char";
}

// SetProperty
FProperty* FSetProperty::GetElementProperty()
{
	return Read<FProperty*>((PVOID)((DWORD64)this + sizeof(FProperty)));

}

std::string FSetProperty::GetType()
{
	return "struct TSet<" + GetElementProperty()->GetType().second + ">";
}

// ArrayProperty
FProperty* FArrayProperty::GetInner()
{
	return Read<FProperty*>((PVOID)((DWORD64)this + sizeof(FProperty)));
}

std::string FArrayProperty::GetType()
{
	return "struct TArray<" + GetInner()->GetType().second + ">";
}

// EnumProperty
UClass* FEnumProperty::GetEnum()
{
	return Read<UClass*>((PVOID)((DWORD64)this + sizeof(FProperty) + 8));

}

std::string FEnumProperty::GetType()
{
	return "enum class " + GetEnum()->GetName();
}

// ClassProperty
UClass* FClassProperty::GetMetaClass()
{
	return Read<UClass*>((PVOID)((DWORD64)this + sizeof(FProperty) + 8));

}

std::string FClassProperty::GetType()
{
	return "class " + GetMetaClass()->GetCppName() + "*";
}

// MapProperty
FProperty* FMapProperty::GetKeyProperty()
{
	return Read<FProperty*>((PVOID)((DWORD64)this + sizeof(FProperty)));

}

FProperty* FMapProperty::GetValueProperty()
{
	return Read<FProperty*>((PVOID)((DWORD64)this + sizeof(FProperty) + 8));

}

std::string FMapProperty::GetType()
{
	return "struct TMap<" + GetKeyProperty()->GetType().second + ", " + GetValueProperty()->GetType().second + ">";
}

// InterfaceProperty
FProperty* FInterfaceProperty::GetInterfaceClass()
{
	return Read<FProperty*>((PVOID)((DWORD64)this + sizeof(FProperty)));
}

std::string FInterfaceProperty::GetType()
{
	return "struct TScriptInterface<" + GetInterfaceClass()->GetType().second + ">";
}
