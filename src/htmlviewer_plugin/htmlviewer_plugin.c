#include "common.h"
#include "htmlviewer_plugin_decls.h"

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000000AC);

#if FW_VERSION == 271
void func_0000010C_v271(void) {
    if (D_00005BB0 == 0) {

    } else {
        vsh_388428D3(D_00005BB0);
    }
}
#endif

#if FW_VERSION == 270
void func_0000010C_v270(void) {
    if (D_00005BB0 == 0) {

    } else {
        vsh_388428D3(D_00005BB0);
    }
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000140);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_0000010C_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_0000018C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_0000020C(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x14;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000063C0;
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x10), 1, NULL);
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    scePaf_CA5EF446((s32) temp_s1);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x10), 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852((s32) temp_s1);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x10));
    scePaf_E977B833(arg0);
}
#endif

#if FW_VERSION == 260
void func_0000020C(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x14;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00005C40_v260;
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x10), 1, NULL);
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    scePaf_CA5EF446(temp_s1);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x10), 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852(temp_s1);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x10));
    scePaf_E977B833(arg0);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_00000290(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x14;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000063C0;
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x10), 1, NULL);
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    scePaf_CA5EF446((s32) temp_s1);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x10), 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852((s32) temp_s1);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x10));
    scePaf_E977B833(arg0);
}
#endif

#if FW_VERSION == 260
void func_00000290(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x14;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00005C40_v260;
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x10), 1, NULL);
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    scePaf_CA5EF446(temp_s1);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x10), 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852(temp_s1);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x10));
    scePaf_E977B833(arg0);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_00000314(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x14;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000063C0;
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x10), 1, NULL);
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    scePaf_CA5EF446((s32) temp_s1);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x10), 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852((s32) temp_s1);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x10));
    scePaf_E977B833(arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 260
void func_00000314(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x14;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00005C40_v260;
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x10), 1, NULL);
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    scePaf_CA5EF446(temp_s1);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x10), 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852(temp_s1);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x10));
    scePaf_E977B833(arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000003A0);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000408);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 func_000004F4(void *arg0) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 8);
    if (!(var_v1 & 1)) {
        if (var_v1 & 2) {
            func_000015CC(3);
            var_v1 = M2C_FIELD(arg0, s32 *, 8);
        }
    } else {
        func_00001368();
        var_v1 = M2C_FIELD(arg0, s32 *, 8);
    }
    if (!(var_v1 & 4)) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
    } else {
        if (func_0000398C() >= 2) {
            func_00003A30(0);
            func_00001760();
            func_000035A8(2);
            func_00000140();
        }
        sceVshBridge_C58090DA(2);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_000004F4(void *arg0) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 8);
    if (!(var_v1 & 1)) {
        if (var_v1 & 2) {
            func_00001468(3);
            var_v1 = M2C_FIELD(arg0, s32 *, 8);
        }
    } else {
        func_00001368();
        var_v1 = M2C_FIELD(arg0, s32 *, 8);
    }
    if (!(var_v1 & 4)) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
    } else {
        if (func_0000398C() >= 2) {
            func_00001760();
        }
        sceVshBridge_C58090DA(2);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005768);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005EA8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005788);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005EC8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000578C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005798);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000057A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000057BC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000057D0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000057D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000057E0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006BB8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005820);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005844);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005868);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005878);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000058A0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000058C8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000058D8);
#endif

