#include "common.h"
#include "premo_plugin_decls.h"

void func_00009598(void *arg0) {
    s32 temp_v0;

    func_00009894();
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0), 1, 0);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    if (temp_v0 > 0) {
        sceKernelSetEventFlag(temp_v0, 1);
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 4) = -1;
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0), 1);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0));
}

void func_00009610(void *arg0) {
    s32 temp_v0;

    func_00009894();
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0), 1, 0);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    if (temp_v0 > 0) {
        sceKernelSetEventFlag(temp_v0, 1);
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 4) = -1;
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0), 1);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0));
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00009688);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000096E0);

void func_0000972C(void *arg0) {
    s32 temp_v0;

    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0), 1, 0);
    if (func_000098E0(arg0) == 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_v0 > 0) {
            sceKernelClearEventFlag(temp_v0, 0);
        }
        M2C_FIELD(arg0, s8 *, 0xC) = 1;
    }
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0), 1);
}

void func_00009798(void *arg0) {
    s32 temp_v0;

    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0), 1, 0);
    if (func_000098F0(arg0) == 1) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s8 *, 0xC) = 0;
        if (temp_v0 > 0) {
            sceKernelSetEventFlag(temp_v0, 1);
        }
    }
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0), 1);
}

void func_00009808(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 > 0) {
        sceKernelWaitEventFlag(temp_v0, 1U, 1, NULL, NULL);
    }
}

void func_00009840(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        temp_v0 = scePaf_61A8E8EC(4);
        sceVshCommonUtil_094B0219(temp_v0, 0);
        M2C_FIELD(arg0, s32 *, 0x10) = temp_v0;
    }
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00009894);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000098E0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000098F0);

void func_00009908(void *arg0) {
    D_0002CB38 = 0;
    D_0002CB3C = 0;
    D_0002CB40 = 0;
    D_0002CB44 = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = -1;
    D_0002CB48 = 0;
    D_0002CB4C = 0;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_0000994C(void *arg0) {
    D_0002CB38 = 0;
    D_0002CB3C = 0;
    D_0002CB40 = 0;
    D_0002CB44 = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = -1;
    D_0002CB48 = 0;
    D_0002CB4C = 0;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00009990(s32 arg0) {
    func_0000AA44();
    func_0000A41C(arg0, 0);
    func_00009FB4(arg0, 0);
}

void func_000099CC(s32 arg0) {
    func_0000AA44();
    func_0000A41C(arg0, 0);
    func_00009FB4(arg0, 0);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00009A08);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00009A60);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00009AAC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00009B3C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00009BC8);

void func_00009C5C(void) {
    if (D_0002CB38 == 0) {

    } else {
        ((M2C_UNK (*)()) D_0002CB38)();
    }
    if (D_0002CB34 != NULL) {
        M2C_FIELD(D_0002CB34, s32 *, 4) = -1;
    }
}

void func_00009CA4(s32 arg0) {
    void *temp_v0;

    if (D_0002CB40 == 0) {

    } else {
        ((M2C_UNK (*)()) D_0002CB40)();
    }
    temp_v0 = scePaf_DCE3D225(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(void (*)()), 0x10)(func_00009C5C);
    }
}

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A060);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A070);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A07C);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A088);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A098);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A0A8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00009D04);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00009F74);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00009FB4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000A008);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000A0AC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000A154);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A0E0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A0E8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A0F0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A100);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A128);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000A1B4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000A3B8);

void func_0000A3E8(void) {
    if (D_0002CB4C == 0) {

    } else {
        ((M2C_UNK (*)()) D_0002CB4C)();
    }
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000A41C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000A470);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A1A4);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A1C0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A1D8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000A4F8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000A580);

void func_0000A91C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        sceVshCommonGui_8F414E35(temp_v0);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
}

s32 func_0000A958(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000A960);

void func_0000A9F8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000AA44();
    M2C_FIELD(arg0, s32 *, 0xC) = sceNetApctlAddHandler(arg1, arg2);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000AA44);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000AA80);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000AACC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000AB18);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000AB64);

void func_0000AB94(void) {
    func_0000AD10();
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000ABB0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000AC7C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000AD10);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000AD3C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000AF4C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000B028);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000B160);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000B1B4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000B248);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A208);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000B2D4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000B514);

void func_0000B604(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002A310;
    M2C_FIELD(arg0, s32 *, 4) = sceKernelCreateSema(&D_0002A274, 0x100U, 1, 1, NULL);
}

void func_0000B650(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002A310;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 4));
}

void func_0000B678(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002A310;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 4));
}

void func_0000B6A0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002A310;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 4));
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000B6DC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000B778);

void func_0000B7D0(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 4), 1, 0);
    M2C_FIELD(arg0, s8 *, 0x26) = 1;
    M2C_FIELD(arg0, s8 *, 0x27) = 0;
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 4), 1);
}

u8 func_0000B818(void *arg0) {
    u8 temp_s1;

    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 4), 1, 0);
    temp_s1 = M2C_FIELD(arg0, u8 *, 0x27);
    M2C_FIELD(arg0, s8 *, 0x26) = 0;
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 4), 1);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000B868);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A274);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A280);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000B8D8);

s32 func_0000BBD8(void *arg0, s32 arg1) {
    s32 temp_s1;

    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 4), 1, 0);
    temp_s1 = scePaf_9C0245AF((s32) (arg0 + 8), arg1, 0x10);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 4), 1);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000BC38);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000BDE8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000BE2C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000BE68);

void func_0000C014(void) {
    D_0002CB58 = 0;
    D_0002CB59 = 0;
}

void func_0000C028(void) {
    func_0000263C(func_00002478());
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000C04C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000C08C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000C0F8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A310);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A318);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A328);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A338);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A348);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A368);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A384);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A390);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000C164);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000C3A4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000C868);

void func_0000C920(void) {
}

