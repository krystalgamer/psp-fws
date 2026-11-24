/* cflags: -Os */
#include "common.h"
#include "lftv_main_plugin_decls.h"

void func_0003F0C4(struct Unk_func_0003F0C4_0 *arg0, s32 arg1) {
    s32 temp_v0;

    arg0->unk4 = -1;
    arg0->unk0 = 0;
    arg0->unk8 = 0;
    if (arg1 != 0) {
        temp_v0 = sceNetApctl_A7BB73DF(arg1, 0);
        arg0->unk0 = temp_v0;
        if (temp_v0 >= 0) {
            arg0->unk4 = temp_v0;
        }
    }
}

void func_0003F118(struct Unk_func_0003F118_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0->unk8 != 1) {
        temp_v0 = arg0->unk4;
        if (temp_v0 >= 0) {
            temp_v0_2 = sceNetApctl_6F5D2981(temp_v0);
            arg0->unk0 = temp_v0_2;
            if (temp_v0_2 >= 0) {
                arg0->unk4 = -1;
            }
        }
    }
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_03F0C4", D_0005C9B4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_03F0C4", D_0005C9C8);

s32 func_0003F168(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceKernelCreateSema("LftvCoreEventSema", 0U, 1, 1, NULL);
    var_v0 = -1;
    if (temp_v0 > 0) {
        D_0005F9D4 = temp_v0;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_03F0C4", func_0003F1B0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_03F0C4", func_0003F1F8);

s32 func_0003F238(void) {
    return (sceKernelSignalSema(D_0005F9D4, 1) == 0) ? 0 : -1;
}

void func_0003F268(s8 *arg0) {
    *arg0 = 0;
}

void func_0003F270(s8 *arg0) {
    *arg0 = 0;
}

