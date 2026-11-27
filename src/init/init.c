/* cflags[152]: -O2 -frename-registers -mno-split-addresses */
/* cflags[151]: -O2 -frename-registers -mno-split-addresses */
/* cflags[150]: -O2 -frename-registers -mno-split-addresses */
/* cflags[100,102]: -O2 -mno-split-addresses */
#include "common.h"
#include "init_decls.h"

INCLUDE_ASM("nonmatchings/init", func_00000000);

#if FW_VERSION >= 260 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/init", D_00001EB8);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/init", D_00001DC8);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/init", func_00000028);

INCLUDE_ASM("nonmatchings/init", func_0000007C);

INCLUDE_ASM("nonmatchings/init", func_000000DC);
#endif

#if FW_VERSION >= 151
INCLUDE_ASM("nonmatchings/init", sceKernelGetChunk);
#endif

#if FW_VERSION == 100 || FW_VERSION == 150
s32 sceKernelGetChunk(s32 arg0) {
    s32 var_v0;

    if ((u32) arg0 < 0x10U) {
        var_v0 = D_00002248[arg0];
    } else {
        Kprintf(D_00001DC8, "sceKernelGetChunk");
        var_v0 = 0x800200DE;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 201)
s32 sceKernelRegisterChunk(u32 chunkId, s32 blockId) {
    if (chunkId < 16) {
        D_00002248[chunkId] = blockId;
        return blockId;
    }
    Kprintf(D_00001DC8, "sceKernelRegisterChunk");
    return 0x800200DE;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/init", sceKernelRegisterChunk);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 152)
s32 sceKernelReleaseChunk(u32 chunkId) {
    if (chunkId < 16) {
        D_00002248[chunkId] = -1;
        return -1;
    }
    Kprintf(D_00001DC8, "sceKernelReleaseChunk");
    return 0x800200DE;
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/init", sceKernelReleaseChunk);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/init", D_00001B10);

INCLUDE_RODATA("nonmatchings/init", D_00001B14);

INCLUDE_RODATA("nonmatchings/init", D_00001B28);

INCLUDE_RODATA("nonmatchings/init", D_00001B3C);

INCLUDE_RODATA("nonmatchings/init", D_00001B54);

INCLUDE_RODATA("nonmatchings/init", D_00001B6C);

INCLUDE_RODATA("nonmatchings/init", D_00001B8C);

INCLUDE_RODATA("nonmatchings/init", D_00001BA4);

INCLUDE_RODATA("nonmatchings/init", D_00001BB8);

INCLUDE_RODATA("nonmatchings/init", D_00001BD0);

INCLUDE_RODATA("nonmatchings/init", D_00001BE8);

INCLUDE_RODATA("nonmatchings/init", D_00001BFC);

INCLUDE_RODATA("nonmatchings/init", D_00001C14);

INCLUDE_RODATA("nonmatchings/init", D_00001C24);

INCLUDE_RODATA("nonmatchings/init", D_00001C84);

INCLUDE_RODATA("nonmatchings/init", D_00001C8C);

INCLUDE_RODATA("nonmatchings/init", D_00001CA0);

INCLUDE_RODATA("nonmatchings/init", D_00001CA4);

INCLUDE_RODATA("nonmatchings/init", D_00001CA8);

INCLUDE_RODATA("nonmatchings/init", D_00001CF4);

INCLUDE_RODATA("nonmatchings/init", D_00001CF8);

INCLUDE_RODATA("nonmatchings/init", D_00001D2C);

INCLUDE_RODATA("nonmatchings/init", D_00001D40);

INCLUDE_RODATA("nonmatchings/init", D_00001D54);
#endif

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

s32 sceKernelApplicationType(void) {
    return D_00002450;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/init", func_0000013C);

INCLUDE_ASM("nonmatchings/init", func_000001F0);

INCLUDE_ASM("nonmatchings/init", func_00000260);

INCLUDE_ASM("nonmatchings/init", func_00000358);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/init", func_00000488);
#endif

#if FW_VERSION == 102
INCLUDE_RODATA("nonmatchings/init", D_00002008);

INCLUDE_RODATA("nonmatchings/init", D_00002038);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/init", func_00000248);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/init", D_00002010);
#endif

#if FW_VERSION < 150
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

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/init", func_00000908);

INCLUDE_RODATA("nonmatchings/init", D_00002184);

INCLUDE_ASM("nonmatchings/init", func_00000A5C);

INCLUDE_ASM("nonmatchings/init", func_00000C18);

INCLUDE_RODATA("nonmatchings/init", D_00002248_v100);
#endif

#if FW_VERSION == 102
INCLUDE_RODATA("nonmatchings/init", D_00002260);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/init", D_00002280);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/init", func_00001008);

INCLUDE_ASM("nonmatchings/init", func_000012D0);

INCLUDE_ASM("nonmatchings/init", func_00001328);

INCLUDE_ASM("nonmatchings/init", func_00001404);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/init", func_00001968);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/init", module_bootstart);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/init", sceKernelApplicationType);
#endif

#if FW_VERSION < 201
s32 module_reboot_before(void) {
    return 0;
}

s32 sceKernelInitApitype(void) {
    return D_00002620;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/init", func_00001A7C);

INCLUDE_ASM("nonmatchings/init", func_00001AC4);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/init", sceKernelBootFrom);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/init", func_00001284);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 func_00001284(void) {
    return 0x40;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/init", sceKernelInitFileName);
#endif

#if FW_VERSION < 201
s32 sceKernelInitFileName(void) {
    return D_00002644;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/init", sceKernelSetInitCallback);

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

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/init", sceKernelApplicationType);
#endif

#if FW_VERSION >= 250
s32 sceKernelStartIntrLogging(void) {
    return 0;
}

s32 sceKernelShowIntrHandlerInfo(void) {
    return 0;
}

s32 sceKernelShowIntrMaskTime(void) {
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
INCLUDE_ASM("nonmatchings/init", module_bootstart);
#endif

#if FW_VERSION == 201
s32 module_reboot_before(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/init", sceKernelInitApitype);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/init", InitForKernel_48348387);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/init", sceKernelBootFrom);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/init", func_00000FCC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/init", sceKernelInitFileName);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/init", sceKernelSetInitCallback);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/init", func_000003F0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/init", func_00000388);
#endif

#if FW_VERSION >= 310
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

    sceKernelFillFreeBlock(1, 0);
    sceKernelFillFreeBlock(5, 0);
    sceKernelVolatileMemUnlock(0);
    temp_s0 = sceKernelFillFreeBlock(2, 0);
    sceKernelFillFreeBlock(8, 0);
    sceKernelFillFreeBlock(0xA, 0);
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
