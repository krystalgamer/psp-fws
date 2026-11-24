/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

s32 func_000829FC(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 < 2) {
        var_v1 = M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x30);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mm_flash_0829FC", func_00082A1C);

INCLUDE_ASM("nonmatchings/mm_flash_0829FC", func_00082AD0);

INCLUDE_ASM("nonmatchings/mm_flash_0829FC", func_00082B84);

INCLUDE_ASM("nonmatchings/mm_flash_0829FC", func_00082C34);

INCLUDE_ASM("nonmatchings/mm_flash_0829FC", func_00082CC0);

INCLUDE_ASM("nonmatchings/mm_flash_0829FC", func_00082E50);

INCLUDE_ASM("nonmatchings/mm_flash_0829FC", func_00082EDC);

INCLUDE_ASM("nonmatchings/mm_flash_0829FC", func_00082EEC);

INCLUDE_ASM("nonmatchings/mm_flash_0829FC", func_00082F9C);

INCLUDE_ASM("nonmatchings/mm_flash_0829FC", func_00082FBC);

INCLUDE_ASM("nonmatchings/mm_flash_0829FC", func_00083000);

void func_00083138(M2C_UNK **arg0) {
    *arg0 = &D_000C0BA0;
}

void func_00083148(M2C_UNK **arg0) {
    *arg0 = &D_000C0BA0;
}

void func_00083158(M2C_UNK **arg0) {
    *arg0 = &D_000C0BA0;
}

s32 func_00083168(s32 arg0, s32 *arg1) {
    *arg1 = arg0;
    return 0;
}

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C09E0);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C09F8);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A10);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A18);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A1C);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A20);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A24);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A28);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A2C);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A30);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A34);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A38);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A3C);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A40);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A44);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A48);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A4C);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A50);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A54);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A58);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A5C);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A60);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A64);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A68);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A6C);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A70);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A74);

INCLUDE_RODATA("nonmatchings/mm_flash_0829FC", D_000C0A78);

