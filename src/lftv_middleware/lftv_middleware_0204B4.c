/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

void func_000204B4(struct Unk_func_000204B4_0 *arg0) {
    arg0->unk0 = &D_00055228;
    arg0->unk4 = 1;
    arg0->unk8 = 0;
}

void func_000204D0(struct Unk_func_000204D0_0 *arg0) {
    arg0->unk0 = &D_00055228;
    arg0->unk4 = 1;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0204B4", func_000204EC);

void func_00020514(M2C_UNK **arg0) {
    *arg0 = &D_00055228;
    func_00020738((s32) arg0);
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0204B4", func_0002053C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0204B4", func_00020574);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0204B4", func_000205C4);

u8 func_000206A8(struct Unk_func_000206A8_0 *arg0) {
    return arg0->unk4;
}

void func_000206B0(struct Unk_func_000206B0_0 *arg0) {
    arg0->unk4 = 1;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0204B4", func_000206BC);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0204B4", func_00020738);

s32 func_000207C4(void) {
    func_0004B200();
    return 0;
}

