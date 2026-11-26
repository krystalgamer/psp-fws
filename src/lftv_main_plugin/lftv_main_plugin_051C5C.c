/* cflags: -Os */
#include "common.h"
#include "lftv_main_plugin_decls.h"

#if FW_VERSION >= 282
void func_00051C5C(struct Unk_func_00051C5C_0 *arg0) {
    arg0->unk0 = &D_0005DAA0;
    arg0->unk2C = &D_0005DAD0;
    func_00050DFC(&arg0->unk2C);
    arg0->unk14 = &D_0005DAD0;
    func_00050DFC(&arg0->unk14);
    func_00051884((s32) ((u8 *)arg0 + 4));
    arg0->unk0 = &D_0005DB00;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_051C5C", func_00051CC4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00051CC4(struct Unk_func_00051CC4_0 *arg0) {
    arg0->unk0 = &D_0005DAA0;
    arg0->unk2C = &D_0005DAD0;
    func_00050DFC(&arg0->unk2C);
    arg0->unk14 = &D_0005DAD0;
    func_00050DFC(&arg0->unk14);
    func_00051884((s32) ((u8 *)arg0 + 4));
    arg0->unk0 = &D_0005DB00;
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_051C5C", func_00051D34);

void func_00051DD8(M2C_UNK **arg0) {
    *arg0 = &D_0005DB00;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_051C5C", func_00051DE8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00051DE8(M2C_UNK **arg0) {
    *arg0 = &D_0005DB00;
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_051C5C", func_00051E10);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00051E10(M2C_UNK **arg0) {
    *arg0 = &D_0005DAD0;
    func_00050DFC(arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 282
void func_00051E48(M2C_UNK **arg0) {
    *arg0 = &D_0005DAD0;
    func_00050DFC(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_051C5C", func_00051E70);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_051C5C", func_0003B94C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_051C5C", func_00052014);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/lftv_main_plugin_051C5C", func_00052514);
#endif

s32 func_000522F4(void) {
    func_00052E38();
    return 0;
}
