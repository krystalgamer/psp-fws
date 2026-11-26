/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

#if FW_VERSION >= 303
s32 func_00037308(struct Unk_func_00037308_0 *arg0) {
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_037308", func_00037318);

INCLUDE_ASM("nonmatchings/lftv_middleware_037308", func_000373B8);

INCLUDE_ASM("nonmatchings/lftv_middleware_037308", func_00037438);

INCLUDE_ASM("nonmatchings/lftv_middleware_037308", func_000376B8);

void func_00037730(void) {
}

INCLUDE_ASM("nonmatchings/lftv_middleware_037308", func_00037738);

INCLUDE_ASM("nonmatchings/lftv_middleware_037308", func_00037798);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_037308", func_000377E8);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
void func_000377E8(struct Unk_func_000377E8_0 *arg0) {
    func_00039DEC(arg0);
    arg0->unk0 = &D_00056460;
    memset((u8 *)arg0 + 0x40, 0, 0x6C);
    arg0->unkAC = 0;
    arg0->unkB0 = 0;
    arg0->unkB4 = 0;
    arg0->unkB8 = 0;
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_037308", func_00037838);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
void func_00037838(struct Unk_func_00037838_0 *arg0) {
    func_00039DEC(arg0);
    arg0->unk0 = &D_00056460;
    memset((u8 *)arg0 + 0x40, 0, 0x6C);
    arg0->unkAC = 0;
    arg0->unkB0 = 0;
    arg0->unkB4 = 0;
    arg0->unkB8 = 0;
}
#endif

#if FW_VERSION >= 303
void func_00037888(s32 **arg0) {
    *arg0 = &D_00056460;
    func_00037ABC((s32) arg0);
    func_00039E1C(arg0);
}

void func_000378C0(s32 **arg0) {
    *arg0 = &D_00056460;
    func_00037ABC((s32) arg0);
    func_00039E1C(arg0);
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_037308", func_000378F8);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
void func_000378F8(s32 **arg0) {
    *arg0 = &D_00056460;
    func_00037ABC((s32) arg0);
    func_00039E1C(arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 303
s32 func_00037938(struct Unk_func_00037938_0 *arg0, s32 arg1) {
    arg0->unkB0 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_037308", func_00037944);

INCLUDE_ASM("nonmatchings/lftv_middleware_037308", func_00037ABC);

s32 func_00037B38(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_037308", func_00037B40);
#endif
