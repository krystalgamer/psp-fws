#include "common.h"
#include "htmlviewer_utility_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000024);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000000AC);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000010C_v352);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000010C_v351);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000010C_v350);
#endif

#if FW_VERSION >= 350
s32 func_00000128(void) {
    return D_00007658;
}

void func_00000134(void) {

}

void func_0000013C(void) {

}

void func_00000144(void) {

}
#endif

#if FW_VERSION == 352
void func_0000014C_v352(void) {

}
#endif

#if FW_VERSION == 351
void func_0000014C_v351(void) {

}
#endif

#if FW_VERSION == 350
void func_0000014C_v350(void) {

}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000010C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000014C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000180);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000001B8);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000270);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000344);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000003F0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000003A8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000002F0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 func_000002F0(void) {
    s32 temp_v0;
    s32 var_v0;

    func_00004520((s32) &D_00004D70, 0, 0x34);
    func_00000180((s32) &D_00004D70, (s32) D_000060E4, 0x34);
    M2C_FIELD(&D_00004D70, s32 *, 0x30) = 0;
    temp_v0 = sceUtility_943CBA46(&D_00004D70);
    if (temp_v0 != 0) {
        D_000060E4->unk1C = temp_v0;
        func_00001538(2);
        var_v0 = temp_v0;
    } else {
        func_00001538(1);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
s32 func_000002F0(void) {
    s32 temp_v0;
    s32 var_v0;

    func_00004520((s32) &D_000033AC, 0, 0x34);
    func_00000180((s32) &D_000033AC, (s32) D_000060E4, 0x34);
    M2C_FIELD(&D_000033AC, s32 *, 0x30) = 0;
    temp_v0 = sceUtility_943CBA46(&D_000033AC);
    if (temp_v0 != 0) {
        func_00001538(2);
        var_v0 = temp_v0;
    } else {
        func_00001538(1);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
s32 func_000002F0(void) {
    s32 temp_v0;
    s32 var_v0;

    func_00004520((s32) &D_0000616C, 0, 0x34);
    func_00000180((s32) &D_0000616C, (s32) D_000060E4, 0x34);
    D_0000616C.unk30 = 0;
    temp_v0 = sceUtility_943CBA46(&D_0000616C);
    if (temp_v0 != 0) {
        D_000060E4->unk1C = temp_v0;
        func_00001FDC(2);
        var_v0 = temp_v0;
    } else {
        func_00001FDC(1);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000378);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000003D8);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A40_v352);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A44_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A40_v351);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A44_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A40_v350);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A44_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A58);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A68);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A80);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A9C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005AAC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005ABC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005ACC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005AD8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005AF0);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B04_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B04_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B04_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B1C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B34);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B4C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B54);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B74_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B74_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B74_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B88);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BD8_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BD8_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BD8_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BEC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BF4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BFC_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BFC_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BFC_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C44);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C48);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C4C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C54);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C5C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C94);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C98);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C9C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005CBC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005CC4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005D04);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000058F4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005D70);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004F78);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004F7C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003870);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000039C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000032C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004F80);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004F9C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004FA0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004FB0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004FC8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000058DC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000058E0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000592C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C80);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059F4_v311);
#endif

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059F4_v310);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005964_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005964_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005964_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005964_v300);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005994);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059DC);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005AB0);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A20_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A20_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A20_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A20_v300);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A50);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A94);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005AC8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B2C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B7C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BB0);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005EF4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005F38);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005F8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005FE4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000603C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006090);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000060EC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006144);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000061A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006244);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006284);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000062B8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000062F0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006340);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000637C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000063B0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000063EC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000642C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006460);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000649C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000064D0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006518);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006560);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000658C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000003FC);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000A1C);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000C04);

s32 func_00000CF0(void) {
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000A84);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000009F4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000080C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000720);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000B50);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000DC4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000E0C);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003870);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005024);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003ECC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005028);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000503C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000E4C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000102C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000115C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000013B4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001448);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000014DC);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001888);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000169C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000017A4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000018C4);

