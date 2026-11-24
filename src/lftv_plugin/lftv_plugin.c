/* cflags: -Os */
#include "common.h"
#include "lftv_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00000024);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_000000AC);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", module_start);

s32 module_stop(void) {
    func_00002CD8();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_0000015C);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00000180);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_000031AC);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_000031BC);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_000031CC);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_000031D4);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_000031E4);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_000031F8);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_00003204);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_0000322C);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_00003258);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_00003274);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_0000328C);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_0000329C);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_000032B0);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_000032DC);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_000032EC);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_00003318);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_00003324);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_00003330);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_0000333C);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_0000334C);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_000007BC);

s32 func_00000AC0(s32 arg0) {
    D_000033FC = arg0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00000AD0);

M2C_UNK *func_00000B90(void) {
    return &D_0000343C;
}

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00000B9C);

void func_00000C54(void) {
}

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00000C5C);

s32 func_00000D28(void) {
    sceKernelPowerLock(0);
    sceKernelDelayThread(0x4C4B40);
    sceKernelPowerUnlock(0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00000D5C);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00000F1C);

s32 func_000012C0(void) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00003410 != 0) {
        sceVshCommonGui_72E652AA(D_00003410);
        D_00003410 = 0;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00001304);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_0000138C);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_000016F4);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00001770);

void func_0000186C(void) {
    s32 temp_v0;
    s32 temp_v0_3;
    struct Unk_func_0000186C_temp_v0_2 *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_000031AC);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk70();
        }
    }
    temp_v0_3 = scePaf_D4FAE7D0(&D_0000329C);
    if (temp_v0_3 != 0) {
        D_000033F9 = 1;
        scePaf_1A45C860(temp_v0_3, &func_000018E0);
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_000018E0);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00001B28);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00001C28);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00001D94);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00001E74);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00001F04);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00001FCC);

s32 func_000020F8(void) {
    sceKernelDelayThread(0x3E8);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00002118);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_000021FC);

void func_000022C4(void) {
    func_000021FC(1, 0xFFFF);
}

void func_000022E4(void) {
    func_000021FC(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00002304);

void func_00002334(void) {
    func_00002580();
}

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00002350);

void func_0000241C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_000027BC(arg0, arg1, var_v0);
}

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_0000246C);

void func_00002500(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_00002868(arg0, arg1, var_v0);
}

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00002550);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00002580);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_000025AC);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_000027BC);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00002868);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_0000291C);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_000029F8);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00002B30);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00002B84);

INCLUDE_ASM("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", func_00002C80);

INCLUDE_RODATA("tmp/asm/282/lftv_plugin/nonmatchings/lftv_plugin", D_00003390);
