#include "common.h"
#include "usersystemlib_decls.h"

INCLUDE_ASM("nonmatchings/usersystemlib", module_start);

INCLUDE_ASM("nonmatchings/usersystemlib", sceKernelCpuSuspendIntr);

INCLUDE_ASM("nonmatchings/usersystemlib", sceKernelCpuResumeIntr);

INCLUDE_ASM("nonmatchings/usersystemlib", sceKernelCpuResumeIntrWithSync);

s32 sceKernelIsCpuIntrSuspended(s32 arg0) {
    return arg0 == 0;
}

INCLUDE_ASM("nonmatchings/usersystemlib", sceKernelIsCpuIntrEnable);

INCLUDE_RODATA("nonmatchings/usersystemlib", D_000001FC);
