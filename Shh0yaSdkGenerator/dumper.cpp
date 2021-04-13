/*
* File name : dumper.cpp
* Description : Initialize the dumper and generate a version-specific dump
*/

#include "dumper.h"

DUMP_STATUS Dumper::InitializeDumper()
{
	DUMPER_CONFIG Config = { 0, };

	memory = Memory::GetInstance();

	if (!GetDumpConfig())
	{
		return DUMP_STATUS::DUMPER_INIT_FAILED;
	}

	if (!GetProcessInfo()) { return DUMP_STATUS::DUMPER_INIT_FAILED; }

	return DUMP_STATUS::DUMPER_SUCCESS;
}

BOOLEAN Dumper::GetDumpConfig()
{
	char szMajor[2] = { 0, }, szMinor[3] = { 0, }, szPatch[2] = { 0, };

	GetPrivateProfileStringA("UE4 Dumper", "MajorVersion", "", szMajor, 2, ConfigFile);
	GetPrivateProfileStringA("UE4 Dumper", "MinorVersion", "", szMinor, 3, ConfigFile);
	GetPrivateProfileStringA("UE4 Dumper", "PatchVersion", "", szPatch, 2, ConfigFile);
	GetPrivateProfileStringA("UE4 Dumper", "Game", "", DumperData.Config.Game, 1024, ConfigFile);

	DWORD ErrCode = GetLastError();
	if (ErrCode != ERROR_SUCCESS)
	{
		ErrorHandler(DUMP_STATUS::DUMPER_FAILED_OPEN_CONFIG, ErrCode);
		return FALSE;
	}
	DumperData.Config.Major = atoi(szMajor);
	DumperData.Config.Minor = atoi(szMinor);
	DumperData.Config.Patch = atoi(szPatch);
	DumperData.Config.Version = (DumperData.Config.Major << 8) + (DumperData.Config.Minor << 4) + DumperData.Config.Patch;

	return TRUE;
}

BOOLEAN Dumper::GetProcessInfo()
{
	DWORD BufferSize = MAX_PATH;
	wchar_t ProcPath[MAX_PATH] = { 0, };
	VS_FIXEDFILEINFO version = { 0, };

	HWND WindowHandle = FindWindowA("UnrealWindow", NULL);
	if (!WindowHandle) { ErrorHandler(DUMP_STATUS::DUMPER_WINDOW_NOT_FOUND, GetLastError()); return FALSE; }

	GetWindowThreadProcessId(WindowHandle, &DumperData.ProcessId);
	if (!DumperData.ProcessId) { ErrorHandler(DUMP_STATUS::DUMPER_PID_NOT_FOUND, GetLastError()); return FALSE; }
	CloseHandle(WindowHandle);

	DumperData.ProcessHandle = OpenProcess(PROCESS_VM_OPERATION | PROCESS_VM_READ | PROCESS_QUERY_INFORMATION, FALSE, DumperData.ProcessId);
	if (!DumperData.ProcessHandle) { ErrorHandler(DUMP_STATUS::DUMPER_FAILED_OPEN_PROCESS, GetLastError()); return FALSE; }

	memory->ProcessHandle = DumperData.ProcessHandle;

	if (!QueryFullProcessImageName(DumperData.ProcessHandle, 0, ProcPath, &BufferSize))
	{
		ErrorHandler(DUMP_STATUS::DUMPER_FAILED_GET_PROCESS_NAME, GetLastError());
		return FALSE;
	}
	wcscpy(DumperData.ProcessFullName, ProcPath);
	std::filesystem::path ProcessName = std::filesystem::path(DumperData.ProcessFullName).filename();
	DumperData.ProcessName = ProcessName;
	auto Root = std::filesystem::path(std::filesystem::current_path());
	auto Game = Root / "Games" / DumperData.ProcessName.stem();
	DumperData.BasePath = Game;
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, DumperData.ProcessId);
	if (!hSnapshot) { ErrorHandler(DUMP_STATUS::DUMPER_FAILED_GET_SNAPSHOT, GetLastError()); CloseHandle(DumperData.ProcessHandle); return FALSE; }

	MODULEENTRY32W ModuleEntry = { sizeof(MODULEENTRY32W) };
	while (Module32NextW(hSnapshot, &ModuleEntry))
	{
		if (!wcscmp(ProcessName.c_str(), ModuleEntry.szModule))
		{
			Log("Found Target Process : ");
			Green;
			printf("%ws\n\n", ModuleEntry.szModule);
			Gray;
			DumperData.ImageBegin = ModuleEntry.modBaseAddr;
			DumperData.ImageEnd = ModuleEntry.modBaseAddr + ModuleEntry.modBaseSize;
			DumperData.ImageSize = ModuleEntry.modBaseSize;
			CloseHandle(hSnapshot);
			break;
		}
	}
	if (!DumperData.ImageBegin) { ErrorHandler(DUMP_STATUS::DUMPER_FAILED_GET_MEM_INFO, 0); return FALSE; }

	if (!CheckConfig(ProcPath)) { ErrorHandler(DUMP_STATUS::DUMPER_NOT_SUPPORTED_VERSION, 0); exit(-1); }

	return TRUE;
}

