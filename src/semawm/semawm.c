/* cflags: -O0 */
#include "common.h"
#include "semawm_decls.h"

INCLUDE_ASM("nonmatchings/semawm", func_00000000);

INCLUDE_ASM("nonmatchings/semawm", func_000000D8);

INCLUDE_ASM("nonmatchings/semawm", sceSemawm_77C42467);

#if FW_VERSION == 100
s32 sceSemawm_51E51869(void) {
    s32 sp0;

    sp0 = -1;
    sp0 = 0;
    return sp0;
}
#endif

#if FW_VERSION != 100
s32 sceSemawm_51E51869(void) {
    s32 sp0;

    sp0 = -1;
    sp0 = 0;
    return sp0;
}
#endif

INCLUDE_RODATA("nonmatchings/semawm", D_00005718);

INCLUDE_RODATA("nonmatchings/semawm", D_00005724);

INCLUDE_RODATA("nonmatchings/semawm", D_00005730);

INCLUDE_RODATA("nonmatchings/semawm", D_00005738);

INCLUDE_RODATA("nonmatchings/semawm", D_00005740);

INCLUDE_RODATA("nonmatchings/semawm", D_00005748);

INCLUDE_ASM("nonmatchings/semawm", sceSemawm_4C268535);

INCLUDE_ASM("nonmatchings/semawm", sceSemawm_5B6C204D);

INCLUDE_ASM("nonmatchings/semawm", sceSemawm_6FEA0A45);

INCLUDE_ASM("nonmatchings/semawm", func_0000124C);

INCLUDE_ASM("nonmatchings/semawm", func_0000130C);

INCLUDE_ASM("nonmatchings/semawm", func_0000139C);

INCLUDE_ASM("nonmatchings/semawm", func_00002CE0);

INCLUDE_ASM("nonmatchings/semawm", func_00004624);

INCLUDE_ASM("nonmatchings/semawm", func_00004690);

INCLUDE_ASM("nonmatchings/semawm", func_00004BEC);

INCLUDE_ASM("nonmatchings/semawm", func_00004CB4);

INCLUDE_ASM("nonmatchings/semawm", func_00004DE8);

INCLUDE_ASM("nonmatchings/semawm", func_00004F1C);

INCLUDE_ASM("nonmatchings/semawm", func_00004FC0);

INCLUDE_ASM("nonmatchings/semawm", func_00005064);

INCLUDE_ASM("nonmatchings/semawm", func_000051F8);

INCLUDE_ASM("nonmatchings/semawm", func_00005390);

INCLUDE_ASM("nonmatchings/semawm", module_start);

INCLUDE_ASM("nonmatchings/semawm", module_stop);
