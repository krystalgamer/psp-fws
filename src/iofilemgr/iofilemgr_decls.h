#ifndef IOFILEMGR_DECLS_H
#define IOFILEMGR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef int SceMode;
typedef s64 SceOff;
typedef s32 SceSSize;
typedef struct SceIoStat SceIoStat;
typedef struct SceIoDirent SceIoDirent;
typedef struct SceIoIob SceIoIob;
typedef struct SceIoDeviceEntry SceIoDeviceEntry;
typedef struct SceIoDeviceTable SceIoDeviceTable;
typedef struct SceIoDeviceFunction SceIoDeviceFunction;

/* sceIoAssign alias table node (0x70 bytes). */
typedef struct SceIoAlias {
    struct SceIoAlias *next; /* 0x0 */
    SceIoDeviceEntry *dev; /* 0x4 */
    s32 attr; /* 0x8 */
    s32 i_unit; /* 0xC */
    char alias[32]; /* 0x10 */
    char blockDev[32]; /* 0x30 */
    char fs[32]; /* 0x50 */
} SceIoAlias;

/* 1.00: 8 bytes (no d_userfd_count yet). */
struct SceIoDeviceEntry {
    SceIoDeviceTable *d_dp; /* 0x0 */
    void *d_private; /* 0x4 */
};

/* Driver function table (22 entries in 1.00, e.g. _nullcon_function). */
struct SceIoDeviceFunction {
    s32 (*df_init)(SceIoDeviceEntry *); /* 0x0 */
    s32 (*df_exit)(SceIoDeviceEntry *); /* 0x4 */
    s32 (*df_open)(SceIoIob *, char *, s32, SceMode); /* 0x8 */
    s32 (*df_close)(SceIoIob *); /* 0xC */
    SceSSize (*df_read)(SceIoIob *, void *, SceSize); /* 0x10 */
    SceSSize (*df_write)(SceIoIob *, const void *, SceSize); /* 0x14 */
    SceOff (*df_lseek)(SceIoIob *, SceOff, s32); /* 0x18 */
    s32 (*df_ioctl)(SceIoIob *, s32, void *, SceSize, void *, SceSize); /* 0x1C */
    s32 (*df_remove)(SceIoIob *, char *); /* 0x20 */
    s32 (*df_mkdir)(SceIoIob *, char *, SceMode); /* 0x24 */
    s32 (*df_rmdir)(SceIoIob *, char *); /* 0x28 */
    s32 (*df_dopen)(SceIoIob *, char *); /* 0x2C */
    s32 (*df_dclose)(SceIoIob *); /* 0x30 */
    s32 (*df_dread)(SceIoIob *, SceIoDirent *); /* 0x34 */
    s32 (*df_getstat)(SceIoIob *, char *, SceIoStat *); /* 0x38 */
    s32 (*df_chstat)(SceIoIob *, char *, SceIoStat *, u32); /* 0x3C */
    s32 (*df_rename)(SceIoIob *, const char *, const char *); /* 0x40 */
    s32 (*df_chdir)(SceIoIob *, char *); /* 0x44 */
    s32 (*df_mount)(SceIoIob *, const char *, const char *, s32, void *, s32); /* 0x48 */
    s32 (*df_umount)(SceIoIob *, char *); /* 0x4C */
    s32 (*df_devctl)(SceIoIob *, char *, s32, void *, SceSize, void *, SceSize); /* 0x50 */
    s32 (*df_cancel)(SceIoIob *); /* 0x54 */
};

/* Registered driver list node (alloc 0xC in 1.00). */
typedef struct SceIoDeviceList {
    struct SceIoDeviceList *next; /* 0x0 */
    SceIoDeviceEntry arg; /* 0x4 */
} SceIoDeviceList;

/* Driver descriptor passed to sceIoAddDrv (0x14 bytes). */
struct SceIoDeviceTable {
    char *dt_string; /* 0x0, device name */
    s32 dt_type; /* 0x4 */
    s32 dt_size; /* 0x8 */
    char *dt_desc; /* 0xC */
    SceIoDeviceFunction *dt_func; /* 0x10 */
};

/* File descriptor block. 1.00/1.50: static table g_iob[64] of 0x80 bytes, fd = index. */
struct SceIoIob {
    s32 i_flgs; /* 0x0, 1 = read, 2 = write, 0x8 = dir, 0x1000000 = thread-owned, 0x2000000 = power lock */
    s32 i_unit; /* 0x4 */
    SceIoDeviceEntry *i_de; /* 0x8 */
    s32 d_type; /* 0xC */
    void *i_private; /* 0x10 */
    void *i_cwd; /* 0x14 */
    SceOff i_fpos; /* 0x18 */
    SceUID i_thread; /* 0x20 */
    s32 unk24; /* 0x24 */
    s32 fd; /* 0x28, own index; -1 = free */
    SceUID curThread; /* 0x2C */
    s32 userMode; /* 0x30 */
    s32 powerLocked; /* 0x34 */
    s32 asyncPrio; /* 0x38 */
    SceUID asyncThread; /* 0x3C */
    SceUID asyncSema; /* 0x40 */
    SceUID asyncEvFlag; /* 0x44 */
    SceUID asyncCb; /* 0x48 */
    void *asyncCbArgp; /* 0x4C */
    s32 asyncClosed; /* 0x50, uOFW unk050: free the iob when the async result is collected */
    char *asyncCwd; /* 0x54, copy of the caller's cwd for an async open */
    u32 k1; /* 0x58 */
    s32 asyncCmd; /* 0x5C, 0 = close (deleted dev), 1 = open, 2 = close, 3 = read, 4 = write, 5 = lseek, 6 = ioctl */
    s64 asyncRet; /* 0x60 */
    s32 asyncArgs[6]; /* 0x68 */
};

