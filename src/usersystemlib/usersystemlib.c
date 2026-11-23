#include "common.h"
#include "usersystemlib_decls.h"

INCLUDE_ASM("tmp/asm/282/usersystemlib/nonmatchings/usersystemlib", module_start);

INCLUDE_ASM("tmp/asm/282/usersystemlib/nonmatchings/usersystemlib", sceKernelCpuSuspendIntr);

INCLUDE_ASM("tmp/asm/282/usersystemlib/nonmatchings/usersystemlib", sceKernelCpuResumeIntr);

INCLUDE_ASM("tmp/asm/282/usersystemlib/nonmatchings/usersystemlib", sceKernelCpuResumeIntrWithSync);

s32 sceKernelIsCpuIntrSuspended(s32 arg0) {
    return arg0 == 0;
}

INCLUDE_ASM("tmp/asm/282/usersystemlib/nonmatchings/usersystemlib", sceKernelIsCpuIntrEnable);

INCLUDE_RODATA("tmp/asm/282/usersystemlib/nonmatchings/usersystemlib", D_000001FC);
