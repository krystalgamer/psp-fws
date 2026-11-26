#include "common.h"
#include "premo_plugin_decls.h"

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000030);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000000B8);

INCLUDE_ASM("nonmatchings/premo_plugin", module_start);

s32 module_stop(void) {
    func_000275E8();
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000168);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/premo_plugin", func_0000018C_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_0000018C_v330);
#endif

#if FW_VERSION == 311
void func_0000018C_v311(void) {

}
#endif

#if FW_VERSION == 310
void func_0000018C_v310(void) {

}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_0000018C);
#else
void func_0000018C(void) {
    s32 temp_v0;

    temp_v0 = func_00002478();
    func_00006CD4(temp_v0);
    func_0000916C(temp_v0 + 0x240);
}
#endif

#if FW_VERSION < 352
void func_0000020C(void) {

}

INCLUDE_ASM("nonmatchings/premo_plugin", func_000001C4);
#else
s32 func_000001C4(void) {
    sceKernelDelayThread(0x2710);
    return 0;
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00000238);
#else
void func_000001E4(void) {
    func_00001608(0x10, 0);
    func_0000170C();
    func_0000177C();
    func_000017EC();
    func_000002D4(2);
    func_00001650(0x10, 0);
}

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028230);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028234);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028248);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028250);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028264);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002827C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028288);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000282A0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000282B8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000282CC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000282D8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000282EC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000282F8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028308);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028318);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028328);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028338);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002834C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002835C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028370);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002837C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002838C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000283AC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028408);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002840C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028418);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028464);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028470);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002847C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028484);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028498);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000284B8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000284E0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000284E4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000287D0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000287D4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000287D8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000287F8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028814);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028868);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000288AC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000288B0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000288C8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000288F0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028964);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000289A4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000289EC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000289F8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028AEC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028AF4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028B00);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028B04);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028B10);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028B24);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028B40);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028B58);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028B74);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028B90);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028BB0);

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021920);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028BD0);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028BF4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028C18);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028C30);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00022D98);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00022DB8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00022DDC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00022E00);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00022E28);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00022E50);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028C4C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028C70);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028C94);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028CB8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028CD8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028CF8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028D20);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028D48);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028D70);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028D98);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028DC0);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028DF0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028E1C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028E48);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028E74);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028EA0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028ECC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028EFC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028F28);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028F58);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028F88);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028FBC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00028FEC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002901C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029044);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029070);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002909C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000290C4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000290F0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029110);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029130);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002914C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002916C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029188);

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021CAC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021CC0);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000291A8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000291BC);

#if FW_VERSION < 330 || FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_000291D4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000291F4);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029214);

#if FW_VERSION < 330 || FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029234);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_000002C4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000320);
#else
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029254);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029274);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029294);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000292B4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000292DC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029300);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029324);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029348);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002936C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029394);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000293BC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000293E4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002940C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029434);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029460);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002948C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000294AC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000294D0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000294F4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000230);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000002D4);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000394);

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00000474);
#endif

#if FW_VERSION < 330
void func_00000474(void) {
    sceVshBridge_33EEEF3E(1, 2);
    sceVshBridge_AFB59B52(1, 2);
    func_00001888();
    func_00009A60();
    func_00001958();
    func_00009364();
}
#endif

#if FW_VERSION == 352
void func_00000474(void) {
    sceVshBridge_002381F2(1, 2);
    sceVshBridge_60C6E226(1, 2);
    func_000024D0();
    func_00004AA4();
    func_00009A60();
    func_00001958();
    func_00009364();
    D_0002C9B0 = 0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_000004C8);
#endif

