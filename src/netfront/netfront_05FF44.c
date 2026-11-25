/* cflags: -O1 */
#include "common.h"
#include "netfront_decls.h"

void func_0005FF44(void **arg0, s32 arg1, s32 arg2) {
    struct Unk_func_0005FF44_temp_v0 *temp_v0;

    temp_v0 = *arg0;
    temp_v0->unk78 = arg2;
    temp_v0->unk74 = arg1;
}

void func_0005FF54(void **arg0, s32 *arg1, s32 *arg2) {
    struct Unk_func_0005FF54_temp_v1 *temp_v1;

    temp_v1 = *arg0;
    *arg1 = temp_v1->unk74;
    *arg2 = temp_v1->unk78;
}

s32 func_0005FF6C(struct Unk_vt_func_0005FF6C_arg0 **arg0) {
    return (*arg0)->unk70;
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
