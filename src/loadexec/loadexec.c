/* cflags: -O2 -frename-registers */
#include "common.h"
#include "loadexec_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000000);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000130);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000214);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000280);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_000005F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_0000083C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002D04);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000000);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_000001C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_000005F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_000009E8);
#endif

INCLUDE_ASM("nonmatchings/loadexec", func_00000AD0);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002974);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000A68);
#endif

INCLUDE_ASM("nonmatchings/loadexec", func_00000C18);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000CA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000DAC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002AF4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002B00);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002B18);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002B48);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002B54);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002B88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000EB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00001148);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00001250);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00001350);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_0000162C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000EB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000FC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_00001110);
#endif

INCLUDE_ASM("nonmatchings/loadexec", sceKernelLoadExec);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_2AC9954B);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", sceKernelExitGame);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E40);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E48);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E60);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E74);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E78);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002EA4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002ED4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00001934);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002F20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002F50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00001B64);
#endif

#if FW_VERSION == 100
void LoadExecForKernel_AC085B9E(s32 arg0, s32 arg1, s32 arg2) {
    func_00001934(arg0, arg1, arg2, 0);
}
#endif

#if FW_VERSION == 100
void LoadExecForKernel_1B97BDB3(s32 arg0, s32 arg1) {
    func_00001934(0x120, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION == 100
void LoadExecForKernel_821BE114(s32 arg0, s32 arg1) {
    func_00001934(0x121, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_015DA036);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_4F41E75E);
#endif

#if FW_VERSION == 100
void LoadExecForKernel_31DF42BF(s32 arg0, s32 arg1) {
    func_00001934(0x140, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION == 100
void LoadExecForKernel_28D0D249(s32 arg0, s32 arg1) {
    func_00001934(0x141, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION == 100
void LoadExecForKernel_70901231(s32 arg0, s32 arg1) {
    func_00001934(0x142, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForUser_2AC9954B);
#endif

INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_A3D5E142);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_62C459E1);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_918782E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_BB28E9B7);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_71A1D738);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_4D5C75BE);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", sceKernelRegisterExitCallback);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002FD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_62A27008);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_6D302D3D);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_659188E1);
#endif

#if FW_VERSION != 100
s32 func_00001A98(void) {
    return (KDebugForKernel_428A8DA3() != 0) ? 0 : 0x80020149;
}
#endif

#if FW_VERSION != 100
s32 sceKernelExitGame(void) {
    return LoadExecForUser_2AC9954B(0);
}
#endif

#if FW_VERSION != 100
void LoadExecForKernel_1B97BDB3(s32 arg0, s32 arg1) {
    func_00001FA8(0x120, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION != 100
void LoadExecForKernel_821BE114(s32 arg0, s32 arg1) {
    func_00001FA8(0x121, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION != 100
s32 LoadExecForKernel_7B7C47EF(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80020002;
    if (KDebugForKernel_428A8DA3() != 0) {
        var_v1 = func_00001FA8(0x122, arg0, arg1, 0x10000);
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
void LoadExecForKernel_015DA036(s32 arg0, s32 arg1, s32 arg2) {
    func_00002190(0x130, arg0, arg1, arg2, 0x10000);
}
#endif

#if FW_VERSION != 100
s32 LoadExecForKernel_4F41E75E(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80020002;
    if (KDebugForKernel_428A8DA3() != 0) {
        var_v1 = func_00002190(0x131, arg0, arg1, arg2, 0x10000);
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
void LoadExecForKernel_31DF42BF(s32 arg0, s32 arg1) {
    func_00001FA8(0x140, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION != 100
void LoadExecForKernel_28D0D249(s32 arg0, s32 arg1) {
    func_00001FA8(0x141, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION != 100
void LoadExecForKernel_70901231(s32 arg0, s32 arg1) {
    func_00001FA8(0x142, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", sceKernelRegisterExitCallback);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_D9739B89);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_62A27008);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_11412288);
#endif

INCLUDE_ASM("nonmatchings/loadexec", syslib_D3744BE0);

#if FW_VERSION == 100
void RebootForKernel_72E280A8(void) {

}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_00001DF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_00001F08);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_00001FA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_00002190);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002F08);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002F0C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002F14);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002F2C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_00002304);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/loadexec", func_00002700);
#endif