#if FW_VERSION < 330
void func_000004C8(s32 arg0) {
    if (func_000019A0() > 0) {

    } else {
        sceVshCommonUtil_622815DD(&D_00026FEC, &func_00000320);
        if (scePaf_DAB59652(M2C_FIELD(func_00002478(), s32 *, 0x20), &D_000291A8) == 0) {
            scePaf_F609FA81(arg0, &D_000291A8, 0, 0);
            scePaf_CAF05F1D(arg0, &D_000291A8);
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin", func_000004D0);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_000005D8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000006E8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000868);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000088C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_0000097C);
#endif

#if FW_VERSION < 330
void func_0000097C(M2C_UNK (*arg0)(M2C_UNK)) {
    void *temp_v0;

    temp_v0 = func_00002478();
    M2C_FIELD(temp_v0, s8 *, 0xAE) = 1;
    func_00001FA4((s32) temp_v0, 4);
    func_00001FE4((s32) temp_v0, 4, 0);
    M2C_FIELD(temp_v0, s8 *, 0xA5) = 0;
    arg0(0);
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_000009DC);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_000005DC);
#else
void func_000005DC(void) {
    func_00001534();
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_000005F8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000738);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029558);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002955C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029560);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029564);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029568);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002956C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000904);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000A1C);

void func_00000AC4(M2C_UNK (*arg0)(M2C_UNK)) {
    void *temp_s0;
    struct Unk_func_00000AC4_temp_v0 *temp_v0;

    func_000053DC();
    temp_v0 = func_00002478();
    temp_v0->unk316 = 1;
    temp_s0 = (u8 *)temp_v0 + 0x240;
    func_0000903C(temp_s0, 4);
    func_00009080(temp_s0, 4, 0);
    if (arg0 != NULL) {
        arg0(0);
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000B34);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000B84);

void func_00000C38(void) {
}

void func_00000C40(void) {
}

void func_00000C48(void) {
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000C50);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000CA8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029580);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029590);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002959C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000295B4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000295CC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000295E0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000295F8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029610);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002961C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000EAC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001188);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000119C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000011BC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000011DC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001238);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000012F0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001358);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000013C0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000013F0);

void func_00001430(struct Unk_func_00001430_0 *arg0, M2C_UNK arg1) {
    s32 temp_s0;

    temp_s0 = (u8 *)arg0 + 0xE;
    scePaf_9479C11B(temp_s0, 0, 0x80);
    scePaf_BD5018AA(temp_s0, arg1);
    arg0->unkA5 = 1;
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000148C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000014D0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029644);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002965C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029660);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002969C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000296A0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000296A4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000296B8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001534);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001608);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001650);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000167C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000170C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000177C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000017EC);

void func_00001854(s32 arg0) {
    func_00001650(0x40000, arg0);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001874);

void func_000018F0(void) {
    func_00001874(1, 0xFFFF);
}

void func_00001910(void) {
    func_00001874(0, 0xFFFF);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00000B9C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00000BEC);
#endif

void func_00001930(s32 arg0, s32 arg1) {
    D_0002C9C4 = arg0;
    D_0002C9C8 = arg1;
    func_00001C04();
}

void func_00001958(void) {
    func_00001C5C();
}

u8 func_00001974(void) {
    u8 var_v1;
    struct Unk_func_00001974_temp_v0 *temp_v0;

    temp_v0 = func_00001C04();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0->unkC;
    }
    return var_v1;
}

s32 func_000019A0(void) {
    s32 var_v1;
    struct Unk_func_000019A0_temp_v0 *temp_v0;

    temp_v0 = func_00001C04();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0->unk10;
    }
    return var_v1;
}

void func_000019CC(void) {
    void *temp_v0;

    temp_v0 = func_00001C04();
    if (temp_v0 != NULL) {
        func_00001D3C(temp_v0);
    }
}

void func_000019F8(void) {
    void *temp_v0;

    temp_v0 = func_00001C04();
    if (temp_v0 != NULL) {
        func_00001D7C(temp_v0);
    }
}

