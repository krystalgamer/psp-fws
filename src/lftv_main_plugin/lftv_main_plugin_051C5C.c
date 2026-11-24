/* cflags: -Os */
#include "common.h"
#include "lftv_main_plugin_decls.h"

void func_00051C5C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005DAA0;
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_0005DAD0;
    func_00050DFC(arg0 + 0x2C);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_0005DAD0;
    func_00050DFC(arg0 + 0x14);
    func_00051884((s32) (arg0 + 4));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005DB00;
}

void func_00051CC4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005DAA0;
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_0005DAD0;
    func_00050DFC(arg0 + 0x2C);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_0005DAD0;
    func_00050DFC(arg0 + 0x14);
    func_00051884((s32) (arg0 + 4));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005DB00;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_051C5C", func_00051D34);

void func_00051DD8(M2C_UNK **arg0) {
    *arg0 = &D_0005DB00;
}

void func_00051DE8(M2C_UNK **arg0) {
    *arg0 = &D_0005DB00;
    scePaf_4E67BB08(arg0);
}

void func_00051E10(M2C_UNK **arg0) {
    *arg0 = &D_0005DAD0;
    func_00050DFC(arg0);
    scePaf_4E67BB08(arg0);
}

void func_00051E48(M2C_UNK **arg0) {
    *arg0 = &D_0005DAD0;
    func_00050DFC(arg0);
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_051C5C", func_00051E70);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_051C5C", func_00052014);

s32 func_000522F4(void) {
    func_00052E38();
    return 0;
}

