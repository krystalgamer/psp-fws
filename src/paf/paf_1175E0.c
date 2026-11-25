#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
void func_001175E0(M2C_UNK **arg0) {
    *arg0 = &D_0019CFE8;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#else
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117618);
#endif

#if FW_VERSION == 282
void func_00117618(struct Unk_func_00117618_0 *arg0, s32 arg1) {
    arg0->unk1E8->unk28 = arg1;
}
#else
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE408);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE488);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE4C0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE5A0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE828);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE8A4);
#endif

#if FW_VERSION == 282
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BEB2C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BEC68);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BECB0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BEEE4);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BEF7C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF0B4);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF1AC);
#else
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

INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_6147E3D5);
#endif

void func_00117F74(struct Unk_func_00117F74_0 *arg0) {
    sceKernelDeleteEventFlag(arg0->unk4);
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF204);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF220);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF280);
#else
void scePaf_1B043852(struct Unk_scePaf_1B043852_0 *arg0) {
    sceKernelDeleteEventFlag(arg0->unk4);
}

s32 scePaf_0B0959FC(struct Unk_scePaf_0B0959FC_0 *arg0) {
    void *sp0;
    sceKernelSignalSema(*arg0->unk0, 1);
    sceKernelWaitEventFlag(arg0->unk4, 1U, 0x10, &sp0, NULL);
    sceKernelWaitSema(*arg0->unk0, 1, NULL);
    return 0;
}

void scePaf_CA5EF446(struct Unk_scePaf_CA5EF446_0 *arg0) {
    sceKernelSetEventFlag(arg0->unk4, 1);
}
#endif

void func_0011802C(struct Unk_func_0011802C_0 *arg0) {
    void *sp0;
    sceKernelCancelEventFlag(arg0->unk4, 0U, &sp0);
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF2C4);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF3F4);
#endif