#if FW_VERSION < 352
void func_00001A24(struct Unk_func_00001A24_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = sceKernelCreateSema(&D_0002970C, 0x100U, 1, 1, NULL);
    arg0->unk8 = sceKernelCreateSema(&D_0002970C, 0x100U, 1, 1, NULL);
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unk0 = vsh_8A06C72F(0, &func_00001DC4, &func_00001E50, 0);
    func_00001CA8(arg0);
}
#else
void func_00001A24(struct Unk_func_00001A24_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = sceKernelCreateSema(&D_0002970C, 0x100U, 1, 1, NULL);
    arg0->unk8 = sceKernelCreateSema(&D_0002970C, 0x100U, 1, 1, NULL);
    arg0->unkC = 0;
    arg0->unk10 = 0;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    arg0->unk0 = vsh_AD93F68D(0, &func_00001DC4, &func_00001E50, 0);
    func_00001CA8(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001AC4);

#if FW_VERSION < 352
void func_00001B64(struct Unk_func_00001B64_0 *arg0) {
    s32 temp_v0;

    func_00001CF4(arg0);
    temp_v0 = arg0->unk0;
    if (temp_v0 != 0) {
        vsh_FE0FDCDB(temp_v0);
        arg0->unk0 = 0;
    }
    sceKernelDeleteSema(arg0->unk8);
    sceKernelDeleteSema(arg0->unk4);
}
#else
void func_00001B64(struct Unk_func_00001B64_0 *arg0) {
    s32 temp_v0;

    func_00001CF4(arg0);
    temp_v0 = arg0->unk0;
    if (temp_v0 != 0) {
        vsh_63E63668(temp_v0);
        arg0->unk0 = 0;
    }
    sceKernelDeleteSema(arg0->unk8);
    sceKernelDeleteSema(arg0->unk4);
}
#endif

#if FW_VERSION < 352
void func_00001BB4(struct Unk_func_00001B64_0 *arg0) {
    s32 temp_v0;

    func_00001CF4(arg0);
    temp_v0 = arg0->unk0;
    if (temp_v0 != 0) {
        vsh_FE0FDCDB(temp_v0);
        arg0->unk0 = 0;
    }
    sceKernelDeleteSema(arg0->unk8);
    sceKernelDeleteSema(arg0->unk4);
}
#else
void func_00001BB4(struct Unk_func_00001B64_0 *arg0) {
    s32 temp_v0;

    func_00001CF4(arg0);
    temp_v0 = arg0->unk0;
    if (temp_v0 != 0) {
        vsh_63E63668(temp_v0);
        arg0->unk0 = 0;
    }
    sceKernelDeleteSema(arg0->unk8);
    sceKernelDeleteSema(arg0->unk4);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001C04);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001C5C);

#if FW_VERSION < 352
void func_00001CA8(struct Unk_func_00001A24_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unk0;
    if (temp_a0 != 0) {
        if (arg0->unk14 == 0) {
            vsh_388428D3(temp_a0);
            arg0->unk14 = 1;
        }
    }
}
#else
void func_00001CA8(struct Unk_func_00001A24_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unk0;
    if (temp_a0 != 0) {
        if (arg0->unk14 == 0) {
            vsh_8C1E8A38(temp_a0);
            arg0->unk14 = 1U;
        }
    }
}
#endif

#if FW_VERSION < 352
void func_00001CF4(struct Unk_func_00001B64_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unk0;
    if (temp_a0 != 0) {
        if (arg0->unk14 != 0) {
            vsh_475ABD41(temp_a0);
            arg0->unk14 = 0;
        }
    }
}
#else
void func_00001CF4(struct Unk_func_00001B64_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unk0;
    if (temp_a0 != 0) {
        if (arg0->unk14 != 0) {
            vsh_0E5502FC(temp_a0);
            arg0->unk14 = 0U;
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001D3C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001D7C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001DC4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001E50);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001F3C);

void func_00001FD8(M2C_UNK **arg0) {
    *arg0 = &D_00029720;
    func_000141F0((s32) arg0);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00002000);
#else
void func_00002000(M2C_UNK **arg0) {
    *arg0 = &D_00029720;
    func_000141F0((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}
#endif

s32 func_00002038(struct Unk_func_00002038_0 *arg0) {
    return arg0->unk1D4;
}

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002970C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029720);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002040);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/premo_plugin", func_00002094);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000020A0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000020CC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001474);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001530);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000015EC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000016CC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000017AC);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021DFC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021E08);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021E24);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021E3C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021E4C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021E5C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021E78);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021E98);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021EBC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021ED8);
#endif

#if FW_VERSION >= 311 && FW_VERSION < 340
s32 func_00002094(struct Unk_func_00002094_0 *arg0, s32 arg1) {
    arg0->unk1EC = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_000020A0);

s32 func_000020CC(void) {
    return D_0002C850;
}
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_00001474);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001530);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000015EC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000016CC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000017AC);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00023214);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00001894);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002478);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001988);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000019D0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000019F4);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00023220);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00023228);
#endif