#if FW_VERSION >= 282
void func_0000010C(void) {
    if (D_000081C0 == 0) {

    } else {
        vsh_388428D3(D_000081C0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000140);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000001F4);

void func_00000274(struct Unk_func_00000274_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x14;
    arg0->unk0 = &D_00007200;
    sceKernelWaitSema(arg0->unk10, 1, NULL);
    arg0->unkC = 1;
    scePaf_CA5EF446(temp_s1);
    sceKernelSignalSema(arg0->unk10, 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852(temp_s1);
    sceKernelDeleteSema(arg0->unk10);
    scePaf_E977B833(arg0);
}

void func_000002F8(struct Unk_func_000002F8_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x14;
    arg0->unk0 = &D_00007200;
    sceKernelWaitSema(arg0->unk10, 1, NULL);
    arg0->unkC = 1;
    scePaf_CA5EF446(temp_s1);
    sceKernelSignalSema(arg0->unk10, 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852(temp_s1);
    sceKernelDeleteSema(arg0->unk10);
    scePaf_E977B833(arg0);
}

void func_0000037C(struct Unk_func_0000037C_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x14;
    arg0->unk0 = &D_00007200;
    sceKernelWaitSema(arg0->unk10, 1, NULL);
    arg0->unkC = 1;
    scePaf_CA5EF446(temp_s1);
    sceKernelSignalSema(arg0->unk10, 1);
    scePaf_5775283A(arg0);
    scePaf_1B043852(temp_s1);
    sceKernelDeleteSema(arg0->unk10);
    scePaf_E977B833(arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000408);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000490);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000004F0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000470);

s32 func_0000055C(struct Unk_func_0000055C_0 *arg0) {
    s32 var_v1;

    var_v1 = arg0->unk8;
    if (!(var_v1 & 1)) {
        if (var_v1 & 2) {
            func_0000156C(3);
            var_v1 = arg0->unk8;
        }
    } else {
        func_00001368();
        var_v1 = arg0->unk8;
    }
    if (!(var_v1 & 4)) {
        arg0->unk8 = 0;
    } else {
        if (func_0000398C() >= 2) {
            func_00003D48(0);
            func_00001760();
            func_000037A4(2);
            func_00000140();
        }
        sceVshBridge_C58090DA(2);
        arg0->unk8 = 0;
    }
    return 0;
}

void func_00000614(void) {
    scePaf_CAF05F1D(D_000080A4, D_00007E48);
    func_00001304(0);
    func_00001418(0, 0, 0, 0);
    func_00003BDC(0);
}
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006BB8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006BD8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006BDC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006BF8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006BFC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006C08);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006C18);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006C2C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006C40);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006C44);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006C50);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006C64);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006C74);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006C8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006C9C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006CB4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006D08);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006D2C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006D50);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006D60);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006D70);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006D98);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006DC0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006DD0);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00009218);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006DE0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006DF4);

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00009250);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00008C84);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005FD4);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005914_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005924);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005930);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_0000010C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_00000614(void) {
    scePaf_CAF05F1D(D_000080A4, D_00007E48);
    func_00001304(0);
    func_00001478(0, 0, 0, 0);
    func_00003BDC(0);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00004FF0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005968);
#endif

#if FW_VERSION == 260
void func_00000614(void) {
    scePaf_CAF05F1D(D_000080A4, D_00007E48);
    func_00001304(0);
    func_00000E38(0, 0, 0);
    func_00003BDC(0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006E0C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006E1C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006E28);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00008CC4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000006E8);
#endif

#if FW_VERSION == 250 || (FW_VERSION >= 300 && FW_VERSION < 310)
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000614);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00008CFC);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000614);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006E34);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006E44);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006EC4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006ED4);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00008DB0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006ED8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006EEC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006F14);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006F1C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006F24);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000940C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006F4C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006F70);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006F7C);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00008E84);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00008EAC);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000094B4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000094C8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000094D8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006FE8);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000094F0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00008ED4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00008EF4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006FA0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006FB0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006FCC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006FDC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006FE8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006FEC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006FF8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007000);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007008);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007018);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007028);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007040);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007058);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007078);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007080);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000708C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000709C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000070AC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000070B8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000070C4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000070D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000070E4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000070F0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000070FC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007110);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000711C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007144);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007168);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007184);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000719C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000071B4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000071C4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000071D8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007168);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000090C0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000090E8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000090F4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000911C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00009134);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000914C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000916C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000660);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000A2C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000006DC);
#endif

#if FW_VERSION == 282
s32 func_000006DC(void) {
    scePaf_FD9DE7B9(0x40);
    D_000081C5 = 0;
    if (D_000081CD != 0) {
        func_00000660(0);
    }
    if (func_000039BC() != 2) {
        if ((u32) (func_0000398C() - 2) >= 5U) {

        } else {
            func_00000614();
        }
    } else {
        func_000024FC();
    }
    return 0;
}
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
void func_00000770(s32 arg0, s32 arg1) {
    D_000081DC.unk0 = arg0;
    D_000081DC.unk4 = arg1;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000784);
#endif

