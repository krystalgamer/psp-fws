#include "common.h"
#include "rinit_decls.h"

s32 _read(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v0;
    s32 var_v1;

    switch (arg0) {                                 /* irregular */
    default:
        var_v0 = arg0;
        break;
    case 2:
        var_v0 = sceKernelStderr();
        break;
    case 0:
        var_v0 = sceKernelStdin();
        break;
    case 1:
        var_v0 = sceKernelStdout();
        break;
    }
    var_v1 = -9;
    if (var_v0 >= 0) {
        var_v1 = sceIoRead(var_v0, arg1, arg2);
    }
    return var_v1;
}

s32 _write(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v0;
    s32 var_v1;

    switch (arg0) {                                 /* irregular */
    default:
        var_v0 = arg0;
        break;
    case 2:
        var_v0 = sceKernelStderr();
        break;
    case 0:
        var_v0 = sceKernelStdin();
        break;
    case 1:
        var_v0 = sceKernelStdout();
        break;
    }
    var_v1 = -9;
    if (var_v0 >= 0) {
        var_v1 = sceIoWrite(var_v0, arg1, arg2);
    }
    return var_v1;
}

void func_00001288(void) {
    sceIoOpen();
}

INCLUDE_ASM("nonmatchings/rinit_001140", _open);

s32 _close(s32 arg0) {
    s32 var_v0;
    s32 var_v1;

    switch (arg0) {                                 /* irregular */
    default:
        var_v0 = arg0;
        break;
    case 2:
        var_v0 = sceKernelStderr();
        break;
    case 0:
        var_v0 = sceKernelStdin();
        break;
    case 1:
        var_v0 = sceKernelStdout();
        break;
    }
    var_v1 = -9;
    if (var_v0 >= 0) {
        var_v1 = sceIoClose(var_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/rinit_001140", func_000013C4);

INCLUDE_ASM("nonmatchings/rinit_001140", _lseek);

INCLUDE_ASM("nonmatchings/rinit_001140", _fstat);

s32 isatty(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/rinit_001140", _exit);

s32 func_000015AC(void) {
    return -1;
}

void func_000015B4(void) {
    sceKernelFreePartitionMemory(D_0000F598);
}

INCLUDE_ASM("nonmatchings/rinit_001140", _sbrk);

s32 func_000016B4(void) {
    return -1;
}

s32 func_000016BC(void) {
    return -1;
}

void func_000016C4(void) {
    sceKernelLibcClock();
}

void func_000016E0(void) {
    sceKernelLibcTime();
}

void func_000016FC(void) {
    sceKernelLibcGettimeofday();
}

