#include "common.h"
#include "usbstormgr_decls.h"

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00000000);

s32 func_00000170(void *arg0, void *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, u8 *, 7) != arg2) {
        M2C_FIELD(arg1, s8 *, 1) = 5;
        var_v1 = -1;
        M2C_FIELD(arg1, s8 *, 2) = 0x24;
        M2C_FIELD(arg1, s8 *, 3) = 0;
    }
    return var_v1;
}

s32 func_0000019C(void *arg0, void *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (((u8) M2C_FIELD(arg0, u8 *, 0xA) >> 6) != arg2) {
        M2C_FIELD(arg1, s8 *, 1) = 5;
        var_v1 = -1;
        M2C_FIELD(arg1, s8 *, 2) = 0x6F;
        M2C_FIELD(arg1, s8 *, 3) = 0;
    }
    return var_v1;
}

s32 func_000001CC(void *arg0, void *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (((M2C_FIELD(arg0, u8 *, 8) << 8) | M2C_FIELD(arg0, u8 *, 9)) != arg2) {
        M2C_FIELD(arg1, s8 *, 1) = 5;
        var_v1 = -1;
        M2C_FIELD(arg1, s8 *, 2) = 0x24;
        M2C_FIELD(arg1, s8 *, 3) = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00000204);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_000002F8);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_000003C4);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00000480);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_000004E0);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_0000050C);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00000538);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_000005A0);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00000730);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00000764);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_0000086C);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00000968);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00000A78);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00000C30);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00000E74);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00000F68);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00000FD4);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_0000109C);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00001304);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_000013FC);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00001450);

s32 func_000017C4(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_000017CC);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00001B88);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00001D30);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00001E58);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00002370);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00002464);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00002638);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_0000272C);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_000028E8);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_000029D8);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00002BF0);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00002CE8);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00002E74);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00002FA0);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_0000318C);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00003398);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_000035F4);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00003628);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_0000368C);

void func_00003B58(void) {
    M2C_VFIELD(&D_00005150, s32, 0x74) = -1;
    M2C_VFIELD(&D_00005150, s32, 0x50) = 0;
    M2C_VFIELD(&D_00005150, s32, 0x68) = -1;
    M2C_VFIELD(&D_00005150, s32, 0x64) = -1;
    M2C_VFIELD(&D_00005150, s32, 0x48) = -1;
    M2C_VFIELD(&D_00005150, s32, 0x4C) = -1;
    M2C_VFIELD(&D_00005150, s32, 0x70) = 0;
}

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00003B84);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00003C78);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", module_start);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", module_stop);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00003D14);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00003D88);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_000040A0);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00004220);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00004338);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00004554);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_000047EC);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00004984);

INCLUDE_ASM("tmp/asm/340/usbstormgr/nonmatchings/usbstormgr", func_00004A1C);
