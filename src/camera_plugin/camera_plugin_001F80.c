/* cflags: -O1 */
#include "common.h"
#include "camera_plugin_decls.h"

void func_00001F80(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x330);
    M2C_FIELD(temp_v0, s32 *, 0x64) = arg2;
    M2C_FIELD(temp_v0, s32 *, 0x68) = arg1;
}

void func_00001F90(void *arg0, s8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x330), s8 *, 0x47) = arg1;
}

void func_00001F9C(void *arg0) {
    func_0001A948(M2C_FIELD(arg0, s32 *, 0x330));
}

INCLUDE_ASM("tmp/asm/352/camera_plugin/nonmatchings/camera_plugin_001F80", func_00001FB8);