void func_0000C928(void) {
    sceVshCommonGui_F5A16B4D(0);
    sceVshCommonGui_891DD627(0);
    if (func_000019A0() != 0) {

    } else {
        func_000075D8(func_00002478(), 8);
    }
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000C978);

void func_0000CA00(void) {
    func_0000C928();
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000CA1C);

void func_0000CA94(void) {
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000CA9C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000CB50);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000CC68);

void func_0000CCBC(void) {
    func_0000CECC();
}

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A3E8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000CCD8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000CE58);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000CECC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000D00C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000D0B0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000D170);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000D250);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000D2FC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000D36C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000D3F8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000D50C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000D640);

void func_0000D6D4(void) {
    D_0002CB68 = 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000D6E0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000D780);

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

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A44C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000D9E8);

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

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000DCD8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A484);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000DD24);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000DE58);

void func_0000DF70(void) {
    func_0000DE58(1, 0xFFFF);
}

void func_0000DF90(void) {
    func_0000DE58(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000DFB0);

void func_0000E028(void) {
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000E030);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000E06C);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A498);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A4A4);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A4C4);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A4D0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A4E8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A504);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A528);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A544);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000E0B0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000E24C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000E6EC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000E77C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000E7C4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000E88C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000E96C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000EA08);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A580);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A590);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A598);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A5C0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A5EC);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A618);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A628);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A63C);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A650);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000EB1C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000ECCC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000F004);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000F128);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000F1F4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000F3A4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000F3F4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000F440);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000F63C);

void func_0000F760(void) {
    func_0000ECCC(1);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000F77C);

void func_0000F850(void) {
    func_0000ECCC(1);
}

void func_0000F86C(void) {
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000F874);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000F8EC);

void func_0000F9B8(void) {
    func_0000ECCC(0);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000F9D4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000FA78);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000FB3C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000FBE0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000FC98);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000FD3C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000FDEC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000FE44);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0000FF30);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010000);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010160);

void func_000101E8(void) {
    func_00006E3C(func_00002478(), 4);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010210);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000102E0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010314);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010358);

s32 func_000103B8(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0x80410A0A;
    if (func_000019A0() == 0) {
        var_v1 = sceNetApctlGetInfo(arg0, arg1);
    }
    return var_v1;
}

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A6C4);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A6C8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A6CC);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A6D0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A6D4);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A6D8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010410);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010460);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010530);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000105BC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001069C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001075C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000107B8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001080C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010860);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010994);

void func_00010CC4(void) {
}

void func_00010CCC(void) {
    func_00002710(func_00002478());
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010CF0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010DB8);

void func_00010E4C(void) {
    void *temp_v0;

    temp_v0 = func_00002478();
    if (M2C_FIELD(temp_v0, u8 *, 0x314) != 0) {

    } else if (func_000090E0(temp_v0 + 0x240, 4) != 0x800201AF) {
        func_00006E3C((s32) temp_v0, 3);
        func_00010DB8();
    }
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010EB8);

void func_00010F44(void) {
    s32 temp_v0;

    temp_v0 = func_00002478();
    func_00008538(temp_v0 + 4);
    func_00006E3C(temp_v0, 6);
    func_00008854(1);
    sceVshCommonGui_F5A16B4D(0);
    sceVshCommonGui_891DD627(0);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00010F94);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000110B4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00011130);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00011174);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00011274);

s32 func_00011328(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C62;
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != 0) {
        var_v1 = func_00014FC8(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00011364);

s32 func_000113F4(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C62;
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != 0) {
        func_00015124(temp_v0);
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_00011430(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C62;
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != 0) {
        var_v1 = func_000151A4(temp_v0);
    }
    return var_v1;
}

s32 func_0001146C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C62;
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != 0) {
        var_v1 = func_000151E0(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000114A8);

s32 func_000114DC(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C62;
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != 0) {
        var_v1 = func_00015160(temp_v0);
    }
    return var_v1;
}

s32 func_00011518(s32 arg0, s32 arg1) {
    s32 temp_v0;

    func_0001184C(arg0, arg1, arg0 + 0x1C);
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_v0 == 0) {

        } else {
            func_00015250(temp_v0, arg0 + 0x20, 0);
        }
    }
    return 0;
}

s32 func_00011574(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s1;

    temp_s1 = arg0 + 0x20;
    scePaf_9479C11B(temp_s1, 0, 0x80);
    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x84;
    if ((temp_a0 == 0) || ((u32) (arg1 - 1) >= 3U)) {

    } else {
        func_00015250(temp_a0, temp_s1, arg1);
    }
    return 0;
}

s32 func_000115F4(void *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    if (temp_v1 == 0) {

    } else {
        func_0001528C(temp_v1, arg1);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001162C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00011768);

void func_000117C8(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0xA0);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, s8 *, 0x34) = 1;
    }
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000117E0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000117FC);

s32 func_00011830(void *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0xA0);
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, s32 *, 0x38) & 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001184C);

void func_00011B18(M2C_UNK **arg0) {
    *arg0 = &D_0002A7A8;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_00011B40(void) {
    return 1;
}

s32 func_00011B48(void) {
    return 1;
}

void func_00011B50(void) {
}

void func_00011B58(void) {
}

void func_00011B60(void) {
}

void func_00011B68(void) {
}

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A7A8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A7B0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A7C0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A7D0);

s32 func_00011B70(void) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = D_0002CC00;
    if (var_v0 == 0) {
        var_v0 = sceKernelCreateSema("PremoCrypt", 0U, 1, 1, NULL);
        D_0002CC00 = var_v0;
    }
    var_v1 = 0;
    if (var_v0 <= 0) {
        func_00011BDC();
        var_v1 = -1;
    }
    return var_v1;
}

