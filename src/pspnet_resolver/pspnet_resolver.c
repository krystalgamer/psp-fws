/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_resolver_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_resolver", sceNetResolverStartNtoA);

INCLUDE_ASM("nonmatchings/pspnet_resolver", sceNetResolverStartAtoN);

INCLUDE_ASM("nonmatchings/pspnet_resolver", sceNetResolverStop);

INCLUDE_ASM("nonmatchings/pspnet_resolver", sceNetResolverInit);

INCLUDE_ASM("nonmatchings/pspnet_resolver", sceNetResolverTerm);

INCLUDE_ASM("nonmatchings/pspnet_resolver", sceNetResolverCreate);

s32 sceNetResolverDelete(s32 arg0) {
    s32 var_a1;
    s32 var_v1;

    var_v1 = 0x80410005;
    if (sceKernelCheckThreadStack() >= 0x13F0) {
        var_a1 = 0x80410405;
        if (arg0 >= 0) {
            var_a1 = func_0000070C(arg0);
        }
        var_v1 = var_a1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00000508);

s32 func_0000065C(void) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00000F64();
    var_a0 = 0;
    if (temp_v0 >= 0) {
        D_00001F78 = 0;
        D_00001F74 = 0;
    } else {
        func_00000FA8();
        var_a0 = temp_v0;
    }
    return var_a0;
}

s32 func_000006B0(void) {
    func_00000FA8();
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000006D0);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_0000070C);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000007E0);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00000908);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00000F64);

s32 func_00000FA8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00000FB0);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000010C8);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000011E8);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001278);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000013E8);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000014D8);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001730);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001818);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000019A4);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001B9C);
