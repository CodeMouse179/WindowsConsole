#ifndef WINDOWS_CONSOLE_H
#define WINDOWS_CONSOLE_H

#define EXTERN_C_SCOPE_START extern "C" {
#define EXTERN_C_SCOPE_END }

#define DECLSPEC_IMPORT __declspec(dllimport)
#define WINBASEAPI DECLSPEC_IMPORT
#define WINAPI __stdcall

typedef void* HANDLE;
typedef unsigned long DWORD;

#ifdef __cplusplus
EXTERN_C_SCOPE_START
#endif

WINBASEAPI
HANDLE
WINAPI
GetStdHandle
(
    DWORD nStdHandle
);

#ifdef __cplusplus
EXTERN_C_SCOPE_END
#endif

#endif