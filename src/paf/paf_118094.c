#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_118094", scePaf_B884B031);

void func_001180D8(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void scePaf_9399AF50(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void scePaf_C1F72218(void *arg0) {
    u32 temp_v0;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 1U, 0x20, NULL, NULL);
    temp_v0 = sceKernelGetThreadId();
    if (M2C_FIELD(arg0, u32 *, 4) != temp_v0) {
        sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
        sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 3U, 0x20, NULL, NULL);
        M2C_FIELD(arg0, u32 *, 4) = temp_v0;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
}

void scePaf_539F2583(void *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 1U, 0x20, NULL, NULL);
    temp_v1 = M2C_FIELD(arg0, s32 *, 8) - 1;
    M2C_FIELD(arg0, s32 *, 8) = temp_v1;
    if (temp_v1 == 0) {
        sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 2);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_118094", func_0011820C);

void func_00118288(void) {
    func_0011820C(1, 0xFFFF);
}

void func_001182A8(void) {
    func_0011820C(0, 0xFFFF);
}

