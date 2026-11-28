/* lang: c++ */
#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 103 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018700);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00018700(s32 arg0) {
    func_00013884(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 100
void func_00018700(s32 arg0) {
    func_00013884(arg0 - 0x38);
}
#endif

#if FW_VERSION < 201
void func_000138A8(s32 **arg0) {
    *arg0 = &D_000636E0;
}
#else
void func_0001871C(M2C_UNK **arg0) {
    *arg0 = &D_000636E0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001872C);
#endif

#if FW_VERSION < 201
void func_0001872C(s32 **arg0) {
    *arg0 = &D_000636E0;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001518C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000151CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00015A40);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00015A80);
#endif

#if FW_VERSION == 100
s32 func_000138E0(s32 arg0, M2C_UNK **arg1) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0 == 0) && (M2C_VFIELD(&D_00049F40, s32, 0xC) >= 0)) {
        *arg1 = &D_00049F40;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_0001390C(void) {
    sce_paf_private_memset(&D_00049F40, 0, 0x1C);
    sce_paf_private_memset(&D_00049F80, 0, 0x4000);
    M2C_FIELD(&D_00049F40, M2C_UNK **, 0) = &D_00049F80;
    M2C_FIELD(&D_00049F40, s32 *, 4) = 0;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00013974);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018754);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018794);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000187E8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018954);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000189C8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00013AF0);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063200);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063508);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063588);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000636E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018A04);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018B7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018BB0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018CC4);

#if FW_VERSION < 201
void func_00013E70(void) {
    func_00018CC4();
}
#else
void func_00018D38(void) {
    func_00018CC4();
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018D54);

#if FW_VERSION < 201
void func_00013EE8(void) {
    func_00018D54();
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000157E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00016098);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00013F04);
#endif

#if FW_VERSION < 201
s32 func_00018ECC(void) {
    return 0;
}

s32 func_00013F90(void) {
    return 0;
}

s32 func_00013F98(void) {
    return 0;
}

s32 func_00013FA0(void) {
    return 0;
}

s32 func_00013FA8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00013FB0);
#else
void func_00018DB0(void) {
    func_00018D54();
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018DCC);

s32 func_00018ECC(void) {
    return 0;
}

s32 func_00018ED4(void) {
    return 0;
}

s32 func_00018EDC(void) {
    return 0;
}

s32 func_00018EE4(void) {
    return 0;
}

s32 func_00018EEC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018EF4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019014);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000190BC);

#if FW_VERSION < 201
void func_00019100(struct Unk_func_00019100_0 *arg0) {
    arg0->unk20 = func_000028A8(arg0->unk4);
    func_00013FB0((s32) arg0);
}

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00047504);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00047514);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00047548);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00047808);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063588);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000636E0);
#else
void func_00019100(struct Unk_func_00019100_0 *arg0) {
    arg0->unk20 = func_000028A8(arg0->unk4);
    func_00018EF4(arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0006377C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063788);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000637A8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000637B8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000637D4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000637E4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063800);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063810);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0006382C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0006383C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063858);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063868);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0006388C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0006389C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000638C0);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00047B88);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019134);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019258);

#if FW_VERSION < 201
void func_0001932C(s32 **arg0) {
    *arg0 = &D_00063900;
    D_0007E540 = 0;
    func_0000EC84((s32) arg0);
}
#else
void func_0001932C(s32 **arg0) {
    *arg0 = &D_00063900;
    D_0007E540 = 0;
    _ZN14Class_00062640D2Ev((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019358);
#endif

#if FW_VERSION < 201
void func_00019358(s32 **arg0) {
    *arg0 = &D_00063900;
    D_0007E540 = 0;
    func_0000EC84((s32) arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019398);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019444);

#if FW_VERSION < 201
void func_00014570(s32 **arg0) {
    *arg0 = &D_00062138;
    D_0007E584 = 0;
    func_0000EC84((s32) arg0);
}

void func_0001951C(s32 **arg0) {
    *arg0 = &D_00062138;
    D_0007E584 = 0;
    func_0000EC84((s32) arg0);
}
#else
void func_000194F0(M2C_UNK **arg0) {
    *arg0 = &D_00062138;
    D_0007E584 = 0;
    _ZN14Class_00062640D2Ev((s32) arg0);
}

void func_0001951C(s32 **arg0) {
    *arg0 = &D_00062138;
    D_0007E584 = 0;
    _ZN14Class_00062640D2Ev((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019548);
#endif

#if FW_VERSION < 201
void func_00019548(s32 **arg0) {
    *arg0 = &D_00062138;
    D_0007E584 = 0;
    func_0000EC84((s32) arg0);
    _ZdlPv(arg0);
}

s32 func_00014608(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = D_0007E584;
    if (var_v0 == 0) {
        temp_v0 = _Znwj(0x80);
        func_00019444(temp_v0, arg0, arg1);
        D_0007E584 = temp_v0;
        var_v0 = temp_v0;
    }
    return var_v0;
}
#else
s32 func_00019588(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = D_0007E584;
    if (var_v0 == 0) {
        temp_v0 = _Znwj(0x80);
        func_00019444(temp_v0, arg0, arg1);
        D_0007E584 = temp_v0;
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063900);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063930);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000195FC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063988);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000639A4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000639B8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000639CC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000639E0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000639F4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063A08);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063A20);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063A3C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063A5C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063A7C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063A9C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063AB8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063AD4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063AE8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063AEC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063AF0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063B08);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004B348);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00047DE0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063B28);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019E54);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019FCC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A078);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A0DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A3A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A454);

void func_0001A504(struct Unk_func_0001A504_0 *arg0) {
    if (arg0->unk20 != 0) {
        if ((arg0->unk34 != 0) || (arg0->unk38 != 0) || (arg0->unk3C != 0)) {
            func_0001A888(arg0, func_00004D58(arg0->unk20));
        }
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A564);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A60C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A698);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A72C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A888);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A8D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A998);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001AB14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001AC04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001ACD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001AE34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B0D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B1F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B278);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B35C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B3AC);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000163EC);

void func_0001644C(void) {
    func_000163EC(1, 0xFFFF);
}
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B3D8);

void func_0001B484(void) {
    func_0001B3D8(1, 0xFFFF);
}

void func_0001B4A4(void) {
    func_0001B3D8(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B4C4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B578);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063B68);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063B98);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B5C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B674);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B730);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B830);

