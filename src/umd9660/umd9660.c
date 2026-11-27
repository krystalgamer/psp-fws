/* cflags: -O2 -frename-registers */
#include "common.h"
#include "umd9660_decls.h"

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umd9660", func_00000000);

INCLUDE_ASM("nonmatchings/umd9660", func_000000E0);

INCLUDE_ASM("nonmatchings/umd9660", func_00000190);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_0000030C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/umd9660", D_00005624);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00000338);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/umd9660", D_00006698);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000669C);

INCLUDE_RODATA("nonmatchings/umd9660", D_000066B0);

INCLUDE_RODATA("nonmatchings/umd9660", D_000066C8);

INCLUDE_RODATA("nonmatchings/umd9660", D_000066DC);

INCLUDE_RODATA("nonmatchings/umd9660", D_000066FC);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006710);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006728);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006740);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006758);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000676C);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006778);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006790);

INCLUDE_RODATA("nonmatchings/umd9660", D_000067A4);

INCLUDE_RODATA("nonmatchings/umd9660", D_000067C4);

INCLUDE_RODATA("nonmatchings/umd9660", D_000067D8);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006830);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006834);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000683C);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006848);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006850);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006854);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000686C);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006894);

INCLUDE_RODATA("nonmatchings/umd9660", D_000068C0);

INCLUDE_RODATA("nonmatchings/umd9660", D_000068C8);

INCLUDE_RODATA("nonmatchings/umd9660", D_000068D8);

INCLUDE_RODATA("nonmatchings/umd9660", D_000068FC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/umd9660", D_00005A98);
#endif

INCLUDE_RODATA("nonmatchings/umd9660", D_00005AF0);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005AF4);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/umd9660", D_00005858);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00000374);

INCLUDE_ASM("nonmatchings/umd9660", func_00000564);

INCLUDE_ASM("nonmatchings/umd9660", func_000007BC);
#else
INCLUDE_RODATA("nonmatchings/umd9660", D_00005AFC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00000000);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005A70);

INCLUDE_ASM("nonmatchings/umd9660", func_00000134);

INCLUDE_ASM("nonmatchings/umd9660", func_000001BC);

INCLUDE_ASM("nonmatchings/umd9660", func_0000043C);

INCLUDE_ASM("nonmatchings/umd9660", func_000004F8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umd9660", func_000007CC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/umd9660", func_00000780);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00000860);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
s32 func_000009BC(s32 arg0) {
    return !(arg0 & 0xF02) ? 0 : 0x8001B004;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_0000081C);
#endif

#if FW_VERSION < 151
s32 func_00000964(s32 arg0) {
    return (-((arg0 & 0xF02) == 0) & 0x7FFE4FFC) - 0x7FFE4FFC;
}
#endif

#if FW_VERSION == 271
s32 func_00000984(s32 arg0) {
    return __builtin_allegrex_ext(arg0, 0x10, 4);
}
#endif

#if FW_VERSION < 271
s32 func_00000984(s32 arg0) {
    return (arg0 >> 0x10) & 0xF;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_000003A0);

INCLUDE_ASM("nonmatchings/umd9660", func_00000594);

INCLUDE_ASM("nonmatchings/umd9660", func_0000090C);

s32 func_00000B34(s32 arg0) {
    return !(arg0 & 0xF02) ? 0 : 0x8001B004;
}

s32 func_00000B48(s32 arg0) {
    return __builtin_allegrex_ext(arg0, 0x10, 4);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/umd9660", func_00000CDC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umd9660", module_start);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 module_start(void) {
    M2C_FIELD(func_000026E4(), s32 *, 0x14) = 8;
    sceIoAddDrv(&D_00006318);
    if (sceAtaIsDvdDrive() == 0) {

    } else {
        func_000043DC();
        func_00004308();
    }
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000009B0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_00000BD4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umd9660", func_00000AF4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/umd9660", func_000009D8);
#endif

#if FW_VERSION < 150
s32 module_start(void) {
    M2C_FIELD(func_000026E4(), s32 *, 0x14) = 8;
    sceIoAddDrv(&D_00005D38);
    if (!(sceKernelDipswAll() & 0x10000)) {

    } else {
        func_000043DC();
        func_00004308();
    }
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_000009F4);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/umd9660", func_00000AAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00000AD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umd9660", func_00000A80);
#endif

#if FW_VERSION < 201
s32 func_00001D6C(void) {
    return 0x8001B000;
}