s32 func_000019E4(void) {
    D_000060E4->unk1C = 0;
    return 7;
}

s32 func_000019F8(void) {
    D_000060E4->unk1C = 0;
    return 7;
}

void func_00001A0C(s32 arg0) {
    D_000060E4->unk1C = arg0;
    if (func_00001FB8() < 2) {

    } else {
        func_00001FAC(7);
    }
}

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 func_00001764(u32 arg0) {
    return (arg0 < 2U) ? 0 : -1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_000013D8(void) {
    return 0;
}

s32 func_000013E0(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00001A4C(u32 arg0) {
    return (arg0 < 2U) ? 0 : -1;
}
#endif

#if FW_VERSION >= 350
void func_00001A5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00003014(arg0, arg1, arg2, arg3, (sceUtility_private_167260AF() < 0x118) * 2);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00001A5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00003014(arg0, arg1, arg2, arg3, (sceUtility_private_4B677BA1() < 0x118) * 2);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001AC4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00001AC4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000030E8(arg0, arg1, arg2, (sceUtility_private_4B677BA1() < 0x118) * 2);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001B1C);

s32 func_00001B90(void) {
    return 0;
}
#endif

#if FW_VERSION >= 330
s32 func_00001EAC(void) {
    return 0;
}

void func_00001EB4(void) {

}

M2C_UNK *func_00001EBC(void) {
    return &D_00005028;
}

void func_00001EC8(void) {

}

void func_00001ED0(void) {

}
#endif

#if FW_VERSION >= 350
s32 func_00001F1C(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001B98);

s32 module_start(void) {
    func_00000000();
    func_00001B98(0, 0);
    return 0;
}

s32 module_stop(void) {
    func_000047E8();
    return 0;
}

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000188C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001920);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000014F0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000015F8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001550_v250);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000135C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 func_00001A74(void) {
    s32 temp_v0;
    s32 var_v0;

    D_00003E14 = 1;
    temp_v0 = sceHVUI_Module_F7038231();
    var_v0 = 0;
    if (temp_v0 != 0) {
        D_000034C0 = 0;
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 260
s32 func_0000167C(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;

    D_00003E14 = 1;
    temp_v0 = func_000014F0();
    var_s1 = temp_v0;
    if ((temp_v0 != 0) || (var_s1 = sceHVUI_Module_F7038231(arg0), var_v0 = 0, (var_s1 != 0))) {
        func_000015F8();
        D_000034C0 = 0;
        var_v0 = var_s1;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 250
s32 func_0000167C(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;

    D_00003E14 = 1;
    temp_v0 = func_000014F0();
    var_s1 = temp_v0;
    if ((temp_v0 != 0) || (var_s1 = sceHVUI_Module_F7038231(arg0), var_v0 = 0, (var_s1 != 0))) {
        func_00001550_v250();
        D_000034C0 = 0;
        var_v0 = var_s1;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001408);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_000014CC(void) {
    D_000034C0 = 8;
    sceHVUI_Module_146CB797();
    D_000034C0 = 0;
}
#endif

#if FW_VERSION == 260
void func_000014CC(void) {
    D_000034C0 = 8;
    sceHVUI_Module_146CB797();
    func_000015F8();
    D_000034C0 = 0;
}
#endif

#if FW_VERSION == 250
void func_000014CC(void) {
    D_000034C0 = 8;
    sceHVUI_Module_146CB797();
    func_00001550_v250();
    D_000034C0 = 0;
}
#endif

#if FW_VERSION == 201
void func_000014CC(void) {
    D_000034C0 = 8;
    sceHVUI_Module_146CB797();
    if (D_000031FC > 0) {
        func_00001E98(D_000031FC);
    }
    D_000034C0 = 0;
}
#endif

#if FW_VERSION < 282
void func_00001FAC(s32 arg0) {
    D_000034C0 = arg0;
}

s32 func_00001FB8(void) {
    return D_000034C0;
}

s32 func_0000152C(void) {
    return D_000034C4;
}

void func_00001538(s32 arg0) {
    D_00003E10 = arg0;
}

s32 func_00001544(void) {
    return D_00003E10;
}

void func_00001550(void) {
    if ((u32) (D_000034C0 - 2) >= 4U) {

    } else {
        sceHVUI_Module_789FBBA8();
    }
}

void func_00001588(void) {
    if (D_00003E14 != 0) {
        if (D_000034C0 >= 2) {
            if (D_000034C0 >= 6) {

            } else {
                sceGeSaveContext(&D_00003500);
                sceHVUI_Module_260E54A0();
                sceGeRestoreContext(&D_00003500);
            }
        }
    }
}

void func_000015FC(s32 arg0, s32 arg1) {
    if (D_000034C0 != 2) {

    } else {
        sceHVUI_Module_3ADFED08(arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001634);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000166C);

void func_000017CC(u8 arg0) {
    D_00003E14 = arg0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_00001DA8(s32 arg0) {
    if (arg0 == 0) {
        D_00004BEC = 1;
    }
    sceHVUI_Module_A4C50591();
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000017D8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003FBC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003FCC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003FDC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003FEC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003FFC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000400C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000401C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000402C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000403C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000404C_v271);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000404C_v270);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000405C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000406C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003968);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004088);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003974);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001800);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001914);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001ABC);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001BF0);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001C6C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001CEC);

