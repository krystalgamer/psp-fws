/* compiler[282,303,311,340]: 1.9.2 */
/* cflags[282,303,311,340]: -O1 */
/* compiler[271]: 1.9.2 */
/* cflags[271]: -O1 -mext */
/* cflags: -O1 */
#include "common.h"
#include "netfront_decls.h"

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EBEEC);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EBEF8);

void func_000EBFFC(struct Unk_func_000EBFFC_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk40 = arg2;
    arg0->unk3C = arg1;
}

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC008);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC024);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC040);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC158);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC1C0);

void func_000EC280(struct Unk_func_000EC280_0 *arg0) {
    arg0->unk8 = (s32) (arg0->unk8 | 1);
}

void func_000EC290(struct Unk_func_000EC290_0 *arg0) {
    arg0->unk8 = __builtin_allegrex_ins(arg0->unk8, 0, 0, 1);
}

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC2A0);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC2AC);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC2C8);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC2D4);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC2F0);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC2FC);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC318);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC324);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC350);

void func_000EC358(s32 arg0) {
    func_000F025C(arg0 + 0xC);
}

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC374);

INCLUDE_ASM("nonmatchings/netfront_0EBEEC", func_000EC37C);
#endif
