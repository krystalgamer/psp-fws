/* lang: c++ */
#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00083810);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00083810(M2C_UNK **arg0) {
    *arg0 = &D_000A1F70;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00083838);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00083BE0);

void func_00083C30(struct Unk_func_00083C30_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_000A1F80;
    arg0->unk4 = 0xFF;
    arg0->unk8 = -1;
    func_0006CA14((s32) ((u8 *)arg0 + 0xC));
    arg0->unk14 = arg1;
    arg0->unk18 = arg2;
    arg0->unk1C = arg3;
}

void func_00083CA4(struct Unk_func_00083CA4_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_000A1F80;
    arg0->unk4 = 0xFF;
    arg0->unk8 = -1;
    func_0006CA14((s32) ((u8 *)arg0 + 0xC));
    arg0->unk14 = arg1;
    arg0->unk18 = arg2;
    arg0->unk1C = arg3;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00083D18);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00083D40);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00083D68);

s32 func_00083DA4(s32 arg0) {
    return arg0 + 4;
}

s32 func_00083DAC(s32 arg0) {
    return arg0 + 8;
}

s32 func_00083DB4(s32 arg0) {
    return arg0 + 0xC;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00083DBC);

void func_00084038(s32 *arg0) {
    *arg0 = 0;
}

void func_00084040(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_00084048(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_00084050(void) {
}

void func_00084058(void) {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00084060);

Class_000A1F90::Class_000A1F90() {
}

Class_000A1F90::~Class_000A1F90() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00084310);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00084340);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00084370);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000843A0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000843D0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000843D0(struct Unk_func_000843D0_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk2C;
    arg0->unk0 = &D_000A1FB8;
    if (temp_v1 == 0) {
        arg0->unk2C = 0;
    } else {
        _ZdaPv(temp_v1);
        arg0->unk2C = 0;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_0008441C);

s32 func_000844C4(s32 arg0) {
    return arg0 + 8;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000844CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_0008463C);

s32 func_0008490C(struct Unk_func_0008490C_0 *arg0) {
    return arg0->unk2C;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00084914);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_0008494C);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00084984);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000849BC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000849F4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000849F4(struct Unk_func_000849F4_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk24;
    arg0->unk0 = &D_000A1FC8;
    if (temp_v1 == 0) {
        arg0->unk24 = 0;
    } else {
        _ZdaPv(temp_v1);
        arg0->unk24 = 0;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00084A40);

s32 func_00084AE8(s32 arg0) {
    return arg0 + 8;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00084AF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00084C68);

s32 func_00084D9C(struct Unk_func_00084D9C_0 *arg0) {
    return arg0->unk24;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00084DA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00084ECC);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00084F1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000850C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_0008521C);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00085378);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000854D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00085578);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_0008561C);

s32 func_000856C8(struct Unk_func_000856C8_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_func_000856C8_temp_v1 **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk14;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk8(temp_v1);
    }
    return var_v0;
}

s32 func_000856FC(struct Unk_func_000856FC_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_func_000856FC_temp_v1 **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk14;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unkC(temp_v1);
    }
    return var_v0;
}

s32 func_00085730(struct Unk_func_00085730_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_func_00085730_temp_v1 **temp_v1;

    var_v0 = 0;
    temp_v1 = arg0->unk14;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk18(temp_v1);
    }
    return var_v0;
}

s32 func_00085764(struct Unk_func_00085764_0 *arg0) {
    return arg0->unk14;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_0008576C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_083810", D_000A1F60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_083810", D_000A1F70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_083810", D_000A1F80);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_083810", D_000A1F90);

__asm__(".globl _ZTV14Class_000A1F90\n_ZTV14Class_000A1F90 = D_000A1F90 - 8\n");
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_083810", D_000A1FB8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_083810", D_000A1EF8);

__asm__(".globl _ZTV14Class_000A1EF8\n_ZTV14Class_000A1EF8 = D_000A1EF8 - 8\n");
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_083810", D_000A1FC8);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000857E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00085B9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00085C8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00085D7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00086090);

s32 func_000862D4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000862DC);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_083810", D_000A2000);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000864C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00086580);

void func_000866B4(s32 arg0) {
    func_00085578(arg0 - 4);
}

void func_000866D0(s32 arg0) {
    func_0008561C(arg0 - 4);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000765B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000766C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000767C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000768D4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000866EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_0008672C);

void func_0008676C(M2C_UNK **arg0) {
    *arg0 = &D_000A2040;
    _ZN14Class_000A2130D2Ev((s32) arg0);
}

void func_00086794(M2C_UNK **arg0) {
    *arg0 = &D_000A2040;
    _ZN14Class_000A2130D2Ev((s32) arg0);
}
#endif

#if FW_VERSION == 260 || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000867BC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000867BC(M2C_UNK **arg0) {
    *arg0 = &D_000A2040;
    _ZN14Class_000A2130D2Ev((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
s32 func_000867F4(void) {
    return 0;
}

s32 func_000867FC(struct Unk_func_000867FC_0 *arg0) {
    return arg0->unk20;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00086804);

u8 func_0008680C(struct Unk_func_0008680C_0 *arg0) {
    return arg0->unk26;
}

s32 func_00086814(s32 arg0, s32 *arg1) {
    *arg1 = 2;
    return arg0 + 0x1C;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00086824);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00086854);

Class_000A2030::~Class_000A2030() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000868D4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_0008690C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00086A54);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00086A54(struct Unk_func_00086A54_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_000A2088;
    arg0->unk4 = -1;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    sce_paf_private_memcpy((u8 *)arg0 + 8, arg1, 4);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00086A98);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00086A98(struct Unk_func_00086A98_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_000A2088;
    arg0->unk4 = -1;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    sce_paf_private_memcpy((u8 *)arg0 + 8, arg1, 4);
}
#endif

#if FW_VERSION >= 282
Class_000A2088::~Class_000A2088() {
}

void func_00086B24(struct Unk_func_00086B24_0 *arg0) {
    arg0->unk14 = 0;
}

s32 func_00086B2C(struct Unk_func_00086B2C_0 *arg0) {
    return arg0->unk14 == 1;
}

s32 func_00086B3C(struct Unk_func_00086B3C_0 *arg0) {
    return arg0->unkC;
}

s32 func_00086B44(struct Unk_func_00086B44_0 *arg0) {
    return arg0->unk4;
}

void func_00086B4C(struct Unk_func_00086B4C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_000A2078;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

void func_00086B64(struct Unk_func_00086B64_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_000A2078;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

Class_000A2078::~Class_000A2078() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00086BC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00086D80);

void func_00086F9C(struct Unk_func_00086A54_0 *arg0) {
    func_00089E34(arg0, (s32) &D_000A2098);
    arg0->unk0 = &D_000A20B8;
    arg0->unk20 = 0;
    arg0->unk24 = 0;
}

void func_00086FDC(struct Unk_func_00086A54_0 *arg0) {
    func_00089E34(arg0, (s32) &D_000A2098);
    arg0->unk0 = &D_000A20B8;
    arg0->unk20 = 0;
    arg0->unk24 = 0;
}

Class_000A20B8::~Class_000A20B8() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_0008706C);
#endif

#if FW_VERSION >= 282
s32 func_000870A4(Class_000A20B8 *arg0) {
    return arg0->unk1C + 0x14;
}

u16 func_000870B0(struct Unk_func_000870B0_0 *arg0) {
    return arg0->unk20;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000870B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000870E8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00087118);
#endif

#if FW_VERSION >= 282
Class_000A20A8::~Class_000A20A8() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_00087140);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_000871A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_083810", func_0008734C);
#endif
