#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION >= 282
void func_0009172C(void) {
}
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00091734);
#endif

#if FW_VERSION >= 282
void func_00091734(void) {
}
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00080DE8);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00080F54);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_0009173C);
#endif

void func_000918C8(struct Unk_func_000918C8_0 *arg0) {
    arg0->unk0 = &D_000A2948;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_000918E0(struct Unk_func_000918E0_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_000A2948;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000810E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000810F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081108);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081118);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081140);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081394);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081514);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081534);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081554);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081574);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081584);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081594);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000815BC);
#endif

#if FW_VERSION == 271
s32 func_000815BC(s32 arg0) {
    return arg0 + 4;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000815C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000815CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000816A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081788);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081A20);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081A78);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082A30);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081B40);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081B68);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081B90);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081BCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081BDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081BE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081BEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081BF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081BFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081C04);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081C0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00081ED0);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000820BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082268);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082284);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000822A0);
#else
void func_000918F8(struct Unk_func_000918F8_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_000A2948;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00091910);
#else
void func_00091910(M2C_UNK **arg0) {
    *arg0 = &D_000A2948;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00091920);
#else
void func_00091920(M2C_UNK **arg0) {
    *arg0 = &D_000A2948;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00091930);
#else
void func_00091930(M2C_UNK **arg0) {
    *arg0 = &D_000A2948;
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_000A27F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_000A2868);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_000A28D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_000A28F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_000A2920);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097AA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097B10);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097B20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_000A2948);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097B40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097B50);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082304);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097B88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097B98);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097BB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097C60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097C88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097C98);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000828C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082984);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000829A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000829BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000829D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000829F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082A04);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082A14);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082A3C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000915F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082DF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082E28);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082E50);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082E78);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082EB4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082F04);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00082F54);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00083CA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_0008303C);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00083064);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_0008308C);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000830C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000830D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000830D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000830E0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000833EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000833FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_0009171C);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_0008341C);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00083424);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_0008342C);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000835F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_0008360C);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_000918F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_0008363C);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_0008364C);

INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_0008365C);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_000A2930);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097BB8);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00091958);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_00097BD0);
#endif

#if FW_VERSION != 271
void func_00091B58(struct Unk_func_00091B58_0 *arg0) {
    arg0->unk0 = &D_000A2968;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
}

void func_00091B74(struct Unk_func_00091B74_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_000A2968;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = arg3;
}

void func_00091B90(struct Unk_func_00091B90_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_000A2968;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = arg3;
}

void func_00091BAC(M2C_UNK **arg0) {
    *arg0 = &D_000A2968;
}

void func_00091BBC(M2C_UNK **arg0) {
    *arg0 = &D_000A2968;
}

void func_00091BCC(M2C_UNK **arg0) {
    *arg0 = &D_000A2968;
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_09172C", D_000A2948);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_09172C", func_00091BF4);
#endif