struct Unk_IoFileMgrForKernel_BD17474F_0 {
    u8 pad0[0x80];
    s32 unk80;
};

struct Unk_sceIoGetDevType_sp0 {
    u8 pad0[0xC];
    u8 unkC;
};

extern s32 D_00004E4C;
extern M2C_UNK D_0000563C;
extern s32 D_00005870;
extern M2C_UNK D_000060B4;
extern M2C_UNK D_000060D4;
extern s32 D_00006630;
extern s32 D_00006634;
extern s32 D_00006638;
extern M2C_UNK g_dummyconDriver;
extern s32 g_heap;

s32 IoFileMgrRebootBefore(s32);
s32 _nulldev(void);
s32 alloc_alias_tbl(void);
s32 alloc_device_list(void);
s32 do_close(s32, s32, s32);
s32 do_get_async_stat(s32, s32, s32, s32);
s32 do_ioctl(s32, s32, s32, s32, s32, s32, s32);
s32 do_open(s32, s32, s32, s32);
s32 do_read(s32, s32, s32, s32);
s32 do_write(s32, s32, s32, s32);
s32 fdgets(s32, s32);
s32 fdputc(s32, s32);
void free_alias_tbl(s32 arg0);
void free_cwd(s32 *arg0);
void free_device_list(s32 arg0);
s32 func_00000000(void);
void func_00000094(void);
s32 func_00000B78(void);
s32 func_00000B9C(void);
s32 func_00000C28(void);
s32 func_00000C30(void);
s32 func_00000C38(void *arg0);
s32 func_00000C50(void *arg0);
s32 func_00000D04(s32, s32);
void func_0000184C(s32 arg0);
void func_00001968(s32 arg0);
s32 func_00001990(s32, s32, s32, s32, s32);
void func_00001B9C(s32 arg0);
void func_00001CB8(s32 arg0);
s32 func_00002C48(void);
void func_0000339C(s32 *arg0);
s32 func_000033DC(void);
s32 func_00003570(s32, s32, s32, s32);
s32 func_00003748(s32, s32, s32);
s32 func_00003AD4(s32, s32, s32, s32);
s32 func_00003C34(s32, s32, s32, s32);
void func_00003D68(void);
s32 func_00003D94(s32, s32, s32, s32, s32, s32);
s32 func_00003F24(s32, s32, s32, s32, s32, s32, s32);
s32 func_00004114(s32, s32, s32);
s32 func_00004374(s32, s32, s32, s32);
s32 func_0000467C(void);
s32 func_0000557C(void *arg0);
s32 func_000055A4(void);
void gets(s32 arg0);
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
void module_reboot_before(void);
s32 sceIoAddDrv(s32);
s32 sceIoChdir(void *arg0);
s32 sceIoChstat(void *arg0, void *arg1, u32 arg2);
s32 sceIoClose(u32 arg0);
s32 sceIoCloseAsync(u32 arg0);
s32 sceIoDelDrv(s32);
void sceIoGetAsyncStat(s32 arg0, s32 arg1, s32 arg2);
s32 sceIoGetDevType(s32 arg0);
s32 sceIoGetIobUserLevel(struct Unk_IoFileMgrForKernel_BD17474F_0 *arg0);
s32 sceIoGetstat(void *arg0, void *arg1);
s32 sceIoIoctl(u32 arg0, s32 arg1, void *arg2, u32 arg3, void *arg4, u32 arg5);
s32 sceIoIoctlAsync(u32 arg0, s32 arg1, void *arg2, u32 arg3, void *arg4, u32 arg5);
void sceIoLseek(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 sceIoLseek32(u32 arg0, s32 arg1, s32 arg2);
s32 sceIoLseek32Async(u32 arg0, s32 arg1, s32 arg2);
void sceIoLseekAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 sceIoMkdir(void *arg0, s32 arg1);
s32 sceIoOpen(void *arg0, s32 arg1, s32 arg2);
s32 sceIoOpenAsync(void *arg0, s32 arg1, s32 arg2);
s32 sceIoPollAsync(u32 arg0, void *arg1);
s32 sceIoRead(u32 arg0, void *arg1, u32 arg2);
s32 sceIoReadAsync(u32 arg0, void *arg1, u32 arg2);
s32 sceIoReopen(s32, s32, s32, s32);
s32 sceIoRmdir(void *arg0);
s32 sceIoWaitAsync(u32 arg0, void *arg1);
s32 sceIoWaitAsyncCB(u32 arg0, void *arg1);
s32 sceIoWrite(u32 arg0, void *arg1, u32 arg2);
s32 sceIoWriteAsync(u32 arg0, void *arg1, u32 arg2);
s32 sceKernelAllocHeapMemory(s32, M2C_UNK);
M2C_UNK sceKernelCallUIDObjCommonFunction();
M2C_UNK sceKernelFreeHeapMemory(s32, s32);
s32 sceKernelRegisterStderrPipe(s32 arg0);
s32 sceKernelRegisterStdoutPipe(s32 arg0);
s32 sceKernelStderr(void);
s32 sceKernelStderrReopen(s32 arg0, s32 arg1, s32 arg2);
s32 sceKernelStdin(void);
s32 sceKernelStdioClose(void);
s32 sceKernelStdioLseek(void);
s32 sceKernelStdioOpen(void);
s32 sceKernelStdioRead(void);
void sceKernelStdioSendChar(void);
s32 sceKernelStdioWrite(void);
s32 sceKernelStdout(void);
s32 sceKernelStdoutReopen(s32 arg0, s32 arg1, s32 arg2);
s32 validate_fd(s32, s32, s32, s32, s32);
s32 xx_dir(s32, s32, s32);

#endif
