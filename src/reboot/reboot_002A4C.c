/* compiler[151]: 1.6.1 */
/* compiler[150]: 1.6.1 */
/* cflags[100]: -O2 */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "reboot_decls.h"

#if FW_VERSION >= 150
void func_00002A4C(u8 *arg0, u8 *arg1, u32 arg2) {
    u32 var_a4;
    u8 *var_a0;
    u8 *var_a1;
    u8 var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = *var_a1;
    var_a4 = 0;
    if ((var_a3 != 0) & (arg2 != 0)) {
        do {
            *var_a0 = var_a3;
            var_a1 += 1;
            var_a4 += 1;
            var_a3 = *var_a1;
            var_a0 += 1;
        } while ((var_a3 != 0) & (var_a4 < arg2));
    }
}

INCLUDE_ASM("nonmatchings/reboot_002A4C", func_00002A90);

INCLUDE_ASM("nonmatchings/reboot_002A4C", func_00002AC4);

INCLUDE_ASM("nonmatchings/reboot_002A4C", func_00002B0C);

INCLUDE_ASM("nonmatchings/reboot_002A4C", func_00002B44);
#endif

INCLUDE_ASM("nonmatchings/reboot_002A4C", func_00002C2C);

INCLUDE_ASM("nonmatchings/reboot_002A4C", func_00002C58);

INCLUDE_ASM("nonmatchings/reboot_002A4C", func_00002C80);

s32 func_00002CB8(s32 arg0) {
    return arg0 == 0;
}

INCLUDE_ASM("nonmatchings/reboot_002A4C", func_00002CC0);

void func_00002CCC(const void *src, void *dst, u32 n) {
    func_00002EA0(dst, src, n);
}

void func_00002CF0(const void *a, const void *b, s32 n) {
    func_00002F14(a, b, n);
}