s32 func_0001BA0C(struct Unk_func_0001BA0C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk2C;
    if (temp_v0 != 0) {
        _ZN3vsh13MessageDialog10HideDeleteEv(temp_v0);
        arg0->unk2C = 0;
    }
    arg0->unk20 = 0;
    return 1;
}

void func_0001BA50(void) {
    if (D_0007E590 != NULL) {
        D_0007E590->unk2C = 0;
    }
}

#if FW_VERSION < 201
void func_0001BA68(s32 **arg0) {
    *arg0 = &D_00063BC8;
    D_0007E590 = NULL;
    func_0000EC84((s32) arg0);
}
#else
void func_0001BA68(s32 **arg0) {
    *arg0 = &D_00063BC8;
    D_0007E590 = NULL;
    _ZN14Class_00062640D2Ev((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001BA94);
#endif

#if FW_VERSION < 201
void func_0001BA94(s32 **arg0) {
    *arg0 = &D_00063BC8;
    D_0007E590 = NULL;
    func_0000EC84((s32) arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001BAD4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001BB90);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063BC8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063BF8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001BBE8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001BC68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001BCA0);

#if FW_VERSION < 201
void func_00016E14(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {

    } else {
        func_0001BF00((s32) arg0);
    }
}
#else
void func_0001BED0(struct Unk_func_0001BED0_0 *arg0) {
    if (arg0->unk10 == 0) {

    } else {
        func_0001BF00((s32) arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001BF00);

s32 func_0001BFF8(void) {
    _ZN3vsh26ShowButtonNavigation_EnterEb(0);
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    return 1;
}

#if FW_VERSION < 201
void func_0001C020(s32 **arg0) {
    *arg0 = &D_00063C38;
    D_0007E594 = 0;
    func_0000EC84((s32) arg0);
}
#else
void func_0001C020(s32 **arg0) {
    *arg0 = &D_00063C38;
    D_0007E594 = 0;
    _ZN14Class_00062640D2Ev((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C04C);
#endif

#if FW_VERSION < 201
void func_0001C04C(s32 **arg0) {
    *arg0 = &D_00063C38;
    D_0007E594 = 0;
    func_0000EC84((s32) arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C08C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C1FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C2F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C3E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C4D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063C38);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063C68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C5D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C8A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001CBB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001CC60);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063CE8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063CF0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063CF8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063D00);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063D0C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063D18);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063D24);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063D30);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063D3C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063D48);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063D50);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063D58);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063D60);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063D68);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063D9C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063DB4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063DC8);

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004A9B0);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004B5E8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004B818);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00048080);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063DD4);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063E08);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063E28);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063E44);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063E60);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063E7C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063E80);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063E84);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063E88);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001CCA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001CD74);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001CDA0);

void func_0001CE70(s32 arg0) {
    func_0001D38C();
    func_0001D8E4(arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001CE9C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018054);
#else
void func_0001D144(struct Unk_func_0001D144_0 *arg0, s32 arg1) {
    if (func_0001D1BC() != 0) {
        arg0->unkF0 = arg1;
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001D17C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001D1BC);

#if FW_VERSION < 201
void func_00018294(void) {

}
#else
void func_0001D384(void) {
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001D38C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000182E4);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001D3D4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001D61C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001D894);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001D8E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001D9C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001DA40);

#if FW_VERSION < 201
void func_000189E4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        func_0000B178(temp_v0);
    }
}

void func_00018A14(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018A1C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018AAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B058);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018D88);
#endif

#if FW_VERSION == 201
void func_0001DBD4(struct Unk_func_0001DBD4_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk8;
    if (temp_v0 == 0) {

    } else {
        func_0000D504(temp_v0);
    }
}

void func_0001DC04(struct Unk_func_0001DC04_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001DC0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001DCA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001E0E8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001E1E4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00018EF0);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001E28C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001E474);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019250);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000192F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019370);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B700);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B764);
#endif

#if FW_VERSION < 201
void func_00019404(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019414);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019454);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000194A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000195C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001965C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019744);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019844);

s32 func_00019914(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_0004E4D8;
    }
    return ~D_0004E4D8 != 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019934);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019970);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000199A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019AAC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019B70);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019C30);

void func_00019D40(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000481D0;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void func_00019D5C(s32 **arg0) {
    *arg0 = &D_000481D0;
    D_0004E4DC = 0;
}

void func_00019D74(s32 **arg0) {
    *arg0 = &D_000481D0;
    D_0004E4DC = 0;
}

void func_00019D8C(s32 **arg0) {
    *arg0 = &D_000481D0;
    D_0004E4DC = 0;
    _ZdlPv(arg0);
}

void *func_00019DB8(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = D_0004E4DC;
    if (var_v0 == 0) {
        temp_v0 = _Znwj(0x10);
        func_00019D40(temp_v0, arg0, arg1);
        D_0004E4DC = (s32) temp_v0;
        var_v0 = (s32) temp_v0;
    }
    return (void *) var_v0;
}

s32 func_00019E2C(void) {
    return D_0004E4DC;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00019E38);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001E688);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001E73C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001E7B4);

void func_0001E844(void *arg0, s32 arg1) {
    s32 temp_v0;
    struct Unk_func_0001E844_temp_a1 *temp_a1;

    if ((arg1 >= 0) && (arg1 < M2C_FIELD(arg0, s32 *, 0x10))) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0xC) + (arg1 * 0x10);
        temp_v0 = M2C_FIELD(((temp_a1->unk8 * 4) + arg0), s32 *, 0x1C);
        if (temp_v0 == 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = arg1;
        } else {
            func_0005AAA4(temp_v0, temp_a1->unkC);
            M2C_FIELD(arg0, s32 *, 0x24) = arg1;
        }
    }
}

s32 func_0001E8B8(struct Unk_func_0001E8B8_0 *arg0) {
    return arg0->unk24;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001E8C0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063EB0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063EE0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063EF0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063EF4);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001E984);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001EA04);

void func_0001EA58(struct Unk_func_0001EA58_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001EA68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001EAA8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001EAFC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001EC04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001EC98);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001ED74);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001EE98);

s32 func_0001EF68(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_0007EAA8;
    }
    return ~D_0007EAA8 != 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001EF88);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001EFB8);

s32 func_0001EFE8(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = 1;
        *arg0 = D_0007EABC;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F008);

s32 func_0001F080(void **arg0) {
    void *sp0;
    s32 var_v1;

    var_v1 = -1;
    if (func_00039C34(arg0, (s32*) &sp0) == 0) {
        var_v1 = sp0 != 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F0B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F3E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F520);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F5E0);