#if FW_VERSION == 310 || FW_VERSION == 352
s32 func_00002094(struct Unk_func_00002094_0 *arg0, s32 arg1) {
    arg0->unk1EC = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_000020A0);

s32 func_000020CC(void) {
    return D_0002C850;
}
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_00001440);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000151C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000015F8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000016C8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001798);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002478);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001888);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000018D8);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00001908);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001984);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000019C4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001A08);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000263C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021F30);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00021F48);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00001B00);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001C0C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001CA0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001D44);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001D88);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_0000AB64);
#endif

#if FW_VERSION < 352
void func_00001E08(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/premo_plugin", func_00001F3C_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_00001F3C_v330);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00001F7C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001FBC);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_00001E18);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00001E94);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00001F34);
#endif

#if FW_VERSION < 330
void func_00001F34(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_s0 != 0) {
        scePaf_4612DB4B(temp_s0);
        scePaf_4E67BB08(temp_s0);
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
    }
    temp_s0_2 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_s0_2 != 0) {
        scePaf_4612DB4B(temp_s0_2);
        scePaf_4E67BB08(temp_s0_2);
        M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    }
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00001FA4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001FE4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002044);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000020AC);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_000020D4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002174);
#endif

#if FW_VERSION >= 311 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00002204);

s32 func_000029A4(void) {
    s32 var_s0;

    var_s0 = 0;
    if (D_00027108 != 0) {
        var_s0 = func_00002204(D_00027108);
    }
    sceKernelExitDeleteThread(0);
    return var_s0;
}
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00023290);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000232A0);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/premo_plugin", func_00002204);

s32 func_000029A4(void) {
    s32 var_s0;

    var_s0 = 0;
    if (D_00027108 != 0) {
        var_s0 = func_00002204(D_00027108);
    }
    sceKernelExitDeleteThread(0);
    return var_s0;
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_000029F0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002B08);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00002C9C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002D44);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002C68);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002D84);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002D90);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002E14);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002E98);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002F90);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003020);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003448);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000034DC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003548);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003598);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000035E0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003620);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000036AC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000036FC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003338);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003788);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003790);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000037EC);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_000232E0);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00022018);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_00002BAC);

void func_00002C4C(void) {
    sceKernelPowerTick(0);
}

s32 func_00002C68(void) {
    s32 var_v0;
    void *temp_v1;

    var_v0 = 0;
    if (D_00027108 != 0) {
        temp_v1 = M2C_FIELD(D_00027108, void **, 0x64);
        if (temp_v1 != NULL) {
            var_v0 = M2C_FIELD(temp_v1, s32 *, 0x344);
        }
    }
    return var_v0;
}

void func_00002C8C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x154) = arg1;
    M2C_FIELD(arg0, s32 *, 0x158) = arg1;
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002C98);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002D1C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002DA0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000030E4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003178);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000031E4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003220);

void func_000032AC(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xA8) == 0) || (M2C_FIELD(arg0, u8 *, 0xAC) == 0)) {

    } else {
        func_0000B778(arg0 + 0x17C);
        func_00001FA4((s32) arg0, 0x10);
    }
}

void func_000032FC(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xA8) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0xAC) == 0) {

        } else {
            func_00001FA4((s32) arg0, 0x1000);
        }
    }
}

s32 func_00003338(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x158) != arg1) {
        func_00003390((s32) arg0, arg1);
        M2C_FIELD(arg0, s32 *, 0x158) = arg1;
        func_00001FA4((s32) arg0, 0x300);
    }
    return 0;
}

s32 func_00003388(void) {
    return 4;
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003390);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000033EC);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00003478);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00022040);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00023314);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00003678);
#endif