BOOLEAN Dumper::GetPtrByPattern(auto OffsetInfo)
{
	PVOID pName = NULL;
	PVOID pObject = NULL;

	pName = memory->ScanEx(
		OffsetInfo->Common.NamePattern,
		OffsetInfo->Common.NameMask,
		(char*)DumperData.ImageBegin,
		(char*)DumperData.ImageEnd
	);
	if (!pName) { ErrorHandler(DUMP_STATUS::DUMPER_FNAME_NOT_FOUND, 0); return FALSE; }
	DumperData.FNameData = (PVOID)memory->CalcRelAddress(pName, OffsetInfo->Common.NameInstruction, OffsetInfo->Common.NameInstCount);
	NamePoolData = reinterpret_cast<FNamePool*>(DumperData.FNameData);
	
	Green;
	Log("[*] Found Names   : 0x%p\n", DumperData.FNameData);
	Gray;

	pObject = memory->ScanEx(
		OffsetInfo->Common.ObjectPattern,
		OffsetInfo->Common.ObjectMask,
		(char*)DumperData.ImageBegin,
		(char*)DumperData.ImageEnd
	);
	if (!pObject) { ErrorHandler(DUMP_STATUS::DUMPER_GOBJECTS_NOT_FOUND, 0); return FALSE; }
	DumperData.ObjectData = (FUObjectArray*)memory->CalcRelAddress(pObject, OffsetInfo->Common.ObjectInstruction, OffsetInfo->Common.ObjectInstCount);

	Green;
	Log("[*] Found Objects : 0x%p\n\n", DumperData.ObjectData);
	Gray;

	return TRUE;
}

BOOLEAN Dumper::CheckConfig(wchar_t* FilePath)
{
	char* buffer = nullptr;
	DWORD infoSize = GetFileVersionInfoSize(FilePath, 0);
	buffer = new char[infoSize];
	GetFileVersionInfo(FilePath, 0, infoSize, buffer);

	VS_FIXEDFILEINFO* VersionInfo = NULL;
	UINT BufLen = 0;
	Yellow;
	VerQueryValue(buffer, L"\\", (LPVOID*)&VersionInfo, &BufLen);
	if (
		DumperData.Config.Major != HIWORD(VersionInfo->dwProductVersionMS) ||
		DumperData.Config.Minor != LOWORD(VersionInfo->dwProductVersionMS) ||
		DumperData.Config.Patch != HIWORD(VersionInfo->dwProductVersionLS)
		)
	{
		WarnLog("It is different from the version written in \"dumper_config.ini\"\n");
	}
	printf("\t[*] File Version : %d.%d.%d\n\t[*] Config Version : %d.%d.%d\n\n",
		HIWORD(VersionInfo->dwProductVersionMS),
		LOWORD(VersionInfo->dwProductVersionMS),
		HIWORD(VersionInfo->dwProductVersionLS),
		DumperData.Config.Major,
		DumperData.Config.Minor,
		DumperData.Config.Patch
	);
	Gray;

	if (HIWORD(VersionInfo->dwProductVersionMS) != 4)
	{
		return FALSE;
	}

	return TRUE;
}