s32 func_00001D78(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00000BC4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00000DCC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00000DF0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/umd9660", func_00000BEC);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_000013F4);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/umd9660", func_000015B4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_0000105C);

INCLUDE_ASM("nonmatchings/umd9660", func_0000119C);
#endif

#if FW_VERSION < 150
s32 func_00001DD0(void) {
    return 0x8001B000;
}

s32 func_00001DDC(void) {
    return 0x8001B000;
}

s32 func_00001DE8(void) {
    return 0x8001B000;
}

s32 func_00001DF4(void) {
    return 0x8001B000;
}

s32 func_00001E00(void) {
    return 0x8001B000;
}

s32 func_00001E0C(void) {
    return 0x8001B000;
}

s32 func_00001E18(void) {
    return 0x8001B000;
}

s32 func_00001E24(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00001E30);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/umd9660", func_00001FF0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00001440);
#endif

#if FW_VERSION != 102
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660Init);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660SetPFI);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_000016B4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/umd9660", func_000017B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_000022EC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_000022E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00001814);

M2C_UNK *func_000019D0(void) {
    return &D_00005C88;
}

INCLUDE_ASM("nonmatchings/umd9660", func_000019DC);

INCLUDE_ASM("nonmatchings/umd9660", func_00001A08);

INCLUDE_ASM("nonmatchings/umd9660", func_00001AB4);

INCLUDE_ASM("nonmatchings/umd9660", func_00001B3C);

INCLUDE_ASM("nonmatchings/umd9660", func_00001BCC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/umd9660", func_00003CC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00001C60);

INCLUDE_ASM("nonmatchings/umd9660", func_00001D08);

INCLUDE_ASM("nonmatchings/umd9660", func_00001DEC);

INCLUDE_ASM("nonmatchings/umd9660", func_00001E4C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/umd9660", func_00002C3C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/umd9660", func_0000264C);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/umd9660", D_00005B30);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005B34);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/umd9660", D_00005B4C);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/umd9660", D_00005B60);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/umd9660", D_00005560);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000556C);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000557C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/umd9660", func_000023E0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_000023E4);

INCLUDE_ASM("nonmatchings/umd9660", func_00002694);
#endif

#if FW_VERSION < 282
s32 func_000026E4(void) {
    return (s32) &D_00005D90;
}

INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660GetDrive);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002600);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00001930);

INCLUDE_ASM("nonmatchings/umd9660", func_000019B8);

INCLUDE_ASM("nonmatchings/umd9660", func_00001A48);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_0000271C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00002778);

INCLUDE_ASM("nonmatchings/umd9660", func_0000281C);

INCLUDE_ASM("nonmatchings/umd9660", func_00002910);

INCLUDE_ASM("nonmatchings/umd9660", func_00002974);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000029FC);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002994);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002BA4);

INCLUDE_ASM("nonmatchings/umd9660", func_00001CC8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/umd9660", func_00002AB0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00002BA4);

INCLUDE_ASM("nonmatchings/umd9660", func_00002C08);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002E88);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/umd9660", D_00005B30);

INCLUDE_RODATA("nonmatchings/umd9660", D_000058C8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/umd9660", D_000058E0);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000590C);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005918);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005928);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/umd9660", func_00002F24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002FCC);

INCLUDE_ASM("nonmatchings/umd9660", func_00003120);
#else
INCLUDE_ASM("nonmatchings/umd9660", func_000026F4);

INCLUDE_ASM("nonmatchings/umd9660", func_00002880);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00002E90);
#endif

INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660InvalidateDeviceName);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00003274);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003328);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_00003370);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660GetUnitNum);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00002A78);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002BFC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00003504);
#else
INCLUDE_ASM("nonmatchings/umd9660", func_00002CE4);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/umd9660", func_0000361C);
#else
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660Term);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000036A4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000038A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/umd9660", func_000038C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003A68);

INCLUDE_ASM("nonmatchings/umd9660", func_00003B5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002E74);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00003C9C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003D78);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_00003690);

INCLUDE_ASM("nonmatchings/umd9660", func_00003818);

INCLUDE_ASM("nonmatchings/umd9660", func_000038F0);

INCLUDE_ASM("nonmatchings/umd9660", func_0000397C);

INCLUDE_ASM("nonmatchings/umd9660", func_00003A74);

INCLUDE_ASM("nonmatchings/umd9660", func_00003AF8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002DE0);

INCLUDE_ASM("nonmatchings/umd9660", func_00002FF4);
#endif