void func_0001F878(struct Unk_func_0001F878_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkC = arg2;
    arg0->unk0 = &D_00063F60;
    arg0->unk8 = arg1;
    arg0->unk4 = 0;
}

Class_00063F60::~Class_00063F60() {
    D_0007EAC0 = 0;
}

void *func_0001F8F0(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = D_0007EAC0;
    if (var_v0 == 0) {
        temp_v0 = _Znwj(0x10);
        func_0001F878(temp_v0, arg0, arg1);
        D_0007EAC0 = (s32) temp_v0;
        var_v0 = (s32) temp_v0;
    }
    return (void *) var_v0;
}

s32 func_0001F964(void) {
    return D_0007EAC0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F970);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063F30);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063F38);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063F3C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063F40);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063F44);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063F48);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063F4C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F9F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FB04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FC14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FC74);

#if FW_VERSION < 201
void func_0001A17C(void) {

}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A184);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001A184(void) {

}
#endif

#if FW_VERSION < 201
void func_0001A1C4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {

    } else {
        func_00003684(temp_v0);
    }
}
#else
void func_0001FCB4(void) {
}

void func_0001FCBC(void) {
}

void func_0001FCC4(struct Unk_func_0001FCC4_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0 == 0) {

    } else {
        func_00004370(temp_v0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FCF4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FD64);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FDA8);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C6B0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A300);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000481D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001A384);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FE00);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FEFC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000200C0);

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001BFF8_v103);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001CAB4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020200);
#endif

void func_00020220(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_000202B8();
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020240);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000202B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000202D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002031C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020360);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000203F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000204D0);

#if FW_VERSION < 201
void func_0001AA28(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#else
void func_000205C0(struct Unk_func_000205C0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000205D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002064C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020740);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020808);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020844);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020888);

#if FW_VERSION < 201
s32 func_0001AD1C(void) {
    return D_00065D48;
}
#else
s32 func_000208B4(void) {
    return D_00065D48;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000208C0);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001AD68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001AEA4);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001CA68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001D544);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001AFE0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B274);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B508);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00048218);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063FA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B7A4);

void func_0001B834(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001B858);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001D570);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001DAF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001E094);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001E618);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C260);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C340);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001DE4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001C340(s32 arg0, s32 *arg1, s32 arg2) {
    if (arg2 != 0) {

    } else {
        func_0000E7B0(arg0 + 0x59C, *arg1);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001E970);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C384);

void func_0001C3F4(void) {
    _ZN3paf13PhApplication14FinishDispListEv();
    _ZN3paf13PhApplication13StartDispListEv();
}

void func_0001C418(s32 **arg0) {
    *arg0 = &D_000641B0;
}

void func_0001C428(s32 **arg0) {
    *arg0 = &D_000641B0;
    _ZdlPv(arg0);
}

void func_0001C450(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00064118;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00062A70;
}

void func_0001C46C(s32 **arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_00064118;
    M2C_FIELD(arg0, s32 **, 8) = &D_00062A70;
    _ZdlPv(arg0);
}

void func_0001C4A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020900);

void func_0002098C(struct Unk_func_0002098C_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020994);

#if FW_VERSION < 201
void func_0001C4C8(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEii(arg0 + 8);
}

void func_0001C4E4(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEif(arg0 + 8);
}

void func_0001C500(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEiRK4vec4(arg0 + 8);
}
#else
void func_000209B4(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEii(arg0 + 8);
}

void func_000209D0(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEif(arg0 + 8);
}

void func_000209EC(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEiRK4vec4(arg0 + 8);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020A08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020A4C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020A8C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020AC8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020B08);

#if FW_VERSION < 201
void func_0001C640(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10)();
}

void func_0001C664(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}

void func_0001C688(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}
#else
void func_00020B2C(struct Unk_vt_func_00020B2C_arg0 **arg0) {
    (*arg0)->unk10();
}

void func_00020B50(struct Unk_vt_func_00020B50_arg0 **arg0) {
    (*arg0)->unk14();
}

void func_00020B74(struct Unk_vt_func_00020B74_arg0 **arg0) {
    (*arg0)->unk18();
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020B98);

#if FW_VERSION < 201
void func_0001C6D0(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
}

void func_0001C6F4(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x24)();
}

void func_0001C718(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x28)();
}

void func_0001C73C(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRb(arg0 + 8);
}

void func_0001C758(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRi(arg0 + 8);
}

void func_0001C774(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRf(arg0 + 8);
}

void func_0001C790(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiR4vec4(arg0 + 8);
}
#else
void func_00020BBC(struct Unk_vt_func_00020BBC_arg0 **arg0) {
    (*arg0)->unk20();
}

void func_00020BE0(struct Unk_vt_func_00020BE0_arg0 **arg0) {
    (*arg0)->unk24();
}

void func_00020C04(struct Unk_vt_func_00020C04_arg0 **arg0) {
    (*arg0)->unk28();
}

void func_00020C28(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRb(arg0 + 8);
}

void func_00020C44(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRi(arg0 + 8);
}

void func_00020C60(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRf(arg0 + 8);
}

void func_00020C7C(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiR4vec4(arg0 + 8);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020C98);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020CD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020D18);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020D58);

#if FW_VERSION < 201
void func_0001C8AC(void) {

}

s32 func_0001C8B4(void) {
    return -1;
}

s32 func_0001C8BC(void) {
    return -1;
}

s32 func_0001C8C4(void) {
    return -1;
}

s32 func_0001C8CC(void) {
    return -1;
}

s32 func_0001C8D4(void) {
    return 0;
}

s32 func_0001C8DC(void) {
    return 0;
}

s32 func_0001C8E4(void) {
    return 1;
}

void func_0001C8EC(void) {

}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001C8F4);
#else
s32 func_00020D98(void) {
    return -1;
}

s32 func_00020DA0(void) {
    return -1;
}

s32 func_00020DA8(void) {
    return -1;
}

s32 func_00020DB0(void) {
    return 0;
}

s32 func_00020DB8(void) {
    return 0;
}

s32 func_00020DC0(void) {
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020DC8);

#if FW_VERSION == 201
void func_00020F2C(M2C_UNK **arg0) {
    *arg0 = &D_000641B0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020F3C);

void func_00020F64(struct Unk_func_00020F64_0 *arg0) {
    arg0->unk0 = &D_00064118;
    arg0->unk8 = &D_00062A70;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020F80);

