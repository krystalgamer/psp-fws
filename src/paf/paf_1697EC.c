/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_1697EC", func_001697EC);
#else
void func_001697EC(struct Unk_func_001697EC_0 *arg0) {
    func_0016B084(arg0->unk20 + 0x10);
}
#endif