s32 func_00001D64(s32 arg0) {
    s32 var_v0;

    if (func_0000231C(arg0, M2C_VFIELD(&D_000031F8, s32, 8)) == 0) {
        var_v0 = M2C_VFIELD(&D_000031F8, s32, 0xC);
    } else {
        var_v0 = func_00001DB8(arg0);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001DB8);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001E60);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001E98);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005138);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000514C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005160);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005174);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005188);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000519C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000051B0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000051C4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000051D8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000051EC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005200);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005214);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005228);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000523C);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005250);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005EC4);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005264);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003994);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005270);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000527C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005284);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005294);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000529C);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005F20);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000052A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000052D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005300);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000532C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005358);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005384);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000053B0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000053DC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005408);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005434);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005460);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000548C);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BB0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BB8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BBC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BC0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BC4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BC8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BCC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BD0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BD4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BD8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BDC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BE0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BE4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BEC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003BF4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001AB4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001A0C_v250);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001B28);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001C3C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001DE4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000234C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001F18);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001F94);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002014);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000208C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002134);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000261C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054B8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054C0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054C4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054C8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054CC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054D0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054D8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054DC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054E0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054E4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054E8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054EC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054F4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000054FC);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001CA0);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001D3C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001DD0);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001E48);

s32 func_00001F3C(void) {
    s32 temp_v0;
    s32 var_v0;

    D_00006C54 = 1;
    temp_v0 = sceHVUI_Module_F7038231();
    var_v0 = 0;
    if (temp_v0 != 0) {
        D_00006300 = 0;
        var_v0 = temp_v0;
    }
    return var_v0;
}

void func_00001F7C(void) {
    D_00006300 = 8;
    sceHVUI_Module_146CB797();
    D_00006300 = 0;
}

void func_00001FAC(s32 arg0) {
    D_00006300 = arg0;
}

s32 func_00001FB8(void) {
    return D_00006300;
}

void func_00001FC4(s32 arg0) {
    D_00006304 = arg0;
}

s32 func_00001FD0(void) {
    return D_00006304;
}

void func_00001FDC(s32 arg0) {
    D_00006C50 = arg0;
}

s32 func_00001FE8(void) {
    return D_00006C50;
}
#endif

#if FW_VERSION >= 310
void func_000022C0(s32 arg0) {
    D_00007D14 = arg0;
}