void func_00020FB4(void) {
}

s32 func_00020FBC(void) {
    return -1;
}

void func_00020FC4(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020FCC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002114C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000212CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021578);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021824);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021AD8);

void func_00021B48(struct Unk_func_00021B48_0 *arg0, struct Unk_func_00021B48_1 *arg1) {
    arg0->unk30 = (s32) arg1->unk0;
    arg0->unk34 = (s32) arg1->unk4;
    arg0->unk38 = (s32) arg1->unk8;
    arg0->unk3C = (s32) arg1->unkC;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021B6C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063F60);

__asm__(".globl _ZTV14Class_00063F60\n_ZTV14Class_00063F60 = D_00063F60 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063F88);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00048360);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064118);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000641B0);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00063FA0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064080);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064118);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000641B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021C8C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002236C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000641D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000641DC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000641E0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000641F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022420);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002249C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022624);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022668);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000226D0);

void func_00022740(void) {
    _ZN3paf13PhApplication14FinishDispListEv();
    _ZN3paf13PhApplication13StartDispListEv();
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022764);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000228B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000229FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022CA8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022F54);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023208);

void func_00023268(struct Unk_func_00023268_0 *arg0, struct Unk_func_00023268_1 *arg1) {
    arg0->unk30 = (s32) arg1->unk0;
    arg0->unk34 = (s32) arg1->unk4;
    arg0->unk38 = (s32) arg1->unk8;
    arg0->unk3C = (s32) arg1->unkC;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002328C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064218);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002336C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023B38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023D90);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642BC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642C0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642C4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642C8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642CC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642D0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642D4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642DC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642E0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642E4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642E8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642EC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642F0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642F4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642F8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000642FC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064300);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023DD4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023E3C);

void func_00023EAC(void) {
    _ZN3paf13PhApplication14FinishDispListEv();
    _ZN3paf13PhApplication13StartDispListEv();
}

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064310);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023ED0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023FAC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024054);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000240E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002417C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000241E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000242B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002439C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000244A4);

#if FW_VERSION < 201
void func_0001D0D4(void) {

}
#else
void func_000244E0(void) {
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000244E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024548);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000245A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000245E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024628);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024670);

#if FW_VERSION < 201
void func_000246F0(void) {

}
#else
void func_000246F0(void) {
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000246F8);

#if FW_VERSION < 201
void func_00024758(void) {

}

void func_0001D340(s32 arg0, s32 arg1, s32 arg2) {
    func_00024940(arg1, arg0, arg2 & 0xFFFF);
}

void func_0001D368(s32 arg0, s32 arg1) {
    func_0002499C(arg1, arg0);
}
#else
void func_00024758(void) {
}

void func_00024760(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_00024940(arg1, arg0, arg2 & 0xFFFF);
}

void func_00024788(s32 arg0, M2C_UNK arg1) {
    func_0002499C(arg1, arg0);
}
#endif

Class_00064420::~Class_00064420() {
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000247F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000248A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024940);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002499C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024A58);

#if FW_VERSION < 201
void func_00024A84(void) {

}
#else
void func_00024A84(void) {
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000643C8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000643D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000643E0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064400);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064420);

__asm__(".globl _ZTV14Class_00064420\n_ZTV14Class_00064420 = D_00064420 - 8\n");

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024A8C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024B68);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001D800(void *arg0) {
    func_000263E8(M2C_FIELD(arg0, s32 *, 8));
    return 1;
}
#endif

#if FW_VERSION < 150
s32 func_0001D800(void *arg0) {
    func_000263E8(M2C_FIELD(arg0, s32 *, 4));
    return 1;
}
#endif

#if FW_VERSION < 201
s32 func_0001D820(void) {
    return 0;
}
#else
s32 func_00024C20(struct Unk_func_00024C20_0 *arg0) {
    func_000263E8(arg0->unk8);
    return 1;
}

s32 func_00024C40(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024C48);

#if FW_VERSION == 201
void func_00024C68(struct Unk_func_00024C68_0 *arg0) {
    arg0->unk0 = &D_000644C0;
    func_00025134((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00024CA0(struct Unk_func_00024CA0_0 *arg0) {
    arg0->unk0 = &D_000644C0;
    func_00025134((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00024CD8(struct Unk_func_00024CD8_0 *arg0) {
    arg0->unk0 = &D_000644C0;
    func_00025184((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00024D10(struct Unk_func_00024D10_0 *arg0) {
    arg0->unk0 = &D_000644C0;
    func_00025184((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00024D48(struct Unk_func_00024D48_0 *arg0) {
    arg0->unk0 = &D_000644C0;
    if (arg0->unk8 != 0) {
        func_00024B68((s32) arg0);
    }
    func_000251D4((s32) ((u8 *)arg0 + 0xC));
}

void func_00024D94(struct Unk_func_00024D94_0 *arg0) {
    arg0->unk0 = &D_000644C0;
    if (arg0->unk8 != 0) {
        func_00024B68((s32) arg0);
    }
    func_000251D4((s32) ((u8 *)arg0 + 0xC));
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024DE0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024E58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024E58(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025134((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 150
void func_00024E58(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025134((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024E98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024E98(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025134((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 150
void func_00024E98(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025134((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024ED8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024ED8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025184((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 150
void func_00024ED8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025184((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024F18);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024F18(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025184((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 150
void func_00024F18(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025184((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024D48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024D94);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024DE0);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F59C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F5DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F61C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F65C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F69C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F6C4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F6EC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F728);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F768);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F788);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F7AC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020088);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000200C0_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020100);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020140);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020180);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000201C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000201E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020210);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002024C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000202E0);

s32 func_00020300(void *arg0, s32 arg1) {
    return func_00025324(M2C_FIELD(arg0, s32 *, 4), ~arg1) == 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020324);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024F58);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024F80);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024FA8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024FE4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002506C);

s32 func_0002508C(struct Unk_func_0002508C_0 *arg0, M2C_UNK arg1) {
    return func_00025324(arg0->unk4, ~arg1) == 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000250B0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000250D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000250F0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002510C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025134);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002515C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025184);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000251AC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000251D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000251FC);

#if FW_VERSION < 201
void func_0001DB9C(void) {

}
#else
void func_00025238(void) {
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000644C0);

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004AFA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004BE10);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000644D8);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000644E8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001DBA4);
#endif

#if FW_VERSION < 152
s32 func_0001DBF4(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200, 0, 0);
    var_v1 = 0;
    *arg0 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 152
s32 func_0001DBF4(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200, 0, 0);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_000252D4(void) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelDeleteEventFlag() != 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 152
s32 func_000252D4(void) {
    return (sceKernelDeleteEventFlag() == 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_000252FC(void) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelSetEventFlag() != 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 152
s32 func_000252FC(void) {
    return (sceKernelSetEventFlag() == 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025324);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002534C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000205C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020640);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001DD20);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001DDA4);
#endif

#if FW_VERSION == 201
s32 func_00025240(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag((s32) "OsWrapFlg", 0x200, 0, 0);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}

s32 func_0002528C(s32 *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200, 0, 0);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}

s32 func_000252D4(void) {
    return (sceKernelDeleteEventFlag() == 0) ? 0 : -5;
}

s32 func_000252FC(void) {
    return (sceKernelSetEventFlag() == 0) ? 0 : -5;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025324);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002534C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025398);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025410);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025458);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000254FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002558C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002564C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025708);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000257A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025940);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025A64);

#if FW_VERSION < 201
void func_0001E48C(void) {
    func_00025A64(1, 0xFFFF);
}

void func_0001E4AC(void) {
    func_00025A64(0, 0xFFFF);
}
#else
void func_00025AE0(void) {
    func_00025A64(1, 0xFFFF);
}

void func_00025B00(void) {
    func_00025A64(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025B20);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025B70);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000645F8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064630);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025BF4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025CC4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025D0C);
#else
void func_00025D0C(struct Unk_func_00025D0C_0 *arg0) {
    arg0->unk0 = &D_00064670;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

void func_00025D24(s32 **arg0) {
    *arg0 = &D_00064670;
}

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025D34);
#else
void func_00025D34(s32 **arg0) {
    *arg0 = &D_00064670;
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025D5C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064670);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025DEC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025E50);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000646AC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025F58);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0006471C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025FF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000260B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00026140);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000261A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000262EC);

s32 func_00026384(s32 arg0) {
    sceKernelDelayThread(arg0 * 0xA);
    return 0;
}

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000263B0);
#endif

#if FW_VERSION == 150
s32 *func_000263B0(s32 arg0) {
    void *sp0;
    s32 *var_s0;
    s32 temp_v0;

    var_s0 = &D_0004965C;
    temp_v0 = func_00025D5C(arg0, &sp0);
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 4;
    }
    return var_s0;
}
#endif