#if FW_VERSION == 250 || (FW_VERSION >= 282 && FW_VERSION < 310)
s32 func_00000784(s32 arg0) {
    s32 var_v0;

    if ((u32) (func_0000398C() - 2) < 5U) {
        var_v0 = sceHVUI_Module_3A687520(arg0, 0);
    } else {
        func_00002EB4((s32) &D_0000819C, arg0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 300
void func_00000C10(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0) {

    } else {
        sceKernelSetEventFlag(D_0000A58C, 1U);
        temp_v0 = scePaf_D4FAE7D0(&D_00008CC4);
        if (temp_v0 != 0) {
            sceKernelSetEventFlag(D_0000A360, 1U);
            scePaf_1A45C860(temp_v0, NULL);
        }
    }
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000CF0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000C78_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000C78_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000C78_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000C78_v300);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000007DC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006EC4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006ED4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00004F28);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005A10);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000888);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000008B4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000008E0);

void func_00000920(void) {
    func_00003B90(0, 0);
}
#endif

#if FW_VERSION >= 310
void func_00000940(struct Unk_func_00000940_0 *arg0) {
    scePaf_FD9DE7B9(0x40);
    scePaf_F47CA1C2(arg0, 0x80005, func_000011A4, (s32) &D_0000ABD0);
    scePaf_F47CA1C2(arg0, 0x80006, func_00000AD0, (s32) &D_0000ABD0);
    scePaf_F47CA1C2(arg0, 0x10001, func_00000888, 0);
    scePaf_F47CA1C2(arg0, 0x10002, func_000008B4, 0);
    scePaf_F47CA1C2(arg0, 0x10006, func_000008E0, 0);
    scePaf_F47CA1C2(arg0, 0x10007, func_00000920, 0);
    arg0->unk14 |= 0x20;
    M2C_FIELD(&D_0000ABD0, s32 *, 0) = (s32) M2C_FIELD(scePaf_5DFB5858(), s32 *, 0x9C);
    M2C_FIELD(&D_0000ABD0, s32 *, 4) = (s32) M2C_FIELD(scePaf_5DFB5858(), s32 *, 0xA0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_00000940(struct Unk_func_00000940_0 *arg0) {
    void *sp0;
    scePaf_FD9DE7B9(0x40);
    scePaf_F47CA1C2(arg0, 0x80006, func_00000AD0, 0);
    scePaf_F47CA1C2(arg0, 0x10001, func_00000888, 0);
    scePaf_F47CA1C2(arg0, 0x10002, func_000008B4, 0);
    scePaf_F47CA1C2(arg0, 0x10006, func_000008E0, 0);
    scePaf_F47CA1C2(arg0, 0x10007, func_00000920, 0);
    arg0->unk14 |= 0x20;
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
    func_00003FAC((s32) &D_0000A570, &sp0);
    func_00003F7C(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003FAC((s32) &D_0000A57C, &sp0);
    func_00003F7C(&sp0);
}
#endif

#if FW_VERSION >= 310
void func_00000FC4(void) {
    void *sp0;
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
    func_00003FAC((s32) &D_0000A570, &sp0);
    func_00003F7C(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003FAC((s32) &D_0000A57C, &sp0);
    func_00003F7C(&sp0);
}
#endif

#if FW_VERSION == 250 || FW_VERSION == 282
void func_00000940(struct Unk_func_00000940_0 *arg0) {
    scePaf_FD9DE7B9(0x40);
    scePaf_F47CA1C2(arg0, 0x80006, func_00000AD0, 0);
    scePaf_F47CA1C2(arg0, 0x10001, func_00000888, 0);
    scePaf_F47CA1C2(arg0, 0x10002, func_000008B4, 0);
    scePaf_F47CA1C2(arg0, 0x10006, func_000008E0, 0);
    scePaf_F47CA1C2(arg0, 0x10007, func_00000920, 0);
    arg0->unk14 = (s32) (arg0->unk14 | 0x20);
}
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000A00);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000FE4);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000A90);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000011A4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000AD0);
#endif

#if FW_VERSION == 250 || (FW_VERSION >= 282 && FW_VERSION < 310)
void func_00000AD0(void) {
    scePaf_D0AD10FF();
    func_00003A18();
    scePaf_7C2C2742();
    if ((u32) (func_0000398C() - 2) >= 2U) {

    } else {
        scePaf_DF642973(3);
    }
}
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000B24);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000BBC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000C24);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000C78);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000012B8);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001300);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000CC0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000D14);
#endif

