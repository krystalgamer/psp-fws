/* cflags: -Os */
#include "common.h"
#include "lftv_main_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00023318);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00023318(void) {
    s32 temp_v0;
    struct Unk_func_00023318_temp_s0 *temp_s0;

    func_00038A9C(0);
    _ZN3vsh12BusyIcon_IncEv();
    InputDevice_PspPad_Lock();
    temp_s0 = D_0005F848;
    if ((temp_s0 == NULL) || (temp_v0 = Job_Start(0, &func_000234F8, 0, -1, -1, &func_0002365C), temp_s0->unk3C = temp_v0, (temp_v0 == 0))) {
        InputDevice_PspPad_Unlock();
        _ZN3vsh12BusyIcon_DecEv();
    }
}
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00023398);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0002342C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001CED8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_000234F8);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
s32 func_00023614(void) {
    return 0;
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001D230);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0002361C);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0002365C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001D3D4);

void func_0001D41C(M2C_UNK **arg0) {
    *arg0 = &D_00043CD8;
    func_0002CD70((s32) arg0);
}

void func_0001D444(M2C_UNK **arg0) {
    *arg0 = &D_00043CD8;
    func_0002CD70((s32) arg0);
}

void func_0001D46C(M2C_UNK **arg0) {
    *arg0 = &D_00043CD8;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00023710);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00023754);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_0005A718);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_000237A0);

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043A80);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00023840);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00020F98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_000210DC);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001D590);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_000238A0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_000239DC);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_0005A79C);

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001D5D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001DE58);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_0005A7B4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_0005A7CC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_0005A7D4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_0005A7F8);

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043C88);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043C8C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043C90);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043C94);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043C98);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043C9C);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00023A70);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00023AB4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00023C08);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00023E4C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00023EB0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001E338);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00023F04);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00023FC8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00024134);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_000241C8);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043D80);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_000434E8);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043CC8);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043CD8);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00024294);

#if FW_VERSION < 270
s32 func_0001E724(void) {
    return 0;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001E72C);
#endif

#if FW_VERSION == 250
void func_0001E72C(void) {
    s32 temp_s0;

    temp_s0 = M2C_VFIELD(&D_0005EEA0, s32, 0x5C);
    if (temp_s0 != 0) {
        func_0002CF90(temp_s0);
        func_0002D0DC((struct Unk_func_0002D0DC_0 *) temp_s0);
    }
    if (M2C_VFIELD(&D_0005EEA0, s32, 0x64) != 0) {
        func_0001A6F4();
    }
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001E788);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001E83C);

void func_0001E870(M2C_UNK **arg0) {
    *arg0 = &D_00043D80;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION < 282
void func_0001E898(M2C_UNK **arg0) {
    *arg0 = &D_00043D80;
    func_0002CD70((s32) arg0);
}

void func_0001E8C0(M2C_UNK **arg0) {
    *arg0 = &D_00043D80;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001E8F8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043288);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00021AE8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00021B48);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00021B80);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043540);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043D20);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043D40);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001E984);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001E9E4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001EAB0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001EAF4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00021C04);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001EB34);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001EDD0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00022000);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001EE60);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001FE8C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_000222EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0002242C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_0005A850);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001FF50);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001EFF8_v250);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001F0CC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043D80);
#endif

#if FW_VERSION < 270
s32 func_0001F238(void) {
    return 0;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001F240);
#endif

#if FW_VERSION == 250
void func_0001F240(void) {
    s32 temp_s0;

    temp_s0 = M2C_VFIELD(&D_0005EEA0, s32, 0x5C);
    if (temp_s0 != 0) {
        func_0002CF90(temp_s0);
        func_0002D0DC((struct Unk_func_0002D0DC_0 *) temp_s0);
    }
    if (M2C_VFIELD(&D_0005EEA0, s32, 0x64) != 0) {
        func_0001A6F4();
    }
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001F29C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0002012C_v260);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_00043D80);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_0001F354);
#endif

#if FW_VERSION == 250
void func_0001F354(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0002CC00(arg0, arg1, arg2, arg3 & 0xFF, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005A850;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00020274);
#endif

#if FW_VERSION < 270
void func_0001F38C(M2C_UNK **arg0) {
    *arg0 = &D_0005A850;
    func_0002CD70((s32) arg0);
}
#endif

void func_000242DC(M2C_UNK **arg0) {
    *arg0 = &D_0005A850;
    func_0002CD70((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_023318", func_00024304);
#else
void func_00024304(M2C_UNK **arg0) {
    *arg0 = &D_0005A850;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_023318", D_0005A850);
#endif
