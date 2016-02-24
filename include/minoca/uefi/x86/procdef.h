/*++

Copyright (c) 2014 Minoca Corp. All Rights Reserved

Module Name:

    procdef.h

Abstract:

    This header contains processor specific definitions for UEFI on x86.

Author:

    Evan Green 7-Feb-2014

--*/

//
// ------------------------------------------------------------------- Includes
//

//
// --------------------------------------------------------------------- Macros
//

//
// This macro returns a pointer to the first instruction in the given function.
//

#define FUNCTION_ENTRY_POINT(_Function) (VOID *)(UINTN)(_Function)

//
// ---------------------------------------------------------------- Definitions
//

//
// Define the primary CPU type.
//

#define EFI_X86 1

//
// Create definitions for the highest bit and two bits in a native integer.
//

#define MAX_BIT     0x80000000
#define MAX_2_BITS  0xC0000000

//
// Define the limits for the native integer.
//

#ifndef __MINOCA_TYPES_H

#define MAX_INTN    ((INTN)0x7FFFFFFF)
#define MAX_UINTN   ((UINTN)0xFFFFFFFF)

#endif

#define MAX_ADDRESS MAX_UINTN

//
// Define the required stack alignment.
//

#define CPU_STACK_ALIGNMENT sizeof(UINTN)

#define EFIAPI __attribute__((cdecl))

//
// ------------------------------------------------------ Data Type Definitions
//

//
// Define basic types.
//

typedef unsigned long long UINT64;
typedef long long INT64;
typedef unsigned int UINT32;
typedef int INT32;
typedef unsigned short UINT16;
typedef unsigned short CHAR16;
typedef short INT16;
typedef unsigned char BOOLEAN;
typedef unsigned char UINT8;
typedef char INT8;
typedef char CHAR8;

//
// Define the native architectural integer size.
//

#ifndef __MINOCA_TYPES_H

typedef UINT32 UINTN;
typedef INT32 INTN;

#endif

//
// -------------------------------------------------------------------- Globals
//

//
// -------------------------------------------------------- Function Prototypes
//