/* SCE's __malloc_lock/__malloc_unlock: nested interrupt disabling */
#include "common.h"
#include "rinit_decls.h"

void __malloc_lock(struct _reent *ptr) {
    int intr;

    intr = sceKernelCpuSuspendIntr();
    if (D_0000F5E0 == 0) {
        D_0000F5E4 = intr;
    }
    D_0000F5E0 += 1;
}

void __malloc_unlock(struct _reent *ptr) {
    if (--D_0000F5E0 == 0) {
        sceKernelCpuResumeIntr(D_0000F5E4);
    }
}
