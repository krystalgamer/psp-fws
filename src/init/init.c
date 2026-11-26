#include "common.h"
#include "init_decls.h"

INCLUDE_ASM("nonmatchings/init", func_00000000);

#if FW_VERSION >= 260 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/init", D_00001EB8);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/init", D_00001DC8);
#endif

INCLUDE_ASM("nonmatchings/init", InitForKernel_2C6E9FE9);

INCLUDE_ASM("nonmatchings/init", InitForKernel_1D3256BA);

INCLUDE_ASM("nonmatchings/init", InitForKernel_CE88E870);

#if FW_VERSION == 250 || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/init", func_000000A8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/init", func_000004B8);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/init", D_00001E44);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/init", func_00000208);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/init", func_0000053C);

INCLUDE_ASM("nonmatchings/init", InitForKernel_7233B5BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_0000013C);

INCLUDE_ASM("nonmatchings/init", func_000001F0);

INCLUDE_ASM("nonmatchings/init", func_00000260);

INCLUDE_ASM("nonmatchings/init", func_00000358);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/init", func_00000488);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/init", func_00000248);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/init", D_00002010);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/init", func_00000598);

INCLUDE_ASM("nonmatchings/init", func_00000720);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/init", D_0000213C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/init", func_000006CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
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

#if FW_VERSION < 201 || FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/init", syslib_D3744BE0);
#endif

#if FW_VERSION < 201
s32 module_reboot_before(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/init", InitForKernel_7A2333AD);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/init", InitForKernel_27932388);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/init", func_00001284);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 func_00001284(void) {
    return 0x40;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/init", InitForKernel_A6E71B93);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/init", InitForKernel_9F9AE99C);

INCLUDE_ASM("nonmatchings/init", func_00001330);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/init", D_0000297C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/init", func_00001474);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/init", D_000029C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/init", func_000015C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/init", func_00001784);

INCLUDE_RODATA("nonmatchings/init", D_00002A88);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/init", D_00002AB0);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/init", D_00002AC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/init", func_00001BB4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/init", func_00001650);

INCLUDE_ASM("nonmatchings/init", func_00001764);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/init", func_00001E80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/init", func_00000584);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/init", InitForKernel_7233B5BC);
#endif

#if FW_VERSION >= 250
s32 InitForKernel_C4F1BA33(void) {
    return 0;
}

s32 InitForKernel_33D30F49(void) {
    return 0;
}

s32 InitForKernel_FD0F25AD(void) {
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/init", func_00000E1C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/init", func_00000E40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/init", syslib_D3744BE0);
#endif

#if FW_VERSION == 201
s32 module_reboot_before(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/init", InitForKernel_7A2333AD);

INCLUDE_ASM("nonmatchings/init", InitForKernel_27932388);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/init", func_00000FCC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/init", InitForKernel_A6E71B93);

INCLUDE_ASM("nonmatchings/init", InitForKernel_9F9AE99C);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/init", func_00000388);

INCLUDE_ASM("nonmatchings/init", func_0000061C);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/init", func_000002C8);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/init", func_00001078);

INCLUDE_ASM("nonmatchings/init", func_000011D0);

INCLUDE_ASM("nonmatchings/init", func_000012E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/init", func_00001430);
#endif

#if FW_VERSION >= 280
s32 func_00001208(void) {
    s32 temp_s0;

    SysMemForKernel_A2A65F0E(1, 0);
    SysMemForKernel_A2A65F0E(5, 0);
    sceKernelVolatileMemUnlock(0);
    temp_s0 = SysMemForKernel_A2A65F0E(2, 0);
    SysMemForKernel_A2A65F0E(8, 0);
    SysMemForKernel_A2A65F0E(0xA, 0);
    memset(0x80010000, 0, 0x4000);
    return temp_s0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/init", func_000013A8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/init", func_00001750);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/init", func_00001678);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/init", func_000016C4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/init", func_000017D8);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/init", func_00001614);
#endif
