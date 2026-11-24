#include "common.h"
#include "heaparea1_decls.h"

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

INCLUDE_ASM("nonmatchings/heaparea1", func_0000018C);

void func_000002BC(void) {
    func_0000018C(1, 0xFFFF);
}

void func_000002DC(void) {
    func_0000018C(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/heaparea1", func_000002FC);
