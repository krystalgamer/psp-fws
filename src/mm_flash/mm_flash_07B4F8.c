/* cflags: -O1 */
#include "common.h"
#include "mm_flash_decls.h"

void func_0007B4F8(struct Unk_func_0007B4F8_0 *arg0, struct Unk_func_0007B4F8_1 *arg1, s32 arg2) {
    s32 var_v1;

    arg0->unk18 = arg2;
    var_v1 = 1;
    arg0->unk10 = 0;
    arg0->unk4 = 0;
    arg0->unk14 = 0;
    arg0->unk1C = 0;
    arg0->unkC = 0;
    arg0->unk8 = 0;
    arg0->unk0 = arg1;
    if (arg1 != NULL) {
        var_v1 = arg1->unk188;
    }
    arg0->unk10 = 2;
    arg0->unk64 = var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007B534);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007B570);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007B5B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007B7FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007BB08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007BE54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007C340);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007C394);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_07B4F8", func_0007C6F0);

void func_0007C8EC(s32 *arg0) {
    *arg0 = 0;
}

void func_0007C8F4(void) {
    func_0007C92C();
}

void func_0007C910(void) {
    func_0007C92C();
}

