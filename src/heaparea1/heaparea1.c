#include "common.h"
#include "heaparea1_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/heaparea1", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/heaparea1", func_00000024);

INCLUDE_ASM("nonmatchings/heaparea1", func_000000AC);

s32 module_start(void) {
    func_00000000();
    return 0;
}

s32 module_stop(void) {
    func_00000354();
    return 0;
}

INCLUDE_ASM("nonmatchings/heaparea1", scePafHeaparea_F50AAE41);

INCLUDE_ASM("nonmatchings/heaparea1", scePafHeaparea_ACCE25B2);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/heaparea1", D_0000044C);

INCLUDE_RODATA("nonmatchings/heaparea1", D_00000450);

INCLUDE_RODATA("nonmatchings/heaparea1", D_00000468);

INCLUDE_RODATA("nonmatchings/heaparea1", D_0000047C);

INCLUDE_RODATA("nonmatchings/heaparea1", D_000004A4);

INCLUDE_RODATA("nonmatchings/heaparea1", D_000004B4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/heaparea1", D_000004C4_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/heaparea1", D_000004C4_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/heaparea1", D_000004C4_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/heaparea1", D_000004C8);

INCLUDE_RODATA("nonmatchings/heaparea1", D_00000478);

INCLUDE_RODATA("nonmatchings/heaparea1", D_000004E8);

INCLUDE_RODATA("nonmatchings/heaparea1", D_00000488);

INCLUDE_RODATA("nonmatchings/heaparea1", D_0000048C);
#endif

INCLUDE_ASM("nonmatchings/heaparea1", func_0000018C);

void func_000002BC(void) {
    func_0000018C(1, 0xFFFF);
}

void func_000002DC(void) {
    func_0000018C(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/heaparea1", func_000002FC);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/heaparea1", func_00000354);
#endif
