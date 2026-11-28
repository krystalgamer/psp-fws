#include "common.h"
#include "rinit_decls.h"

void __malloc_lock(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    if (D_0000F5E0 == 0) {
        D_0000F5E4 = temp_a0;
    }
    D_0000F5E0 += 1;
}

void __malloc_unlock(void) {
    s32 temp_v0;

    temp_v0 = D_0000F5E0 - 1;
    D_0000F5E0 = temp_v0;
    if (temp_v0 != 0) {

    } else {
        sceKernelCpuResumeIntr(D_0000F5E4);
    }
}

