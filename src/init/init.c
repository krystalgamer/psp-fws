#include "common.h"
#include "init_decls.h"

INCLUDE_ASM("nonmatchings/init", func_00000000);

INCLUDE_RODATA("nonmatchings/init", D_00001DC8);

INCLUDE_ASM("nonmatchings/init", InitForKernel_2C6E9FE9);

INCLUDE_ASM("nonmatchings/init", InitForKernel_1D3256BA);

INCLUDE_ASM("nonmatchings/init", InitForKernel_CE88E870);

INCLUDE_RODATA("nonmatchings/init", D_00001E44);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_0000013C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_000001F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00000260);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00000358);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00000488);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/init", D_00002010);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00000598);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00000720);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/init", D_0000213C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00000908);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/init", D_00002184);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00000A5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00000C18);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/init", D_00002248_v100);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/init", D_00002280);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00001008);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_000012D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00001328);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00001404);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", syslib_D3744BE0);
#endif

#if FW_VERSION == 100
s32 module_reboot_before(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", InitForKernel_7A2333AD);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", InitForKernel_A6E71B93);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", func_00000208);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", func_00000584);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", InitForKernel_7233B5BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", func_00000E40);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", syslib_D3744BE0);
#endif

#if FW_VERSION != 100
s32 module_reboot_before(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", InitForKernel_7A2333AD);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", InitForKernel_27932388);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", func_00000FCC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", InitForKernel_A6E71B93);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", InitForKernel_9F9AE99C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", func_00001078);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", func_000011D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", func_000012E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", func_00001430);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", func_000016C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/init", func_000017D8);
#endif
