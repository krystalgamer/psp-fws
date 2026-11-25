#include "common.h"
#include "htmlviewer_utility_decls.h"

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000024);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000000AC);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000010C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000014C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000180);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000001B8);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000270);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000002F0);
#else
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

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000032C);
#else
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004F80);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004F9C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004FA0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004FB0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00004FC8);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000003FC);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000A1C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000A84);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000720);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000B50);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000DC4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000E0C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005024);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005028);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000503C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00000E4C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000102C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000115C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000013B4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001448);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000014DC);

#if FW_VERSION == 282
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

#if FW_VERSION == 282
s32 func_00001A4C(u32 arg0) {
    return (arg0 < 2U) ? 0 : -1;
}

void func_00001A5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00003014(arg0, arg1, arg2, arg3, (sceUtility_private_4B677BA1() < 0x118) * 2);
}

void func_00001AC4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000030E8(arg0, arg1, arg2, (sceUtility_private_4B677BA1() < 0x118) * 2);
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001B1C);

s32 func_00001B90(void) {
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

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000135C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001408);

void func_000014CC(void) {
    D_000034C0 = 8;
    sceHVUI_Module_146CB797();
    if (D_000031FC > 0) {
        func_00001E98(D_000031FC);
    }
    D_000034C0 = 0;
}

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

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000017D8);

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
#else
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

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005264);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005270);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000527C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005284);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005294);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000529C);
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

#if FW_VERSION == 282
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

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002044);

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

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000023A0);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000023C8);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002458);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002634);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002748);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000028F0);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002A24);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002AF8);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002B80);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002C04);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002CB4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002D10);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002DB4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002E24);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002EF4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002FD0);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003014);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000055AC);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001EF4);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001F48);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00001FB8_v201);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00002088);

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

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000021AC);

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

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005628);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005634);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005640);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005650);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000565C);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000566C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000575C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000576C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005784);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005794);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000057A4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000057B4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000057C4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000057D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000057E0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000057F0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005804);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005814);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005824);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005834);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005844);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005854);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005864);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005874);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005884);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005894);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005924);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005930);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005940);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_0000594C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005958);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005964);

#if FW_VERSION == 282
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

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059F4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_000059F8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A00);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A04);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A08);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A0C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A10);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A18);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A1C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A20);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A24);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A28);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A2C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A30);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A34);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005A38);

#if FW_VERSION == 282
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

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B48);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B5C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B74);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005B8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BA4);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BBC);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BC4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BD0);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BD8);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BE4);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005BFC);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C1C);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C3C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005C58);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_000030E8);

void func_00003180(void) {
    func_00002FD0();
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000319C);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003300);

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

void func_00003980(void) {
    sceHtmlViewerHelper_C92C71B7(0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_0000399C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005D00);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005D20);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005D30);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003A00);

void func_00003AB4(void) {
    func_000038F4(0);
    func_00003980();
    func_00003950();
    if (D_00006F24 != 0) {
        sceKernelDeleteEventFlag(D_00006F24);
        D_00006F24 = 0;
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00003B08);

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

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004308);

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

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005D8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005DA8);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005DBC);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_utility", D_00005DC8);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004670);

INCLUDE_ASM("nonmatchings/htmlviewer_utility", func_00004790);
#endif
