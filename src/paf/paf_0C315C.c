#include "common.h"
#include "paf_decls.h"

#if FW_VERSION != 200
INCLUDE_ASM("nonmatchings/paf_0C315C", func_000C315C);
#else
void func_000C315C(void) {
    s32 temp_v0;

    temp_v0 = scePaf_B7E6052B(0x330);
    scePaf_84485F54(temp_v0, 0, 0);
    D_001A53FC = temp_v0;
    func_0000202C(temp_v0 + 4, (s32) "phi_manager");
}
#endif
