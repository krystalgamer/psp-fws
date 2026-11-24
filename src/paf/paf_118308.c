#include "common.h"
#include "paf_decls.h"

void func_00118308(struct Unk_func_00118308_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_0019D204, 0x200U, 3U, NULL);
}

void func_00118348(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118364(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118380(struct Unk_func_00118380_0 *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(arg0->unk0, 2U, 0x20, NULL, NULL);
    temp_v1 = arg0->unk4 + 1;
    arg0->unk4 = temp_v1;
    if (temp_v1 != 1) {

    } else {
        sceKernelClearEventFlag(arg0->unk0, -2U);
    }
    sceKernelSetEventFlag((s32) arg0->unk0, 2);
}

void func_001183EC(struct Unk_func_001183EC_0 *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(arg0->unk0, 2U, 0x20, NULL, NULL);
    temp_v1 = arg0->unk4 - 1;
    arg0->unk4 = temp_v1;
    if (temp_v1 != 0) {

    } else {
        sceKernelSetEventFlag((s32) arg0->unk0, 1);
    }
    sceKernelSetEventFlag((s32) arg0->unk0, 2);
}

void func_00118454(u32 *arg0) {
    sceKernelWaitEventFlag(*arg0, 3U, 0x20, NULL, NULL);
    sceKernelSetEventFlag((s32) *arg0, 1);
}

void func_00118498(s32 *arg0) {
    sceKernelSetEventFlag(*arg0, 2);
}

