#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 282
void func_001175E0(M2C_UNK **arg0) {
    *arg0 = &D_0019CFE8;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION != 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117618);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FAEC);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FAF8);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FBBC);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FCA8);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FCD0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FD08);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00115FEC);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00116018);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000E41A0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00116030);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0008A498);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001161E0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00116208);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000DDDE8);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117358);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001173B8);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117418);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FD14);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FD84);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FE20);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_1175E0", func_001175F4);
#endif

#if FW_VERSION == 282
void func_00117618(struct Unk_func_00117618_0 *arg0, s32 arg1) {
    arg0->unk1E8->unk28 = arg1;
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE408);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE488);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C083C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE4C0);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE5A0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE828);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE8A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_1175E0", D_0011F128);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117624);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117684);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001176E4);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117780);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0011781C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001178C0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0011792C);

void func_0011794C(s32 arg0) {
    scePaf_7952AE83(arg0 + 0x20);
}

void func_00117968(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_00117984(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_001179A0(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}

void func_001179BC(s32 arg0) {
    scePaf_E418D7E0(arg0 + 0x20);
}

void func_001179D8(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}

void func_001179F4(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117A10);

s32 func_00117A44(struct Unk_func_00117A44_0 *arg0, s32 arg1) {
    func_0000C8BC(arg1, arg0->unk84);
    return 0;
}

void func_00117A6C(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117A90);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117AF0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117B50);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117BEC);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117C88);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117D2C);
#endif

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117D98);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FEE4);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FF00);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FF1C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FF38);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FF54);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_001164A8);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001164C4);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00116C60);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/paf_1175E0", func_001164E0_v270);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00116514);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0011653C);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_1175E0", func_001177C4);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117824);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117884);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00116560);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_001165D0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0011666C);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117A60);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00116710);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00116730);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0011674C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00116768);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00116784);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001167A0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FF70);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FF8C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FFA8);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FFDC);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00110004);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BEB2C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BEC68);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BECB0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BEEE4);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BEF7C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF0B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C3244);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C3280);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF1AC);
#endif

#if FW_VERSION >= 282
void func_00117DB8(s32 arg0) {
    func_000C2580(arg0 + 0x20);
}

void func_00117DD4(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_00117DF0(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_00117E0C(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}

void func_00117E28(s32 arg0) {
    func_000C25D8(arg0 + 0x20);
}

void func_00117E44(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}

void func_00117E60(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117E7C);

s32 func_00117EB0(struct Unk_func_00117EB0_0 *arg0, s32 arg1) {
    func_0000C8BC(arg1, arg0->unk84);
    return 0;
}

void func_00117ED8(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117EFC);
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_6147E3D5);
#endif

void func_00117F74(struct Unk_func_00117F74_0 *arg0) {
    sceKernelDeleteEventFlag(arg0->unk4);
}

#if (FW_VERSION >= 200 && FW_VERSION < 282) || FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_1B043852);
#endif

#if FW_VERSION == 282
void scePaf_1B043852(struct Unk_scePaf_1B043852_0 *arg0) {
    sceKernelDeleteEventFlag(arg0->unk4);
}
#endif

#if (FW_VERSION >= 200 && FW_VERSION < 282) || FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_0B0959FC);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF204);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF220);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF280);
#endif

#if FW_VERSION == 282
s32 scePaf_0B0959FC(struct Unk_scePaf_0B0959FC_0 *arg0) {
    void *sp0;
    sceKernelSignalSema(*arg0->unk0, 1);
    sceKernelWaitEventFlag(arg0->unk4, 1U, 0x10, &sp0, NULL);
    sceKernelWaitSema(*arg0->unk0, 1, NULL);
    return 0;
}
#endif

#if (FW_VERSION >= 200 && FW_VERSION < 282) || FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_CA5EF446);
#endif

#if FW_VERSION == 282
void scePaf_CA5EF446(struct Unk_scePaf_CA5EF446_0 *arg0) {
    sceKernelSetEventFlag(arg0->unk4, 1);
}
#endif

void func_0011802C(struct Unk_func_0011802C_0 *arg0) {
    void *sp0;
    sceKernelCancelEventFlag(arg0->unk4, 0U, &sp0);
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C33D4);

INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_B884B031);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C345C);

INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_9399AF50);

INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_C1F72218);

INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_539F2583);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C3590);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C360C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C362C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00115570);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001155B0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001155F0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0011560C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00115628);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00115694);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001156FC);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00115740);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00115760);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001157A8);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001157F0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0011580C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00115828);

INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_EB346F51);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0011591C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00115998);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001159B8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_96857E81);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_E05F3CEF);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_E977B833);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF2C4);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF3F4);
#endif
