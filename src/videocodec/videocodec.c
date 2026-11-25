/* cflags: -O2 -frename-registers */
#include "common.h"
#include "videocodec_decls.h"

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_2D31F5B1);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_4F160BF4);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_C01EC829);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_17099F0A);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_DBA273FA);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_A2F0564E);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_307E6E1C);
#endif

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_745A7B7A);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_2F385E7F);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_26927D19);

#if FW_VERSION < 201
s32 sceVideocodec_driver_E76D65FE(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 module_stop(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_627B7D42);
#endif

#if FW_VERSION == 201
s32 sceVideocodec_driver_E76D65FE(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150
s32 sceVideocodec_driver_CB3312D1(void) {
    sceMePower_driver_B6FE3E62(0);
    sceMePower_driver_05B2C420(0);
    return 0;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_17099F0A);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_DBA273FA);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_A2F0564E);

INCLUDE_ASM("nonmatchings/videocodec", sceVideocodec_307E6E1C);
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
