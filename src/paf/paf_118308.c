#include "common.h"
#include "paf_decls.h"

void func_00118308(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_0019D204, 0x200U, 3U, NULL);
}

void func_00118348(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118364(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118380(void *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 2U, 0x20, NULL, NULL);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) + 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_v1 != 1) {

    } else {
        sceKernelClearEventFlag(M2C_FIELD(arg0, u32 *, 0), -2U);
    }
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 2);
}

void func_001183EC(void *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 2U, 0x20, NULL, NULL);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_v1 != 0) {

    } else {
        sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
    }
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 2);
}

void func_00118454(u32 *arg0) {
    sceKernelWaitEventFlag(*arg0, 3U, 0x20, NULL, NULL);
    sceKernelSetEventFlag((s32) *arg0, 1);
}

void func_00118498(s32 *arg0) {
    sceKernelSetEventFlag(*arg0, 2);
}