#if FW_VERSION >= 350
s32 func_00003A58(void) {
    s32 var_v0;
    struct Unk_ret_sceUmdMan_driver_E192C10A *temp_s0;

    if (sceUmdManIsDvdDrive() != 0) {
        var_v0 = sceUmd9660_driver_F42C0AEE();
    } else {
        sceUmdManWaitSema();
        temp_s0 = sceUmdMan_driver_E192C10A();
        sceUmdManSignalSema();
        var_v0 = temp_s0->unk74;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_000031DC);

INCLUDE_ASM("nonmatchings/umd9660", func_000032D0);

INCLUDE_ASM("nonmatchings/umd9660", func_00003410);

INCLUDE_ASM("nonmatchings/umd9660", func_00003578);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_000036C4);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_000036D8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004048);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004250);

INCLUDE_ASM("nonmatchings/umd9660", func_00003F40);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00003738);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_000037AC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004038);

INCLUDE_ASM("nonmatchings/umd9660", func_00004218);

s32 func_000043FC(void) {
    return 0;
}

M2C_UNK *func_00004404(void) {
    return &D_00007000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003660);

s32 func_000036D0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = func_00003D24(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/umd9660", func_00002974);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_00003C8C);

INCLUDE_ASM("nonmatchings/umd9660", func_00003E54);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00003EE0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003830);

INCLUDE_ASM("nonmatchings/umd9660", func_00003A18);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004544);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/umd9660", func_000041F4);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/umd9660", func_00003EF4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_00003BFC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
M2C_UNK *func_00003C04(void) {
    return &D_00005CA0;
}

INCLUDE_ASM("nonmatchings/umd9660", func_00003C10);

s32 func_00003C80(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = func_00004300(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/umd9660", func_00003CC8);
#endif

#if FW_VERSION < 201
void func_00003D28(s32 arg0) {
    func_00004544(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003D28);
#else
INCLUDE_ASM("nonmatchings/umd9660", func_00003F7C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660ReadPvd);

INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660ReadPathTable);
#else
INCLUDE_ASM("nonmatchings/umd9660", func_00003FC0);

INCLUDE_ASM("nonmatchings/umd9660", func_00004004);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_00003DEC);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_000048B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000040C8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00003E6C);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_00003ED0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_000049A8);
#else
INCLUDE_ASM("nonmatchings/umd9660", func_00003F3C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_0000420C);
#endif

#if FW_VERSION == 271
s32 func_0000420C(void) {
    s32 var_v0;

    if (sceUmdManIsDvdDrive() != 0) {
        var_v0 = sceUmd9660_driver_F42C0AEE();
    } else {
        var_v0 = sceUmdMan_driver_E192C10A()->unk74;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 func_0000420C(void) {
    s32 var_v0;

    if (sceAtaIsDvdDrive() != 0) {
        var_v0 = sceUmd9660_driver_F42C0AEE();
    } else {
        var_v0 = sceUmdMan_driver_E192C10A()->unk74;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_00004250);

INCLUDE_ASM("nonmatchings/umd9660", func_000042A8);
#endif

#if FW_VERSION < 282
s32 func_00004308(void) {
    return sceUmdRegisterGetUMDInfoCallBack(&func_00004250, &D_00005D80);
}

void func_00004330(void) {
    sceUmdUnRegisterGetUMDInfoCallBack();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000434C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), s32 *, 0xC);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000434C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x864), s32 *, 0xC);
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/umd9660", func_0000434C);
#endif

#if FW_VERSION == 100
s32 func_0000434C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x860), s32 *, 0xC);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00004358(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        var_v0 = sceUmdManSetReadAheadSize(M2C_FIELD(arg0, s32 *, 0x64));
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004358(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        var_v0 = sceUmdManSetReadAheadSize(M2C_FIELD(arg0, s32 *, 0x864));
    }
    return var_v0;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/umd9660", func_00004358);
#endif

#if FW_VERSION == 100
s32 func_00004358(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        var_v0 = sceUmdManSetReadAheadSize(M2C_FIELD(arg0, s32 *, 0x860));
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00003F70(void) {
    s32 var_v0;

    if (sceUmdManIsDvdDrive() != 0) {
        var_v0 = sceUmd9660_driver_F42C0AEE();
    } else {
        var_v0 = sceUmdMan_driver_E192C10A()->unk74;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
void func_00003FAC(void) {
    sceUmdRegisterGetUMDInfoCallBack(&func_000036D8, &D_00005C80);
}

void func_00003FD4(void) {
    sceUmdUnRegisterGetUMDInfoCallBack();
}

s32 func_00003FF0(struct Unk_func_00003FF0_0 *arg0) {
    return arg0->unk64->unkC;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004A68);

s32 func_00004ADC(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x64);
        if (temp_s0 != 0) {
            sceUmdManWaitSema();
            temp_s0_2 = sceUmdManSetEnableReadAhead(temp_s0);
            sceUmdManSignalSema();
            var_v0 = temp_s0_2;
        }
    }
    return var_v0;
}

s32 func_00004B30(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x64);
        if (temp_s0 != 0) {
            sceUmdManWaitSema();
            temp_s0_2 = sceUmdManSetDisableReadAhead(temp_s0);
            sceUmdManSignalSema();
            var_v0 = temp_s0_2;
        }
    }
    return var_v0;
}