#if FW_VERSION < 150
M2C_UNK *func_000263B0(s32 arg0) {
    void *sp0;
    M2C_UNK *var_s0;
    s32 temp_v0;

    var_s0 = &D_0004965C;
    temp_v0 = func_00025D5C(arg0, &sp0);
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 4;
    }
    return var_s0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000263E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000264EC);

#if FW_VERSION < 201
void func_0001EF04(void) {
    func_000264EC(1, 0xFFFF);
}

void func_0001EF24(void) {
    func_000264EC(0, 0xFFFF);
}
#else
void func_00026568(void) {
    func_000264EC(1, 0xFFFF);
}

void func_00026588(void) {
    func_000264EC(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000265A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000265F8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000648AC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000648E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002667C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002674C);

#if FW_VERSION == 150
void func_0001F130(void *arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_00064930;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0001F130(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00064930;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 201
void func_00026794(struct Unk_func_00026794_0 *arg0) {
    arg0->unk0 = &D_00064930;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

void func_000267AC(s32 **arg0) {
    *arg0 = &D_00064930;
}

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000267BC);
#else
void func_000267BC(s32 **arg0) {
    *arg0 = &D_00064930;
    _ZdlPv(arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064930);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000267E4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001F328);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000269E4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00026B7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00026C4C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00026D1C);

#if FW_VERSION < 201
void func_0001F644(s32 arg0) {
    D_0004E4F8 = arg0;
}

void func_0001F650(void) {

}
#else
void func_00026DF4(s32 arg0) {
    D_000CD718 = arg0;
}

void func_00026E00(void) {
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00026E08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002701C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027090);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002715C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FA70);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FB50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001FC0C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s4;
    void **temp_a0;
    void **temp_v0;

    temp_s4 = arg0 + 0x5C;
    func_000250D4(temp_s4);
    temp_s0 = func_00020B70(arg0, arg1, arg2, arg3);
    if (arg1 == 2) {
        if (temp_s0 == 0) {
            temp_v0 = M2C_FIELD(arg0, void ***, 0x4C);
            M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x14)(temp_v0, 0, M2C_FIELD(arg0, s32 *, 0xF0));
            temp_a0 = M2C_FIELD(arg0, void ***, 0x4C);
            M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x14)(temp_a0, 1, M2C_FIELD(arg0, s32 *, 0x100));
        }
    }
    func_000250F0(temp_s4);
    return temp_s0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FC0C);
#endif

#if FW_VERSION == 100
s32 func_0001FC0C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s4;
    void **temp_a0;
    void **temp_v0;

    temp_s4 = arg0 + 0x58;
    func_000250D4(temp_s4);
    temp_s0 = func_00020B70(arg0, arg1, arg2, arg3);
    if (arg1 == 2) {
        if (temp_s0 == 0) {
            temp_v0 = M2C_FIELD(arg0, void ***, 0x48);
            M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x14)(temp_v0, 0, M2C_FIELD(arg0, s32 *, 0xEC));
            temp_a0 = M2C_FIELD(arg0, void ***, 0x48);
            M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x14)(temp_a0, 1, M2C_FIELD(arg0, s32 *, 0xFC));
        }
    }
    func_000250F0(temp_s4);
    return temp_s0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021A9C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022614);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FCD4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FD6C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FE14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FEC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001FFBC(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x8C);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    return M2C_FIELD(arg0, s32 *, 0x98);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FFBC);
#endif

#if FW_VERSION == 100
s32 func_0001FFBC(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x88);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    return M2C_FIELD(arg0, s32 *, 0x94);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001FFD8(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x8C);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0x9C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FFD8);
#endif

#if FW_VERSION == 100
s32 func_0001FFD8(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x88);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0x98);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0001FFF4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020064);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002011C(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0xE0);
    }
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002011C);
#endif

#if FW_VERSION == 100
s32 func_0002011C(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0xDC);
    }
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020134);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021FA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022B20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020180);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020A6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020AC8_v100);

s32 func_00020AF4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020B00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020B2C);
#endif

#if FW_VERSION < 201
s32 func_00020B58(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000229C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000229EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023538);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023564);
#endif

