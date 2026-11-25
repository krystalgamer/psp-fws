/* cflags: -Os */
#include "common.h"
#include "lftv_main_plugin_decls.h"

#if FW_VERSION == 282
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
#endif

#if FW_VERSION != 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F0C4", D_0005C9B4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F0C4", D_0005C9C8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_000323E0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_00031860);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_000319E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_00031AB4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_00031B54);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_00031D3C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_00031DE4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F0C4", D_00045BA4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F0C4", D_00045BB4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F0C4", D_00045BCC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F0C4", D_00045BEC);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_0003251C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_00032648);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_0003271C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_00032798);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_00032948);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_00032998);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_000329F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_00032AAC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_00032BF0);
#else
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

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_0003F1B0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_0003F1F8);

s32 func_0003F238(void) {
    return (sceKernelSignalSema(D_0005F9D4, 1) == 0) ? 0 : -1;
}
#endif

#if FW_VERSION < 282
void func_0003F268(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#else
void func_0003F268(s8 *arg0) {
    *arg0 = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F0C4", func_0003F270);
#else
void func_0003F270(s8 *arg0) {
    *arg0 = 0;
}
#endif

#if FW_VERSION < 282
void func_00032D38(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
}
#endif
