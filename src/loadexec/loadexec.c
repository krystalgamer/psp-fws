/* cflags: -O2 -frename-registers */
#include "common.h"
#include "loadexec_decls.h"

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/loadexec", D_00002B4C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadexec", func_00000000);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadexec", func_000001A8);

INCLUDE_ASM("nonmatchings/loadexec", func_00000578);

INCLUDE_ASM("nonmatchings/loadexec", func_00000924);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/loadexec", D_00002B5C);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002B70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000130);

INCLUDE_ASM("nonmatchings/loadexec", func_00000214);

INCLUDE_ASM("nonmatchings/loadexec", func_00000280);

INCLUDE_ASM("nonmatchings/loadexec", func_000005F0);

INCLUDE_ASM("nonmatchings/loadexec", func_0000083C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/loadexec", D_00002D04);

INCLUDE_ASM("nonmatchings/loadexec", func_00000000);

INCLUDE_ASM("nonmatchings/loadexec", func_000001C4);

INCLUDE_ASM("nonmatchings/loadexec", func_000005F4);

INCLUDE_ASM("nonmatchings/loadexec", func_000009E8);
#endif

INCLUDE_ASM("nonmatchings/loadexec", func_00000AD0);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002974);

INCLUDE_ASM("nonmatchings/loadexec", func_00000A68);
#endif

INCLUDE_ASM("nonmatchings/loadexec", func_00000C18);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadexec", func_00000CA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadexec", func_00000EC4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/loadexec", func_00001014);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadexec", func_00000FCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00000DAC);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002AF4);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002B00);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002B18);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002B48);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002B54);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002B88);
#endif

#if FW_VERSION == 100 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadexec", func_00000EB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00001148);

INCLUDE_ASM("nonmatchings/loadexec", func_00001250);

INCLUDE_ASM("nonmatchings/loadexec", func_00001350);

INCLUDE_ASM("nonmatchings/loadexec", func_0000162C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadexec", func_00000FC0);

INCLUDE_ASM("nonmatchings/loadexec", func_00001110);
#endif

INCLUDE_ASM("nonmatchings/loadexec", sceKernelLoadExec);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForUser_2AC9954B);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_2AC9954B);

INCLUDE_ASM("nonmatchings/loadexec", sceKernelExitGame);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E40);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E48);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002E60);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002E74);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E78);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002EA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadexec", D_00002DC4);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002DC8);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadexec", D_00002ED4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_A3D5E142);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_6D302D3D);

s32 func_000017D8(void) {
    return (KDebugForKernel_428A8DA3() != 0) ? 0 : 0x80020149;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_4D5C75BE);

INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_2AC9954B);

INCLUDE_ASM("nonmatchings/loadexec", sceKernelExitGame);
#endif

#if FW_VERSION == 152
s32 sceKernelExitGame(void) {
    return LoadExecForUser_2AC9954B(0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00001934);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002F20);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002F50);

INCLUDE_ASM("nonmatchings/loadexec", func_00001B64);
#endif

#if FW_VERSION < 152
void LoadExecForKernel_AC085B9E(s32 arg0, s32 arg1, s32 arg2) {
    func_00001934(arg0, arg1, arg2, 0);
}
#endif

#if FW_VERSION < 201
void LoadExecForKernel_1B97BDB3(s32 arg0, s32 arg1) {
    func_00001934(0x120, arg0, arg1, 0x10000);
}

void LoadExecForKernel_821BE114(s32 arg0, s32 arg1) {
    func_00001934(0x121, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_7B7C47EF);
#endif

#if FW_VERSION == 152
s32 LoadExecForKernel_7B7C47EF(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80020002;
    if (KDebugForKernel_428A8DA3() != 0) {
        var_v1 = func_00001934(0x122, arg0, arg1, 0x10000);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_015DA036);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void LoadExecForKernel_015DA036(s32 arg0, s32 arg1, s32 arg2) {
    func_00001D6C(0x130, arg0, arg1, arg2, 0x10000);
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_4F41E75E);
#endif

#if FW_VERSION == 152
s32 LoadExecForKernel_4F41E75E(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80020002;
    if (KDebugForKernel_428A8DA3() != 0) {
        var_v1 = func_00001D6C(0x131, arg0, arg1, arg2, 0x10000);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
void LoadExecForKernel_31DF42BF(s32 arg0, s32 arg1) {
    func_00001934(0x140, arg0, arg1, 0x10000);
}

void LoadExecForKernel_28D0D249(s32 arg0, s32 arg1) {
    func_00001934(0x141, arg0, arg1, 0x10000);
}

void LoadExecForKernel_70901231(s32 arg0, s32 arg1) {
    func_00001934(0x142, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_A3D5E142);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_62C459E1);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void LoadExecForKernel_62C459E1(s32 arg0, s32 arg1, s32 arg2) {
    func_00001D6C(0x100, arg0, arg1, arg2, 0x10000);
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_918782E8);

INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_BB28E9B7);

INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_71A1D738);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_4D5C75BE);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadexec", sceKernelRegisterExitCallback);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_D9739B89);

INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_659188E1);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E24);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002E54);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadexec", D_00002FD4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E94);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_6D302D3D);

INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_659188E1);

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

INCLUDE_ASM("nonmatchings/loadexec", sceKernelRegisterExitCallback);

INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_D9739B89);
#endif

INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_62A27008);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_11412288);
#endif

INCLUDE_ASM("nonmatchings/loadexec", syslib_D3744BE0);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/loadexec", func_00001A68);

INCLUDE_ASM("nonmatchings/loadexec", func_00001B7C);

INCLUDE_ASM("nonmatchings/loadexec", func_00001934);

INCLUDE_ASM("nonmatchings/loadexec", func_00001D6C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadexec", func_00001A1C);

INCLUDE_ASM("nonmatchings/loadexec", func_00001934);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/loadexec", D_00002FB0);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/loadexec", D_00002A9C);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002AA4);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002ABC);

INCLUDE_ASM("nonmatchings/loadexec", func_00001E90);

INCLUDE_ASM("nonmatchings/loadexec", func_00002284);

INCLUDE_ASM("nonmatchings/loadexec", func_000022D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadexec", func_00001D6C);

INCLUDE_ASM("nonmatchings/loadexec", func_00001FF0);

INCLUDE_ASM("nonmatchings/loadexec", func_00002138);
#endif

#if FW_VERSION == 100
void RebootForKernel_72E280A8(void) {

}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadexec", func_00001DF4);

INCLUDE_ASM("nonmatchings/loadexec", func_00001F08);

INCLUDE_ASM("nonmatchings/loadexec", func_00001FA8);

INCLUDE_ASM("nonmatchings/loadexec", func_00002190);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002F08);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002F0C);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002F14);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002F2C);

INCLUDE_ASM("nonmatchings/loadexec", func_00002304);

INCLUDE_ASM("nonmatchings/loadexec", func_00002700);
#endif
