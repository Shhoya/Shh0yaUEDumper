/*
* File name : utility.h
* Description : Basic information functions other than C/C++ General header files
*/

#ifndef _UTILITY_H_
#define _UTILITY_H_

#include <stdio.h>
#include <Windows.h>
#include <TlHelp32.h>
#include <time.h>

#include <iostream>
#include <filesystem>
#include <fstream>
#include <unordered_map>
#include <functional>

#pragma warning(disable:4996)

#define Log(...) printf( "[LOG] " __VA_ARGS__ )
#define WarnLog(...) printf( "[WARN] " __VA_ARGS__ )
#define ErrLog(...) printf( "\n[ERROR] " __VA_ARGS__ )

#define ConfigFile "./dumper.ini"


#define Blue SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
#define Green SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
#define Gray SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#define Red  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
#define Yellow SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
#define White SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
#define Purple SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

enum class DUMP_STATUS {
	DUMPER_SUCCESS,
	DUMPER_INIT_FAILED,
	DUMPER_WINDOW_NOT_FOUND,
	DUMPER_PID_NOT_FOUND,
	DUMPER_FAILED_OPEN_PROCESS,
	DUMPER_FAILED_GET_PROCESS_NAME,
	DUMPER_FAILED_GET_SNAPSHOT,
	DUMPER_FAILED_GET_MEM_INFO,
	DUMPER_FNAME_NOT_FOUND,
	DUMPER_GOBJECTS_NOT_FOUND,
	DUMPER_NOT_SUPPORTED_VERSION,
	DUMPER_FAILED_OBJECT_INIT,
	DUMPER_FAILED_NAME_DUMP,
	DUMPER_FAILED_OBJECT_DUMP,
	DUMPER_FAILED_DUMP,
	DUMPER_MEMORY_CANT_READ,
	DUMPER_FAILED_OPEN_CONFIG,
	DUMPER_FAIELD_SDK_GEN,
	DUMPER_OBJECTBYNAME_NOT_FOUND
};

enum class UE_VERSION {
	UnrealEngine4_20_3 = 0x543,
	UnrealEngine4_21_2 = 0x552,
	UnrealEngine4_22_3 = 0x563,
	UnrealEngine4_23_1 = 0x571,
	UnrealEngine4_24_3 = 0x583,
	UnrealEngine4_25_4 = 0x594,
	UnrealEngine4_26_1 = 0x5A1,
};

typedef struct _DUMPER_CONFIG {
	USHORT Major;
	USHORT Minor;
	USHORT Patch;
	USHORT Version;
	char  Game[1024];
}DUMPER_CONFIG, * PDUMPER_CONFIG;

BOOLEAN ErrorHandler(DUMP_STATUS Status, DWORD LastError);

#endif