s32 func_000022CC(void) {
    return D_00007D14;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001FF4);

u8 func_00002000(void) {
    return D_00005FC5;
}

void func_0000200C(void) {
    if ((u32) (D_00006300 - 2) >= 4U) {

    } else {
        sceHVUI_Module_789FBBA8();
    }
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002328);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002044);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000020B8);

void func_00002154(void) {
    switch (D_00006300) {                           /* irregular */
    case 4:
        if (D_00005FC5 != 0) {
        case 2:
            if (D_00006C78 != 0) {
                sceHVUI_Module_3ADFED08(D_00006C78, 0);
                D_00006C78 = 0;
            }
        }
        break;
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000021BC);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002208);

void func_00002368(s8 arg0) {
    D_00006C54 = arg0;
}

void func_00002374(s32 arg0) {
    if (arg0 == 0) {
        D_00005FC4 = 1;
    }
    sceHVUI_Module_A4C50591();
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000026C8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000023A0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
M2C_UNK *func_0000268C(void) {
    return "http://manuals.playstation.net/document/pspindex.html";
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000023C8);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002458);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002634);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002ABC);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002A24_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002A24_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002A24_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002A24_v300);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002748);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000028F0);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002A24);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002AF8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002ECC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002B80);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002C04);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002CB4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002D10);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002DB4);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000333C);
#endif

#if FW_VERSION >= 330
u8 func_00003348(void) {
    return (u8) D_00005FC4;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002E24);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002EF4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002FD0);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003014);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000055AC);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001EF4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001F48);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002254);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001FB8_v201);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002088);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 func_00002400(u32 arg0, s32 *arg1) {
    s32 var_a3;

    var_a3 = -1;
    if (arg1 != NULL) {
        if (arg0 < 0xDU) {
            var_a3 = 0;
            *arg1 = (&D_00004BF0)[arg0];
        } else {
            *arg1 = D_00004BF0;
        }
    }
    return var_a3;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
s32 func_00002400(u32 arg0, s32 *arg1) {
    s32 var_a3;

    var_a3 = -1;
    if (arg1 != NULL) {
        if (arg0 < 0xCU) {
            var_a3 = 0;
            *arg1 = (&D_0000420C)[arg0];
        } else {
            *arg1 = D_0000420C;
        }
    }
    return var_a3;
}
#endif

#if FW_VERSION == 201
s32 func_00002164(u32 arg0, s32 *arg1) {
    s32 var_a2;

    var_a2 = -1;
    if (arg1 != NULL) {
        var_a2 = -2;
        if (arg0 < 8U) {
            var_a2 = 0;
            *arg1 = (&D_00003238)[arg0];
        } else {
            *arg1 = D_00003238;
        }
    }
    return var_a2;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000021AC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000024CC);

void func_00002520(u32 arg0, s32 *arg1) {
    func_00002400(arg0, arg1);
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000253C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000026A0);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002724);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000288C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000028F8);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000295C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002B3C);

void func_00002B98(void) {
    sceKernelWaitEventFlag(D_0000511C, 0x100U, 0, NULL, NULL);
}

void func_00002BC8(void) {
    func_00002D30(0);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000435C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002234);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002248);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002290);

