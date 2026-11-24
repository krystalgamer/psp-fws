/* cflags: -Os */
#include "common.h"
#include "video_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00000024);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_000000AC);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", module_start);

s32 module_stop(void) {
    func_000020F8();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_0000015C);

INCLUDE_RODATA("tmp/asm/282/video_plugin/nonmatchings/video_plugin", D_00002570);

INCLUDE_RODATA("tmp/asm/282/video_plugin/nonmatchings/video_plugin", D_00002584);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_000002B4);

void func_00000540(void) {
}

void func_00000548(void) {
}

void func_00000550(void) {
    s32 temp_v0;
    struct Unk_func_00000550_temp_v0_2 *temp_v0_2;

    func_00001174(0);
    temp_v0 = scePaf_D4FAE7D0(&D_00002614);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 8)(0);
        }
    }
}

INCLUDE_RODATA("tmp/asm/282/video_plugin/nonmatchings/video_plugin", D_000025EC);

INCLUDE_RODATA("tmp/asm/282/video_plugin/nonmatchings/video_plugin", D_000025F4);

INCLUDE_RODATA("tmp/asm/282/video_plugin/nonmatchings/video_plugin", D_000025FC);

INCLUDE_RODATA("tmp/asm/282/video_plugin/nonmatchings/video_plugin", D_00002608);

INCLUDE_RODATA("tmp/asm/282/video_plugin/nonmatchings/video_plugin", D_00002614);

INCLUDE_RODATA("tmp/asm/282/video_plugin/nonmatchings/video_plugin", D_00002624);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_000005A0);

void func_00000B84(s32 arg0) {
    struct Unk_func_00000B84_temp_v0 *temp_v0;

    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *, M2C_UNK), 4)(&func_00000C18, 0);
        scePaf_A0ED77C4(0, &func_00000D70, 0, -1, -1, func_00000DF8);
    }
}

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00000BE0);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00000C18);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00000D70);

void func_00000DF8(void) {
}

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00000E00);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00000E68);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001174);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001238);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001294);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001360);

void func_00001444(void) {
    func_00001360();
}

void func_00001460(void) {
    func_00001294();
}

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_0000147C);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_000014A0);

INCLUDE_RODATA("tmp/asm/282/video_plugin/nonmatchings/video_plugin", D_000027B8);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_000015C8);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001768);

void func_000017F4(void) {
    func_00001768(1, 0xFFFF);
}

void func_00001814(void) {
    func_00001768(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001834);

void func_00001864(void) {
    func_00001AFC();
}

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001880);

void func_0000194C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_00001D38(arg0, arg1, var_v0);
}

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_0000199C);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001A30);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001A60);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001AFC);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001B28);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001D38);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001DE4);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001EC0);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_00001FF8);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_0000204C);

INCLUDE_ASM("tmp/asm/282/video_plugin/nonmatchings/video_plugin", func_000020A0);
