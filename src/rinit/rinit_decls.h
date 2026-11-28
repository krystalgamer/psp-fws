#ifndef RINIT_DECLS_H
#define RINIT_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00001AF8_1 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00007470_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_00007470_1 {
    void * unk0;
    s32 unk4;
};

struct Unk_func_00007804_temp_v0 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
};

struct Unk_func_000088F0_0 {
    u8 pad0[0xC];
    u16 unkC;
    s16 unkE;
    u8 pad10[0x40];
    s32 unk50;
};

struct Unk_func_00008958_0 {
    u8 pad0[0xC];
    u16 unkC;
    s16 unkE;
};

struct Unk_func_00008A4C_0 {
    u8 pad0[0xE];
    s16 unkE;
};

typedef void (*func_ptr)(void);

extern func_ptr D_0000B28C[];
extern M2C_UNK D_0000BEBC;
extern s32 D_0000F138;
extern s32 D_0000F598;
extern s32 D_0000F5E0;
extern s32 D_0000F5E4;
extern s32 D_0000F5E8;
extern M2C_UNK fflush;

s32 _Balloc(s32, s32);
void _Bfree(struct Unk_func_00007470_0 *arg0, struct Unk_func_00007470_1 *arg1);
void __malloc_lock(void);
void __malloc_unlock(void);
void __sclose(struct Unk_func_00008A4C_0 *arg0);
s32 __sfvwrite(s32, s32);
s32 __sprint(s32 arg0, struct Unk_func_00001AF8_1 *arg1);
s32 __sread(struct Unk_func_000088F0_0 *arg0, s32 arg1, s32 arg2);
void __swrite(struct Unk_func_00008958_0 *arg0, s32 arg1, s32 arg2);
void _cleanup(void);
void _cleanup_r(s32 arg0);
s32 _close(s32 arg0);
s32 _close_r(s32, s32);
s32 _fstat(s32, s32);
s32 _fstat_r(s32 *arg0, s32 arg1, s32 arg2);
s32 _fwalk(s32, s32);
s32 _hi0bits(s32 arg0);
void _i2b(s32 arg0, s32 arg1);
M2C_UNK *_localeconv_r(void);
s32 _lseek_r(s32, s32, s32, s32);
s32 _read(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 _read_r(s32, s32, s32, s32);
s32 _sbrk(s32);
s32 _sbrk_r(s32 *arg0, s32 arg1);
s32 _setlocale_r(s32, s32, s32);
s32 _write(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 _write_r(s32, s32, s32, s32);
void func_00001288(void);
s32 func_000015AC(void);
void func_000015B4(void);
s32 func_000016B4(void);
s32 func_000016BC(void);
void func_000016C4(void);
void func_000016E0(void);
void func_000016FC(void);
s32 isatty(void);
s32 sceIoClose(s32);
M2C_UNK sceIoOpen();
s32 sceIoRead(s32, M2C_UNK, M2C_UNK);
s32 sceIoWrite(s32, M2C_UNK, M2C_UNK);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
M2C_UNK sceKernelFreePartitionMemory(s32);
M2C_UNK sceKernelLibcClock();
M2C_UNK sceKernelLibcGettimeofday();
M2C_UNK sceKernelLibcTime();
s32 sceKernelStderr();
s32 sceKernelStdin();
s32 sceKernelStdout();
void setlocale(s32 arg0, s32 arg1);

#endif