s8 *func_000022D8(s8 *arg0, s32 arg1, s32 arg2) {
    s8 *temp_s0;
    s8 *var_a0;

    var_a0 = arg0;
    temp_s0 = var_a0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
        } while (*var_a0 != 0);
    }
    func_00002290((s32) var_a0, arg1, arg2);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000231C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000239C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002438);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004520);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000248C);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000055BC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000055C8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000055D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000055E0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000055F0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000055FC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005604);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005610);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000561C);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003CBC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003CC8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000043F0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004400);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000440C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005628);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005634);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005640);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005650);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000565C);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006328);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006338);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006348);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006354);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00006424);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000566C);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000450C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000451C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004534);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004544);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004554);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004564);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004574);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004584);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004594);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000045A4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000045B4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000045C0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000045D0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000045E4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000045F4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004604);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004614);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004624);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004634);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004644);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004654);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004664);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004674);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000575C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000576C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005784);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005794);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000057A4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000057B4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000057C4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000057D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000057E0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000057F0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005804);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005814);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005824);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005834);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005844);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005854);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005864);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005874);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005884);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005894);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005924);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005930);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005940);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000594C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005958);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005964);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003DE8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003E00);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003E0C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000047A0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005978);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005990);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000599C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059B0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059BC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059C4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059CC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059E0);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00007164);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00007178);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059F4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059F8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A00);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A04);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A08);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A0C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A10);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A18);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A1C);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000047D4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A20);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A24);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004048);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000047E0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000404C_v260);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A28);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A2C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A30);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A34);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A38);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003E50);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A3C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A40);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A44);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A48);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A4C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005AEC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B04);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B18);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B30);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B48);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B5C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003F50);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003F68);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003F80);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B74);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BA4);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000068C8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000068E0);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BBC);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00003FA0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BC4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BD0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BD8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BE4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BFC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C1C);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C3C);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C58);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000030E8);

void func_00003180(void) {
    func_00002FD0();
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000319C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003944);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003300);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003784);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003384);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003508);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000357C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000035E0);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003640);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000036FC);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000037B4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003864);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000038F4);

void func_00003950(void) {
    sceKernelWaitEventFlag(D_00006F24, 0x100U, 0, NULL, NULL);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003980);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00003980(void) {
    sceHtmlViewerHelper_C92C71B7(0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000399C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005D00);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005D20);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005D30);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000074F0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000041F4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003A00);
#endif

#if FW_VERSION >= 350
void func_00003AB4(void) {
    func_000038F4(0);
    func_00003980();
    func_00003950();
    func_00000144();
    if (D_00006F24 != 0) {
        sceKernelDeleteEventFlag(D_00006F24);
        D_00006F24 = 0;
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00003AB4(void) {
    func_000038F4(0);
    func_00003980();
    func_00003950();
    if (D_00006F24 != 0) {
        sceKernelDeleteEventFlag(D_00006F24);
        D_00006F24 = 0;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003B08);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000040B4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_ACFA87C1);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_2030683A);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_B47198C1);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_DB68F04B);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_30534E9F);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_D2FC6A5A);

s32 sceHtmlViewerHelper_AB79D86C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    sceKernelWaitEventFlag(D_00006F24, 1U, 0x20, NULL, NULL);
    if (arg0 == 0) {
        M2C_VFIELD(&D_00006CC0, s32, 0x25C) = arg2;
        M2C_VFIELD(&D_00006CC0, s32, 0x258) = arg1;
        sceKernelSetEventFlag(D_00006F24, 1U);
        var_v0 = 0;
    } else {
        sceKernelSetEventFlag(D_00006F24, 1U);
        var_v0 = 0x80000100;
    }
    return var_v0;
}

s32 sceHtmlViewerHelper_787D9486(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 == 0) {
        var_v0 = M2C_FIELD(D_00006CC0, s32 *, 4);
    }
    return var_v0;
}

void sceHtmlViewerHelper_8B77E777(s32 arg0) {
    func_00001FF4((arg0 & 0xFF) ^ 1);
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_4FA8ECCA);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004924);
#endif

#if FW_VERSION == 352
void func_0000499C(void) {
    func_0000014C_v352();
}
#endif

#if FW_VERSION == 351
void func_0000499C(void) {
    func_0000014C_v351();
}
#endif

#if FW_VERSION == 350
void func_0000499C(void) {
    func_0000014C_v350();
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_63715462);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_C92C71B7);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_232F5D22);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_E26BCED1);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_5F1A7733);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_F27998C2);