s32 func_00011BDC(void) {
    s32 var_v0;

    var_v0 = D_0002CC00;
    if (var_v0 > 0) {
        var_v0 = sceKernelDeleteSema(var_v0);
        D_0002CC00 = 0;
    }
    return var_v0;
}

s32 func_00011C14(s32 arg0) {
    s32 temp_s1;

    sceKernelWaitSema(D_0002CC00, 1, 0);
    temp_s1 = sceMlnBridge_F9357984(arg0, 0);
    scePaf_3308156F((s32) &D_0002CC10, arg0, 0x10);
    sceKernelSignalSema(D_0002CC00, 1);
    return temp_s1;
}

s32 func_00011C8C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;

    sceKernelWaitSema(D_0002CC00, 1, 0);
    temp_s0 = sceMlnBridge_DE730A46(arg0, arg1, arg2, arg3);
    sceKernelSignalSema(D_0002CC00, 1);
    return temp_s0;
}

s32 func_00011D14(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;

    sceKernelWaitSema(D_0002CC00, 1, 0);
    temp_s0 = sceMlnBridge_7770FC23(arg0, arg1, arg2, arg3);
    sceKernelSignalSema(D_0002CC00, 1);
    return temp_s0;
}

s32 func_00011D9C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;

    sceKernelWaitSema(D_0002CC00, 1, 0);
    sceMlnBridge_F9357984(arg4, 0);
    temp_s0 = sceMlnBridge_DE730A46(arg0, arg1, arg2, arg3);
    sceMlnBridge_F9357984((s32) &D_0002CC10, 0);
    sceKernelSignalSema(D_0002CC00, 1);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00011E4C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00011F80);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000120B4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000123F0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001272C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00012A70);

void func_00012BF8(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 4);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x348) = 0;
    }
    func_000086F0((s32) (arg0 + 0xB4), 0);
    func_000086F0((s32) (arg0 + 0x664), 0);
    func_000086F0((s32) (arg0 + 0x660), 0);
    func_0001391C(arg0 + 0x66C, 0);
    func_000086F0((s32) (arg0 + 0x6D4), 0);
    func_000086F0((s32) (arg0 + 0x668), 0);
}

void func_00012C70(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
    func_00012BF8(arg0);
}

void func_00012C94(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x664) != 0) {
        M2C_FIELD(arg0, s8 *, 0x40) = 0;
    } else if (func_00012A70() == 0) {
        M2C_FIELD(arg0, s8 *, 0x40) = 0;
    }
}

void func_00012CD8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00012CFC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00012DF8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013118);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000132B8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013328);

void func_00013398(void) {
    scePaf_128E46E3();
    scePaf_B866A612();
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000133BC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001349C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001357C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013794);

void func_000138FC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00013994();
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001391C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013994);

void func_000139B4(M2C_UNK **arg0) {
    *arg0 = &D_0002A9D0;
}

void func_000139C4(M2C_UNK **arg0) {
    *arg0 = &D_0002A9D0;
    scePaf_6261C0A5((s32) arg0);
}

void func_000139EC(M2C_UNK **arg0) {
    *arg0 = &D_0002A9C0;
}

void func_000139FC(M2C_UNK **arg0) {
    *arg0 = &D_0002A9C0;
    scePaf_6261C0A5((s32) arg0);
}

void func_00013A24(M2C_UNK **arg0) {
    *arg0 = &D_0002A9A8;
}

void func_00013A34(M2C_UNK **arg0) {
    *arg0 = &D_0002A9A8;
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013A5C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013A78);

void func_00013AAC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013AB4);

void func_00013AD4(s32 arg0) {
    scePaf_BB8E4390(arg0 + 8);
}

void func_00013AF0(s32 arg0) {
    scePaf_79542EEA(arg0 + 8);
}

void func_00013B0C(s32 arg0) {
    scePaf_291EBB2C(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013B28);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013B6C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013BAC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013BE8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013C28);

void func_00013C4C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10)();
}

void func_00013C70(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}

void func_00013C94(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013CB8);

void func_00013CDC(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
}

void func_00013D00(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x24)();
}

void func_00013D24(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x28)();
}

void func_00013D48(s32 arg0) {
    scePaf_1A314D65(arg0 + 8);
}

void func_00013D64(s32 arg0) {
    scePaf_6FAE0AC1(arg0 + 8);
}

void func_00013D80(s32 arg0) {
    scePaf_2A5E7BE9(arg0 + 8);
}

void func_00013D9C(s32 arg0) {
    scePaf_7EA9C56C(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013DB8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013DF8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013E38);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013E78);

void func_00013EB8(void) {
}

s32 func_00013EC0(void) {
    return -1;
}

s32 func_00013EC8(void) {
    return -1;
}

s32 func_00013ED0(void) {
    return -1;
}

s32 func_00013ED8(void) {
    return -1;
}

s32 func_00013EE0(void) {
    return 0;
}

s32 func_00013EE8(void) {
    return 0;
}

s32 func_00013EF0(void) {
    return 1;
}

void func_00013EF8(void) {
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013F00);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013F6C);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A838);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A878);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A910);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A9A8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A9C0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A9D0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A9D8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00013FE0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000141F0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00014248);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000142A0);

void func_00014300(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x1E8);
    if (temp_v0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x344) = 0;
        func_00012C70(temp_v0);
    }
}

void func_0001432C(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x1E8);
    if (temp_v0 != NULL) {
        func_00012C94(temp_v0);
        M2C_FIELD(arg0, s8 *, 0x344) = 1;
    }
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00014368);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000143E4);

void func_00014410(M2C_UNK **arg0) {
    *arg0 = &D_0002AAF0;
}

void func_00014420(M2C_UNK **arg0) {
    *arg0 = &D_0002AAF0;
}

void func_00014430(M2C_UNK **arg0) {
    *arg0 = &D_0002AAF0;
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A9E8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002A9F8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00014458);

