/* cflags: -O1 */
#include "common.h"
#include "netfront_decls.h"

void func_000CCCDC(void **arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    struct Unk_func_000CCCDC_temp_v0 *temp_v0;

    temp_v0 = *arg0;
    temp_v0->unk96 = arg4;
    temp_v0->unk90 = arg1;
    temp_v0->unk92 = arg2;
    temp_v0->unk94 = arg3;
}

void func_000CCCF4(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x98) = arg1;
}

s32 func_000CCD00(void) {
    return 0;
}

s32 func_000CCD08(void) {
    return 0;
}

s32 func_000CCD10(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0CCCDC", func_000CCD18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0CCCDC", func_000CCE14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0CCCDC", func_000CCF08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0CCCDC", func_000CCFB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0CCCDC", func_000CD158);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0CCCDC", func_000CD408);

s32 func_000CD494(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x80);
}

