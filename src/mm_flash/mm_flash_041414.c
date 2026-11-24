/* cflags: -O1 */
#include "common.h"
#include "mm_flash_decls.h"

void func_00041414(struct Unk_func_00041414_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/mm_flash_041414", func_00041424);

void func_00041434(void) {
    func_00041580();
}

INCLUDE_ASM("nonmatchings/mm_flash_041414", func_00041450);