s32 sceHtmlViewerHelper_47F988E6(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    sceKernelWaitEventFlag(D_00006F24, 1U, 0x20, NULL, NULL);
    if (arg0 == 0) {
        M2C_VFIELD(&D_00006CC0, s32, 0x25C) = arg2;
        M2C_VFIELD(&D_00006CC0, s32, 0x258) = arg1;
        sceKernelSetEventFlag(D_00006F24, 1U);
        var_v0 = 0;
    } else {
        sceKernelSetEventFlag(D_00006F24, 1U);
        var_v0 = 0x80000100;
    }
    return var_v0;
}

s32 sceHtmlViewerHelper_55732F91(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 == 0) {
        var_v0 = M2C_FIELD(D_00006CC0, s32 *, 4);
    }
    return var_v0;
}

void sceHtmlViewerHelper_05E0C3D4(s32 arg0) {
    func_00001FF4((arg0 & 0xFF) ^ 1);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", sceHtmlViewerHelper_B1B946C4);
#endif

#if FW_VERSION >= 330
void func_00004804(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) & (arg0 == 1)) {
        M2C_VFIELD(&D_000089F0, s32, 0) = 0;
        M2C_VFIELD(&D_000089F0, s32, 0x24) = 0;
        M2C_VFIELD(&D_000089F0, s32, 4) = 0;
        M2C_VFIELD(&D_000089F0, s32, 8) = 0;
        M2C_VFIELD(&D_000089F0, s32, 0xC) = 0;
        M2C_VFIELD(&D_000089F0, s32, 0x10) = 0;
        M2C_VFIELD(&D_000089F0, s32, 0x14) = 0;
        M2C_VFIELD(&D_000089F0, s32, 0x18) = 0;
        M2C_VFIELD(&D_000089F0, s32, 0x1C) = 0;
        M2C_VFIELD(&D_000089F0, s32, 0x20) = 0;
    }
}

void func_00004854(void) {
    func_00004804(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003F00);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003F74);

s32 func_00003FC0(struct Unk_func_00003FC0_0 *arg0) {
    if (arg0 != NULL) {
        D_00006F28.unk0 = (s32) arg0->unk0;
        D_00006F28.unk4 = (s32) arg0->unk4;
        D_00006F28.unk8 = (s32) arg0->unk8;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003FEC);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004158);

s32 func_000041CC(M2C_UNK **arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        *arg1 = D_00007334;
        *arg0 = &D_000072B4;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004208);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004254);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004290);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000042F4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000049C0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004308);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004A50);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004350);

s8 *func_00004398(s8 *arg0) {
    s8 *temp_s0;
    s8 *var_a0;

    var_a0 = arg0;
    temp_s0 = var_a0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
        } while (*var_a0 != 0);
    }
    func_00004350(var_a0);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000043DC);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000445C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000044F8);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004520);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000454C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000460C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004DC8);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004FCC);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00005058);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000047E8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000075A8);
#endif

#if FW_VERSION == 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005D8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005DA8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005DBC);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005DC8);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000049E8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004034);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000404C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004058);

void func_00002BE4(void) {
    D_0000511C = sceKernelCreateEventFlag("SceUtilityHtmlViewerHelper", 0x200U, 0x101U, NULL);
    D_00005118 = 1;
}

void func_00002C24(void) {
    func_00002B3C(0);
    func_00002BC8();
    func_00002B98();
    if (D_0000511C != 0) {
        sceKernelDeleteEventFlag(D_0000511C);
        D_0000511C = 0;
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002C78);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002D30);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002E18);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002F4C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002F6C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002F80);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002FC8);

s8 *func_00003010(s8 *arg0, s32 arg1, s32 arg2) {
    s8 *temp_s0;
    s8 *var_a0;

    var_a0 = arg0;
    temp_s0 = var_a0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
        } while (*var_a0 != 0);
    }
    func_00002FC8((s32) var_a0, arg1, arg2);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003054);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000030D4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003170);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004520);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000032DC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000031C4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004670);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004790);
#endif
