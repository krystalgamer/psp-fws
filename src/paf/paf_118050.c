#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 282
void func_00118050(struct Unk_func_00118050_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_0019D1F0, 0x200U, 3U, NULL);
}
#endif
