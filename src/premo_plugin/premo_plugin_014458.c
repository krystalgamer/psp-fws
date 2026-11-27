/* lang: c++ */
#include "common.h"
#include "premo_plugin_decls.h"

INCLUDE_ASM("nonmatchings/premo_plugin_014458", func_00014458);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_014458", func_000145C8);
#else
s32 func_000145C8(struct Unk_func_000145C8_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = arg0->unk2C;
    if (temp_v0 >= 0) {
        sceNetInetClose(temp_v0);
        arg0->unk2C = -1;
    }
    temp_v0_2 = arg0->unk4;
    if (temp_v0_2 != 0) {
        _ZdaPv(temp_v0_2);
        arg0->unk4 = 0;
    }
    temp_v0_3 = arg0->unk8;
    if (temp_v0_3 != 0) {
        _ZdaPv(temp_v0_3);
        arg0->unk8 = 0;
    }
    return 0;
}
#endif

void func_00014640(struct Unk_func_00014640_0 *arg0) {
    if (sceNetInetSendto(arg0->unk2C, arg0->unk4, 4U, 0, (u8 *)arg0 + 0xC, 0x10) >= 0) {

    } else {
        sceNetInetGetPspError();
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin_014458", func_0001468C);

INCLUDE_ASM("nonmatchings/premo_plugin_014458", func_000148E4);