DUMP_STATUS Dumper::Dump()
{
	switch ((UE_VERSION)DumperData.Config.Version)
	{
	case UE_VERSION::UnrealEngine4_20_3:
	{
		ENGINE_OFFSET::UE4254 OffsetInfo = { 0, };
		if (!GetPtrByPattern(&OffsetInfo)) { return DUMP_STATUS::DUMPER_FAILED_OBJECT_INIT; }
		break;	}
	case UE_VERSION::UnrealEngine4_21_2:
	{
		ENGINE_OFFSET::UE4254 OffsetInfo = { 0, };
		if (!GetPtrByPattern(&OffsetInfo)) { return DUMP_STATUS::DUMPER_FAILED_OBJECT_INIT; }
		break;	}
	case UE_VERSION::UnrealEngine4_22_3:
	{
		ENGINE_OFFSET::UE4254 OffsetInfo = { 0, };
		if (!GetPtrByPattern(&OffsetInfo)) { return DUMP_STATUS::DUMPER_FAILED_OBJECT_INIT; }
		break;	}
	case UE_VERSION::UnrealEngine4_23_1:
	{
		ENGINE_OFFSET::UE4254 OffsetInfo = { 0, };
		if (!GetPtrByPattern(&OffsetInfo)) { return DUMP_STATUS::DUMPER_FAILED_OBJECT_INIT; }
		break;	}
	case UE_VERSION::UnrealEngine4_24_3:
	{
		ENGINE_OFFSET::UE4254 OffsetInfo = { 0, };
		if (!GetPtrByPattern(&OffsetInfo)) { return DUMP_STATUS::DUMPER_FAILED_OBJECT_INIT; }
		break;
	}
	case UE_VERSION::UnrealEngine4_25_4:
	{
		ENGINE_OFFSET::UE4254 OffsetInfo = { 0, };
		if (!GetPtrByPattern(&OffsetInfo)) { return DUMP_STATUS::DUMPER_FAILED_OBJECT_INIT; }
		if (!NameDump() || !ObjectDump()) { return DUMP_STATUS::DUMPER_FAILED_DUMP; }
		if (!SdkGenerator()) { return DUMP_STATUS::DUMPER_FAIELD_SDK_GEN; }
		break;
	}
	case UE_VERSION::UnrealEngine4_26_1:
	{
		ENGINE_OFFSET::UE4261 OffsetInfo = { 0, };
		if (!GetPtrByPattern(&OffsetInfo)) { return DUMP_STATUS::DUMPER_FAILED_OBJECT_INIT; }
		if (!NameDump() || !ObjectDump()) { return DUMP_STATUS::DUMPER_FAILED_DUMP; }
		if (!SdkGenerator()) { return DUMP_STATUS::DUMPER_FAIELD_SDK_GEN; }
		break;
	}
	default:
		return DUMP_STATUS::DUMPER_NOT_SUPPORTED_VERSION;
	}

	return DUMP_STATUS::DUMPER_SUCCESS;
}

BOOLEAN Dumper::NameDump()
{
	clock_t start = clock();
	DWORD NameCount = 0;
	for (int i = 0; i < NamePoolData->GetBlockSize() +1; i++)
	{
		FNameEntry* NameBlockPtr = Read<FNameEntry*>(&NamePoolData->Entries.Blocks[i]);
		NameCount += NameBlockPtr->GetNameDump(i,DumperData.BasePath);
	}

	clock_t end = clock();
	Yellow;
	Log("[*] Complete Name Dump : %d(%.3f sec)\n", NameCount, (float)(end - start) / CLOCKS_PER_SEC);
	Gray;
	CloseOfs();
	return TRUE;
}


// PackageObject[package object][object] nice..
std::unordered_map<PVOID, std::vector<UObject*>> PackageObject;

BOOLEAN Dumper::ObjectDump()
{
	clock_t start = clock();
	DWORD ObjectCount = 0;
	ObjObjects = Read<TUObjectArray>(&DumperData.ObjectData->ObjObjects);
	for (int i = 0; i < ObjObjects.NumElements; i++)
	{
		UObject* Object = ObjObjects.GetObjDump(i, DumperData.BasePath);
		if (Object==nullptr) { continue; }
		if (Object->IsA<UStruct>() || Object->IsA<UEnum>())
		{
			auto PackObj = Object->GetPackageObject();
			PackageObject[PackObj].push_back(Object);
			
		}
		ObjectCount++;
	}
	clock_t end = clock();
	Yellow;
	Log("[*] Complete Object Dump : %d(%.3f sec)\n", ObjectCount, (float)(end - start) / CLOCKS_PER_SEC);
	Gray;
	CloseOfs();
	return TRUE;
}

BOOLEAN Dumper::SdkGenerator()
{
	printf("\n");
	Green;
	Log("[*] Packages : %zd\n", PackageObject.size());
	Gray;

	for (UPackage Packages : PackageObject)
	{
		Packages.Process();
		Packages.Save(DumperData.BasePath);
	}
	Yellow;
	Log("Complete SDK Generation\n");
	Gray;
	return TRUE;
}