#if FW_VERSION < 201
s32 func_00020B64(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022A24);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002359C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020B70);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020D44);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022D50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023004);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002314C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000238C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023B7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023CC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00020E74);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021024);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021184);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000212D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000213E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021514(s32 arg0) {
    func_00026C4C(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021514);
#endif

#if FW_VERSION == 100
void func_00021514(s32 arg0) {
    func_00026C4C(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021530(s32 arg0) {
    func_00026D1C(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021530);
#endif

#if FW_VERSION == 100
void func_00021530(s32 arg0) {
    func_00026D1C(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002154C(s32 arg0) {
    func_0002701C(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002154C);
#endif

#if FW_VERSION == 100
void func_0002154C(s32 arg0) {
    func_0002701C(arg0 - 0x38);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00029D34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00029D78);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000215E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000216C0);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023858);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000238F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023990);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000243D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002446C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024460);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024508_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021798);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021820);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000218A8);
#endif

#if FW_VERSION < 201
void func_00021938(s32 arg0) {
    D_0004E510 = arg0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023A40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000245B8(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x84);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x24);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION == 100
void func_00021944(void) {

}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000271F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000273D4);

s32 func_000274B4(struct Unk_func_000274B4_0 *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;
    s32 temp_s4;
    struct Unk_vt_func_000274B4_temp_a0 **temp_a0;
    struct Unk_vt_func_000274B4_temp_v0 **temp_v0;

    temp_s4 = (u8 *)arg0 + 0x5C;
    func_000250D4(temp_s4);
    temp_s0 = func_00028EC0(arg0, arg1, arg2, arg3);
    if (arg1 == 2) {
        if (temp_s0 == 0) {
            temp_v0 = arg0->unk4C;
            (*temp_v0)->unk24(temp_v0, 0, arg0->unk10C);
            temp_a0 = arg0->unk4C;
            (*temp_a0)->unk24(temp_a0, 1, arg0->unk11C);
        }
    }
    func_000250F0(temp_s4);
    return temp_s0;
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064968);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064978);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064988);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064994);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000649A4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000649AC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000649B4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000649BC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000649C4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000649CC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000649D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_000649E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002757C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002769C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000277F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027918);

s32 func_00027B2C(struct Unk_func_00027B2C_0 *arg0) {
    struct Unk_func_00027B2C_temp_v0 *temp_v0;

    temp_v0 = arg0->unkA4;
    if (temp_v0 != NULL) {
        return temp_v0->unk4;
    }
    return arg0->unkB0;
}

s32 func_00027B48(struct Unk_func_00027B48_0 *arg0) {
    struct Unk_func_00027B48_temp_v0 *temp_v0;

    temp_v0 = arg0->unkA4;
    if (temp_v0 != NULL) {
        return temp_v0->unk8;
    }
    return arg0->unkB4;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027B64);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027C00);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027CC8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027D40);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002834C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000283A8);

s32 func_000283D4(struct Unk_func_000283D4_0 *arg0, s32 arg1) {
    arg0->unk50 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000283E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002840C);

s32 func_00028438(struct Unk_func_00028438_0 *arg0, s32 arg1) {
    arg0->unk54 = arg1;
    return 0;
}

s32 func_00028444(struct Unk_func_00028444_0 *arg0, s32 arg1) {
    arg0->unk58 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00028450);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00028614);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000286E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002875C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00028798);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00028A00);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00028C54);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00028EC0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00029094);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000291C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000296A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00029830);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000299E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00029AF4);

void func_00029CE0(s32 arg0) {
    func_00026C4C(arg0 - 0x3C);
}

void func_00029CFC(s32 arg0) {
    func_00026D1C(arg0 - 0x3C);
}

void func_00029D18(s32 arg0) {
    func_0002701C(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00029D34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00029D78);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00029DB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00029EBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00029FC4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002A060);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002A0FC);

void func_0002A1A0(s32 arg0) {
    D_000CD734 = arg0;
}

void func_0002A1AC(struct Unk_func_0002A1AC_0 *arg0) {
    struct Unk_func_0002A1AC_var_v0 *var_v0;

    var_v0 = arg0->unk94;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk30;
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002A1CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002A520);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002A54C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002A61C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002A6D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002A864);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002A87C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002A964);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002AA08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002AA18);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002AA50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002AAB8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002AAF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002AC0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002AC58);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002ACA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002ACF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002AD54);

void func_0002ADF4(s32 arg0) {
    func_0002A060(arg0 - 0x3C);
}

void func_0002AE10(s32 arg0) {
    func_0002A0FC(arg0 - 0x3C);
}

void func_0002AE2C(s32 arg0) {
    func_0002A520(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002AE48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002AF08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002AFC8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002B044);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002B0C0);

void func_0002B144(s32 arg0) {
    D_000CD738 = arg0;
}

void func_0002B150(struct Unk_func_0002B150_0 *arg0) {
    struct Unk_func_0002B150_var_a0 *var_a0;
    struct Unk_func_0002B150_var_v0 *var_v0;

    var_v0 = arg0->unk68;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk38;
        } while (var_v0 != NULL);
    }
    var_a0 = arg0->unk70;
    if (var_a0 != NULL) {
        do {
            var_a0 = var_a0->unk24;
        } while (var_a0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002B188);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002B37C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002B3EC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002B478);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002B58C);

s32 func_0002B5D4(struct Unk_func_0002B5D4_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x4C;
    func_000250D4(temp_s1);
    arg0->unk5C = 0;
    func_000250F0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002B618);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002B668);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002B8FC);

s32 func_0002B980(struct Unk_func_0002B980_0 *arg0, struct Unk_func_0002B980_1 *arg1) {
    s32 temp_s2;
    void **temp_v1;

    temp_s2 = (u8 *)arg0 + 0x54;
    func_000250D4(temp_s2);
    temp_v1 = arg0->unk74;
    arg0->unk74 = (void **) (&arg1->unk24);
    *temp_v1 = arg1;
    arg1->unk24 = 0;
    func_000250F0(temp_s2);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002B9E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002BA70);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002BAF0);

void func_0002BB18(struct Unk_func_0002BB18_0 *arg0, s32 arg1) {
    void *temp_s0;

    arg0->unk48 = arg1;
    temp_s0 = (u8 *)arg0 + 0x3C;
    func_00024760((s32) temp_s0, arg1 + 0xD8, 2);
    func_00024760((s32) temp_s0, arg1 + 0xEC, 3);
}

void func_0002BB70(s32 arg0) {
    func_0002B044(arg0 - 0x3C);
}

