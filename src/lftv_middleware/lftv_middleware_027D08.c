/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00027D08);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00027DA4);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00027DBC);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00027E6C);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00027F1C);

void func_00027FD8(s32 arg0) {
    func_00029210((s32) &D_0005BD50, arg0);
}

void func_00027FFC(void) {
    func_00029304((s32) &D_0005BD50);
}

void func_0002801C(void) {
    func_0002935C((s32) &D_0005BD50);
}

void func_0002803C(void) {
    func_00029364((s32) &D_0005BD50);
}

void func_0002805C(s32 arg0) {
    func_000293C0((s32) &D_0005BD50, arg0);
}

void func_00028080(void) {
    func_0002940C((s32) &D_0005BD50);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_000280A0);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_000251D4);
#endif

#if FW_VERSION == 303
s32 func_00028AEC(struct Unk_func_00028AEC_0 *arg0) {
    return arg0->unk10;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00028AF4);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00028B94);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00028C48);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00028D40);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00028D90);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_027D08", D_0007C308);

INCLUDE_RODATA("nonmatchings/lftv_middleware_027D08", D_0007C318);
#endif

void func_00028EF0(void) {
    func_00027D08(1, 0xFFFF);
}

void func_00028F10(void) {
    func_00027D08(0, 0xFFFF);
}

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00044D4C);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00044D74);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00044DB0);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00044DD8);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00028F30);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00029038);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00029180);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00029210);

INCLUDE_RODATA("nonmatchings/lftv_middleware_027D08", D_00055C38);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00029304);

s32 func_0002935C(s32 arg0) {
    return arg0 + 0x14;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_00029364);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_000293C0);

INCLUDE_ASM("nonmatchings/lftv_middleware_027D08", func_0002940C);
