/* cflags: -O2 -frename-registers */
#include "common.h"
#include "videocodec_decls.h"

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecGetEDRAM);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecReleaseEDRAM);

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/videocodec", func_0000012C);

INCLUDE_ASM("nonmatchings/videocodec", func_00000244);

INCLUDE_ASM("nonmatchings/videocodec", func_00000370);

INCLUDE_ASM("nonmatchings/videocodec", func_000004EC);

INCLUDE_ASM("nonmatchings/videocodec", func_00000624);

INCLUDE_ASM("nonmatchings/videocodec", func_00000714);

INCLUDE_ASM("nonmatchings/videocodec", func_00000800);

INCLUDE_ASM("nonmatchings/videocodec", func_0000097C);
#else
INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecOpen);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 250)
INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecInit);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecDecode);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecStop);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecDelete);
#endif

#if FW_VERSION != 102
INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecSetMemory);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecScanHeader);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecGetVersion);
#endif

#if FW_VERSION < 201
s32 sceVideocodecStartEntry(void) {
    return 0;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/videocodec", func_00000A58);
#endif

#if FW_VERSION == 100
s32 module_stop(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecGetSEI);
#endif

#if FW_VERSION == 201
s32 sceVideocodecStartEntry(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150
s32 sceVideocodecEndEntry(void) {
    sceMePowerControlDmacplusClock(0);
    sceMePowerControlAvcPower(0);
    return 0;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecInit);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecDecode);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecStop);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodecDelete);
#endif

INCLUDE_ASM("nonmatchings/videocodec", func_00000BB0);

INCLUDE_ASM("nonmatchings/videocodec", func_00000C18);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/videocodec", func_0000094C);
#endif

INCLUDE_ASM("nonmatchings/videocodec", func_00000CE8);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/videocodec", func_00000B78);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/videocodec", func_00000EB4);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/videocodec", func_00000C24);

INCLUDE_ASM("nonmatchings/videocodec", func_00000D50);
#endif

#if FW_VERSION < 201
void func_00000D48(void *arg0, s32 arg1) {
    void *temp_s1;
    void *temp_v0;

    if (arg1 != 0) {

    } else {
        temp_s1 = M2C_FIELD(arg0, void **, 0x10);
        sceKernelDcacheInvalidateRange(M2C_FIELD(arg0, void **, 0x2C), ((M2C_FIELD(temp_s1, s32 *, 0x20) * 0x2C) + 0x3F) & ~0x3F);
        sceKernelDcacheInvalidateRange(M2C_FIELD(arg0, void **, 0x30), 0x40U);
        temp_v0 = M2C_FIELD(arg0, void **, 0x38);
        if (temp_v0 != NULL) {
            sceKernelDcacheInvalidateRange(temp_v0, ((M2C_FIELD(temp_s1, s32 *, 0x20) * 0x148) + 0x3F) & ~0x3F);
        }
    }
}
#endif

#if FW_VERSION == 250
void func_00000EB4(struct Unk_func_00000EB4_0 *arg0, s32 arg1) {
    void *temp_v0;

    if (arg1 != 0) {

    } else {
        sceKernelDcacheInvalidateRange(arg0->unk2C, ((M2C_FIELD(arg0, s32 *, 0x3C) * 0x2C) + 0x3F) & ~0x3F);
        sceKernelDcacheInvalidateRange(arg0->unk30, 0x40U);
        temp_v0 = arg0->unk38;
        if (temp_v0 != NULL) {
            sceKernelDcacheInvalidateRange(temp_v0, ((M2C_FIELD(arg0, s32 *, 0x3C) * 0x148) + 0x3F) & ~0x3F);
        }
    }
}
#endif

#if FW_VERSION == 201
void func_00000EB4(struct Unk_func_00000EB4_0 *arg0, s32 arg1) {
    struct Unk_func_00000EB4_temp_s1 *temp_s1;
    void *temp_v0;

    if (arg1 != 0) {

    } else {
        temp_s1 = arg0->unk10;
        sceKernelDcacheInvalidateRange(arg0->unk2C, ((temp_s1->unk20 * 0x2C) + 0x3F) & ~0x3F);
        sceKernelDcacheInvalidateRange(arg0->unk30, 0x40U);
        temp_v0 = arg0->unk38;
        if (temp_v0 != NULL) {
            sceKernelDcacheInvalidateRange(temp_v0, ((temp_s1->unk20 * 0x148) + 0x3F) & ~0x3F);
        }
    }
}
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/videocodec", D_00001090);

INCLUDE_RODATA("nonmatchings/videocodec", D_000010A8);
#else
INCLUDE_ASM("nonmatchings/videocodec", func_00000F4C);
#endif
