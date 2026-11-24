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

INCLUDE_ASM("nonmatchings/init", func_000001F0);

INCLUDE_ASM("nonmatchings/init", func_00000260);

INCLUDE_ASM("nonmatchings/init", func_00000358);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/init", func_00000488);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/init", func_00000248);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/init", D_00002010);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00000598);

INCLUDE_ASM("nonmatchings/init", func_00000720);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/init", D_0000213C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/init", func_000006CC);

INCLUDE_ASM("nonmatchings/init", func_00001088);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00000908);

INCLUDE_RODATA("nonmatchings/init", D_00002184);

INCLUDE_ASM("nonmatchings/init", func_00000A5C);

INCLUDE_ASM("nonmatchings/init", func_00000C18);

INCLUDE_RODATA("nonmatchings/init", D_00002248_v100);

INCLUDE_RODATA("nonmatchings/init", D_00002280);

INCLUDE_ASM("nonmatchings/init", func_00001008);

INCLUDE_ASM("nonmatchings/init", func_000012D0);

INCLUDE_ASM("nonmatchings/init", func_00001328);

INCLUDE_ASM("nonmatchings/init", func_00001404);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/init", syslib_D3744BE0);

s32 module_reboot_before(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/init", InitForKernel_7A2333AD);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/init", InitForKernel_27932388);

INCLUDE_ASM("nonmatchings/init", func_00001284);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/init", InitForKernel_A6E71B93);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/init", InitForKernel_9F9AE99C);

INCLUDE_ASM("nonmatchings/init", func_00001330);

INCLUDE_RODATA("nonmatchings/init", D_0000297C);

INCLUDE_ASM("nonmatchings/init", func_00001474);

INCLUDE_RODATA("nonmatchings/init", D_000029C4);

INCLUDE_ASM("nonmatchings/init", func_000015C8);

INCLUDE_ASM("nonmatchings/init", func_00001784);

INCLUDE_RODATA("nonmatchings/init", D_00002A88);

INCLUDE_RODATA("nonmatchings/init", D_00002AC0);

INCLUDE_ASM("nonmatchings/init", func_00001BB4);

INCLUDE_ASM("nonmatchings/init", func_00001E80);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/init", func_00000208);

INCLUDE_ASM("nonmatchings/init", func_00000584);

INCLUDE_ASM("nonmatchings/init", InitForKernel_7233B5BC);

INCLUDE_ASM("nonmatchings/init", func_00000E40);

INCLUDE_ASM("nonmatchings/init", syslib_D3744BE0);

s32 module_reboot_before(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/init", InitForKernel_7A2333AD);

INCLUDE_ASM("nonmatchings/init", InitForKernel_27932388);

INCLUDE_ASM("nonmatchings/init", func_00000FCC);

INCLUDE_ASM("nonmatchings/init", InitForKernel_A6E71B93);

INCLUDE_ASM("nonmatchings/init", InitForKernel_9F9AE99C);

INCLUDE_ASM("nonmatchings/init", func_00001078);

INCLUDE_ASM("nonmatchings/init", func_000011D0);

INCLUDE_ASM("nonmatchings/init", func_000012E0);

INCLUDE_ASM("nonmatchings/init", func_00001430);

INCLUDE_ASM("nonmatchings/init", func_000016C4);

INCLUDE_ASM("nonmatchings/init", func_000017D8);
#endif
