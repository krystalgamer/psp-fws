/* cflags: -O1 -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_middleware_037D10", func_00037D10);
#endif

#if FW_VERSION >= 303
void func_00037D10(struct Unk_func_00037D10_0 *arg0) {
    arg0->unk0 = &D_00056480;
    arg0->unk101C = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk1010 = 0;
    arg0->unk1014 = 0;
    arg0->unk1018 = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_middleware_037D10", func_00037D3C);
#endif

#if FW_VERSION >= 303
void func_00037D3C(struct Unk_func_00037D3C_0 *arg0) {
    arg0->unk0 = &D_00056480;
    arg0->unk101C = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk1010 = 0;
    arg0->unk1014 = 0;
    arg0->unk1018 = 0;
}
#endif

#if FW_VERSION != 282
void func_00037D68(M2C_UNK **arg0) {
    *arg0 = &D_00056480;
}

void func_00037D78(M2C_UNK **arg0) {
    *arg0 = &D_00056480;
}
#endif
