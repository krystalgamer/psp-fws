/* compiler[271]: 1.9.2 */
/* cflags[271]: -O1 -mext */
/* cflags: -O1 */
#include "common.h"
#include "netfront_decls.h"

INCLUDE_ASM("nonmatchings/netfront_089A04", sceHVNetfront_Module_0EB196AD);

INCLUDE_ASM("nonmatchings/netfront_089A04", func_00089A10);

INCLUDE_ASM("nonmatchings/netfront_089A04", func_00089A20);

INCLUDE_ASM("nonmatchings/netfront_089A04", func_00089A74);

void func_00089AA4(s32 arg0) {
    sceHVNetfront_Module_BFE8268F(arg0 + 4);
}

INCLUDE_ASM("nonmatchings/netfront_089A04", func_00089AC0);

INCLUDE_ASM("nonmatchings/netfront_089A04", func_00089B34);

void func_00089B8C(s32 arg0) {
    sceHVNetfront_Module_0EB196AD(arg0 + 4);
}

void func_00089BA8(s32 arg0) {
    func_00089A10(arg0 + 4);
}

INCLUDE_ASM("nonmatchings/netfront_089A04", func_00089BC4);

void sceHVNetfront_Module_3CD6256A(s32 arg0) {
    func_00089BC4(arg0, 0);
}

void sceHVNetfront_Module_B8C28371(void) {
    func_00093668();
}

INCLUDE_ASM("nonmatchings/netfront_089A04", func_00089C54);

INCLUDE_ASM("nonmatchings/netfront_089A04", func_00089EB4);

INCLUDE_ASM("nonmatchings/netfront_089A04", func_0008A010);

s32 func_0008A040(struct Unk_func_0008A040_0 *arg0) {
    return arg0->unkC == 0;
}
