#include "common.h"
#include "premo_plugin_decls.h"

void func_00009598(struct Unk_func_00009598_0 *arg0) {
    s32 temp_v0;

    func_00009894();
    sceKernelWaitSema(arg0->unk0, 1, 0);
    temp_v0 = arg0->unk4;
    arg0->unkC = 0;
    if (temp_v0 > 0) {
        sceKernelSetEventFlag(temp_v0, 1);
        sceKernelDeleteEventFlag(arg0->unk4);
        arg0->unk4 = -1;
    }
    arg0->unk8 = 0;
    sceKernelSignalSema(arg0->unk0, 1);
    sceKernelDeleteSema(arg0->unk0);
}

void func_00009610(struct Unk_func_00009610_0 *arg0) {
    s32 temp_v0;

    func_00009894();
    sceKernelWaitSema(arg0->unk0, 1, 0);
    temp_v0 = arg0->unk4;
    arg0->unkC = 0;
    if (temp_v0 > 0) {
        sceKernelSetEventFlag(temp_v0, 1);
        sceKernelDeleteEventFlag(arg0->unk4);
        arg0->unk4 = -1;
    }
    arg0->unk8 = 0;
    sceKernelSignalSema(arg0->unk0, 1);
    sceKernelDeleteSema(arg0->unk0);
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009688);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000096E0);

void func_0000972C(struct Unk_func_0000972C_0 *arg0) {
    s32 temp_v0;

    sceKernelWaitSema(arg0->unk0, 1, 0);
    if (func_000098E0(arg0) == 0) {
        temp_v0 = arg0->unk4;
        if (temp_v0 > 0) {
            sceKernelClearEventFlag(temp_v0, 0);
        }
        arg0->unkC = 1;
    }
    sceKernelSignalSema(arg0->unk0, 1);
}

void func_00009798(struct Unk_func_00009798_0 *arg0) {
    s32 temp_v0;

    sceKernelWaitSema(arg0->unk0, 1, 0);
    if (func_000098F0(arg0) == 1) {
        temp_v0 = arg0->unk4;
        arg0->unkC = 0;
        if (temp_v0 > 0) {
            sceKernelSetEventFlag(temp_v0, 1);
        }
    }
    sceKernelSignalSema(arg0->unk0, 1);
}

void func_00009808(struct Unk_func_00009808_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 > 0) {
        sceKernelWaitEventFlag(temp_v0, 1U, 1, NULL, NULL);
    }
}

#if FW_VERSION < 352
void func_00009840(struct Unk_func_00009840_0 *arg0) {
    s32 temp_v0;

    if (arg0->unk10 == 0) {
        temp_v0 = scePaf_B7E6052B(4);
        sceVshCommonUtil_FA969B6A(temp_v0, 0);
        arg0->unk10 = temp_v0;
    }
}
#else
void func_00009840(struct Unk_func_00009840_0 *arg0) {
    s32 temp_v0;

    if (arg0->unk10 == 0) {
        temp_v0 = scePaf_61A8E8EC(4);
        sceVshCommonUtil_094B0219(temp_v0, 0);
        arg0->unk10 = temp_v0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009894);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000098E0);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000098F0);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009908);
#else
void func_00009908(struct Unk_func_00009908_0 *arg0) {
    D_0002CB38 = 0;
    D_0002CB3C = 0;
    D_0002CB40 = 0;
    D_0002CB44 = 0;
    arg0->unkC = -1;
    D_0002CB48 = 0;
    D_0002CB4C = 0;
    arg0->unk4 = -1;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000994C);
#else
void func_0000994C(struct Unk_func_0000994C_0 *arg0) {
    D_0002CB38 = 0;
    D_0002CB3C = 0;
    D_0002CB40 = 0;
    D_0002CB44 = 0;
    arg0->unkC = -1;
    D_0002CB48 = 0;
    D_0002CB4C = 0;
    arg0->unk4 = -1;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION < 352
void func_00009990(s32 arg0) {
    func_0000AA44();
    func_00006544(arg0, 0);
    func_00005D04(arg0);
    func_000060B0(arg0, 0);
    func_00005C44(arg0);
}
#else
void func_00009990(s32 arg0) {
    func_0000AA44();
    func_0000A41C(arg0, 0);
    func_00009FB4(arg0, 0);
}
#endif

#if FW_VERSION < 352
void func_000099CC(s32 arg0) {
    func_0000AA44();
    func_00006544(arg0, 0);
    func_00005D04(arg0);
    func_000060B0(arg0, 0);
    func_00005C44(arg0);
}
#else
void func_000099CC(s32 arg0) {
    func_0000AA44();
    func_0000A41C(arg0, 0);
    func_00009FB4(arg0, 0);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009A08);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009A60);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009AAC);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009B3C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009BC8);