s32 func_000145C8(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 >= 0) {
        sceNetInetClose(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0_2 != 0) {
        scePaf_CCFF20ED(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    temp_v0_3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0_3 != 0) {
        scePaf_CCFF20ED(temp_v0_3);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    return 0;
}

void func_00014640(void *arg0) {
    if (sceNetInetSendto(M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, void **, 4), 4U, 0, arg0 + 0xC, 0x10) >= 0) {

    } else {
        sceNetInetGetPspError();
    }
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001468C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000148E4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000149C4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00014A10);

void func_00014A5C(void *arg0) {
    s32 temp_s1;

    scePaf_9479C11B(arg0 + 4, 0, 0x14);
    temp_s1 = arg0 + 0x50;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    scePaf_BD5018AA(temp_s1, (s32) &D_0002AAF8);
    M2C_FIELD(arg0, s32 *, 0x48) = temp_s1;
    M2C_FIELD(arg0, void **, 0x44) = arg0;
}

void func_00014AB8(void *arg0) {
    s32 temp_s1;

    scePaf_9479C11B(arg0 + 4, 0, 0x14);
    temp_s1 = arg0 + 0x50;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    scePaf_BD5018AA(temp_s1, (s32) &D_0002AAF8);
    M2C_FIELD(arg0, s32 *, 0x48) = temp_s1;
    M2C_FIELD(arg0, void **, 0x44) = arg0;
}

void func_00014B14(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0 != 0) {
        scePaf_CCFF20ED(temp_a0);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0_2 != 0) {
        scePaf_CCFF20ED(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0_3 != 0) {
        scePaf_CCFF20ED(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0_4 != 0) {
        scePaf_CCFF20ED(temp_a0_4);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_a0_5 != 0) {
        scePaf_CCFF20ED(temp_a0_5);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
}

void func_00014BC0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0 != 0) {
        scePaf_CCFF20ED(temp_a0);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0_2 != 0) {
        scePaf_CCFF20ED(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0_3 != 0) {
        scePaf_CCFF20ED(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0_4 != 0) {
        scePaf_CCFF20ED(temp_a0_4);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_a0_5 != 0) {
        scePaf_CCFF20ED(temp_a0_5);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
}

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AAE0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AAF0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AAF8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AB04);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00014C6C);

s32 func_00014D6C(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_s1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0 != 0) {
        func_000156C8(temp_a0);
        temp_s1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_s1 == 0) {
            M2C_FIELD(arg0, s32 *, 0) = 0;
        } else {
            func_00015400(temp_s1);
            scePaf_6261C0A5(temp_s1);
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0_2 != 0) {
        scePaf_CCFF20ED(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0_3 != 0) {
        scePaf_CCFF20ED(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0_4 != 0) {
        scePaf_CCFF20ED(temp_a0_4);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0_5 != 0) {
        scePaf_CCFF20ED(temp_a0_5);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00014E48);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00014FC8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00015004);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00015124);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00015160);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000151A4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000151E0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001521C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00015250);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001528C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00015354);

void func_000153E4(s32 arg0) {
    func_0001AEDC(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00015400);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AB70);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001541C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000156C8);

s32 func_00015870(s32 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C62;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_00025AC4(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000158AC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00015B80);

void func_00015C70(void *arg0) {
    func_00024F1C(M2C_FIELD(arg0, s32 *, 0x38));
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00015C8C);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AB94);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002ABA4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00015DB4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00016238);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00016390);

s32 func_000163CC(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x58) = arg1;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000163E4);

s32 func_00016720(void *arg0, M2C_UNK arg1) {
    void **temp_a0;
    void **temp_a0_2;
    void **temp_a0_3;
    void **temp_a0_4;
    void **temp_a0_5;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x30);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x14)(temp_a0);
    temp_a0_2 = M2C_FIELD(arg0, void ***, 0x28);
    M2C_FIELD(*temp_a0_2, M2C_UNK (**)(void **), 0x14)(temp_a0_2);
    func_00026218(M2C_FIELD(arg0, s32 *, 0));
    func_0001B164(arg1, M2C_FIELD(arg0, void ***, 0x28), M2C_FIELD(arg0, void ***, 0x30));
    func_0001B164(arg1, M2C_FIELD(arg0, void ***, 0x20), M2C_FIELD(arg0, void ***, 0x28));
    func_0001B004(arg1, M2C_FIELD(arg0, void ***, 0x28));
    func_0001B004(arg1, M2C_FIELD(arg0, void ***, 0x30));
    func_0001B004(arg1, M2C_FIELD(arg0, void ***, 0x20));
    temp_a0_3 = M2C_FIELD(arg0, void ***, 0x30);
    M2C_FIELD(*temp_a0_3, M2C_UNK (**)(void **), 0xC)(temp_a0_3);
    temp_a0_4 = M2C_FIELD(arg0, void ***, 0x28);
    M2C_FIELD(*temp_a0_4, M2C_UNK (**)(void **), 0xC)(temp_a0_4);
    temp_a0_5 = M2C_FIELD(arg0, void ***, 0x20);
    M2C_FIELD(*temp_a0_5, M2C_UNK (**)(void **), 0xC)(temp_a0_5);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000167FC);

