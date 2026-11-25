/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

s32 func_00038348(void) {
    return D_0005C5E4;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_038348", func_00038354);

INCLUDE_ASM("nonmatchings/lftv_middleware_038348", func_0003839C);

s32 func_000383E8(struct Unk_func_000383E8_0 *arg0) {
    arg0->unk2E = 0;
    func_0003839C();
    return 0;
}

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_038348", D_00056460);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038348", D_00056480);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_038348", D_000564A0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038348", D_000564A8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038348", D_000564B8);

INCLUDE_ASM("nonmatchings/lftv_middleware_038348", func_0003840C);

INCLUDE_ASM("nonmatchings/lftv_middleware_038348", func_00038580);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_038348", func_000344E8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_038348", func_0005589C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_038348", func_00038730);
#endif

void func_00038838(s32 arg0, s32 arg1) {
    func_00039B34(arg0 + 0x10, arg1);
}

void func_00038854(s32 arg0) {
    func_00039B40(arg0 + 0x10);
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_038348", func_00034628);
#endif
