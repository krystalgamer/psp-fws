/* cflags[152]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100]: -O2 -frename-registers */
#include "common.h"
#include "idstorage_decls.h"

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/idstorage", D_00001F80);

INCLUDE_RODATA("nonmatchings/idstorage", D_00001F84);

INCLUDE_RODATA("nonmatchings/idstorage", D_00001F98);

INCLUDE_RODATA("nonmatchings/idstorage", D_00001FB0);

INCLUDE_RODATA("nonmatchings/idstorage", D_00001FCC);

INCLUDE_RODATA("nonmatchings/idstorage", D_00001FEC);

INCLUDE_RODATA("nonmatchings/idstorage", D_00002004);

INCLUDE_RODATA("nonmatchings/idstorage", D_0000201C);

INCLUDE_RODATA("nonmatchings/idstorage", D_00002030);

INCLUDE_RODATA("nonmatchings/idstorage", D_00002048);

INCLUDE_RODATA("nonmatchings/idstorage", D_00002058);

INCLUDE_RODATA("nonmatchings/idstorage", D_00002078);

INCLUDE_RODATA("nonmatchings/idstorage", D_0000208C);

INCLUDE_RODATA("nonmatchings/idstorage", D_0000214C);

INCLUDE_RODATA("nonmatchings/idstorage", D_00002154);

INCLUDE_RODATA("nonmatchings/idstorage", D_00002158);

INCLUDE_RODATA("nonmatchings/idstorage", D_00002160);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/idstorage", D_0000217C_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/idstorage", D_0000217C_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/idstorage", D_0000217C_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/idstorage", D_00002180);

INCLUDE_RODATA("nonmatchings/idstorage", D_000021BC);

INCLUDE_RODATA("nonmatchings/idstorage", D_000021C4);

INCLUDE_RODATA("nonmatchings/idstorage", D_000021CC);
#endif

INCLUDE_RODATA("nonmatchings/idstorage", D_0000217C);

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageInit);

#if FW_VERSION < 201
s32 _sceIdStorageSysEventHandler(s32 id, char *name, void *param, s32 *res) {
    if (id == 256) {
        if (sceIdStorageIsDirty()) {
            return 0x80000021;
        }
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/idstorage", _sceIdStorageSysEventHandler);
#endif

#if FW_VERSION < 201
s32 sceIdStorageIsDirty(void) {
    s32 i;

    if (D_00006630.dirty) {
        return 1;
    }
    for (i = 0; i < 32; i++) {
        if (D_00006630.store[i].state == 3) {
            return 1;
        }
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageIsDirty);
#endif

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageFormat);

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageUnformat);

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageReadLeaf);

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageWriteLeaf);

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageFlush);

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageGetFreeLeaves);

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageEnumId);

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageCreateLeaf);

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageCreateAtomicLeaves);

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageDeleteLeaf);

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageLookup);

INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageUpdate);

s32 module_start(void) {
    sceIdStorageInit();
    return 0;
}

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/idstorage", module_reboot_before);
#else
s32 module_reboot_before(void) {
    sceIdStorageFlush();
    sceKernelUnregisterSysEventHandler(&D_000021F0);
    sceKernelDeleteSema(D_00006630.sema);
    sceKernelDeleteFpl(D_00006630.fpl);
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageEnd);
#else
s32 sceIdStorageEnd(void) {
    sceIdStorageFlush();
    sceKernelUnregisterSysEventHandler(&D_000021F0);
    sceKernelDeleteSema(D_00006630.sema);
    sceKernelDeleteFpl(D_00006630.fpl);
    return 0;
}
#endif

s32 sceIdStorageSuspend(void) {
    sceIdStorageFlush();
    return 0;
}

s32 sceIdStorageResume(void) {
    return 0;
}

s32 sceIdStorageGetLeafSize(void) {
    return 0x200;
}

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageIsFormatted);
#else
u8 sceIdStorageIsFormatted(void) {
    return D_00006644;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/idstorage", sceIdStorageIsReadOnly);
#else
u8 sceIdStorageIsReadOnly(void) {
    return D_00006645;
}
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/idstorage", func_00001C30);
#endif

INCLUDE_ASM("nonmatchings/idstorage", func_00001CA0);

#if FW_VERSION < 201
s32 _sceIdStorageFindKeyPos(u16 id) {
    s32 i;
    s32 pos = -1;

    for (i = 0; i < 512; i++) {
        if (D_00006630.index[i] == id) {
            pos = i;
            break;
        }
    }
    if (pos < 0) {
        return 0x80000025;
    }
    return pos;
}
#else
INCLUDE_ASM("nonmatchings/idstorage", _sceIdStorageFindKeyPos);
#endif