s32 func_00016ADC(void *arg0, s32 arg1) {
    void **temp_a0;
    void **temp_a0_2;
    void **temp_a0_3;
    void **temp_a0_4;
    void **temp_a0_5;

    func_00026264(M2C_FIELD(arg0, s32 *, 0));
    temp_a0 = M2C_FIELD(arg0, void ***, 0x2C);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x14)(temp_a0);
    temp_a0_2 = M2C_FIELD(arg0, void ***, 0x34);
    M2C_FIELD(*temp_a0_2, M2C_UNK (**)(void **), 0x14)(temp_a0_2);
    func_0001B164(arg1, M2C_FIELD(arg0, void ***, 0x2C), M2C_FIELD(arg0, void ***, 0x34));
    func_0001B164(arg1, M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, void ***, 0x2C));
    func_0001B004(arg1, M2C_FIELD(arg0, void ***, 0x2C));
    func_0001B004(arg1, M2C_FIELD(arg0, void ***, 0x34));
    func_0001B004(arg1, M2C_FIELD(arg0, void ***, 0x24));
    temp_a0_3 = M2C_FIELD(arg0, void ***, 0x34);
    M2C_FIELD(*temp_a0_3, M2C_UNK (**)(void **), 0xC)(temp_a0_3);
    temp_a0_4 = M2C_FIELD(arg0, void ***, 0x2C);
    M2C_FIELD(*temp_a0_4, M2C_UNK (**)(void **), 0xC)(temp_a0_4);
    temp_a0_5 = M2C_FIELD(arg0, void ***, 0x24);
    M2C_FIELD(*temp_a0_5, M2C_UNK (**)(void **), 0xC)(temp_a0_5);
    return 0;
}

s32 func_00016BBC(void *arg0) {
    s32 var_a2;

    var_a2 = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0xB4) != 1) {
        var_a2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0xB4) != 1;
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00016BEC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00016D1C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00016E4C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00016EE0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00016F74);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AC88);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00017010);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000172A4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00017360);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001742C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001757C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00017660);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000176F4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001771C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000177BC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00017878);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000178A4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000178C8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00017B38);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00017E74);

s32 func_00017F2C(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA4);
    if (temp_v0 != 0) {
        scePaf_CCFF20ED(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x9C);
    if (temp_v0_2 != 0) {
        scePaf_CCFF20ED(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00017F88);

s32 func_00018058(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x7C);
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + temp_a1);
    return temp_a1;
}

void func_00018074(void *arg0) {
    func_00017F88(M2C_FIELD(arg0, s32 *, 4));
}

void func_00018090(void *arg0) {
    func_00018058(M2C_FIELD(arg0, void **, 4));
}

void func_000180AC(s32 arg0) {
    func_00016EE0(arg0 - 0x38);
}

void func_000180C8(s32 arg0) {
    func_00016F74(arg0 - 0x38);
}

void func_000180E4(s32 arg0) {
    func_000178C8(arg0 - 0x38);
}

void func_00018100(M2C_UNK **arg0) {
    *arg0 = &D_0002AE78;
}

void func_00018110(M2C_UNK **arg0) {
    *arg0 = &D_0002AE78;
    scePaf_6261C0A5((s32) arg0);
}

void func_00018138(M2C_UNK **arg0) {
    *arg0 = &D_0002AE28;
}

void func_00018148(M2C_UNK **arg0) {
    *arg0 = &D_0002AE28;
    scePaf_6261C0A5((s32) arg0);
}

void func_00018170(void *arg0) {
    func_0001B1BC(M2C_FIELD(arg0, s32 *, 4));
}

s32 func_0001818C(void) {
    return 0;
}

s32 func_00018194(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return 0;
}

s32 func_000181A0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s32 func_000181A8(s32 arg0) {
    return arg0 + 8;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000181B0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018224);

s32 func_000182A0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_000182A8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_000182B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

s32 func_000182B8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_000182C0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_000182C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_000182D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_000182D8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return 0;
}

s32 func_000182E4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 0;
}

s32 func_000182F0(void *arg0, s32 *arg1) {
    scePaf_3308156F(M2C_FIELD(arg0, s32 *, 0x1C), (s32) arg1, *arg1);
    return 0;
}

s32 func_00018314(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    return 0;
}

s32 func_00018320(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    return 0;
}

s32 func_0001832C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    return 0;
}

s32 func_00018338(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018344);

s32 func_0001840C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}

s32 func_00018414(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_0001841C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_00018424(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 0;
}

s32 func_00018430(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00018438(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_00018440(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    return 0;
}

void func_0001844C(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
}

void func_0001845C(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_00018484(void) {
    return 0x80004001;
}

s32 func_00018490(void) {
    return 0x80004001;
}

void func_0001849C(M2C_UNK **arg0) {
    *arg0 = &D_0002AEF8;
}

void func_000184AC(M2C_UNK **arg0) {
    *arg0 = &D_0002AEF8;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_000184D4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_000184DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_000184E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_000184EC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_000184F4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    return 0;
}

s32 func_00018500(void) {
    return 0;
}

s32 func_00018508(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00018510(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return 0;
}

s32 func_0001851C(void) {
    return 0;
}

s32 func_00018524(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

void func_0001852C(M2C_UNK **arg0) {
    *arg0 = &D_0002AEF8;
}

void func_0001853C(M2C_UNK **arg0) {
    *arg0 = &D_0002AEF8;
    scePaf_6261C0A5((s32) arg0);
}

void func_00018564(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
}

void func_00018574(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
    scePaf_6261C0A5((s32) arg0);
}

void func_0001859C(M2C_UNK **arg0) {
    *arg0 = &D_0002AE90;
}

void func_000185AC(M2C_UNK **arg0) {
    *arg0 = &D_0002AE90;
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000185D4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018640);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000186AC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000186EC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001872C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018774);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018930);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018A40);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018AAC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018C08);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018C74);

s32 func_00018DBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x50);
}

s32 func_00018DC4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

s32 func_00018DCC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38) - M2C_FIELD(arg0, s32 *, 0x50);
}

s32 func_00018DDC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40) - M2C_FIELD(arg0, s32 *, 0x4C);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018DEC);

s32 func_00018E78(void *arg0, u32 arg1) {
    s32 var_v1;

    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 (**)(), 0x20)() < arg1) || (var_v1 = 0, (M2C_FIELD(arg0, s32 *, 0x70) == 0))) {
        var_v1 = func_00021CF0(arg0 + 4, arg1);
    }
    return var_v1;
}

