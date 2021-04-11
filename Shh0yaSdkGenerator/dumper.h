/*
* File name : dumper.h
* Description : Declaring classes and functions for dump
*/

#ifndef _DUMPER_H_
#define _DUMPER_H_

#include "UnrealEngine.h"
#pragma comment(lib,"version.lib")

typedef struct _DUMPER_DATA {
	DUMPER_CONFIG Config;
	HANDLE ProcessHandle;
	DWORD ProcessId;
	WCHAR ProcessFullName[MAX_PATH];
	std::filesystem::path ProcessName;
	std::filesystem::path BasePath;
	PVOID ImageBegin;
	PVOID ImageEnd;
	DWORD64 ImageSize;
	PVOID FNameData;
	FUObjectArray* ObjectData;
	DWORD ObjectCount;
	PVOID* Objects;
}DUMPER_DATA, * PDUMPER_DATA;


class Dumper {

private:
	Dumper() { DumperData = { 0, }; memory = nullptr; };

public:
	DUMPER_DATA DumperData;
	Memory* memory;

	static Dumper* GetInstance() { Dumper dump = Dumper(); return &dump; };
	DUMP_STATUS InitializeDumper();
	DUMP_STATUS Dump();
	BOOLEAN NameDump();
	BOOLEAN ObjectDump();
	BOOLEAN SdkGenerator();

	BOOLEAN GetProcessInfo();
	BOOLEAN GetDumpConfig();
	BOOLEAN GetPtrByPattern(auto OffsetInfo);

	BOOLEAN CheckConfig(wchar_t* FilePath);
};

typedef struct _ENGINE_OFFSET
{
	struct UE4254
	{
		USHORT Stride = 2;
		struct {
			char* NamePattern = const_cast <char*>("\x48\x8D\x35\x00\x00\x00\x00\xEB\x16");
			char* ObjectPattern = const_cast <char*>("\x48\x8D\x0D\x00\x00\x00\x00\x44\x8B\x84\x24");
			char* NameMask = const_cast <char*>("xxx????xx");
			char* ObjectMask = const_cast <char*>("xxx????xxxx");
			DWORD NameInstruction = 3;
			DWORD NameInstCount = 7;
			DWORD ObjectInstruction = 3;
			DWORD ObjectInstCount = 7;
		}Common;
	};

	struct UE4261
	{
		USHORT Stride = 2;
		struct {
			char* NamePattern = const_cast <char*>("\x4C\x8D\x05\x00\x00\x00\x00\xEB\x1D");
			char* ObjectPattern = const_cast <char*>("\x48\x8D\x0D\x00\x00\x00\x00\x44\x8B\x84\x24");
			char* NameMask = const_cast <char*>("xxx????xx");
			char* ObjectMask = const_cast <char*>("xxx????xxxx");
			DWORD NameInstruction = 3;
			DWORD NameInstCount = 7;
			DWORD ObjectInstruction = 3;
			DWORD ObjectInstCount = 7;
		}Common;
	};
}ENGINE_OFFSET, * PENGINE_OFFSET;


#endif // !_DUMPER_H_
