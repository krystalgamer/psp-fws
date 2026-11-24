/* cflags: -O2 -frename-registers */
#include "common.h"
#include "umd9660_decls.h"

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00000000);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_000000E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00000190);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00000338);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/umd9660", D_00005A98);
#endif

INCLUDE_RODATA("nonmatchings/umd9660", D_00005AF0);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005AF4);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005AFC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00000000);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/umd9660", D_00005A70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00000134);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_000001BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_0000043C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_000004F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00000780);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_0000081C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00000964);
#endif

#if FW_VERSION == 100
s32 func_00000984(s32 arg0) {
    return (arg0 >> 0x10) & 0xF;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_000003A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00000594);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_0000090C);
#endif

#if FW_VERSION != 100
s32 func_00000B34(s32 arg0) {
    return !(arg0 & 0xF02) ? 0 : 0x8001B004;
}
#endif

#if FW_VERSION != 100
s32 func_00000B48(s32 arg0) {
    return __builtin_allegrex_ext(arg0, 0x10, 4);
}
#endif

#if FW_VERSION == 100
s32 module_start(void) {
    M2C_FIELD(func_000026E4(), s32 *, 0x14) = 8;
    IoFileMgrForKernel_8E982A74(&D_00005D38);
    if (!(KDebugForKernel_D636B827() & 0x10000)) {

    } else {
        func_000043DC();
        func_00004308();
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/umd9660", module_start);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_000009F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00000A80);
#endif

#if FW_VERSION == 100
s32 func_00001D6C(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION == 100
s32 func_00001D78(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00000BC4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00000BEC);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_000013F4);

#if FW_VERSION == 100
s32 func_00001DD0(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION == 100
s32 func_00001DDC(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION == 100
s32 func_00001DE8(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION == 100
s32 func_00001DF4(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION == 100
s32 func_00001E00(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION == 100
s32 func_00001E0C(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION == 100
s32 func_00001E18(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION == 100
s32 func_00001E24(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00001E30);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00001440);
#endif

INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660_driver_85F6776E);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_000022E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660_driver_EB75B9FA);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00001814);
#endif

#if FW_VERSION != 100
M2C_UNK *func_000019D0(void) {
    return &D_00005C88;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_000019DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00001A08);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00001AB4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00001B3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00001BCC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00001C60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00001D08);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00001DEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00001E4C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_0000264C);
#endif

INCLUDE_RODATA("nonmatchings/umd9660", D_00005B30);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005B34);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/umd9660", D_00005B4C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/umd9660", D_00005B60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_000023E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002694);
#endif

#if FW_VERSION == 100
s32 func_000026E4(void) {
    return (s32) &D_00005D90;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660_driver_0EC10F9F);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_0000271C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002778);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_0000281C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002910);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002974);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_000029FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002AB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002BA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002C08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002F24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002FCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003120);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_000026F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002880);
#endif

INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660_driver_26523A78);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003370);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660_driver_CC6F6D8D);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002A78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002BFC);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_00002CE4);

INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660_driver_D7565881);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003690);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003818);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_000038F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_0000397C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003A74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003AF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002DE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00002FF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_000031DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_000032D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003410);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003578);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_000036C4);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_000036D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003738);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_000037AC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003C8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003E54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003EE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003830);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003A18);
#endif

#if FW_VERSION != 100
s32 func_00003BFC(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
M2C_UNK *func_00003C04(void) {
    return &D_00005CA0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003C10);
#endif

#if FW_VERSION != 100
s32 func_00003C80(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = func_00004300(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003CC8);
#endif

#if FW_VERSION == 100
void func_00003D28(s32 arg0) {
    func_00004544(arg0);
}
#else
INCLUDE_ASM("nonmatchings/umd9660", func_00003D28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003F7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003FC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004004);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660_driver_659BFB26);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660_driver_B893E884);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_00003DEC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_000040C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00003E6C);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_00003ED0);

INCLUDE_ASM("nonmatchings/umd9660", func_00003F3C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_0000420C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004250);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_000042A8);
#endif

#if FW_VERSION == 100
s32 func_00004308(void) {
    return sceUmd_7850F057(&func_00004250, &D_00005D80);
}
#endif

#if FW_VERSION == 100
void func_00004330(void) {
    sceUmd_27A764A1();
}
#endif

