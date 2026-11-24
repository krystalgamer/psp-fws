#include "common.h"
#include "paf_decls.h"

void func_001184B8(struct Unk_func_001184B8_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_0019D210, 0x200U, 4U, NULL);
}