void func_00018EE0(s32 arg0) {
    func_00021E28(arg0 + 4);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018EFC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018F50);

s32 func_00018F94(s32 arg0, s32 arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 0x80070057;
    if (arg1 == 1) {
        *arg2 = arg0 + 0x74;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018FBC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00018FD4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00019074);

void func_0001910C(void *arg0) {
    func_00018FD4(M2C_FIELD(arg0, s32 *, 4));
}

void func_00019128(void *arg0) {
    func_00019074(M2C_FIELD(arg0, s32 *, 4));
}

void func_00019144(M2C_UNK **arg0) {
    *arg0 = &D_0002AFA0;
}

void func_00019154(M2C_UNK **arg0) {
    *arg0 = &D_0002AFA0;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_0001917C(void) {
    return 0;
}

s32 func_00019184(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001918C);

void func_0001924C(M2C_UNK **arg0) {
    *arg0 = &D_0002B000;
}

void func_0001925C(M2C_UNK **arg0) {
    *arg0 = &D_0002B000;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_00019284(s32 arg0) {
    func_00021EB8(arg0 + 4);
    return 0;
}

void func_000192A4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 1;
}

void func_000192B0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
}

void func_000192B8(M2C_UNK **arg0) {
    *arg0 = &D_0002B000;
}

void func_000192C8(M2C_UNK **arg0) {
    *arg0 = &D_0002B000;
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000192F0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001940C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00019528);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000195BC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00019650);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000196EC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00019A64);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002ACF0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AD10);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AD80);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002ADB0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002ADE0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AE28);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AE78);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AE90);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AED8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AEF8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AF28);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AF40);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002AFA0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B000);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B010);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00019B3C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00019C08);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00019D58);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00019E3C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00019ED4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00019EFC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001A018);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001A0CC);

s32 func_0001A23C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001A248);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001A274);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001A298);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001A42C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001A8D8);

s32 func_0001AA34(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    func_00020F88(M2C_FIELD(arg0, s32 *, 0xB4), arg0 + 0x90);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_a0 != 0) {
        scePaf_CCFF20ED(temp_a0);
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xA8);
    if (temp_a0_2 != 0) {
        scePaf_CCFF20ED(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0xA4);
    if (temp_a0_3 != 0) {
        scePaf_CCFF20ED(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0xC0);
    if (temp_a0_4 != 0) {
        scePaf_CCFF20ED(temp_a0_4);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0xB8);
    if (temp_a0_5 != 0) {
        scePaf_CCFF20ED(temp_a0_5);
        M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    }
    return 0;
}

void func_0001AAF0(void *arg0) {
    func_0001A0CC(M2C_FIELD(arg0, s32 *, 4));
}

void func_0001AB0C(void *arg0, s32 arg1) {
    func_0001A23C(M2C_FIELD(arg0, void **, 4), arg1);
}

void func_0001AB28(s32 arg0) {
    func_000195BC(arg0 - 0x38);
}

void func_0001AB44(s32 arg0) {
    func_00019650(arg0 - 0x38);
}

void func_0001AB60(s32 arg0) {
    func_0001A298(arg0 - 0x38);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001AB7C);

s32 func_0001AC44(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}

s32 func_0001AC4C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_0001AC54(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_0001AC5C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 0;
}

s32 func_0001AC68(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0001AC70(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_0001AC78(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    return 0;
}

void func_0001AC84(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
}

void func_0001AC94(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_0001ACBC(void) {
    return 0x80004001;
}

s32 func_0001ACC8(void) {
    return 0;
}

s32 func_0001ACD0(void) {
    return 0;
}

s32 func_0001ACD8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B058);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B078);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B0E8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001ACE0);

void func_0001AD50(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_v0_2 != 0) {
        sceKernelDeleteEventFlag(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001ADA4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001AE44);

void func_0001AEB8(M2C_UNK **arg0) {
    *arg0 = &D_0002B158;
}

void func_0001AEC8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002B158;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001AEDC);

void func_0001AEF0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002B158;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_0001AF1C(void *arg0, s32 arg1) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    temp_v0 = scePaf_4E8B4F27(arg1 * 4);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
    return (temp_v0 != 0) ? 0 : 0x8007000E;
}

s32 func_0001AF60(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {

    } else {
        scePaf_CCFF20ED(temp_v0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001AF94);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B004);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B010);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B164);

s32 func_0001B1B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B1BC);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B158);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B1C4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B284);

void func_0001B324(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    }
    sceKernelChangeThreadPriority(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10));
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B358);

void func_0001B38C(void *arg0) {
    s32 var_v1;
    void *var_v0;

    var_v0 = arg0;
    var_v1 = 2;
    do {
        var_v1 -= 1;
        M2C_FIELD(var_v0, s32 *, 4) = 0;
        M2C_FIELD(var_v0, s32 *, 0) = 0;
        var_v0 += 8;
    } while (var_v1 >= 0);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void func_0001B3B0(void *arg0) {
    s32 var_v1;
    void *var_v0;

    var_v0 = arg0;
    var_v1 = 2;
    do {
        var_v1 -= 1;
        M2C_FIELD(var_v0, s32 *, 4) = 0;
        M2C_FIELD(var_v0, s32 *, 0) = 0;
        var_v0 += 8;
    } while (var_v1 >= 0);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void func_0001B3D4(void) {
}

void func_0001B3DC(void) {
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B3E4);

s32 func_0001B428(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B430);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B714);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B844);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B8E0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001B97C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001BA20);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001BC68);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B17C);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B188);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001BD24);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001BDF0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001BEC0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001BF48);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001C01C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001C0E8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001C10C);

s32 func_0001C130(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001C138);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001C198);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001C1D0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001C2A8);

void func_0001C368(void) {
    func_0001C3A0();
}

