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
    s32 pagesPerBlock;
    s32 unkC;
    u8 unk10[6];
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
s32 sceKernelDeleteFpl(s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelUnregisterSysEventHandler(void *);

#endif