#if FW_VERSION < 330
void func_00003678(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    temp_s0 = arg0 + 0x24;
    func_00004470((s32) temp_s0, 0x10);
    func_000044A4((s32) temp_s0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00003AF0);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_000036B0);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00003724);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000378C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003804);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000387C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006E3C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000393C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003984);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000039CC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003A14);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00003EAC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003F70);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000404C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004180);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_00003A4C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003B08);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003BC4);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_000020D8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000218C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002240);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000022B8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002330);
#endif

#if FW_VERSION < 330 || FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_000297F4);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00003CDC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003D3C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00004318);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_00003D68);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003F40);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_0000407C);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_00004168);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000419C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000420C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000423C);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00004284);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004300);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004344);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_000047B8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000048F8);
#endif

#if FW_VERSION < 330
void func_00004390(s32 arg0) {
    func_000043C4(arg0);
    func_00004634(arg0 + 0x24, 0);
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_000043C4);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00004470);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00004978);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_000044A4);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_0000452C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00004A48);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004A8C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004B7C);
#endif

#if FW_VERSION < 330
void func_000045C0(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_0000AB64((M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 4) * 0xC)) - 0xC);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) - 1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_v1 >= (temp_v0 - 0x14)) {

    } else {
        func_00004794((s32) arg0, temp_v0 - 0xA);
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004634);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_00004794);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_0000AC7C);
#endif

#if FW_VERSION < 352
void func_0000494C(s32 arg0) {
    func_00004994(arg0);
}

void func_00004968(s32 arg0) {
    func_00004994(arg0);
}

void func_00004984(void) {

}

void func_0000498C(void) {

}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004994);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029800);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_000049C0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004A1C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004B44);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004BA0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004BDC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004C2C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004CA0);

void func_00004D0C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    scePaf_6B1E90C7();
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004D30);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004D64);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004DA4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004DD4);

void func_00004E04(s8 arg0) {
    D_00027120 = arg0;
}

void func_00004E10(s32 arg0) {
    D_00027124 = arg0;
}

void func_00004E1C(s32 arg0, s32 arg1, s32 arg2) {
    D_00027128 = arg0;
    D_0002712C = arg1;
    D_00027130 = arg2;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_0000521C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005224);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005240);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005268);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005294);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000053A8);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin", func_00004E38);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004EB8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00001534);
#endif

#if FW_VERSION < 330 || FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002981C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029834);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin", func_000050AC);
#else
INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029844);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029854);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029870);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029890);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000298B4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000298D0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000298E8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000298FC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029910);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029928);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029944);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_0002995C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000023AC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002478);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000024D0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002518);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000253C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029970);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029980);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029984);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029998);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000299B4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000299D0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000299E4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_000299FC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000256C);

void func_00002608(void) {
    s32 temp_v0;

    temp_v0 = func_00002478();
    func_0000855C(temp_v0 + 4);
    func_00002710(temp_v0);
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000263C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002710);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002808);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000028AC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002988);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002BB0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002BF8);

void func_00002C48(void) {
    if (sceVshBridge_CE32A06A() != 1) {

    } else {
        scePaf_6CFE0C10(scePaf_F77E3DC0(), 0xF, 0);
    }
}

void func_00002C90(s32 arg0) {
    func_000022B8(arg0 - 0x240);
}

void func_00002CAC(s32 arg0) {
    func_00002330(arg0 - 0x240);
}

void func_00002CC8(struct Unk_func_00002CC8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002CD8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002D18);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002D58);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00002D9C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000034F8);

void func_000037E4(struct Unk_func_000037E4_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    sceKernelWaitSema(arg0->unk260, 1, 0);
    if (arg0->unk264 == 0) {
        arg0->unk268 = arg2;
        arg0->unk264 = arg1;
        if (arg1 == 2) {
            arg0->unk270 = arg3;
        }
        arg0->unk26C = arg4;
    }
    sceKernelSignalSema(arg0->unk260, 1);
    func_0000903C((u8 *)arg0 + 0x240, 8);
}

void func_00003880(s32 arg0) {
    func_00002D9C(arg0 - 0x240);
}

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029A28);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029A58);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000389C);

