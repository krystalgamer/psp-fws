/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -mext */
/* cflags[152]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
#include "common.h"
#include "usersystemlib_decls.h"

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usersystemlib", module_start);
#else
s32 module_start(void) {
    sceKernelRegisterUserSpaceIntrStack(&D_000001C0, D_000001FC);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/usersystemlib", sceKernelCpuSuspendIntr);

INCLUDE_ASM("nonmatchings/usersystemlib", sceKernelCpuResumeIntr);

INCLUDE_ASM("nonmatchings/usersystemlib", sceKernelCpuResumeIntrWithSync);

s32 sceKernelIsCpuIntrSuspended(s32 arg0) {
    return arg0 == 0;
}

INCLUDE_ASM("nonmatchings/usersystemlib", sceKernelIsCpuIntrEnable);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/usersystemlib", D_0000017C);

INCLUDE_RODATA("nonmatchings/usersystemlib", D_00000180);

INCLUDE_RODATA("nonmatchings/usersystemlib", D_00000198);

INCLUDE_RODATA("nonmatchings/usersystemlib", D_000001AC);

INCLUDE_RODATA("nonmatchings/usersystemlib", D_000001C4);

INCLUDE_RODATA("nonmatchings/usersystemlib", D_000001D4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/usersystemlib", D_000001FC_v352);

INCLUDE_RODATA("nonmatchings/usersystemlib", D_00000200_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/usersystemlib", D_000001FC_v351);

INCLUDE_RODATA("nonmatchings/usersystemlib", D_00000200_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/usersystemlib", D_000001FC_v350);

INCLUDE_RODATA("nonmatchings/usersystemlib", D_00000200_v350);
#endif

INCLUDE_RODATA("nonmatchings/usersystemlib", D_000001FC);
