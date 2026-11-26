/* cflags[152]: -O0 */
#include "common.h"
#include "change_flash_attr_decls.h"

INCLUDE_ASM("nonmatchings/change_flash_attr", func_00000000);

INCLUDE_ASM("nonmatchings/change_flash_attr", func_000000EC);

s32 module_start(s32 arg0, s32 arg1) {
    sceKernelPowerLock(0);
    func_000000EC();
    sceKernelPowerUnlock(0);
    return 1;
}
