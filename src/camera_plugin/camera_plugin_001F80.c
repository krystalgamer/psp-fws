/* cflags: -O1 */
#include "common.h"
#include "camera_plugin_decls.h"

void func_00001F80(struct Unk_func_00001F80_0 *arg0, s32 arg1, s32 arg2) {
    struct Unk_func_00001F80_temp_v0 *temp_v0;

    temp_v0 = arg0->unk330;
    temp_v0->unk64 = arg2;
    temp_v0->unk68 = arg1;
}

void func_00001F90(struct Unk_func_00001F90_0 *arg0, s8 arg1) {
    M2C_FIELD(arg0->unk330, s8 *, 0x47) = arg1;
}

void func_00001F9C(struct Unk_func_00001F9C_0 *arg0) {
    func_0001A948(arg0->unk330);
}

INCLUDE_ASM("tmp/asm/352/camera_plugin/nonmatchings/camera_plugin_001F80", func_00001FB8);