void func_00009C5C(void) {
    if (D_0002CB38 == 0) {

    } else {
        ((M2C_UNK (*)()) D_0002CB38)();
    }
    if (D_0002CB34 != NULL) {
        D_0002CB34->unk4 = -1;
    }
}

void func_00009CA4(s32 arg0) {
    struct Unk_func_00009CA4_temp_v0 *temp_v0;

    if (D_0002CB40 == 0) {

    } else {
        ((M2C_UNK (*)()) D_0002CB40)();
    }
    temp_v0 = scePaf_DCE3D225(arg0, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk10(func_00009C5C);
    }
}
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A060);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A070);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A07C);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00005BD0);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00005C44);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00005C90);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00005D04);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00005D50);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00005D98);
#else
INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A088);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A098);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A0A8);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009D04);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009F74);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000060B0);

void func_000060F0(s32 arg0, s32 arg1) {
    func_0000A008(arg0, 1, arg1);
}
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009FB4);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A008);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A0AC);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00006204);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A154);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A0E0);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A0E8);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A0F0);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A100);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A128);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A1B4);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A3B8);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A3E8);
#endif

#if FW_VERSION == 352
void func_0000A3E8(void) {
    if (D_0002CB4C == 0) {

    } else {
        ((M2C_UNK (*)()) D_0002CB4C)();
    }
}
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00006544);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A41C);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A470);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A1A4);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A1C0);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A1D8);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A4F8);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A580);

#if FW_VERSION < 352
void func_0000A91C(struct Unk_func_0000A91C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0 != 0) {
        sceVshCommonGui_72E652AA(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
}
#else
void func_0000A91C(struct Unk_func_0000A91C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        sceVshCommonGui_8F414E35(temp_v0);
        arg0->unk8 = 0;
    }
}

s32 func_0000A958(struct Unk_func_0000A958_0 *arg0) {
    return arg0->unk10;
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A960);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A9F8);
#else
void func_0000A9F8(struct Unk_func_0000A9F8_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000AA44();
    arg0->unkC = sceNetApctlAddHandler(arg1, arg2);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000AA44);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000AA80);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000AACC);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000AB18);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000AB64);
#endif

void func_0000AB94(void) {
    func_0000AD10();
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000ABB0);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000AC7C);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000AD10);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000AD3C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000AF4C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000B028);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000B160);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000B1B4);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000B248);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A208);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000B2D4);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000B514);
#endif

void func_0000B604(struct Unk_func_0000B604_0 *arg0) {
    arg0->unk0 = &D_0002A310;
    arg0->unk4 = sceKernelCreateSema(&D_0002A274, 0x100U, 1, 1, NULL);
}

void func_0000B650(struct Unk_func_0000B650_0 *arg0) {
    arg0->unk0 = &D_0002A310;
    sceKernelDeleteSema(arg0->unk4);
}

void func_0000B678(struct Unk_func_0000B678_0 *arg0) {
    arg0->unk0 = &D_0002A310;
    sceKernelDeleteSema(arg0->unk4);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000B6A0);
#else
void func_0000B6A0(struct Unk_func_0000B6A0_0 *arg0) {
    arg0->unk0 = &D_0002A310;
    sceKernelDeleteSema(arg0->unk4);
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000B6DC);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000B778);

void func_0000B7D0(struct Unk_func_0000B7D0_0 *arg0) {
    sceKernelWaitSema(arg0->unk4, 1, 0);
    arg0->unk26 = 1;
    arg0->unk27 = 0;
    sceKernelSignalSema(arg0->unk4, 1);
}

