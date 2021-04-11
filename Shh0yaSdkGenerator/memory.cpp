/*
* File name : memory.cpp
* Description : Implementation
*/

#include "memory.h"

HANDLE Memory::ProcessHandle;

char* Memory::ScanIn(char* pattern, char* mask, char* begin, unsigned int size)
{
    unsigned int patternLength = strlen(mask);

    for (unsigned int i = 0; i < size - patternLength; i++)
    {
        bool found = true;
        for (unsigned int j = 0; j < patternLength; j++)
        {
            if (mask[j] != '?' && pattern[j] != *(begin + i + j))
            {
                found = false;
                break;
            }
        }
        if (found)
        {
            return (begin + i);
        }
    }
    return nullptr;
}

char* Memory::ScanEx(char* pattern, char* mask, char* begin, char* end)
{
    char* currentChunk = begin;
    char* match = nullptr;
    SIZE_T bytesRead;

    while (currentChunk < end)
    {
        MEMORY_BASIC_INFORMATION mbi;

        //return nullptr if VirtualQuery fails
        if (!VirtualQueryEx(ProcessHandle, currentChunk, &mbi, sizeof(mbi)))
        {
            Log("Failed Virtual Query %X\n", GetLastError());
            return nullptr;
        }

        char* buffer = new char[mbi.RegionSize];

        if (mbi.State == MEM_COMMIT && mbi.Protect != PAGE_NOACCESS)
        {
            DWORD oldprotect;
            if (VirtualProtectEx(ProcessHandle, mbi.BaseAddress, mbi.RegionSize, PAGE_EXECUTE_READWRITE, &oldprotect))
            {
                ReadProcessMemory(ProcessHandle, mbi.BaseAddress, buffer, mbi.RegionSize, &bytesRead);
                VirtualProtectEx(ProcessHandle, mbi.BaseAddress, mbi.RegionSize, oldprotect, &oldprotect);

                char* internalAddress = ScanIn(pattern, mask, buffer, bytesRead);

                if (internalAddress != nullptr)
                {
                    //calculate from internal to external
                    uintptr_t offsetFromBuffer = internalAddress - buffer;
                    match = currentChunk + offsetFromBuffer;
                    delete[] buffer;
                    break;
                }
            }
        }

        currentChunk = currentChunk + mbi.RegionSize;
        delete[] buffer;
    }
    return match;
}

DWORD64 Memory::CalcRelAddress(PVOID Current, DWORD Instruction, DWORD Count)
{
    PVOID pRelative = (PVOID)((DWORD64)Current + Instruction);
    DWORD dwRel = Read<DWORD>(pRelative);
    return (DWORD64)Current + dwRel + Count;
}

char* Read(PVOID Address, SIZE_T Size)
{
    char* Buffer = new char[Size];
    if (!ReadProcessMemory(
        Memory::ProcessHandle,
        Address,
        &Buffer,
        Size,
        NULL)
        )
    {
        ErrorHandler(DUMP_STATUS::DUMPER_MEMORY_CANT_READ, GetLastError());
    }
    return Buffer;
}
