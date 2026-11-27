/* cflags[100]: -O2 -mno-split-addresses */
#include "common.h"
#include "rebooti_decls.h"

s32 func_00001B60(void) {
    return D_00014F1C;
}

s32 func_00001B6C(s32 arg0) {
    D_00014F1C = arg0;
    return arg0;
}

s32 func_00001B7C(u32 arg0, s32 arg1) {
    D_00015270 = arg0;
    D_00015274 = arg1;
    return 0;
}

s32 func_00001B94(u32 bit) {
    if (bit < 32) {
        return (D_00015270 >> bit) & 1;
    }
    return 0x80020001;
}

s32 func_00001BC0(void) {
    return D_00015270;
}

s32 func_00001BCC(u32 bit) {
    if (bit < 32) {
        return D_00015270 |= 1 << bit;
    }
    return 0x80020001;
}

s32 func_00001C04(void) {
    return D_00015274;
}

s32 func_00001C10(s32 arg0) {
    D_00015278 = arg0;
    return 0;
}

s32 func_00001C20(void) {
    return D_00015278;
}