void func_00003988(struct Unk_func_00003988_0 *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0 = arg0->unk258;
    if (temp_s0 != 0) {
        scePaf_8E7F9126(temp_s0);
        scePaf_6261C0A5(temp_s0);
        arg0->unk258 = 0;
    }
    temp_s0_2 = arg0->unk25C;
    if (temp_s0_2 != 0) {
        scePaf_8E7F9126(temp_s0_2);
        scePaf_6261C0A5(temp_s0_2);
        arg0->unk25C = 0;
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_000039F8);

u16 func_00003A9C(struct Unk_func_00003A9C_0 *arg0, u16 arg1) {
    u16 temp_v0;

    temp_v0 = arg0->unk2BC;
    arg0->unk2BC = arg1;
    return temp_v0;
}

s32 func_00003AA8(struct Unk_func_00003AA8_0 *arg0) {
    arg0->unk2BC = 0x244D;
    return 0x244D;
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003AB8);

void func_00003B60(void) {
    sceKernelPowerTick(0);
}

s32 func_00003B7C(void) {
    s32 var_v0;
    struct Unk_func_00003B7C_temp_v1 *temp_v1;

    var_v0 = 0;
    if (D_0002C9D0 != NULL) {
        temp_v1 = D_0002C9D0->unk254;
        if (temp_v1 != NULL) {
            var_v0 = temp_v1->unk348;
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003BA0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003BF0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003C30);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003D24);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00003DB4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000043F4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004488);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000044F4);

s32 func_0000455C(struct Unk_func_0000455C_0 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_000044F4();
    var_v0 = 0;
    if (temp_v0 < 0) {
        arg0->unk26C = 0;
        arg0->unk268 = temp_v0;
        arg0->unk264 = 1;
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_000045A4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000045E4);

void func_00004670(struct Unk_func_00004670_0 *arg0) {
    if ((arg0->unk30C == 0) || (arg0->unk314 == 0)) {

    } else {
        func_0000B778((u8 *)arg0 + 0x3FC);
        func_0000903C((u8 *)arg0 + 0x240, 0x10);
    }
}

void func_000046C0(struct Unk_func_000046C0_0 *arg0) {
    if ((arg0->unk30C == 0) || (arg0->unk314 == 0)) {

    } else {
        func_0000903C((u8 *)arg0 + 0x240, 0x800);
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004700);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004778);

void func_0000486C(void) {
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004874);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000048B0);

void func_000048EC(struct Unk_func_000048EC_0 *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk24;
    if (temp_v0 != 0) {
        scePaf_CCFF20ED(temp_v0);
        arg0->unk24 = 0;
    }
    temp_v0_2 = arg0->unk2C;
    if (temp_v0_2 != 0) {
        scePaf_CCFF20ED(temp_v0_2);
        arg0->unk2C = 0;
    }
    temp_s0 = arg0->unk108;
    if (temp_s0 != 0) {
        scePaf_8E7F9126(temp_s0);
        scePaf_6261C0A5(temp_s0);
        arg0->unk108 = 0;
    }
    temp_s0_2 = arg0->unk104;
    if (temp_s0_2 != 0) {
        scePaf_8E7F9126(temp_s0_2);
        scePaf_6261C0A5(temp_s0_2);
        arg0->unk104 = 0;
    }
    func_00004CF8(arg0);
}

void func_0000499C(struct Unk_func_0000499C_0 *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk24;
    if (temp_v0 != 0) {
        scePaf_CCFF20ED(temp_v0);
        arg0->unk24 = 0;
    }
    temp_v0_2 = arg0->unk2C;
    if (temp_v0_2 != 0) {
        scePaf_CCFF20ED(temp_v0_2);
        arg0->unk2C = 0;
    }
    temp_s0 = arg0->unk108;
    if (temp_s0 != 0) {
        scePaf_8E7F9126(temp_s0);
        scePaf_6261C0A5(temp_s0);
        arg0->unk108 = 0;
    }
    temp_s0_2 = arg0->unk104;
    if (temp_s0_2 != 0) {
        scePaf_8E7F9126(temp_s0_2);
        scePaf_6261C0A5(temp_s0_2);
        arg0->unk104 = 0;
    }
    func_00004CF8(arg0);
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004A4C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004AA4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004B34);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004B74);