void func_0001C384(void) {
    sceVshBridge_82314DEE();
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001C3A0);

void func_0001C3D4(void *arg0) {
    sceVshBridge_4CA1F6DA(M2C_FIELD(arg0, s32 *, 0x90));
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001C3F0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001C448);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001C4A0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001C4F8);

s32 func_0001CAEC(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x94);
}

s32 func_0001CAF8(void *arg0) {
    func_0001C138(M2C_FIELD(arg0, s32 *, 4));
    return 0;
}

void func_0001CB18(s32 arg0) {
    func_0001B8E0(arg0 - 0x38);
}

void func_0001CB34(s32 arg0) {
    func_0001B97C(arg0 - 0x38);
}

void func_0001CB50(s32 arg0) {
    func_0001C4F8(arg0 - 0x38);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001CB6C);

s32 func_0001CC34(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_0001CC3C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_0001CC44(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_0001CC4C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 0;
}

s32 func_0001CC58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0001CC60(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_0001CC68(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    return 0;
}

void func_0001CC74(M2C_UNK **arg0) {
    *arg0 = &D_0002B4C8;
}

void func_0001CC84(M2C_UNK **arg0) {
    *arg0 = &D_0002B4C8;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_0001CCAC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_0001CCB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001CCBC);

s32 func_0001CCC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_0001CCD0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return 0;
}

s32 func_0001CCDC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001CCE8);

s32 func_0001CCF8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    return 0;
}

void func_0001CD04(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
}

void func_0001CD14(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_0001CD3C(void) {
    return 0x80004001;
}

s32 func_0001CD48(void) {
    return 0x80004001;
}

s32 func_0001CD54(void) {
    return 0;
}

s32 func_0001CD5C(void) {
    return 0;
}

s32 func_0001CD64(void) {
    return 0;
}

s32 func_0001CD6C(void) {
    return 0;
}

s32 func_0001CD74(void) {
    return 0;
}

s32 func_0001CD7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

void func_0001CD84(M2C_UNK **arg0) {
    *arg0 = &D_0002B4C8;
}

void func_0001CD94(M2C_UNK **arg0) {
    *arg0 = &D_0002B4C8;
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001CDBC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001CE28);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001CE94);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001CED4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001CF14);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001CF5C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001D1D0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001D320);

s32 func_0001D4C4(void) {
    return 0x80004001;
}

s32 func_0001D4D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

s32 func_0001D4D8(void) {
    return 0x80004001;
}

s32 func_0001D4E4(void) {
    return 0x80004001;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001D4F0);

s32 func_0001D52C(s32 arg0) {
    func_00021EB8(arg0 + 4);
    return 0;
}

void func_0001D54C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 1;
}

void func_0001D558(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
}

s32 func_0001D560(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001D568);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001D640);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001D718);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001D774);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001D7D0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001D834);

s32 func_0001D908(void *arg0) {
    void **temp_a0;

    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void ***, 0xC);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0xC)(temp_a0);
    return 0;
}

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B1C8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B3D0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B3F0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B468);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B498);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B4C8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B4F8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B550);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001D93C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001D9D4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001DA9C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001DB50);

void *func_0001DC44(void *arg0) {
    void **temp_a0;
    void *temp_v0;
    void *var_v1;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x38);
    temp_v0 = M2C_FIELD(*temp_a0, void *(**)(void **), 0x1C)(temp_a0);
    var_v1 = NULL;
    if (temp_v0 != NULL) {
        var_v1 = func_00026CAC(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001DC88);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001DEF4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001DF18);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001DF3C);

s32 func_0001E0A8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_0001E0B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_0001E0B8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_0001E0C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 0;
}

s32 func_0001E0CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0001E0D4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_0001E0DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    return 0;
}

s32 func_0001E0E8(void) {
    return 0x80004001;
}

s32 func_0001E0F4(void) {
    return 0x80004001;
}

s32 func_0001E100(void) {
    return 0x80004001;
}

s32 func_0001E10C(void) {
    return 0;
}

s32 func_0001E114(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E11C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E214);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E30C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E3C4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E47C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E53C);

s32 func_0001E59C(void *arg0) {
    func_0001AD50(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E5BC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E5CC);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B5F0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B650);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B678);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E60C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E788);

s32 func_0001E81C(void *arg0) {
    s32 temp_v1;

    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    sceKernelChangeThreadPriority(M2C_FIELD(arg0, s32 *, 0x74), 0x33);
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0xBC), 1, 0);
    func_0001B284(arg0 + 0x68);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0xBC), 1);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xBC);
    if (temp_v1 > 0) {
        sceKernelDeleteSema(temp_v1);
    }
    M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E88C);

s32 func_0001E918(void *arg0) {
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0xB4) != 1) {
        sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 0x30), 0x10);
        var_a0 = func_0001AE44(arg0, 0x4C4B40);
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E96C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001E994);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001EAD4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001EB74);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001EB98);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001EBC4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001EE9C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001F0CC);

void func_0001F338(s32 arg0) {
    func_0001E3C4(arg0 - 0x84);
}

void func_0001F354(s32 arg0) {
    func_0001E3C4(arg0 - 0x68);
}

void func_0001F370(s32 arg0) {
    func_0001E3C4(arg0 - 0x38);
}

void func_0001F38C(s32 arg0) {
    func_0001E47C(arg0 - 0x84);
}

void func_0001F3A8(s32 arg0) {
    func_0001E47C(arg0 - 0x68);
}

void func_0001F3C4(s32 arg0) {
    func_0001E47C(arg0 - 0x38);
}

void func_0001F3E0(s32 arg0) {
    func_0001E5CC(arg0 - 0x38);
}

void func_0001F3FC(s32 arg0) {
    func_0001E994(arg0 - 0x38);
}

void func_0001F418(s32 arg0) {
    func_0001EAD4(arg0 - 0x38);
}

