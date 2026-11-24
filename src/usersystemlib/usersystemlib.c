#include "common.h"
#include "usersystemlib_decls.h"

#if FW_VERSION == 100
s32 module_start(void) {
    sceKernelRegisterUserSpaceIntrStack(&D_000001C0, D_000001FC);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/usersystemlib", module_start);
#endif

INCLUDE_ASM("nonmatchings/usersystemlib", sceKernelCpuSuspendIntr);

INCLUDE_ASM("nonmatchings/usersystemlib", sceKernelCpuResumeIntr);

INCLUDE_ASM("nonmatchings/usersystemlib", sceKernelCpuResumeIntrWithSync);

#if FW_VERSION == 100
s32 sceKernelIsCpuIntrSuspended(s32 arg0) {
    return arg0 == 0;
}
#endif

#if FW_VERSION != 100
s32 sceKernelIsCpuIntrSuspended(s32 arg0) {
    return arg0 == 0;
}
#endif

INCLUDE_ASM("nonmatchings/usersystemlib", sceKernelIsCpuIntrEnable);

INCLUDE_RODATA("nonmatchings/usersystemlib", D_000001FC);