void func_0002BB8C(s32 arg0) {
    func_0002B0C0(arg0 - 0x3C);
}

void func_0002BBA8(s32 arg0) {
    func_0002B37C(arg0 - 0x3C);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064AA0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064AD8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064AE0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064AF0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064B00);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064B10);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002194C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021ADC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021B08);
#endif

#if FW_VERSION == 150
s32 func_00021B64(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021B64);
#endif

#if FW_VERSION == 100
s32 func_00021B64(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x44;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x5D) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_00021B64(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
    func_000250F0(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021BA8);
#endif

#if FW_VERSION == 150
s32 func_00021BF0(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021BF0);
#endif

#if FW_VERSION == 100
s32 func_00021BF0(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x44;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_00021BF0(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    func_000250F0(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021C34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00021D98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021D98);
#endif

#if FW_VERSION == 100
s32 func_00021D98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021DA8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021DC0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021E2C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021E98);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021ED0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021F38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00021F70);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002214C);

void func_00022174(s32 arg0) {
    func_00022190(arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022190);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022218);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002228C(s32 arg0) {
    func_0002446C(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002228C);
#endif

#if FW_VERSION == 100
void func_0002228C(s32 arg0) {
    func_00021820(arg0 - 0x38);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000222A8);
#endif

#if FW_VERSION == 100
void func_000222A8(s32 arg0) {
    func_000218A8(arg0 - 0x38);
}
#endif

#if FW_VERSION == 152
void func_000222A8(s32 arg0) {
    func_00024460(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150
void func_000222A8(s32 arg0) {
    func_00024508_v150(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000222C4(s32 arg0, s32 arg1, s32 arg2) {
    func_00021ADC(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000222C4);
#endif

#if FW_VERSION == 100
void func_000222C4(s32 arg0, s32 arg1, s32 arg2) {
    func_00021ADC(arg0 - 0x38, arg1, arg2);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000222E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022388);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022430);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000224A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022518);

void func_00022594(s32 arg0) {
    D_0004E518 = arg0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024708);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00025280(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x68);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0xC0);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION == 100
void func_000225A0(void) {

}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064B1C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064B30);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064B60);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064B70);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064B80);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064B90);

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024728);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000252A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000225A8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022760);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000227AC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002281C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022854);
#endif

#if FW_VERSION == 150
s32 func_0002289C(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x4C;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x54) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002289C);
#endif

#if FW_VERSION == 100
s32 func_0002289C(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_0002289C(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x4C;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x54) = 0;
    func_000250F0(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000228E0);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024A90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025608);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022930);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022AE8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022B24);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022B60);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022BBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022BE4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022C0C(s32 arg0) {
    func_000224A4(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022C0C);
#endif

#if FW_VERSION == 100
void func_00022C0C(s32 arg0) {
    func_000224A4(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022C28(s32 arg0) {
    func_00022518(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022C28);
#endif

#if FW_VERSION == 100
void func_00022C28(s32 arg0) {
    func_00022518(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022C44(s32 arg0, s32 arg1, s32 arg2) {
    func_00022760(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022C44);
#endif

#if FW_VERSION == 100
void func_00022C44(s32 arg0, s32 arg1, s32 arg2) {
    func_00022760(arg0 - 0x38, arg1, arg2);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022C60);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022D80);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022EA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00022F60);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023020);

void func_000230F4(void) {

}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000230FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023318);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023340);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023408);
#endif

#if FW_VERSION == 150
s32 func_0002346C(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002346C);
#endif

#if FW_VERSION == 100
s32 func_0002346C(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x44;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x4C) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_0002346C(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000234B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000234EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00023528(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x150) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023528);
#endif

#if FW_VERSION == 100
s32 func_00023528(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x13C) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00023534(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0001D340((s32) (arg0 + 0x3C), arg1 + 0x2C, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023534);
#endif

#if FW_VERSION == 100
s32 func_00023534(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_0001D340((s32) (arg0 + 0x38), arg1 + 0x2C, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023560);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002386C(s32 arg0) {
    func_00022F60(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002386C);
#endif

#if FW_VERSION == 100
void func_0002386C(s32 arg0) {
    func_00022F60(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023888(s32 arg0) {
    func_00023020(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023888);
#endif

#if FW_VERSION == 100
void func_00023888(s32 arg0) {
    func_00023020(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000238A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00023318(arg0 - 0x3C, arg1, arg2, arg3);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000238A4);
#endif

#if FW_VERSION == 100
void func_000238A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00023318(arg0 - 0x38, arg1, arg2, arg3);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000238C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000239FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023B38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023BBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023C40);

void func_00023CCC(s32 arg0) {
    D_0004E520 = arg0;
}

void func_00023CD8(void) {

}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00023CE0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002415C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024184);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000241CC);
#endif

#if FW_VERSION == 150
s32 func_00024268(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024268);
#endif

#if FW_VERSION == 100
s32 func_00024268(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x44;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x4C) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_00024268(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000242AC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000242E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00024324(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0001D340((s32) (arg0 + 0x3C), arg1 + 0x18, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024324);
#endif

#if FW_VERSION == 100
s32 func_00024324(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_0001D340((s32) (arg0 + 0x38), arg1 + 0x18, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024350);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024508);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024810);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00026AB0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027628);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002487C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000249F4(s32 arg0) {
    func_00023BBC(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000249F4);
#endif

#if FW_VERSION == 100
void func_000249F4(s32 arg0) {
    func_00023BBC(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024A10(s32 arg0) {
    func_00023C40(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024A10);
#endif

#if FW_VERSION == 100
void func_00024A10(s32 arg0) {
    func_00023C40(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024A2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0002415C(arg0 - 0x3C, arg1, arg2, arg3);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024A2C);
#endif

#if FW_VERSION == 100
void func_00024A2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0002415C(arg0 - 0x38, arg1, arg2, arg3);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024A48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024B90);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024CD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024D88);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024E38);

void func_00024EF0(s32 arg0) {
    D_0004E524 = arg0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027148);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027168);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027328);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027344);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002738C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000273E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002742C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027468);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000274A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000274D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000277A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000277BC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000277D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00027CC0(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x54);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x14);
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027CE0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027EA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027EBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027F04);
#endif

#if FW_VERSION == 150
s32 func_00027F60(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_00027F60(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0(temp_s1);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027FA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027FE0);

s32 func_0002801C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0001D340((s32) (arg0 + 0x3C), arg1 + 0x40, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00028048);

void func_00028318(s32 arg0) {
    func_00024D88(arg0 - 0x3C);
}

void func_00028334(s32 arg0) {
    func_00024E38(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00028350);
#endif

#if FW_VERSION == 100
void func_00024EFC(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00048C70);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00048CA0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00048CB0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00048CC0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064BA0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064BB8);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002BBC4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002BEE4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002BFD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002C0CC);

void func_0002C1D4(struct Unk_func_0002C1D4_0 *arg0) {
    struct Unk_func_0002C1D4_var_v0 *var_v0;

    var_v0 = arg0->unk6C;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk20;
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002C1F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002C3F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002C454);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002C51C);

