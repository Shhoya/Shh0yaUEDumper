/*
* File name : memory.h
* Description : Declaration of classes and functions related to memory (eg RPM, WPM wrapping)
*/

#ifndef _MEMORY_H_
#define _MEMORY_H_

#include "utility.h"

class Memory {

private:
	Memory() { ProcessHandle = nullptr; };

public:
	static HANDLE ProcessHandle;

	static Memory* GetInstance() { Memory mem = Memory(); return &mem; };

	char* ScanIn(char* pattern, char* mask, char* begin, unsigned int size);
	char* ScanEx(char* pattern, char* mask, char* begin, char* end);
	DWORD64 CalcRelAddress(PVOID Current, DWORD Instruction, DWORD Count);
};

template <typename T>
FORCEINLINE T Read(PVOID Address);

template <typename T>
FORCEINLINE T Read(PVOID Address)
{
	T Buffer{};
	if (!ReadProcessMemory(
		Memory::ProcessHandle,
		Address,
		&Buffer,
		sizeof(T),
		NULL)
		)
	{
		ErrorHandler(DUMP_STATUS::DUMPER_MEMORY_CANT_READ, GetLastError());
	}
	return Buffer;
}

char* Read(PVOID Address, SIZE_T Size);


#endif // !_MEMORY_H_
