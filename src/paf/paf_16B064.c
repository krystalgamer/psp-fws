/* lang: c++ */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

s32 func_0016B064(struct Unk_func_0016B064_0 *arg0) {
    return (arg0->unk0 << 0x10) + (arg0->unk1 << 8) + arg0->unk2;
}

INCLUDE_ASM("nonmatchings/paf_16B064", func_0016B084);