s32 func_0002C5E0(struct Unk_func_0002C5E0_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x48;
    func_000250D4(temp_s1);
    arg0->unk58 = 0;
    func_000250F0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002C624);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002C6A8);

s32 func_0002C720(struct Unk_func_0002C720_0 *arg0, s32 arg1) {
    arg0->unk318 = arg1;
    return 0;
}

s32 func_0002C72C(struct Unk_func_0002C72C_0 *arg0, s32 arg1) {
    arg0->unk44 = arg1;
    func_00024760((s32) ((u8 *)arg0 + 0x3C), arg1 + 0x2C, (s32) arg0);
    return 0;
}

s32 func_0002C758(void) {
    return 0;
}

s32 func_0002C760(void) {
    return 0;
}

s32 func_0002C768(void) {
    return 0;
}

s32 func_0002C770(struct Unk_func_0002C770_0 *arg0) {
    struct Unk_vt_func_0002C770_temp_a0 **temp_a0;

    temp_a0 = arg0->unk44;
    (*temp_a0)->unk70(temp_a0);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002C79C);

void func_0002C850(s32 arg0) {
    func_0002BFD8(arg0 - 0x3C);
}

void func_0002C86C(s32 arg0) {
    func_0002C0CC(arg0 - 0x3C);
}

void func_0002C888(s32 arg0) {
    func_0002C3F4(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002C8A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002CA04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002CB64);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002CBF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002CC7C);

void func_0002CD10(s32 arg0) {
    D_000CD750 = arg0;
}

void func_0002CD1C(struct Unk_func_0002CD1C_0 *arg0) {
    struct Unk_func_0002CD1C_var_v0 *var_v0;

    var_v0 = arg0->unk110;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk40;
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002CD3C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002D1D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002D1F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002D23C);

s32 func_0002D354(struct Unk_func_0002D354_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x48;
    func_000250D4(temp_s1);
    arg0->unk58 = 0;
    func_000250F0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002D398);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002D42C);

s32 func_0002D468(struct Unk_func_0002D468_0 *arg0, s32 arg1) {
    arg0->unk44 = arg1;
    func_00024760((s32) ((u8 *)arg0 + 0x3C), arg1 + 0x18, (s32) arg0);
    return 0;
}

s32 func_0002D494(void) {
    return 0;
}

s32 func_0002D49C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002D4A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002D4B4);

void func_0002D6C8(s32 arg0) {
    func_0002CBF0(arg0 - 0x3C);
}

void func_0002D6E4(s32 arg0) {
    func_0002CC7C(arg0 - 0x3C);
}

void func_0002D700(s32 arg0) {
    func_0002D1D0(arg0 - 0x3C);
}

s32 func_0002D71C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002D724);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002D864);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002D9A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002DA58);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002DB0C);

void func_0002DBC8(s32 arg0) {
    D_000CD754 = arg0;
}

void func_0002DBD4(struct Unk_func_0002DBD4_0 *arg0) {
    struct Unk_func_0002DBD4_var_v0 *var_v0;

    var_v0 = arg0->unk60;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk18;
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002DBF4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002DDFC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002DE48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002DE90);

s32 func_0002DF4C(struct Unk_func_0002DF4C_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x48;
    func_000250D4(temp_s1);
    arg0->unk58 = 0;
    func_000250F0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002DF90);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002E014);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002E050);

s32 func_0002E0E0(struct Unk_func_0002E0E0_0 *arg0, s32 arg1) {
    void *temp_s0;

    arg0->unk44 = arg1;
    temp_s0 = (u8 *)arg0 + 0x3C;
    func_00024760((s32) temp_s0, arg1 + 0x40, 0);
    func_00024760((s32) temp_s0, arg1 + 0x54, 1);
    return 0;
}

s32 func_0002E13C(void) {
    return 0;
}

void func_0002E144(s32 arg0) {
    func_0002DA58(arg0 - 0x3C);
}

void func_0002E160(s32 arg0) {
    func_0002DB0C(arg0 - 0x3C);
}

void func_0002E17C(s32 arg0) {
    func_0002DDFC(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002E198);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002E1E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002E25C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002E2D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002E3EC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002E508);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002E62C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064C40);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064C88);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064C98);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064CA8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064CB8);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00048D5C);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064CC8);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064CE0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064D20);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064D34);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064D48);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064D5C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00024F04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000250C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000250DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025124);

s32 func_0002515C_v100(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x44;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x4C) = 0;
    func_000250F0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000251A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000251DC);

s32 func_00025218(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_0001D340((s32) (arg0 + 0x38), arg1 + 0x40, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025244);

void func_00025478(s32 arg0) {
    func_00024D88(arg0 - 0x38);
}

void func_00025494(s32 arg0) {
    func_00024E38(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000254B0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064D70);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064D88);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000254CC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00048E5C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002554C);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004B7DC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004B7F8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004B838);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004B870);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004B87C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027B00);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027B14);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004C644);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004C660);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004C6A0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004C6D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004C6E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00028678(void) {
    D_00081240 = 0;
    D_00081242 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002868C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004C644);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004C660);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004C6A0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004C6D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_0004C6E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000257D8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025828);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025874);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00028810);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00028890);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000258C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002591C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025978);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027D18);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027D98);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_000259DC);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00027F54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00028ACC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025AE4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00025DA4(s32 arg0) {
    func_00028890(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025DA4);
#endif

#if FW_VERSION == 100
void func_00025DA4(s32 arg0) {
    func_0002591C(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00025DC0(s32 arg0) {
    func_00025978(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_00025DC0);
#endif

#if FW_VERSION == 100
void func_00025DC0(s32 arg0) {
    func_00025978(arg0 - 0x38);
}
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00018700", D_00064DD0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002E7D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002ECD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002EE38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002EE48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002EE78);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00018700", func_0002EEC8);
#endif
