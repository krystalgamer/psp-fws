#include "common.h"
#include "premo_plugin_decls.h"

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_014458", func_00014458);

s32 func_000145C8(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 >= 0) {
        sceNetInetClose(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0_2 != 0) {
        scePaf_CCFF20ED(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    temp_v0_3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0_3 != 0) {
        scePaf_CCFF20ED(temp_v0_3);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    return 0;
}

void func_00014640(void *arg0) {
    if (sceNetInetSendto(M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, void **, 4), 4U, 0, arg0 + 0xC, 0x10) >= 0) {

    } else {
        sceNetInetGetPspError();
    }
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_014458", func_0001468C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_014458", func_000148E4);

