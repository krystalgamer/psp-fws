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

typedef struct SceSysmemUidCB {
    struct SceSysmemUidCB *PARENT0;
    struct SceSysmemUidCB *nextChild;
    struct SceSysmemUidCB *meta;
    SceUID uid;
    char *name;
    u8 childSize;
    u8 size;
    u16 attr;
    struct SceSysmemUidCB *next;
    struct SceSysmemUidCB *PARENT1;
    void *funcTable;
} SceSysmemUidCB;

extern char D_00004594[];
extern char D_0000466C[];
extern s32 D_00004E4C;
extern char D_00005118[];
extern char D_0000563C[];
extern s32 D_00005870;
extern M2C_UNK D_000060B4;
extern M2C_UNK D_000060D4;
extern s32 D_00006630;
extern s32 D_00006634;
extern s32 D_00006638;
extern SceIoAlias *g_aliasList;
extern s32 g_defaultThreadPriority;
extern SceIoDeviceList *g_devList;
extern SceIoDeviceTable g_dummyconDriver;
extern SceUID g_heap;
extern SceIoIob g_iob[64];
extern SceUID g_ktls;
extern SceIoDeviceFunction g_nullconFunction;
extern char *g_pathbufBuf[2];
extern s32 g_pathbufCount;

s32 terminate_iofm(s32);
s32 _nulldev(void);
void add_alias_tbl(SceIoAlias *alias);
void add_device_list(SceIoDeviceList *list);
SceIoAlias *alloc_alias_tbl(void);
SceIoDeviceList *alloc_device_list(void);
s32 alloc_iob(SceIoIob **outIob);
char *alloc_pathbuf(void);
s32 async_loop(SceSize args, void *argp);
s32 create_async_thread(SceIoIob *iob);
s32 delete_alias_tbl(SceIoAlias *alias);
s32 delete_device_list(SceIoDeviceList *list);
s32 do_close(SceUID fd, s32 async, s32 remove);
s32 do_get_async_stat(SceUID fd, s64 *res, s32 poll, s32 cb);
s32 do_ioctl(SceUID fd, u32 cmd, void *indata, s32 inlen, void *outdata, s32 outlen, s32 async);
SceOff do_lseek(SceUID fd, SceOff offset, s32 whence, s32 async);
SceUID do_open(const char *path, s32 flags, SceMode mode, s32 async);
s32 do_read(SceUID fd, void *data, SceSize size, s32 async);
s32 do_write(SceUID fd, const void *data, SceSize size, s32 async);
s32 fdgets(s32, s32);
s32 fdputc(s32, s32);
void free_alias_tbl(SceIoAlias *alias);
void free_cwd(char **ktls);
void free_device_list(SceIoDeviceList *list);
s32 free_iob(SceIoIob *iob);
void free_pathbuf(char *ptr);
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
void func_00003D68(void);
s32 func_0000467C(void);
s32 func_0000557C(void *arg0);
s32 func_000055A4(void);
void gets(s32 arg0);
s32 init_iob_table(void);
s32 iob_power_lock(SceIoIob *iob);
s32 iob_power_unlock(SceIoIob *iob);
s32 is_async_busy(SceIoIob *iob);
SceIoAlias *lookup_alias_tbl(const char *drive);
SceIoDeviceList *lookup_device_list(const char *drive);
void *memset(void *s, s32 c, SceSize n);
void module_reboot_before(void);
s32 open_main(SceIoIob *iob);
s32 sceIoAddDrv(SceIoDeviceTable *drv);
s32 sceIoChdir(const char *path);
s32 sceIoChstat(const char *file, SceIoStat *stat, u32 bits);
s32 sceIoClose(SceUID fd);
s32 sceIoCloseAsync(SceUID fd);
s32 sceIoDelDrv(const char *drv);
s32 sceIoDevctl(const char *dev, u32 cmd, void *indata, s32 inlen, void *outdata, s32 outlen);
s32 sceIoGetAsyncStat(SceUID fd, s32 poll, s64 *res);
s32 sceIoGetDevType(s32 arg0);
s32 sceIoGetIobUserLevel(struct Unk_IoFileMgrForKernel_BD17474F_0 *arg0);
s32 sceIoGetstat(const char *file, SceIoStat *stat);
s32 sceIoIoctl(SceUID fd, u32 cmd, void *indata, s32 inlen, void *outdata, s32 outlen);
s32 sceIoIoctlAsync(SceUID fd, u32 cmd, void *indata, s32 inlen, void *outdata, s32 outlen);
SceOff sceIoLseek(SceUID fd, SceOff offset, s32 whence);
s32 sceIoLseek32(SceUID fd, s32 offset, s32 whence);
s32 sceIoLseek32Async(SceUID fd, s32 offset, s32 whence);
SceOff sceIoLseekAsync(SceUID fd, SceOff offset, s32 whence);
s32 sceIoMkdir(const char *path, SceMode mode);
SceUID sceIoOpen(const char *file, s32 flags, SceMode mode);
SceUID sceIoOpenAsync(const char *file, s32 flags, SceMode mode);
s32 sceIoPollAsync(SceUID fd, s64 *res);
s32 sceIoRead(SceUID fd, void *data, SceSize size);
s32 sceIoReadAsync(SceUID fd, void *data, SceSize size);
s32 sceIoReopen(s32, s32, s32, s32);
s32 sceIoRmdir(const char *path);
s32 sceIoWaitAsync(SceUID fd, s64 *res);
s32 sceIoWaitAsyncCB(SceUID fd, s64 *res);
s32 sceIoWrite(SceUID fd, const void *data, SceSize size);
s32 sceIoWriteAsync(SceUID fd, const void *data, SceSize size);
void *sceKernelAllocHeapMemory(SceUID heapId, SceSize size);
M2C_UNK sceKernelCallUIDObjCommonFunction();
void sceKernelCpuResumeIntr(s32 intr);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelFreeHeapMemory(SceUID heapId, void *block);
void *sceKernelGetKTLS(SceUID id);
s32 sceKernelGetUIDcontrolBlock(SceUID uid, SceSysmemUidCB **block);
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
s32 start_async(SceIoIob *iob, s32 cmd);
s32 strcmp_bs(const char *s1, const char *s2);
char *strcpy(char *d, const char *s);
SceSize strlen(const char *s);
s32 validate_fd(SceUID fd, s32 flags, s32 arg2, s32 arg3, SceIoIob **outIob);
s32 xx_dir(const char *path, SceMode mode, s32 action);
s32 xx_stat(const char *file, SceIoStat *stat, u32 bits, s32 get);

#endif
