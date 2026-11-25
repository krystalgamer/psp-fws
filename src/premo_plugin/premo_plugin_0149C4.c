/* cflags: -Os */
#include "common.h"
#include "premo_plugin_decls.h"

INCLUDE_ASM("nonmatchings/premo_plugin_0149C4", func_000149C4);

#if FW_VERSION == 310
s32 func_00014A10(struct Unk_func_00014A10_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if ((s8) arg0->pad0[0x4C] != 0) {
        scePaf_F95EA3F1(arg1, &arg0->pad0[0x4C], 0x80);
        var_v1 = arg1;
    }
    return var_v1;
}
#else
s32 func_00014A10(struct Unk_func_00014A10_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk52 != 0) {
        scePaf_3308156F(arg1, (s32) (&arg0->unk52), 0x80);
        var_v1 = arg1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 310
void func_0000D56C(void *arg0) {
    void *temp_s1;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    temp_s1 = arg0 + 0x40;
    scePaf_980228BA(temp_s1, &D_0002AAF8);
    M2C_FIELD(arg0, void **, 0x38) = temp_s1;
    M2C_FIELD(arg0, void **, 0x34) = arg0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_0149C4", func_0000D5C0);
#else
void func_00014A5C(struct Unk_func_00014A5C_0 *arg0) {
    s32 temp_s1;

    scePaf_9479C11B((u8 *)arg0 + 4, 0, 0x14);
    temp_s1 = (u8 *)arg0 + 0x50;
    arg0->unk0 = 0;
    arg0->unk38 = 0;
    scePaf_BD5018AA(temp_s1, (s32) &D_0002AAF8);
    arg0->unk48 = temp_s1;
    arg0->unk44 = arg0;
}

void func_00014AB8(struct Unk_func_00014AB8_0 *arg0) {
    s32 temp_s1;

    scePaf_9479C11B((u8 *)arg0 + 4, 0, 0x14);
    temp_s1 = (u8 *)arg0 + 0x50;
    arg0->unk0 = 0;
    arg0->unk38 = 0;
    scePaf_BD5018AA(temp_s1, (s32) &D_0002AAF8);
    arg0->unk48 = temp_s1;
    arg0->unk44 = arg0;
}
#endif