#if FW_VERSION == 250 || FW_VERSION == 282
void func_00000D14(void) {
    scePaf_66907719();
    func_00003980(4);
}
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000D38);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00004F64);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00004F6C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00004F74);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005A70);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005A94);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005AA0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000F60);
#endif

#if FW_VERSION == 250 || FW_VERSION == 282
void func_00000F60(void) {
    scePaf_66907719();
    func_00003980(4);
}
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000F84);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001A28);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001840_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001840_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001840_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001840_v300);
#endif

#if FW_VERSION >= 300
void func_000018BC(void) {

}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000018C4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000018F8);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001BFC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001A14);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001A50);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00004FF0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006FA0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005010);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000061B0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000061C0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000061CC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000061D0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000061DC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000061EC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000502C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005044);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000505C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000507C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006254);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005084);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006270);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005094);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000628C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00006298);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000062A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000062B8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000062C4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000062D0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007110);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000050AC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000050D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007168);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005114);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005BF0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000512C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000513C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000678);

s32 func_000006F4(void) {
    scePaf_FD9DE7B9(0x40);
    D_000066F1 = 0;
    if (D_000066F9 != 0) {
        func_00000678(0);
    }
    if (func_00002AD8() != 2) {
        if ((u32) (func_0000398C() - 2) >= 5U) {

        } else {
            func_00000614();
        }
    } else {
        func_000024FC();
    }
    return 0;
}

void func_00000788(s32 arg0, s32 arg1) {
    M2C_FIELD(&D_00006708, s32 *, 0) = arg0;
    M2C_FIELD(&D_00006708, s32 *, 4) = arg1;
}

s32 func_0000079C(s32 arg0) {
    s32 var_v0;

    if ((u32) (func_0000398C() - 2) < 5U) {
        var_v0 = sceHVUI_Module_3A687520(arg0, 0);
    } else {
        func_00002EB4((s32) &D_000066E0, arg0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000007F4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000008CC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000008F8);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000924);

void func_00000948(void) {
    func_00003B90(0, 0);
}

void func_00000968(void *arg0) {
    scePaf_FD9DE7B9(0x40);
    scePaf_F47CA1C2(arg0, 0x80006, func_00000AF8, 0);
    scePaf_F47CA1C2(arg0, 0x10001, func_000008CC, 0);
    scePaf_F47CA1C2(arg0, 0x10002, func_000008F8, 0);
    scePaf_F47CA1C2(arg0, 0x10006, func_00000924, 0);
    scePaf_F47CA1C2(arg0, 0x10007, func_00000948, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) | 0x20);
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000A28);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000AB8);

void func_00000AF8(void) {
    scePaf_D0AD10FF();
    func_00003A18();
    scePaf_7C2C2742();
    if ((u32) (func_0000398C() - 2) >= 2U) {

    } else {
        scePaf_DF642973(3);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000B24);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000BE4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000C34);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000C88);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000CD0);

void func_00000D24(void) {
    scePaf_66907719();
    func_00003980(4);
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000D38);

void func_00000F50(void) {
    scePaf_66907719();
    func_00003980(4);
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000F84);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001174);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001208);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_00001208(void) {
    func_00005354();
    func_000003A0((s32) &D_00006710, 2);
    return 5;
}
#endif

#if FW_VERSION >= 282
s32 func_00001208(void) {
    func_00005354();
    func_00000408((s32) &D_000081E4, 2);
    return 5;
}
#endif

void func_00001238(void) {
    vsh_AA8B9556();
}

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000012FC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001254);

void func_000012BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000049E8(arg0, arg1, arg2, arg3, D_00007E88 != 0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000012E0);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001304);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001368);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001478);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000063C0);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000015CC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_000016D0);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000E38);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00005C40_v260);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001468);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00000F38);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_0000100C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_00001418);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00007200);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000097C0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000097DC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000097F4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000980C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00009210);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000924C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00009868);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000091A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000091C4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000091DC);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000091F4_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000091F4_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000091F4_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_000091F4_v300);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00009210);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_0000924C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin", D_00009250);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin", func_0000156C);
#endif