void func_00004BB4(struct Unk_func_00004BB4_0 *arg0, M2C_UNK arg1) {
    s32 temp_s0;

    temp_s0 = (u8 *)arg0 + 0x80;
    if (scePaf_9C0245AF(arg1, temp_s0, 0x10) != 0) {
        scePaf_3308156F(temp_s0, arg1, 0x10);
        arg0->unkF0 = 1;
    }
}

void func_00004C20(struct Unk_func_00004C20_0 *arg0, M2C_UNK arg1) {
    s32 temp_s0;

    temp_s0 = (u8 *)arg0 + 0x90;
    if (scePaf_B1975FE1(arg1, temp_s0, 0x41) != 0) {
        scePaf_7620CFFD(temp_s0, arg1, 0x40);
        arg0->unkF1 = 1;
    }
}

void func_00004C8C(struct Unk_func_00004C8C_0 *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = (u8 *)arg0 + 0xD1;
    if (scePaf_B1975FE1(arg1, temp_s0, 0x1F) != 0) {
        scePaf_7620CFFD(temp_s0, arg1, 0x1E);
        arg0->unkF2 = 1;
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004CF8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004D64);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004E1C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004F20);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00004FDC);

void func_0000507C(s32 arg0, s32 arg1, struct Unk_func_0000507C_2 *arg2) {
    switch (arg0) {                                 /* irregular */
    case 4:
        arg2->unk0 = (s32) (arg2->unk0 | 1);
        return;
    case 0:
        if (arg1 < 0) {
            *arg2->unk4 = arg1;
        }
        arg2->unk0 = (s32) (arg2->unk0 | 2);
        return;
    }
}

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029ABC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029AC8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029AD4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029AE0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000050C0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000053DC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000543C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000054D4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029B18);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029B30);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029B50);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029B64);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029B68);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029B7C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029B8C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029B98);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029BB0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029BCC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029BDC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029BF8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029C10);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029C34);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029C50);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029C6C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029C8C);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029CA4);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029CBC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029CE0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029CF8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029D18);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029D38);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005574);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000056B8);

void func_000056E0(void) {
    func_00001650(0x100000, 0);
    func_000093BC();
    func_0000948C();
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005710);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005804);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000058D0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000597C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005A28);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005A80);

void func_00005C30(void) {
}

void func_00005C38(void) {
    s32 temp_s0;

    temp_s0 = func_00002478() + 4;
    func_00007FD8(temp_s0, 0, 8);
    func_00007FD8(temp_s0, 1, 6);
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005C7C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005D5C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005DCC);

void func_00005E70(void) {
    s32 temp_s0;

    temp_s0 = func_00002478() + 4;
    func_00007FD8(temp_s0, 0, 3);
    func_00007FD8(temp_s0, 1, 6);
}

void func_00005EB4(void) {
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005EBC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00005F44);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006004);

void func_0000608C(void) {
    s32 temp_s0;

    temp_s0 = func_00002478() + 4;
    func_00007FD8(temp_s0, 0, 3);
    func_00007FD8(temp_s0, 1, 6);
}

void func_000060D0(void) {
}

void func_000060D8(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_00002478();
    temp_v0_2 = func_000044F4(temp_v0);
    if (temp_v0_2 >= 0) {

    } else {
        scePaf_6A82A8C6(arg0, 7);
        func_0000177C();
        D_0002C9EC = temp_v0_2;
        func_000075D8(temp_v0, 0xE);
    }
}

void func_00006154(void) {
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000615C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000061C8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006290);

void func_00006604(void) {
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000660C);

void func_000067E0(s32 arg0) {
    s32 temp_v0;

    if (D_0002CAE6 != 0) {
        scePaf_6A82A8C6(arg0, 7);
    } else {
        temp_v0 = func_00004A4C();
        if (temp_v0 != 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0xF8) & 0x8000) {
                if (D_0002CAE5 != 0) {

                } else {
                    sceVshCommonGui_891DD627(1);
                }
                D_0002CAE5 = 1;
            } else if (D_0002CAE5 == 0) {
                D_0002CAE5 = 0;
            } else {
                sceVshCommonGui_891DD627(0);
                D_0002CAE5 = 0;
            }
        }
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006880);

