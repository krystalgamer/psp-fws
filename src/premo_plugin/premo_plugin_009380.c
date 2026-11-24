/* cflags: -Os */
#include "common.h"
#include "premo_plugin_decls.h"

s32 func_00009380(void) {
    s32 temp_v0;

    temp_v0 = func_00009688();
    if (temp_v0 != 0) {
        func_0000972C((void *) temp_v0);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009380", func_000093BC);

s32 func_000093F8(void) {
    s32 temp_v0;

    temp_v0 = func_00009688();
    if (temp_v0 != 0) {
        func_00009808((void *) temp_v0);
    }
    return temp_v0;
}

u8 func_00009434(void) {
    s32 temp_v0;
    u8 var_v1;

    temp_v0 = func_00009688();
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = M2C_FIELD(temp_v0, u8 *, 0xC);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009380", func_00009460);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_009380", func_0000948C);

void func_000094B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = sceKernelCreateSema(&D_0002A070, 0x100U, 1, 1, NULL);
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 4) = sceKernelCreateEventFlag(&D_0002A07C, 0x200U, 1U, NULL);
}

void func_00009528(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = sceKernelCreateSema(&D_0002A070, 0x100U, 1, 1, NULL);
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 4) = sceKernelCreateEventFlag(&D_0002A07C, 0x200U, 1U, NULL);
}

