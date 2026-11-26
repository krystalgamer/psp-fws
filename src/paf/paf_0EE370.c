#include "common.h"
#include "paf_decls.h"

#if FW_VERSION != 282
INCLUDE_ASM("nonmatchings/paf_0EE370", func_000EE370);
#else
void func_000EE370(struct Unk_func_000EE370_0 *arg0) {
    arg0->unk0 = &D_0019AE48;
    sceKernelDeleteSema(arg0->unk370);
    scePaf_715E8DAB((s32) arg0);
}
#endif