u8 func_0000B818(struct Unk_func_0000B818_0 *arg0) {
    u8 temp_s1;

    sceKernelWaitSema(arg0->unk4, 1, 0);
    temp_s1 = arg0->unk27;
    arg0->unk26 = 0;
    sceKernelSignalSema(arg0->unk4, 1);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000B868);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A274);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A280);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000B8D8);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000BBD8);
#else
s32 func_0000BBD8(struct Unk_func_0000BBD8_0 *arg0, s32 arg1) {
    s32 temp_s1;

    sceKernelWaitSema(arg0->unk4, 1, 0);
    temp_s1 = scePaf_9C0245AF((s32) ((u8 *)arg0 + 8), arg1, 0x10);
    sceKernelSignalSema(arg0->unk4, 1);
    return temp_s1;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000BC38);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000BDE8);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000BE2C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000BE68);

void func_0000C014(void) {
    D_0002CB58 = 0;
    D_0002CB59 = 0;
}

void func_0000C028(void) {
    func_0000263C(func_00002478());
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000C04C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000C08C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000C0F8);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A310);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A318);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A328);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A338);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A348);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A368);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A384);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A390);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_000238B8);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_000238CC);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_000238E8);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_00023904);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_00023918);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_00023930);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_00023948);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000C164);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000C3A4);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00008368);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000C868);

void func_0000C920(void) {
}

#if FW_VERSION < 352
void func_000086A0(void) {

}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000086A8);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000C928);
#else
void func_0000C928(void) {
    sceVshCommonGui_F5A16B4D(0);
    sceVshCommonGui_891DD627(0);
    if (func_000019A0() != 0) {

    } else {
        func_000075D8(func_00002478(), 8);
    }
}
#endif

#if FW_VERSION < 352
s32 func_0000873C(void) {
    s32 temp_v0;

    temp_v0 = func_00002478();
    func_00001FA4(temp_v0, 0x400);
    func_00001FE4(temp_v0, 0x400, 0);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000C978);
#endif

void func_0000CA00(void) {
    func_0000C928();
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000CA1C);

void func_0000CA94(void) {
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000881C);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000CA9C);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000CB50);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000CC68);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000CCBC);
#else
void func_0000CCBC(void) {
    func_0000CECC();
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D250);

void func_00008B3C(void) {
    D_00027164 = func_00004A1C(func_00002478(), 1, 4);
    D_00027160 = sceVshCommonGui_A0DE7090(1);
    D_00027161 = sceVshCommonGui_441D55D7(1);
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00008B90);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00008BFC);
#else
INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A3E8);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000CCD8);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000CE58);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000CECC);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D00C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D0B0);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D170);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D250);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D2FC);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D36C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D3F8);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D50C);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D640);

#if FW_VERSION == 352
void func_0000D6D4(void) {
    D_0002CB68 = 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D6E0);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D780);

s32 func_0000D890(void) {
    void *temp_s0;

    temp_s0 = func_00002478() + 0x240;
    func_0000903C(temp_s0, 0x4000);
    func_00009080(temp_s0, 0x4000, 0);
    return 0;
}

void func_0000D8D4(void) {
    s32 temp_v0;
    void *temp_s0;

    temp_v0 = func_00002478();
    func_00008458(temp_v0 + 4, 1);
    func_00001650(0x10000000, 0);
    func_000093BC();
    if (M2C_FIELD(temp_v0, u8 *, 0x274) == 0) {
        if (func_000019A0() == 0) {
            temp_s0 = func_00009A08();
            if (scePaf_88784487(&D_0002A44C) != 0) {
                func_00009380();
                func_0000A008((s32) temp_s0, 0, (s32) &func_0000D9E8);
                func_000093BC();
            } else {
                func_00009460();
                func_00009380();
                func_00001608(0x01000000, 0);
                func_00009D04((s32) temp_s0, (s32) &func_0000D9E8, (s32) func_0000D9B8);
            }
        }
    }
}

void func_0000D9B8(void) {
    func_00001650(0x01000000, 0);
    func_000093BC();
    func_0000948C();
}

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A44C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000D9E8);

void func_0000DB64(void) {
    func_00001650(0x20000, 0);
    func_000093BC();
    func_0000948C();
    func_0000D780(1);
}