void func_0001F434(s32 arg0) {
    func_0001EBC4(arg0 - 0x68);
}

void func_0001F450(M2C_UNK **arg0) {
    *arg0 = &D_0002AE28;
}

void func_0001F460(M2C_UNK **arg0) {
    *arg0 = &D_0002AE28;
    scePaf_6261C0A5((s32) arg0);
}

void func_0001F488(M2C_UNK **arg0) {
    *arg0 = &D_0002B7F0;
}

void func_0001F498(M2C_UNK **arg0) {
    *arg0 = &D_0002B7F0;
    scePaf_6261C0A5((s32) arg0);
}

s32 func_0001F4C0(void) {
    return 0;
}

s32 func_0001F4C8(void) {
    return 0;
}

void func_0001F4D0(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x54)();
}

void func_0001F4F4(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x58)();
}

s32 func_0001F518(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001F520);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001F640);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001F760);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001F834);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001F908);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001F9E4);

s32 func_0001FA70(void *arg0) {
    func_0001AD50(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001FA90);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001FAA0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B704);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B740);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B7F0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B800);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B858);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001FAE0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001FC10);

s32 func_0001FCA4(void *arg0) {
    s32 temp_v1;

    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    sceKernelChangeThreadPriority(M2C_FIELD(arg0, s32 *, 0x74), 0x33);
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x104), 1, 0);
    func_0001B284(arg0 + 0x68);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x104), 1);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x104);
    if (temp_v1 > 0) {
        sceKernelDeleteSema(temp_v1);
    }
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001FD14);

s32 func_0001FDA0(void *arg0) {
    s32 var_a0;

    M2C_FIELD(arg0, s8 *, 0xBC) = 0;
    var_a0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0xB4) != 1) {
        sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 0x30), 0x10);
        var_a0 = func_0001AE44(arg0, 0x4C4B40);
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001FDF8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001FE20);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001FF30);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0001FFD0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00020020);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00020044);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00020070);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0002034C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0002061C);

void func_00020994(s32 arg0) {
    func_0001F834(arg0 - 0x84);
}

void func_000209B0(s32 arg0) {
    func_0001F834(arg0 - 0x68);
}

void func_000209CC(s32 arg0) {
    func_0001F834(arg0 - 0x38);
}

void func_000209E8(s32 arg0) {
    func_0001F908(arg0 - 0x84);
}

void func_00020A04(s32 arg0) {
    func_0001F908(arg0 - 0x68);
}

void func_00020A20(s32 arg0) {
    func_0001F908(arg0 - 0x38);
}

void func_00020A3C(s32 arg0) {
    func_0001FAA0(arg0 - 0x38);
}

void func_00020A58(s32 arg0) {
    func_0001FE20(arg0 - 0x38);
}

void func_00020A74(s32 arg0) {
    func_0001FF30(arg0 - 0x38);
}

void func_00020A90(s32 arg0) {
    func_00020070(arg0 - 0x68);
}

s32 func_00020AAC(void) {
    return 0;
}

s32 func_00020AB4(void) {
    return 0;
}

void func_00020ABC(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x54)();
}

void func_00020AE0(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x58)();
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00020B04);

s32 func_00020BFC(void) {
    return 0x1C;
}

s8 func_00020C04(s32 arg0) {
    s8 var_v1;

    var_v1 = 0;
    if (scePaf_9C0245AF(arg0, (s32) &D_0002C854, 3) == 0) {
        var_v1 = M2C_FIELD(arg0, s8 *, 3);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00020C44);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B8F0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B998);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B9C4);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002B9E8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BA00);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BA2C);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BA54);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00020CDC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00020F20);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00020F88);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00020FF8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021098);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021110);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0002122C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000212B0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021478);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000214D8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021600);

void func_00021724(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}

void func_0002172C(void) {
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021734);

s32 func_000217B8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000217C0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021850);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021894);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000218CC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021904);

void func_00021934(void) {
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0002193C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021970);

void func_000219A4(void) {
}

void func_000219AC(void) {
}

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BB78);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000219B4);

void func_00021B08(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_a0 > 0) {
        sceKernelDeleteEventFlag(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    if (temp_a0_2 > 0) {
        sceKernelDeleteEventFlag(temp_a0_2);
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    if (temp_a0_3 > 0) {
        sceKernelDeleteSema(temp_a0_3);
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    if (temp_a0_4 > 0) {
        sceKernelDeleteSema(temp_a0_4);
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (temp_a0_5 > 0) {
        sceKernelDeleteSema(temp_a0_5);
    }
    temp_a0_6 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    if (temp_a0_6 > 0) {
        sceKernelDeleteSema(temp_a0_6);
    }
    temp_a0_7 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if (temp_a0_7 > 0) {
        sceKernelDeleteSema(temp_a0_7);
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021BB8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021CF0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021E28);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021EB8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00021F9C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000221B0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00022244);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00022250);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000222F4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00022418);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000224FC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0002259C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0002263C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000226E4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000226F8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BDD8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BDF4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00022780);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BEA0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BEA4);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BEAC);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BEB8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BEC8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00022B24);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BEF0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00022C50);

s32 func_00022E5C(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_0001B1C4(arg0 + 0x68, arg1, 0x2C00, (s32) &D_0002BDD8);
    var_v1 = 0;
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = temp_v0;
        var_v1 = 0x80108C10;
    }
    return var_v1;
}

s32 func_00022EA8(s32 arg0) {
    func_0001B284(arg0 + 0x68);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00022EC8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000230C0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00023230);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00023284);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0002334C);

s32 func_0002336C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00023374);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_000233B8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", D_0002BF2C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_0002346C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00023A8C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009598", func_00023C7C);

s32 func_00023E58(s32 arg0) {
    return arg0 + 0x90;
}

s32 func_00023E60(s32 arg0) {
    return arg0 + 0xB0;
}

