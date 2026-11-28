/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
void func_0011BF54(struct Unk_func_0011BF54_0 *arg0) {
    arg0->unk0 = &D_0019D328;
    if (arg0->unk6C == 0) {

    } else {
        func_001654B8(0, 0, 0);
    }
    if (arg0->unk68 > 0) {
        sceKernelDeleteEventFlag(arg0->unk68);
    }
    func_0011CE28((s32) arg0);
}
#endif
