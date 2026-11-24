#include "common.h"
#include "heaparea2_decls.h"

INCLUDE_ASM("nonmatchings/heaparea2", func_00000024);

INCLUDE_ASM("nonmatchings/heaparea2", func_000000AC);

#if FW_VERSION == 100
s32 module_start(void) {
    func_00000000();
    return 0;
}
#endif

#if FW_VERSION == 100
s32 module_stop(void) {
    func_00000354();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_start(void) {
    func_00000000();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_00000354();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/heaparea2", scePafHeaparea_F50AAE41);

INCLUDE_ASM("nonmatchings/heaparea2", scePafHeaparea_ACCE25B2);

INCLUDE_ASM("nonmatchings/heaparea2", func_0000018C);

#if FW_VERSION == 100
void func_000002BC(void) {
    func_0000018C(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
void func_000002DC(void) {
    func_0000018C(0, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_000002BC(void) {
    func_0000018C(1, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_000002DC(void) {
    func_0000018C(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/heaparea2", func_000002FC);
