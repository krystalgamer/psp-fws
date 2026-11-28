/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -mext */
#include "common.h"
#include "heaparea2_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/heaparea2", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/heaparea2", func_00000024);

INCLUDE_ASM("nonmatchings/heaparea2", func_000000AC);

s32 module_start(void) {
    func_00000000();
    return 0;
}

s32 module_stop(void) {
    func_00000354();
    return 0;
}

INCLUDE_ASM("nonmatchings/heaparea2", sce_paf_private_getheaparea1);

INCLUDE_ASM("nonmatchings/heaparea2", sce_paf_private_getheaparea2);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/heaparea2", D_0000045C);

INCLUDE_RODATA("nonmatchings/heaparea2", D_00000460);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/heaparea2", D_00000478_v352);

INCLUDE_RODATA("nonmatchings/heaparea2", D_0000048C_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/heaparea2", D_00000478_v351);

INCLUDE_RODATA("nonmatchings/heaparea2", D_0000048C_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/heaparea2", D_00000478_v350);

INCLUDE_RODATA("nonmatchings/heaparea2", D_0000048C_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/heaparea2", D_000004B4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/heaparea2", D_000004C4_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/heaparea2", D_000004C4_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/heaparea2", D_000004C4_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/heaparea2", D_000004D4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/heaparea2", D_000004D8_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/heaparea2", D_000004D8_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/heaparea2", D_000004D8_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/heaparea2", D_00000478);

INCLUDE_RODATA("nonmatchings/heaparea2", D_000004F8);

INCLUDE_RODATA("nonmatchings/heaparea2", D_00000488);

INCLUDE_RODATA("nonmatchings/heaparea2", D_0000048C);
#endif

INCLUDE_ASM("nonmatchings/heaparea2", func_0000018C);

void func_000002BC(void) {
    func_0000018C(1, 0xFFFF);
}

void func_000002DC(void) {
    func_0000018C(0, 0xFFFF);
}
