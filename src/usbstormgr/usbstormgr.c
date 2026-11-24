#include "common.h"
#include "usbstormgr_decls.h"

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000000);

s32 func_00000170(struct Unk_func_00000170_0 *arg0, struct Unk_func_00000170_1 *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk7 != arg2) {
        arg1->unk1 = 5;
        var_v1 = -1;
        arg1->unk2 = 0x24;
        arg1->unk3 = 0;
    }
    return var_v1;
}

s32 func_0000019C(struct Unk_func_0000019C_0 *arg0, struct Unk_func_0000019C_1 *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (((u8) arg0->unkA >> 6) != arg2) {
        arg1->unk1 = 5;
        var_v1 = -1;
        arg1->unk2 = 0x6F;
        arg1->unk3 = 0;
    }
    return var_v1;
}

s32 func_000001CC(struct Unk_func_000001CC_0 *arg0, struct Unk_func_000001CC_1 *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0->unk8 << 8) | arg0->unk9) != arg2) {
        arg1->unk1 = 5;
        var_v1 = -1;
        arg1->unk2 = 0x24;
        arg1->unk3 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000204);

INCLUDE_ASM("nonmatchings/usbstormgr", func_000002F8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstormgr", func_000003C8);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000468);
#else
INCLUDE_ASM("nonmatchings/usbstormgr", func_000003C4);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000480);
#endif

INCLUDE_ASM("nonmatchings/usbstormgr", func_000004E0);

INCLUDE_ASM("nonmatchings/usbstormgr", func_0000050C);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000538);

INCLUDE_ASM("nonmatchings/usbstormgr", func_000005A0);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000730);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000764);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstormgr", func_0000085C);
#else
INCLUDE_ASM("nonmatchings/usbstormgr", func_0000086C);
#endif

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000968);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000A78);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000C30);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000E74);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000F68);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00000FD4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstormgr", func_0000105C);

INCLUDE_ASM("nonmatchings/usbstormgr", func_000012E8);
#else
INCLUDE_ASM("nonmatchings/usbstormgr", func_0000109C);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00001304);
#endif

INCLUDE_ASM("nonmatchings/usbstormgr", func_000013FC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstormgr", func_00001444);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00001868);

INCLUDE_ASM("nonmatchings/usbstormgr", func_000018B8);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00001D04);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00001F6C);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00002038);
#else
INCLUDE_ASM("nonmatchings/usbstormgr", func_00001450);

s32 func_000017C4(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/usbstormgr", func_000017CC);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00001B88);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00001D30);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00001E58);
#endif

INCLUDE_ASM("nonmatchings/usbstormgr", func_00002370);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstormgr", func_00002644);
#else
INCLUDE_ASM("nonmatchings/usbstormgr", func_00002464);
#endif

INCLUDE_ASM("nonmatchings/usbstormgr", func_00002638);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstormgr", func_00002948);
#else
INCLUDE_ASM("nonmatchings/usbstormgr", func_0000272C);
#endif

INCLUDE_ASM("nonmatchings/usbstormgr", func_000028E8);

INCLUDE_ASM("nonmatchings/usbstormgr", func_000029D8);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00002BF0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstormgr", func_00002F1C);
#else
INCLUDE_ASM("nonmatchings/usbstormgr", func_00002CE8);
#endif

INCLUDE_ASM("nonmatchings/usbstormgr", func_00002E74);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00002FA0);

INCLUDE_ASM("nonmatchings/usbstormgr", func_0000318C);

#if FW_VERSION == 100
void func_00003610(void) {
    M2C_VFIELD(&D_00004B00, s32, 0x60) = -1;
    M2C_VFIELD(&D_00004B00, s32, 0x3C) = 0;
    M2C_VFIELD(&D_00004B00, s32, 0x54) = -1;
    M2C_VFIELD(&D_00004B00, s32, 0x50) = -1;
    M2C_VFIELD(&D_00004B00, s32, 0x34) = -1;
    M2C_VFIELD(&D_00004B00, s32, 0x38) = -1;
    M2C_VFIELD(&D_00004B00, s32, 0x5C) = 0;
}
#else
INCLUDE_ASM("nonmatchings/usbstormgr", func_00003398);

INCLUDE_ASM("nonmatchings/usbstormgr", func_000035F4);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00003628);

INCLUDE_ASM("nonmatchings/usbstormgr", func_0000368C);

void func_00003B58(void) {
    D_00005150.unk74 = -1;
    D_00005150.unk50 = 0;
    D_00005150.unk68 = -1;
    D_00005150.unk64 = -1;
    D_00005150.unk48 = -1;
    D_00005150.unk4C = -1;
    D_00005150.unk70 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/usbstormgr", func_00003B84);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00003C78);

INCLUDE_ASM("nonmatchings/usbstormgr", module_start);

INCLUDE_ASM("nonmatchings/usbstormgr", module_stop);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00003D14);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00003D88);

INCLUDE_ASM("nonmatchings/usbstormgr", func_000040A0);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00004220);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00004338);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00004554);

INCLUDE_ASM("nonmatchings/usbstormgr", func_000047EC);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00004984);

INCLUDE_ASM("nonmatchings/usbstormgr", func_00004A1C);
