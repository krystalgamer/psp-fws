#ifndef IDSTORAGE_DECLS_H
#define IDSTORAGE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    u16 keyId;
    u8 state;
    u8 unk3;
} SceIdStorageItem;
typedef struct {
    s32 fpl;
    s32 sema;
    s32 owner;
    s32 pagesPerBlock;
    u32 unk10;
    u8 formatted;
    u8 unk15;
    u8 dirty;
    u8 unk17;
    u32 unk18;
    u32 unk1C;
    u16 index[512];
    SceIdStorageItem store[32];
    void *pool;
} SceIdStorage;

extern s32 D_000021F0;
extern SceIdStorage D_00006630;
extern u8 D_00006644;
extern u8 D_00006645;

s32 module_reboot_before(void);
s32 module_start(void);
s32 sceIdStorageEnd(void);
s32 sceIdStorageFlush(void);
s32 sceIdStorageGetLeafSize(void);
M2C_UNK sceIdStorageInit();
s32 sceIdStorageIsDirty(void);
u8 sceIdStorageIsFormatted(void);
u8 sceIdStorageIsReadOnly(void);
s32 sceIdStorageResume(void);
s32 sceIdStorageSuspend(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDeleteFpl(s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelGetThreadId(void);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
s32 sceKernelUnregisterSysEventHandler(void *);
s32 sceKernelWaitSema(s32, s32, u32 *);
s32 sceNandEraseBlock(u32);
s32 sceNandLock(s32);
s32 sceNandUnlock(void);

#endif
