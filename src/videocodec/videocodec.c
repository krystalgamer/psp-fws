/* cflags: -O2 -frename-registers */
#include "common.h"
#include "videocodec_decls.h"

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", sceVideocodec_2D31F5B1);

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", sceVideocodec_4F160BF4);

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", sceVideocodec_C01EC829);

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", sceVideocodec_17099F0A);

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", sceVideocodec_DBA273FA);

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", sceVideocodec_A2F0564E);

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", sceVideocodec_307E6E1C);

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", sceVideocodec_745A7B7A);

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", sceVideocodec_2F385E7F);

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", sceVideocodec_26927D19);

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", sceVideocodec_627B7D42);

s32 sceVideocodec_driver_E76D65FE(void) {
    return 0;
}

s32 sceVideocodec_driver_CB3312D1(void) {
    sceMePower_driver_B6FE3E62(0);
    sceMePower_driver_05B2C420(0);
    return 0;
}

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", func_00000BB0);

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", func_00000C18);

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", func_00000CE8);

void func_00000EB4(struct Unk_func_00000EB4_0 *arg0, s32 arg1) {
    void *temp_s1;
    void *temp_v0;

    if (arg1 != 0) {

    } else {
        temp_s1 = arg0->unk10;
        sceKernelDcacheInvalidateRange(arg0->unk2C, ((M2C_FIELD(temp_s1, s32 *, 0x20) * 0x2C) + 0x3F) & ~0x3F);
        sceKernelDcacheInvalidateRange(arg0->unk30, 0x40U);
        temp_v0 = arg0->unk38;
        if (temp_v0 != NULL) {
            sceKernelDcacheInvalidateRange(temp_v0, ((M2C_FIELD(temp_s1, s32 *, 0x20) * 0x148) + 0x3F) & ~0x3F);
        }
    }
}

INCLUDE_ASM("tmp/asm/201/videocodec/nonmatchings/videocodec", func_00000F4C);