s32 func_00004B84(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x64);
        if (temp_s0 != 0) {
            sceUmdManWaitSema();
            temp_s0_2 = sceUmdManSetCachedRead(temp_s0);
            sceUmdManSignalSema();
            var_v0 = temp_s0_2;
        }
    }
    return var_v0;
}

s32 func_00004BD8(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x64);
        if (temp_s0 != 0) {
            sceUmdManWaitSema();
            temp_s0_2 = sceUmdManSetUnCachedRead(temp_s0);
            sceUmdManSignalSema();
            var_v0 = temp_s0_2;
        }
    }
    return var_v0;
}

s32 func_00004C2C(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x64);
        if (temp_s0 != 0) {
            sceUmdManWaitSema();
            temp_s1 = sceUmdManValidateUMD(temp_s0, arg1);
            sceUmdManSignalSema();
            var_v0 = temp_s1;
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00003FFC(struct Unk_func_00003FFC_0 *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        var_v0 = sceUmdManSetReadAheadSize(arg0->unk64);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 102 || (FW_VERSION >= 201 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/umd9660", func_00004024);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004024(void *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x864);
        if (temp_a1 != 0) {
            var_v1 = sceUmdManSetEnableReadAhead(temp_a1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_00004024(void *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x860);
        if (temp_a1 != 0) {
            var_v1 = sceUmdManSetEnableReadAhead(temp_a1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 102 || (FW_VERSION >= 201 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/umd9660", func_00004064);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004064(void *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x864);
        if (temp_a1 != 0) {
            var_v1 = sceUmdManSetDisableReadAhead(temp_a1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_00004064(void *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x860);
        if (temp_a1 != 0) {
            var_v1 = sceUmdManSetDisableReadAhead(temp_a1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 102 || (FW_VERSION >= 201 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/umd9660", func_000040A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000040A4(void *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x864);
        if (temp_a1 != 0) {
            var_v1 = sceUmdManSetCachedRead(temp_a1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_000040A4(void *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x860);
        if (temp_a1 != 0) {
            var_v1 = sceUmdManSetCachedRead(temp_a1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 102 || (FW_VERSION >= 201 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/umd9660", func_000040E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000040E4(void *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x864);
        if (temp_a1 != 0) {
            var_v1 = sceUmdManSetUnCachedRead(temp_a1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_000040E4(void *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x860);
        if (temp_a1 != 0) {
            var_v1 = sceUmdManSetUnCachedRead(temp_a1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 102 || (FW_VERSION >= 201 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/umd9660", func_00004124);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004124(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a2 = M2C_FIELD(arg0, s32 *, 0x864);
        if (temp_a2 != 0) {
            var_v1 = sceUmdManValidateUMD(temp_a2, arg1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_00004124(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a2 = M2C_FIELD(arg0, s32 *, 0x860);
        if (temp_a2 != 0) {
            var_v1 = sceUmdManValidateUMD(temp_a2, arg1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_000044C0(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 == NULL) || (M2C_FIELD(arg0, s32 *, 0x64) == 0)) {
        var_v1 = 0x80010016;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000044C0(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 == NULL) || (M2C_FIELD(arg0, s32 *, 0x864) == 0)) {
        var_v1 = 0x80010016;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/umd9660", func_000044C0);
#endif

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

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004954);
#endif

#if FW_VERSION >= 282
s32 func_00004164(struct Unk_func_00004164_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 == NULL) || (arg0->unk64 == 0)) {
        var_v1 = 0x80010016;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/umd9660", func_00004188);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/umd9660", module_reboot_before);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_0000411C);

s32 func_00004148(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        *arg0 = sceUmdMan_driver_85AEA6C5();
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004238);

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

#if FW_VERSION >= 300 && FW_VERSION < 350
s32 func_00004568(void) {
    return (sceUmdManGetIntrStateFlag() & 0xF) != 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/umd9660", func_0000458C);
#endif

#if FW_VERSION >= 350
void func_00004E14(void) {
    D_00006CC0 = 0;
}

void func_00004E20(void) {
    D_00006CC0 = 0x5678;
}
#endif

#if FW_VERSION >= 330
void func_000046C4(void) {
    if (sceKernelDipsw(0x13) != 0) {
        D_00007A50 = 0x1234;
    } else {
        D_00007A50 = 0;
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004E68);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
void func_000046C4(void) {
    D_00007690 = sceKernelDipsw(0x13);
}
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_000042A0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003D24);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00004544);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004300);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_0000438C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004FFC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_000042C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umd9660", func_00003E00);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_000043DC);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umd9660", D_00005BF0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00004784);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umd9660", D_00005C14);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005C34);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umd9660", D_00005630);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003F38);

INCLUDE_ASM("nonmatchings/umd9660", func_000040DC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_0000470C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/umd9660", func_000043EC);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005A38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/umd9660", func_00004240);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umd9660", func_00004EA4);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/umd9660", func_00004964);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00005038);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_00004AFC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_000044C0);

INCLUDE_ASM("nonmatchings/umd9660", func_00004664);

INCLUDE_ASM("nonmatchings/umd9660", func_00004824);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_00004C88);

INCLUDE_ASM("nonmatchings/umd9660", func_00004DDC);

INCLUDE_ASM("nonmatchings/umd9660", func_00004EE8);

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/umd9660", func_000052B0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_00004ECC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umd9660", func_0000490C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000049F8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_00004FBC);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 201)
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660_driver_DB1AC979);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004FE4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umd9660", func_00005908);

void func_00005B20(s32 arg0) {
    D_00008CA0 = arg0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
void func_00005B2C(s32 arg0) {
    D_00008CB0 = arg0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000053B4);
#endif

#if FW_VERSION == 100
u8 func_000053B4(void) {
    return D_000083A8;
}
#endif

#if FW_VERSION < 282
s32 sceUmd9660_driver_F42C0AEE(void) {
    return D_000083B0;
}

u8 func_000053CC(void) {
    return D_000083A4;
}

u8 func_000053D8(void) {
    return D_000083A6;
}

u8 func_000053E4(void) {
    return D_000083A5;
}

u8 func_000053F0(void) {
    return D_000083A7;
}

s32 sceUmd9660_driver_2C6C3F4C(void) {
    return D_000083AC;
}

s32 sceUmd9660_driver_C7CD9CE8(void) {
    return D_000083D0;
}

s32 sceUmd9660_driver_44EF600C(void) {
    return D_000083C0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00005420);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/umd9660", func_00005498);
#endif

#if FW_VERSION == 271
s32 sceUmd9660_driver_CAAFFE8D(void) {
    return D_00008CB0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
s32 sceUmd9660_driver_CAAFFE8D(void) {
    return D_00008CA0;
}
#endif

#if FW_VERSION == 271
s32 sceUmd9660_driver_B23266CA(void) {
    return D_000070D8;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
s32 sceUmd9660_driver_3C150E0D(void) {
    return D_00008CB0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00005988);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_0000506C);

INCLUDE_ASM("nonmatchings/umd9660", func_000050D4);

void func_00005334(s32 arg0) {
    D_000070D4 = arg0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/umd9660", func_00005674);
#endif

#if FW_VERSION >= 282
s32 func_00005340(void) {
    return D_000070B8;
}

s32 sceUmd9660_driver_F42C0AEE(void) {
    return D_000070C0;
}

u8 func_00005358(void) {
    return D_000070B0;
}

u8 func_00005364(void) {
    return D_000070B2;
}

u8 func_00005370(void) {
    return D_000070B1;
}

u8 func_0000537C(void) {
    return D_000070B3;
}

s32 sceUmd9660_driver_2C6C3F4C(void) {
    return D_000070BC;
}

s32 sceUmd9660_driver_C7CD9CE8(void) {
    return D_000070D0;
}

s32 sceUmd9660_driver_44EF600C(void) {
    return D_000070CC;
}

s32 sceUmd9660_driver_CAAFFE8D(void) {
    return D_000070D4;
}

s32 func_000053B8(void) {
    return D_000070D8;
}

INCLUDE_ASM("nonmatchings/umd9660", func_000053C4);
#endif
