/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("nonmatchings/paf_000B7EBC", func_000B7EBC);

INCLUDE_ASM("nonmatchings/paf_000B7EBC", Job_Cancel);

INCLUDE_ASM("nonmatchings/paf_000B7EBC", Job_Cancel2);

s32 Job_isCanceled(struct Unk_scePaf_75062BCF_0 *arg0) {
    return arg0->unk18 == 3;
}
