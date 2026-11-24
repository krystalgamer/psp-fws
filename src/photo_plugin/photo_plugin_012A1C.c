/* cflags: -Os */
#include "common.h"
#include "photo_plugin_decls.h"

void func_00012A1C(s32 arg0) {
    struct Unk_func_00012A1C_temp_v0 *temp_v0;

    temp_v0 = func_00012DE4();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(s32), 0x14)(arg0);
    }
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00012A54);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00012C38);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00012D5C);

s32 func_00012D7C(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = scePaf_D4FAE7D0(arg0);
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = scePaf_338C3774(temp_v0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00012DC0);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FDAC);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00012DE4);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00012E08);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00012E58);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00012EE4);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_000130AC);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00013100);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FDC0);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_000131D8);

void func_000132A4(void) {
    func_000131D8(1, 0xFFFF);
}

void func_000132C4(void) {
    func_000131D8(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_000132E4);

void func_00013380(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_000134E4();
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_000133A0);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00013418);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_000134E4);

void func_00013504(M2C_UNK **arg0) {
    *arg0 = &D_0002FE68;
}

void func_00013514(M2C_UNK **arg0) {
    *arg0 = &D_0002FE68;
    scePaf_4E67BB08((s32) arg0);
}

void func_0001353C(M2C_UNK **arg0) {
    *arg0 = &D_0002FE68;
    scePaf_4E67BB08((s32) arg0);
}

void func_00013564(M2C_UNK **arg0) {
    *arg0 = &D_0002FE68;
}

void func_00013574(M2C_UNK **arg0) {
    *arg0 = &D_0002FE68;
    scePaf_4E67BB08((s32) arg0);
}

void func_0001359C(M2C_UNK **arg0) {
    *arg0 = &D_0002FE68;
}

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FDE8);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FDF8);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FE18);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FE28);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FE38);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FE50);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FE68);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_000135AC);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_0001375C);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FEDC);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FEEC);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_0001396C);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00013AC0);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FF20);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FF34);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FF44);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FF50);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FF5C);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FF68);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FF80);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FF9C);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FFC0);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FFD8);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0002FFF8);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_00030014);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_00030030);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_00030054);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_00030070);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_00030094);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0003009C);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_000300A0);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_000300B8);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_000300DC);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_000300F4);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_00030114);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_00030128);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0003013C);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_00030140);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_00030144);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_0003014C);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_00030164);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_00030170);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", D_00030174);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00013BC4);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00013DAC);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00013EC4);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00013F58);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00013F98);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_00014518);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_012A1C", func_000149E4);

void func_00014AE8(void) {
    sceVshCommonGui_A0DE7090(1);
}