void func_0000DB9C(void) {
    func_00009460();
    func_00009380();
    func_00001608(0x20000, 0);
    func_0000A41C(func_00009A08(), (s32) func_0000DB64);
}

void func_0000DBE4(void) {
    s32 temp_s0;

    func_000093BC();
    func_0000948C();
    func_00001650(0x10000, 0);
    if (func_000019A0() != 0) {

    } else {
        func_0000A91C(func_00009A08());
        temp_s0 = func_00002478() + 4;
        func_00008458(temp_s0, 1);
        func_0000855C(temp_s0);
    }
}

void func_0000DC60(void) {
    func_00009460();
    func_00009380();
    func_00001608(0x10000, 0);
    if (func_000019A0() != 0) {
        func_0000DBE4();
    } else {
        func_0000A1B4(func_00009A08(), (s32) func_0000DB9C, (s32) func_0000DBE4);
        D_0002CB68 = 1;
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000DCD8);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A484);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000DD24);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000DE58);

void func_0000DF70(void) {
    func_0000DE58(1, 0xFFFF);
}

void func_0000DF90(void) {
    func_0000DE58(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000DFB0);
#endif

void func_0000E028(void) {
}

#if FW_VERSION < 352
void func_00008D8C(void) {
    void *temp_s0;

    if (func_000019A0() != 0) {

    } else {
        temp_s0 = func_00009A08();
        func_00009460();
        func_00009380();
        func_00009D04((s32) temp_s0, (s32) &func_00008E50, (s32) func_0000F850);
    }
}
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000E030);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000E06C);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A498);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A4A4);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A4C4);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A4D0);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A4E8);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A504);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A528);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A544);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000E0B0);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000E24C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000E6EC);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000E77C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000E7C4);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000E88C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000E96C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000EA08);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A580);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A590);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A598);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A5C0);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A5EC);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A618);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A628);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A63C);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A650);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000EB1C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000ECCC);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000F004);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000F128);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000F1F4);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000F3A4);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000F3F4);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000F440);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000F63C);

void func_0000F760(void) {
    func_0000ECCC(1);
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000F77C);
#endif

#if FW_VERSION < 352
void func_0000F850(void) {
    func_000093BC();
    func_0000948C();
}
#else
void func_0000F850(void) {
    func_0000ECCC(1);
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00008E10);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00008E50);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00008EB0);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00008F2C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00008FAC);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_00023A18);
#endif

void func_0000F86C(void) {
}

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000F874);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000F8EC);
#else
void func_0000F9B8(void) {
    sceVshCommonGui_A0DE7090(1);
    sceVshCommonGui_441D55D7(1);
}
#endif

#if FW_VERSION == 352
void func_0000F9B8(void) {
    func_0000ECCC(0);
}
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009088);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009100);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000919C);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000F9D4);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000FA78);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000FB3C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000FBE0);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000FC98);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000FD3C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000FDEC);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000FE44);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000FF30);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010000);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010160);
#endif

void func_000101E8(void) {
    func_00006E3C(func_00002478(), 4);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009220);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010210);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000102E0);

#if FW_VERSION < 352
void func_000092EC(void) {
    sceVshCommonGui_441D55D7(1);
}
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010314);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010358);

s32 func_000103B8(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0x80410A0A;
    if (func_000019A0() == 0) {
        var_v1 = sceNetApctlGetInfo(arg0, arg1);
    }
    return var_v1;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000093C4);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009414);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000094E4);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009570);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009650);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009710);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000976C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000097C0);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009814);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000994C_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000994C_v310);
#endif

#if FW_VERSION < 352
void func_00009C7C(void) {

}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009C84);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009D04_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009D04_v310);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A6C4);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A6C8);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A6CC);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A6D0);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A6D4);

INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_0002A6D8);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009D30);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010410);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010460);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010530);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000105BC);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0001069C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0001075C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000107B8);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0001080C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010860);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010994);

void func_00010CC4(void) {
}
#endif

