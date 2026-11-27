/* lang: c++ */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

s32 func_00048FC4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = -1;
    if (func_00049654() == 0) {
        temp_v0 = sceNetInetSocket(arg1, arg2, arg3);
        *arg0 = temp_v0;
        var_s0 = (~temp_v0 != 0) ? 0 : -1;
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_048FC4", func_0004903C);

INCLUDE_ASM("nonmatchings/lftv_middleware_048FC4", func_000490E8);

INCLUDE_ASM("nonmatchings/lftv_middleware_048FC4", func_000491B0);

INCLUDE_ASM("nonmatchings/lftv_middleware_048FC4", func_00049278);

INCLUDE_ASM("nonmatchings/lftv_middleware_048FC4", func_00049360);

INCLUDE_ASM("nonmatchings/lftv_middleware_048FC4", func_000494EC);

INCLUDE_ASM("nonmatchings/lftv_middleware_048FC4", func_00049590);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_048FC4", func_00044758);
#endif

#if FW_VERSION >= 303
s32 func_0004961C(void) {
    s32 temp_v0;

    temp_v0 = D_0005C618;
    D_0005C618 = 0;
    return temp_v0;
}
#endif

s32 func_0004962C(void) {
    return D_0005C618;
}

void func_00049638(void) {
    D_0005C61C = 1;
}

void func_00049648(void) {
    D_0005C61C = 0;
}

s32 func_00049654(void) {
    return (s32) (u8) D_0005C61C;
}
