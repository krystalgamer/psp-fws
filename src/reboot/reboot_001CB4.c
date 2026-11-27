/* cflags[150,151]: -O2 -frename-registers -mno-split-addresses */
/* compiler[151]: 1.6.1 */
/* compiler[150]: 1.6.1 */
/* cflags[100]: -O2 -mno-split-addresses */
/* cflags: -O1 */
#include "common.h"
#include "reboot_decls.h"

s32 func_00001CB4(void) {
    return D_00016DEC;
}

s32 func_00001CC0(s32 arg0) {
    D_00016DEC = arg0;
    return arg0;
}

s32 func_00001CD0(u32 arg0, s32 arg1) {
    D_00017140 = arg0;
    D_00017144 = arg1;
    return 0;
}

#if FW_VERSION == 100
s32 func_00001B94(u32 bit) {
    if (bit < 32) {
        return (D_00017140 >> bit) & 1;
    }
    return 0x80020001;
}
#endif

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001CE8);
#endif

#if FW_VERSION == 150
s32 func_00001CE8(u32 arg0) {
    s32 var_a0;

    var_a0 = 0x80020001;
    if (arg0 < 0x20U) {
        var_a0 = ((u32) D_00017140 >> arg0) & 1;
    }
    return var_a0;
}
#endif

s32 func_00001D14(void) {
    return D_00017140;
}

#if FW_VERSION == 100
s32 func_00001BCC(u32 bit) {
    if (bit < 32) {
        return D_00017140 |= 1 << bit;
    }
    return 0x80020001;
}
#else
INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001D20);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001D3C);
#endif

s32 func_00001D58(void) {
    return D_00017144;
}

s32 func_00001D64(s32 arg0) {
    D_00017148 = arg0;
    return 0;
}

s32 func_00001D74(void) {
    return D_00017148;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001D80);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00001E20);

INCLUDE_RODATA("nonmatchings/reboot_001CB4", D_00014B10);

INCLUDE_RODATA("nonmatchings/reboot_001CB4", D_00014B30);

INCLUDE_RODATA("nonmatchings/reboot_001CB4", D_00014B4C);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00002050);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00002294);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00002938);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_00002964);

INCLUDE_ASM("nonmatchings/reboot_001CB4", func_0000298C);

void func_00002A00(u8 *arg0, u8 *arg1) {
    u8 *var_a0;
    u8 *var_a1;
    u8 var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v0 = *var_a1;
    if (var_v0 != 0) {
        do {
            *var_a0 = var_v0;
            var_a1 += 1;
            var_v0 = *var_a1;
            var_a0 += 1;
        } while (var_v0 != 0);
    }
    *var_a0 = 0;
}
#endif
