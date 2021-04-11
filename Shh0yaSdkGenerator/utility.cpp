/*
* File name : utility.cpp
* Description : Implementation
*/

#include "utility.h"

BOOLEAN ErrorHandler(DUMP_STATUS Status, DWORD LastError)
{
    switch (Status)
    {
    case DUMP_STATUS::DUMPER_SUCCESS: {
        return TRUE; }
    case DUMP_STATUS::DUMPER_INIT_FAILED: {
        Red; ErrLog("Initialization failed\n"); Gray; Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_FAILED_OPEN_CONFIG: {
        Red; ErrLog("Can't get config file\n\t[-] Err : %d(0x%X)\n", LastError, LastError); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_WINDOW_NOT_FOUND: {
        Red; ErrLog("Can't get window handle\n\t[-] Err : %d(0x%X)\n", LastError, LastError); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_PID_NOT_FOUND: {
        Red; ErrLog("Can't get process id\n\t[-] Err : %d(0x%X)\n", LastError, LastError); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_FAILED_OPEN_PROCESS: {
        Red; ErrLog("Can't get process handle\n\t[-] Err : %d(0x%X)\n", LastError, LastError); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_FAILED_GET_PROCESS_NAME: {
        Red; ErrLog("Can't get process name\n\t[-] Err : %d(0x%X)\n", LastError, LastError); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_FAILED_GET_SNAPSHOT: {
        Red; ErrLog("Can't get process snapshot\n\t[-] Err : %d(0x%X)\n", LastError, LastError); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_FAILED_GET_MEM_INFO: {
        Red; ErrLog("Can't get process memory information\n"); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_NOT_SUPPORTED_VERSION: {
        Red; ErrLog("Not supported version of the engine.\n"); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_FAILED_OBJECT_INIT: {
        Red; ErrLog("Check your FName or GObject patterns\n"); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_FAILED_NAME_DUMP: {
        Red; ErrLog("Name Dump failed\n"); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_FAILED_OBJECT_DUMP: {
        Red; ErrLog("Object Dump failed\n"); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_FAILED_DUMP: {
        Red; ErrLog("Dump failed\n"); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_FAIELD_SDK_GEN: {
        Red; ErrLog("SDK Gen failed\n"); Gray; return FALSE; }
    case DUMP_STATUS::DUMPER_OBJECTBYNAME_NOT_FOUND: {
        Red; ErrLog("Not found object name\n"); Gray; return FALSE; }


    }
    return TRUE;
}
