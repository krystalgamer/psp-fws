/* cflags: -O2 -frename-registers */
#include "common.h"
#include "sysclib_decls.h"

INCLUDE_ASM("nonmatchings/sysclib", SysclibForKernel_87C78FB6);

INCLUDE_ASM("nonmatchings/sysclib", toupper);

INCLUDE_ASM("nonmatchings/sysclib", tolower);

INCLUDE_ASM("nonmatchings/sysclib", SysclibForKernel_32C767F2);

INCLUDE_ASM("nonmatchings/sysclib", SysclibForKernel_D887CACD);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysclib", strtok_r);

INCLUDE_ASM("nonmatchings/sysclib", strtol);

INCLUDE_ASM("nonmatchings/sysclib", strtoul);
#else
INCLUDE_ASM("nonmatchings/sysclib", func_000007A8);
#endif

INCLUDE_ASM("nonmatchings/sysclib", strcat);

INCLUDE_ASM("nonmatchings/sysclib", strcspn);

INCLUDE_ASM("nonmatchings/sysclib", index);

INCLUDE_ASM("nonmatchings/sysclib", rindex);

INCLUDE_ASM("nonmatchings/sysclib", strnlen);

INCLUDE_ASM("nonmatchings/sysclib", strpbrk);

INCLUDE_ASM("nonmatchings/sysclib", strspn);

INCLUDE_ASM("nonmatchings/sysclib", strstr);

INCLUDE_ASM("nonmatchings/sysclib", strtok);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysclib", strtok_r);

INCLUDE_ASM("nonmatchings/sysclib", strtol);
#endif

INCLUDE_ASM("nonmatchings/sysclib", SysclibForKernel_1D83F344);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysclib", strtoul);
#endif

void bcmp(s32 arg0, s32 arg1, s32 arg2) {
    memcmp(arg0, arg1, arg2);
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysclib", bcopy);
#else
void bcopy(s32 arg0, s32 arg1) {
    memmove(arg1, arg0);
}
#endif

INCLUDE_ASM("nonmatchings/sysclib", bzero);

INCLUDE_ASM("nonmatchings/sysclib", strchr);

INCLUDE_ASM("nonmatchings/sysclib", strcmp);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysclib", strcpy);
#else
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
#endif

INCLUDE_ASM("nonmatchings/sysclib", strncpy);

INCLUDE_ASM("nonmatchings/sysclib", strlen);

INCLUDE_ASM("nonmatchings/sysclib", strrchr);

INCLUDE_ASM("nonmatchings/sysclib", strncat);

INCLUDE_ASM("nonmatchings/sysclib", strncmp);

INCLUDE_ASM("nonmatchings/sysclib", memchr);

INCLUDE_ASM("nonmatchings/sysclib", memcmp);

INCLUDE_ASM("nonmatchings/sysclib", memcpy);

INCLUDE_ASM("nonmatchings/sysclib", memset);

INCLUDE_ASM("nonmatchings/sysclib", memmove);

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/sysclib", D_00001EE8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/sysclib", D_00001ED0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysclib", D_00001EF0);
#endif

INCLUDE_ASM("nonmatchings/sysclib", SysclibForKernel_8AF6B8F8);

INCLUDE_ASM("nonmatchings/sysclib", SysclibForKernel_DF17F4A2);

INCLUDE_ASM("nonmatchings/sysclib", __udivdi3);

INCLUDE_ASM("nonmatchings/sysclib", __umoddi3);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysclib", func_00001ABC);
#endif

INCLUDE_ASM("nonmatchings/sysclib", sprintf);

INCLUDE_ASM("nonmatchings/sysclib", func_00001CE4);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysclib", func_00001B30);
#endif

#if FW_VERSION == 100
s32 module_start(void) {
    return func_00001B7C();
}

s32 func_00001B7C(void) {
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysclib", func_00001D18);
#endif

#if FW_VERSION >= 150
s32 module_start(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/sysclib", setjmp);

INCLUDE_ASM("nonmatchings/sysclib", longjmp);

INCLUDE_ASM("nonmatchings/sysclib", func_00001DC0);

INCLUDE_ASM("nonmatchings/sysclib", wmemset);
