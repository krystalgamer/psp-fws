/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 282
void func_001182C8(struct Unk_func_001182C8_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_0019D204, 0x200U, 3U, NULL);
}
#endif
