/* cflags: -O1 */
#include "common.h"
#include "netfront_decls.h"

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_05FF44", func_0005FF44);

void func_0005FF54(void **arg0, s32 *arg1, s32 *arg2) {
    void *temp_v1;

    temp_v1 = *arg0;
    *arg1 = M2C_FIELD(temp_v1, s32 *, 0x74);
    *arg2 = M2C_FIELD(temp_v1, s32 *, 0x78);
}

s32 func_0005FF6C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x70);
}

s32 func_0005FF78(s32 **arg0) {
    return sceHVNetfront_Module_896E55F6(arg0) + 0x38;
}

s32 func_0005FF98(s32 **arg0) {
    return sceHVNetfront_Module_896E55F6(arg0) + 8;
}

s32 func_0005FFB8(s32 **arg0) {
    return sceHVNetfront_Module_896E55F6(arg0) + 0x18;
}

s32 func_0005FFD8(s32 **arg0) {
    return sceHVNetfront_Module_896E55F6(arg0) + 0x28;
}

