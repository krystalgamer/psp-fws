/* cflags: -O2 -frename-registers */
#include "common.h"
#include "loadexec_decls.h"

INCLUDE_RODATA("tmp/asm/201/loadexec/nonmatchings/loadexec", D_00002D04);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_00000000);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_000001C4);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_000005F4);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_000009E8);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_00000AD0);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_00000C18);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_00000EB0);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_00000FC0);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_00001110);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", sceKernelLoadExec);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", LoadExecForUser_2AC9954B);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", LoadExecForKernel_A3D5E142);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", LoadExecForKernel_6D302D3D);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", LoadExecForKernel_659188E1);

s32 func_00001A98(void) {
    return (KDebugForKernel_428A8DA3() != 0) ? 0 : 0x80020149;
}

s32 sceKernelExitGame(void) {
    return LoadExecForUser_2AC9954B(0);
}

void LoadExecForKernel_1B97BDB3(s32 arg0, s32 arg1) {
    func_00001FA8(0x120, arg0, arg1, 0x10000);
}

void LoadExecForKernel_821BE114(s32 arg0, s32 arg1) {
    func_00001FA8(0x121, arg0, arg1, 0x10000);
}

s32 LoadExecForKernel_7B7C47EF(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80020002;
    if (KDebugForKernel_428A8DA3() != 0) {
        var_v1 = func_00001FA8(0x122, arg0, arg1, 0x10000);
    }
    return var_v1;
}

void LoadExecForKernel_015DA036(s32 arg0, s32 arg1, s32 arg2) {
    func_00002190(0x130, arg0, arg1, arg2, 0x10000);
}

s32 LoadExecForKernel_4F41E75E(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80020002;
    if (KDebugForKernel_428A8DA3() != 0) {
        var_v1 = func_00002190(0x131, arg0, arg1, arg2, 0x10000);
    }
    return var_v1;
}

void LoadExecForKernel_31DF42BF(s32 arg0, s32 arg1) {
    func_00001FA8(0x140, arg0, arg1, 0x10000);
}

void LoadExecForKernel_28D0D249(s32 arg0, s32 arg1) {
    func_00001FA8(0x141, arg0, arg1, 0x10000);
}

void LoadExecForKernel_70901231(s32 arg0, s32 arg1) {
    func_00001FA8(0x142, arg0, arg1, 0x10000);
}

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", sceKernelRegisterExitCallback);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", LoadExecForKernel_D9739B89);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", LoadExecForKernel_62A27008);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", LoadExecForKernel_11412288);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", syslib_D3744BE0);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_00001DF4);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_00001F08);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_00001FA8);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_00002190);

INCLUDE_RODATA("tmp/asm/201/loadexec/nonmatchings/loadexec", D_00002F08);

INCLUDE_RODATA("tmp/asm/201/loadexec/nonmatchings/loadexec", D_00002F0C);

INCLUDE_RODATA("tmp/asm/201/loadexec/nonmatchings/loadexec", D_00002F14);

INCLUDE_RODATA("tmp/asm/201/loadexec/nonmatchings/loadexec", D_00002F2C);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_00002304);

INCLUDE_ASM("tmp/asm/201/loadexec/nonmatchings/loadexec", func_00002700);
