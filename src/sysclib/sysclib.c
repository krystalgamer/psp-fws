/* cflags: -O2 -frename-registers */
#include "common.h"
#include "sysclib_decls.h"

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", SysclibForKernel_87C78FB6);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", toupper);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", tolower);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", SysclibForKernel_32C767F2);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", SysclibForKernel_D887CACD);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strtok_r);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strtol);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strtoul);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strcat);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strcspn);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", index);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", rindex);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strnlen);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strpbrk);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strspn);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strstr);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strtok);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", SysclibForKernel_1D83F344);

void bcmp(s32 arg0, s32 arg1, s32 arg2) {
    memcmp(arg0, arg1, arg2);
}

void bcopy(s32 arg0, s32 arg1) {
    memmove(arg1, arg0);
}

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", bzero);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strchr);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strcmp);

u8 *strcpy(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = arg1;
    var_v0 = NULL;
    var_a2 = arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strncpy);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strlen);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strrchr);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strncat);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", strncmp);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", memchr);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", memcmp);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", memcpy);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", memset);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", memmove);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", SysclibForKernel_8AF6B8F8);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", SysclibForKernel_DF17F4A2);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", __udivdi3);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", __umoddi3);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", sprintf);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", func_00001CE4);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", func_00001D18);

s32 module_start(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", setjmp);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", longjmp);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", func_00001DC0);

INCLUDE_ASM("tmp/asm/201/sysclib/nonmatchings/sysclib", wmemset);
