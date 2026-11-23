/* cflags: -O2 -frename-registers */
#include "common.h"
#include "impose_decls.h"

void func_00000000(u32 arg0) {
    sceKernelSetEventFlag(*D_0000F510, arg0);
}

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00000028);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00000074);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_000000CC);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00000124);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_000064C4);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_00006C34);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_000073A4);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000791C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_00007B1C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_00007D1C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_00007F5C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000819C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_000083BC);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_000085DC);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_00009CEC);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000AFAC);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000C26C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000C3D4);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000C53C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000C6A4);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000C80C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000CC0C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000D00C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000D40C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000D80C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000DF0C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000E60C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000E78C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000E90C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F2CC);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F2D8);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F2E4);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F2F8);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_0000017C);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_000001FC);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00000374);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00000508);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_0000068C);

s32 func_0000070C(void) {
    func_000025F0(7);
    func_000025F0(6);
    func_000025F0(3);
    func_000025F0(4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImpose_driver_9C8C6C81);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImpose_driver_531C9778);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImpose_driver_810FB7FB);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImposeSetLanguageMode);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImposeGetLanguageMode);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImposeGetBatteryIconStatus);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00000EEC);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImpose_driver_BDBC42A6);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImpose_driver_C7E36CC7);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImpose_driver_1AEED8FE);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00001764);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00001998);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00001CFC);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00001D7C);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00001E24);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00001F2C);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00001FB0);

s32 sceImpose_driver_1B6E3400(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x80);
}

s32 sceImpose_driver_B415FC59(void) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(D_0000F510, s32 *, 0x98);
    M2C_FIELD(D_0000F510, s32 *, 0x98) = 0;
    return temp_v0;
}

s32 sceImpose_driver_5595A71A(s32 arg0) {
    func_000047EC(arg0 ^ 1, 1);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImpose_driver_0F341BE4);

s32 sceImposeSetUMDPopup(s32 arg0) {
    func_000047EC(arg0 ^ 1, 2);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImposeGetUMDPopup);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImpose_driver_381BD9E7);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImpose_driver_9DBCE0C4);

s32 sceImpose_driver_7084E72C(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x78);
}

s32 sceImpose_9BA61B49(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x7C);
}

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", module_start);

s32 syslib_ADF12745(s32 arg0) {
    if (arg0 != 2) {

    } else {
        if (M2C_FIELD(D_0000F510, s32 *, 0x80) < 0) {
            sceDisplaySetHoldMode(arg0);
        }
        sceImpose_driver_C7E36CC7();
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", sceImpose_driver_86924032);

s32 sceAudioRoutingSetMode(s32 arg0) {
    return func_000048AC(arg0);
}

s32 sceAudioRoutingGetMode(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x4C);
}

s32 sceAudioRoutingSetVolumeMode(s32 arg0) {
    return func_00004954(arg0);
}

s32 sceAudioRoutingGetVolumeMode(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x6C);
}

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F36C);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00002378);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_000025F0);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_000027AC);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00002B0C);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00002C5C);

void func_00002DC0(s32 arg0) {
    if ((M2C_FIELD(D_0000F510, s32 *, 0x80) != 0) && !(arg0 & 0x20000) && (M2C_FIELD(D_0000F510, s32 *, 0x6C) == 0)) {
        if (arg0 & 0x100000) {
            M2C_FIELD(D_0000F510, s32 *, 0xA0) = (s32) (M2C_FIELD(D_0000F510, s32 *, 0xA0) | 0x100000);
        }
        if (arg0 & 0x200000) {
            M2C_FIELD(D_0000F510, s32 *, 0xA8) = 0;
            M2C_FIELD(D_0000F510, s32 *, 0xA0) = (s32) (M2C_FIELD(D_0000F510, s32 *, 0xA0) | 0x200000);
        }
        M2C_FIELD(D_0000F510, s32 *, 0xF0) = 0;
    }
}

void func_00002E2C(s32 arg0) {
    if (arg0 & 0x80000) {
        M2C_FIELD(D_0000F510, s32 *, 0x48) = 1;
    } else {
        M2C_FIELD(D_0000F510, s32 *, 0x48) = 0;
    }
    if (M2C_FIELD(D_0000F510, s32 *, 0x9C) != 0) {

    } else {
        func_00000000(0x20U);
    }
}

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00002E88);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00002FCC);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00003500);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_0000358C);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00003A90);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00003B40);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00003BE8);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_000040DC);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F394);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F3AC);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F3B8);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F3C0);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F3C8);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F3D8);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F3E8);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F400);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F410);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F41C);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F428);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F434);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F448);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F464);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F478);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F490);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F4A0);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F4AC);

INCLUDE_RODATA("tmp/asm/282/impose/nonmatchings/impose", D_0000F4BC);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_000042F0);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_000047EC);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00004870);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_000048AC);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00004954);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00004A08);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00004A40);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00004AB4);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00004B58);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00005104);

INCLUDE_ASM("tmp/asm/282/impose/nonmatchings/impose", func_00005998);
