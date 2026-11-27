/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "premo_plugin_decls.h"

INCLUDE_ASM("nonmatchings/premo_plugin_0149C4", func_000149C4);

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_0149C4", func_00014A10);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_0149C4", func_00014A5C);

INCLUDE_ASM("nonmatchings/premo_plugin_0149C4", func_00014AB8);
#endif

#if FW_VERSION < 330
s32 func_00014A10(struct Unk_func_00014A10_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if ((s8) arg0->pad0[0x4C] != 0) {
        sce_paf_private_memcpy(arg1, &arg0->pad0[0x4C], 0x80);
        var_v1 = arg1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 352
s32 func_00014A10(struct Unk_func_00014A10_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk52 != 0) {
        sce_paf_private_memcpy(arg1, (s32) (&arg0->unk52), 0x80);
        var_v1 = arg1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/premo_plugin_0149C4", func_0000D56C);
#endif

#if FW_VERSION < 330
void func_0000D56C(void *arg0) {
    void *temp_s1;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    temp_s1 = arg0 + 0x40;
    sce_paf_private_strcpy(temp_s1, &D_0002AAF8);
    M2C_FIELD(arg0, void **, 0x38) = temp_s1;
    M2C_FIELD(arg0, void **, 0x34) = arg0;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/premo_plugin_0149C4", func_0000D5C0);
#endif

#if FW_VERSION == 352
void func_00014A5C(struct Unk_func_00014A5C_0 *arg0) {
    s32 temp_s1;

    sce_paf_private_memset((u8 *)arg0 + 4, 0, 0x14);
    temp_s1 = (u8 *)arg0 + 0x50;
    arg0->unk0 = 0;
    arg0->unk38 = 0;
    sce_paf_private_strcpy(temp_s1, (s32) &D_0002AAF8);
    arg0->unk48 = temp_s1;
    arg0->unk44 = arg0;
}

void func_00014AB8(struct Unk_func_00014AB8_0 *arg0) {
    s32 temp_s1;

    sce_paf_private_memset((u8 *)arg0 + 4, 0, 0x14);
    temp_s1 = (u8 *)arg0 + 0x50;
    arg0->unk0 = 0;
    arg0->unk38 = 0;
    sce_paf_private_strcpy(temp_s1, (s32) &D_0002AAF8);
    arg0->unk48 = temp_s1;
    arg0->unk44 = arg0;
}
#endif
