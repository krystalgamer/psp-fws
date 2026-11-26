/* cflags: -O1 -frename-registers */
#include "common.h"
#include "pops_decls.h"

#if FW_VERSION == 302
s32 func_00032938(void) {
    return 0x10600;
}

INCLUDE_ASM("nonmatchings/pops_032938", func_00032944);
#endif

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C778);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C788);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C790);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C798);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C7A8);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C7B8);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C7D8);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C818);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C858);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C864);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C86C);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C874);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C880);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C890);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C8B0);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C8F0);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C910);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C918);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C928);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C948);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010C988);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CA08);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CB08);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CB30);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CB44);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CB60);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CB84);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CBC0);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CC3C);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CD38);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CD50);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CDD0);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CDDC);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CDE4);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CE64);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CEC4);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CF20);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010CF44);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010D744);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010D940);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010DA40);

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/pops_032938", func_000273AC);

INCLUDE_ASM("nonmatchings/pops_032938", func_00029374);
#else
INCLUDE_ASM("nonmatchings/pops_032938", func_00033964);
#endif

INCLUDE_ASM("nonmatchings/pops_032938", func_00033B14);

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/pops_032938", func_00033DD4);
#endif

INCLUDE_ASM("nonmatchings/pops_032938", func_00034150);

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/pops_032938", func_00034288);

INCLUDE_ASM("nonmatchings/pops_032938", func_00034450);

INCLUDE_RODATA("nonmatchings/pops_032938", D_0010DB7C);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/pops_032938", D_0010F888);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/pops_032938", func_00034518);

INCLUDE_ASM("nonmatchings/pops_032938", func_00034608);

s32 func_000347E4(void) {
    return 1;
}

void func_000347EC(void) {
    sceIoRename();
}

s32 func_00034808(void) {
    return -1;
}

s32 func_00034810(void) {
    return -1;
}

s32 func_00034818(void) {
    return -1;
}

s32 func_00034820(void) {
    return -1;
}

s32 func_00034828(void) {
    return -1;
}

s32 func_00034830(void) {
    return -1;
}

s32 func_00034838(void) {
    return -1;
}

s32 func_00034840(void) {
    return -1;
}

s32 func_00034848(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/pops_032938", func_00034850);

void func_000348A8(void) {
    sceKernelLibcTime();
}

void func_000348C4(void) {
    sceKernelLibcGettimeofday();
}

s32 func_000348E0(void) {
    return -1;
}
#endif