s32 func_000069A8(void) {
    void *temp_s0;

    temp_s0 = func_00002478() + 0x240;
    func_0000903C(temp_s0, 0x8000);
    func_00009080(temp_s0, 0x8000, 0);
    return D_0002C9EC;
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_000069F0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006A6C);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006A9C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006AEC);

#if FW_VERSION == 352
void func_00006BA0(struct Unk_func_00006BA0_0 *arg0, s32 arg1) {
    void *temp_s0;

    arg0->unk48 = arg1;
    temp_s0 = (u8 *)arg0 + 0x4C;
    func_00007990(temp_s0, 0x10);
    func_000079C4(temp_s0);
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006BD8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006C68);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006CD4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006D4C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006DC4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006E3C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006E84);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006ECC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006F14);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006F5C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00006F94);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007058);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007134);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007268);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007374);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000073D4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007400);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007538);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000075D8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007648);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007744);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000778C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007804);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007944);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007990);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000079C4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007A18);

void func_00007A94(struct Unk_func_00007A94_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_00007CB8((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007AD8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007BC8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007CB8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007D7C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007DC8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007E14);

void func_00007EE4(struct Unk_func_00007EE4_0 *arg0) {
    arg0->unkC = 1;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    arg0->unk19 = 0;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    func_000086F0((s32) ((u8 *)arg0 + 0x24), 0);
    func_00006A9C((s32) ((u8 *)arg0 + 0x28), (s32) &D_00029D88);
    func_00006A9C((s32) ((u8 *)arg0 + 0x34), (s32) &D_00029D88);
    arg0->unk40 = 0;
}

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029D88);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029D8C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007F68);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00007FD8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008100);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008160);

void func_000081A8(s32 arg0, s32 *arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_000086F0(arg0 + 0x24, *arg1);
    func_00006A9C(arg0 + 0x28, arg2);
    func_00006A9C(arg0 + 0x34, arg3);
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008208);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008360);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008408);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008458);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000084CC);

void func_00008538(struct Unk_func_00008538_0 *arg0) {
    arg0->unk1C = (s32) (arg0->unk1C + 1);
    scePaf_0CFD27E9();
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000855C);

void func_00008590(struct Unk_func_00008590_0 *arg0) {
    if (arg0->unk20 == 0) {
        scePaf_E7275457(1);
        arg0->unk20 = 1U;
    }
}

void func_000085D0(struct Unk_func_000085D0_0 *arg0) {
    if (arg0->unk20 != 0) {
        scePaf_E7275457(0);
        arg0->unk20 = 0U;
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000860C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008670);

void func_000086B0(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00008804();
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_000086D0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000086F0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008768);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008804);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008824);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008854);

#if FW_VERSION == 352
void func_00008860(s32 arg0, s32 arg1, s32 arg2) {
    D_0002CB20 = arg0;
    D_0002CB24 = arg1;
    D_0002CB28 = arg2;
}

void func_0000887C(void) {
}
#else
INCLUDE_ASM("nonmatchings/premo_plugin", func_00008884);
#endif

#if FW_VERSION == 352
void func_00008884(void) {
    func_00008A70();
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_000088A0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000088F0);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029DE8);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029DEC);

INCLUDE_RODATA("nonmatchings/premo_plugin", D_00029DF0);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008944);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008A70);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008C88);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008EB4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008ED8);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008EFC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008F64);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00008FCC);

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000903C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00009080);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000090E0);

void func_00009148(struct Unk_func_00009148_0 *arg0, u32 arg1) {
    void *sp0;
    sceKernelPollEventFlag(arg0->unkC, arg1, 1, &sp0);
}

INCLUDE_ASM("nonmatchings/premo_plugin", func_0000916C);

INCLUDE_ASM("nonmatchings/premo_plugin", func_000091B4);

INCLUDE_ASM("nonmatchings/premo_plugin", func_00009208);
#endif

void func_00009348(void) {
    func_00009688();
}

void func_00009364(void) {
    func_000096E0();
}