#if FW_VERSION < 352
void func_00010CCC(void) {
    sceVshCommonGui_A0DE7090(1);
    sceVshCommonGui_441D55D7(1);
}
#else
void func_00010CCC(void) {
    func_00002710(func_00002478());
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009DB8);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009E24);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00009EA8);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010CF0);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010DB8);

#if FW_VERSION < 352
void func_00010E4C(void) {
    void *temp_v0;

    temp_v0 = func_00002478();
    if (M2C_FIELD(temp_v0, u8 *, 0xAC) != 0) {

    } else if (func_00002044((s32) temp_v0, 4) != 0x800201AF) {
        func_00006E3C((s32) temp_v0, 3);
        func_00010DB8();
    }
}
#else
void func_00010E4C(void) {
    struct Unk_func_00010E4C_temp_v0 *temp_v0;

    temp_v0 = func_00002478();
    if (temp_v0->unk314 != 0) {

    } else if (func_000090E0((u8 *)temp_v0 + 0x240, 4) != 0x800201AF) {
        func_00006E3C((s32) temp_v0, 3);
        func_00010DB8();
    }
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010EB8);

#if FW_VERSION < 352
void func_00010F44(void) {
    func_00004D0C(func_00002478());
    func_00004E04(1);
    sceVshCommonGui_A0DE7090(0);
    sceVshCommonGui_441D55D7(0);
}
#else
void func_00010F44(void) {
    s32 temp_v0;

    temp_v0 = func_00002478();
    func_00008538(temp_v0 + 4);
    func_00006E3C(temp_v0, 6);
    func_00008854(1);
    sceVshCommonGui_F5A16B4D(0);
    sceVshCommonGui_891DD627(0);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00010F94);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000110B4);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin_009598", D_00023BA0);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00011130);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00011174);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00011274);

s32 func_00011328(struct Unk_func_00011328_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C62;
    temp_v0 = arg0->unk4;
    if (temp_v0 != 0) {
        var_v1 = func_00014FC8(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00011364);

s32 func_000113F4(struct Unk_func_000113F4_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C62;
    temp_v0 = arg0->unk4;
    if (temp_v0 != 0) {
        func_00015124(temp_v0);
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_00011430(struct Unk_func_00011430_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C62;
    temp_v0 = arg0->unk4;
    if (temp_v0 != 0) {
        var_v1 = func_000151A4(temp_v0);
    }
    return var_v1;
}

s32 func_0001146C(struct Unk_func_0001146C_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C62;
    temp_v0 = arg0->unk4;
    if (temp_v0 != 0) {
        var_v1 = func_000151E0(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000114A8);

s32 func_000114DC(struct Unk_func_000114DC_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C62;
    temp_v0 = arg0->unk4;
    if (temp_v0 != 0) {
        var_v1 = func_00015160(temp_v0);
    }
    return var_v1;
}

s32 func_00011518(struct Unk_func_00011518_0 *arg0, s32 arg1) {
    s32 temp_v0;

    func_0001184C(arg0, arg1, &arg0->unk1C);
    if (arg0->unk1C != 0) {
        temp_v0 = arg0->unk4;
        if (temp_v0 == 0) {

        } else {
            func_00015250(temp_v0, (u8 *)arg0 + 0x20, 0);
        }
    }
    return 0;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00011574);
#else
s32 func_00011574(struct Unk_func_00011574_0 *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x20;
    scePaf_9479C11B(temp_s1, 0, 0x80);
    temp_a0 = arg0->unk4;
    arg0->unk1C = 0x84;
    if ((temp_a0 == 0) || ((u32) (arg1 - 1) >= 3U)) {

    } else {
        func_00015250(temp_a0, temp_s1, arg1);
    }
    return 0;
}
#endif

s32 func_000115F4(struct Unk_func_000115F4_0 *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk8 = arg1;
    if (temp_v1 == 0) {

    } else {
        func_0001528C(temp_v1, arg1);
    }
    return 0;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0000A6B4);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_0001162C);

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_00011768);
#endif

void func_000117C8(struct Unk_func_000117C8_0 *arg0) {
    struct Unk_func_000117C8_temp_v1 *temp_v1;

    temp_v1 = arg0->unkA0;
    if (temp_v1 != NULL) {
        temp_v1->unk34 = 1;
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin_009598", func_000117E0);
