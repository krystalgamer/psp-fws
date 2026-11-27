#include "common.h"
#include "pafmini_decls.h"

INCLUDE_ASM("nonmatchings/pafmini_000337B0", func_000337B0);

INCLUDE_ASM("nonmatchings/pafmini_000337B0", Job_Cancel);

INCLUDE_ASM("nonmatchings/pafmini_000337B0", Job_Cancel2);

s32 Job_isCanceled(struct Unk_scePaf_75062BCF_0 *arg0) {
    return arg0->unk18 == 3;
}