#if FW_VERSION == 100
s32 func_0000434C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x860), s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_00004358(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        var_v0 = sceUmdMan_driver_84410A8E(M2C_FIELD(arg0, s32 *, 0x860));
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
s32 func_00003F70(void) {
    s32 var_v0;

    if (sceUmdMan_driver_60933ECD() != 0) {
        var_v0 = sceUmd9660_driver_F42C0AEE();
    } else {
        var_v0 = sceUmdMan_driver_E192C10A()->unk74;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
void func_00003FAC(void) {
    sceUmd_7850F057(&func_000036D8, &D_00005C80);
}
#endif

#if FW_VERSION != 100
void func_00003FD4(void) {
    sceUmd_27A764A1();
}
#endif

#if FW_VERSION != 100
s32 func_00003FF0(struct Unk_func_00003FF0_0 *arg0) {
    return arg0->unk64->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_00003FFC(struct Unk_func_00003FFC_0 *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        var_v0 = sceUmdMan_driver_84410A8E(arg0->unk64);
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_00004024);

INCLUDE_ASM("nonmatchings/umd9660", func_00004064);

INCLUDE_ASM("nonmatchings/umd9660", func_000040A4);

INCLUDE_ASM("nonmatchings/umd9660", func_000040E4);

INCLUDE_ASM("nonmatchings/umd9660", func_00004124);

#if FW_VERSION == 100
s32 func_000044C0(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 == NULL) || (M2C_FIELD(arg0, s32 *, 0x860) == 0)) {
        var_v1 = 0x80010016;
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
s32 func_00004164(struct Unk_func_00004164_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 == NULL) || (arg0->unk64 == 0)) {
        var_v1 = 0x80010016;
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004188);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", module_reboot_before);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004238);
#endif

#if FW_VERSION != 100
s32 func_00004264(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        *arg0 = sceUmdMan_driver_85AEA6C5();
        var_v0 = 0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_000042A0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004544);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004300);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_0000438C);

INCLUDE_ASM("nonmatchings/umd9660", func_000043DC);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/umd9660", D_00005BF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004784);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/umd9660", D_00005C14);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/umd9660", D_00005C34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004964);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004AFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_000044C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004664);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004824);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_00004C88);

INCLUDE_ASM("nonmatchings/umd9660", func_00004DDC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004EE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660_driver_DB1AC979);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_00004EE8);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_00004FE4);

#if FW_VERSION == 100
u8 func_000053B4(void) {
    return D_000083A8;
}
#endif

#if FW_VERSION == 100
s32 sceUmd9660_driver_F42C0AEE(void) {
    return D_000083B0;
}
#endif

#if FW_VERSION == 100
u8 func_000053CC(void) {
    return D_000083A4;
}
#endif

#if FW_VERSION == 100
u8 func_000053D8(void) {
    return D_000083A6;
}
#endif

#if FW_VERSION == 100
u8 func_000053E4(void) {
    return D_000083A5;
}
#endif

#if FW_VERSION == 100
u8 func_000053F0(void) {
    return D_000083A7;
}
#endif

#if FW_VERSION == 100
s32 sceUmd9660_driver_2C6C3F4C(void) {
    return D_000083AC;
}
#endif

#if FW_VERSION == 100
s32 sceUmd9660_driver_C7CD9CE8(void) {
    return D_000083D0;
}
#endif

#if FW_VERSION == 100
s32 sceUmd9660_driver_44EF600C(void) {
    return D_000083C0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00005420);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_0000506C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_000050D4);
#endif

#if FW_VERSION != 100
void func_00005334(s32 arg0) {
    D_000070D4 = arg0;
}
#endif

#if FW_VERSION != 100
s32 func_00005340(void) {
    return D_000070B8;
}
#endif

#if FW_VERSION != 100
s32 sceUmd9660_driver_F42C0AEE(void) {
    return D_000070C0;
}
#endif

#if FW_VERSION != 100
u8 func_00005358(void) {
    return D_000070B0;
}
#endif

#if FW_VERSION != 100
u8 func_00005364(void) {
    return D_000070B2;
}
#endif

#if FW_VERSION != 100
u8 func_00005370(void) {
    return D_000070B1;
}
#endif

#if FW_VERSION != 100
u8 func_0000537C(void) {
    return D_000070B3;
}
#endif

#if FW_VERSION != 100
s32 sceUmd9660_driver_2C6C3F4C(void) {
    return D_000070BC;
}
#endif

#if FW_VERSION != 100
s32 sceUmd9660_driver_C7CD9CE8(void) {
    return D_000070D0;
}
#endif

#if FW_VERSION != 100
s32 sceUmd9660_driver_44EF600C(void) {
    return D_000070CC;
}
#endif

#if FW_VERSION != 100
s32 sceUmd9660_driver_CAAFFE8D(void) {
    return D_000070D4;
}
#endif

#if FW_VERSION != 100
s32 func_000053B8(void) {
    return D_000070D8;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/umd9660", func_000053C4);
#endif
