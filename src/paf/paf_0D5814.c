#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0D5814", func_000D5814);
#else
void func_000D5814(struct Unk_func_000D5814_0 *arg0) {
    arg0->unk0 = &D_00199A10;
    scePaf_1B043852((u8 *)arg0 + 0x28);
    sceKernelDeleteSema(arg0->unk24);
    func_000D58C4((s32) ((u8 *)arg0 + 0x14));
    func_000D58C4((s32) ((u8 *)arg0 + 8));
    scePaf_E977B833((s32) arg0);
}
#endif
