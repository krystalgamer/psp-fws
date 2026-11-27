/* cflags[100,102]: -O2 -mno-split-addresses */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "loadexec_decls.h"

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/loadexec", D_00002B4C);
#endif

#if FW_VERSION < 201 || (FW_VERSION >= 280 && FW_VERSION < 300)
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

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadexec", func_00000130);

INCLUDE_ASM("nonmatchings/loadexec", func_00000214);

INCLUDE_ASM("nonmatchings/loadexec", func_00000280);

INCLUDE_ASM("nonmatchings/loadexec", func_000005F0);

INCLUDE_ASM("nonmatchings/loadexec", func_0000083C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/loadexec", D_00002D04);

INCLUDE_ASM("nonmatchings/loadexec", func_00000000);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/loadexec", D_00002F94);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/loadexec", func_000001C4);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/loadexec", D_00002FC4);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002FE4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/loadexec", func_00000640);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/loadexec", func_000005F4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/loadexec", func_000009E8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/loadexec", func_00000B0C);

INCLUDE_ASM("nonmatchings/loadexec", func_00000BD8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/loadexec", func_00000AD0);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/loadexec", D_00002974);

INCLUDE_ASM("nonmatchings/loadexec", func_00000A68);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/loadexec", func_00000C18);
#endif

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

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadexec", func_00000DAC);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002AF4);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002B00);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002B18);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002B48);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002B54);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002B88);
#endif

#if FW_VERSION < 150 || (FW_VERSION >= 201 && FW_VERSION < 280)
INCLUDE_ASM("nonmatchings/loadexec", func_00000EB0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadexec", func_00001148);

INCLUDE_ASM("nonmatchings/loadexec", func_00001250);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/loadexec", func_00001568);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/loadexec", func_00001350);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadexec", func_0000162C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/loadexec", func_00000FC0);

INCLUDE_ASM("nonmatchings/loadexec", func_00001110);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/loadexec", D_00002108);

INCLUDE_RODATA("nonmatchings/loadexec", D_0000210C);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002120);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002138);

INCLUDE_RODATA("nonmatchings/loadexec", D_0000214C);

INCLUDE_RODATA("nonmatchings/loadexec", D_0000216C);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002184);

INCLUDE_RODATA("nonmatchings/loadexec", D_0000219C);

INCLUDE_RODATA("nonmatchings/loadexec", D_000021B4);

INCLUDE_RODATA("nonmatchings/loadexec", D_000021CC);

INCLUDE_RODATA("nonmatchings/loadexec", D_000021E0);

INCLUDE_RODATA("nonmatchings/loadexec", D_000021EC);

INCLUDE_RODATA("nonmatchings/loadexec", D_000021FC);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002214);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002224);

INCLUDE_RODATA("nonmatchings/loadexec", D_0000224C);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002260);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002310);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002318);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002320);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002334);

INCLUDE_RODATA("nonmatchings/loadexec", D_0000234C);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002358);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002390);

INCLUDE_RODATA("nonmatchings/loadexec", D_000023A8);

INCLUDE_RODATA("nonmatchings/loadexec", D_000023C8);

INCLUDE_RODATA("nonmatchings/loadexec", D_000023D4);

INCLUDE_RODATA("nonmatchings/loadexec", D_000023E0);
#endif

#if FW_VERSION >= 270
INCLUDE_RODATA("nonmatchings/loadexec", D_000031DC);
#endif

#if FW_VERSION >= 281 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/loadexec", D_00001F7C);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/loadexec", D_00003098);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/loadexec", D_00003204);
#endif

INCLUDE_ASM("nonmatchings/loadexec", sceKernelLoadExec);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForUser_D1FB50DC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForUser_2AC9954B);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_2AC9954B);

INCLUDE_ASM("nonmatchings/loadexec", sceKernelExitGame);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E40);
#endif

#if FW_VERSION < 150
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
INCLUDE_ASM("nonmatchings/loadexec", sceKernelExitVSHVSH);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/loadexec", sceKernelExitVSHKernel);

s32 func_000017D8(void) {
    return (sceKernelIsToolMode() != 0) ? 0 : 0x80020149;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadexec", sceKernelLoadExecFromHost);

INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_2AC9954B);

INCLUDE_ASM("nonmatchings/loadexec", sceKernelExitGame);
#endif

#if FW_VERSION == 152
s32 sceKernelExitGame(void) {
    return LoadExecForUser_2AC9954B(0);
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadexec", func_00001934);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002F20);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002F50);

INCLUDE_ASM("nonmatchings/loadexec", func_00001B64);
#endif

#if FW_VERSION < 152
void sceKernelLoadExecVSHFromHost(s32 arg0, s32 arg1, s32 arg2) {
    func_00001934(arg0, arg1, arg2, 0);
}
#endif

#if FW_VERSION < 201
void sceKernelLoadExecVSHDisc(s32 arg0, s32 arg1) {
    func_00001934(0x120, arg0, arg1, 0x10000);
}

void sceKernelLoadExecVSHDiscUpdater(s32 arg0, s32 arg1) {
    func_00001934(0x121, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadexec", sceKernelLoadExecVSHDiscDebug);
#endif

#if FW_VERSION == 152
s32 sceKernelLoadExecVSHDiscDebug(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80020002;
    if (sceKernelIsToolMode() != 0) {
        var_v1 = func_00001934(0x122, arg0, arg1, 0x10000);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 150
void sceKernelLoadExecBufferVSHUsbWlan(s32 arg0, s32 arg1, s32 arg2) {
    func_00001B64(0x130, arg0, arg1, arg2, 0x10000);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceKernelLoadExecBufferVSHUsbWlan(s32 arg0, s32 arg1, s32 arg2) {
    func_00001D6C(0x130, arg0, arg1, arg2, 0x10000);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadexec", sceKernelLoadExecBufferVSHUsbWlanDebug);
#endif

#if FW_VERSION < 150
s32 sceKernelLoadExecBufferVSHUsbWlanDebug(s32 arg0, s32 arg1, s32 arg2) {
    return func_00001B64(0x131, arg0, arg1, arg2, 0x10000);
}
#endif

#if FW_VERSION == 152
s32 sceKernelLoadExecBufferVSHUsbWlanDebug(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80020002;
    if (sceKernelIsToolMode() != 0) {
        var_v1 = func_00001D6C(0x131, arg0, arg1, arg2, 0x10000);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
void sceKernelLoadExecVSHMs1(s32 arg0, s32 arg1) {
    func_00001934(0x140, arg0, arg1, 0x10000);
}

void sceKernelLoadExecVSHMs2(s32 arg0, s32 arg1) {
    func_00001934(0x141, arg0, arg1, 0x10000);
}

void sceKernelLoadExecVSHMs3(s32 arg0, s32 arg1) {
    func_00001934(0x142, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/loadexec", func_00001F74);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/loadexec", sceKernelExitVSHVSH);
#endif

#if FW_VERSION < 150
void sceKernelLoadExecBufferVSHPlain(s32 arg0, s32 arg1, s32 arg2) {
    func_00001B64(0x100, arg0, arg1, arg2, 0x10000);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceKernelLoadExecBufferVSHPlain(s32 arg0, s32 arg1, s32 arg2) {
    func_00001D6C(0x100, arg0, arg1, arg2, 0x10000);
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadexec", sceKernelLoadExecBufferVSHFromHost);

INCLUDE_ASM("nonmatchings/loadexec", sceKernelLoadExecBufferPlain0);

INCLUDE_ASM("nonmatchings/loadexec", sceKernelLoadExecBufferPlain);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadexec", sceKernelLoadExecFromHost);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadexec", sceKernelRegisterExitCallback);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadexec", sceKernelUnregisterExitCallback);

INCLUDE_ASM("nonmatchings/loadexec", sceKernelCheckExitCallback);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E24);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002E54);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadexec", D_00002FD4);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/loadexec", func_000023C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadexec", D_00002E94);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadexec", sceKernelExitVSHKernel);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/loadexec", sceKernelCheckExitCallback);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/loadexec", sceKernelInvokeExitCallback);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForUser_2AC9954B);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
s32 func_00001A98(void) {
    return (sceKernelIsToolMode() != 0) ? 0 : 0x80020149;
}
#endif

#if FW_VERSION >= 350
s32 sceKernelExitGame(void) {
    return LoadExecForUser_D1FB50DC(0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
s32 sceKernelExitGame(void) {
    return LoadExecForUser_2AC9954B(0);
}
#endif

#if FW_VERSION >= 201
void sceKernelLoadExecVSHDisc(s32 arg0, s32 arg1) {
    func_00001FA8(0x120, arg0, arg1, 0x10000);
}

void sceKernelLoadExecVSHDiscUpdater(s32 arg0, s32 arg1) {
    func_00001FA8(0x121, arg0, arg1, 0x10000);
}

s32 sceKernelLoadExecVSHDiscDebug(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80020002;
    if (sceKernelIsToolMode() != 0) {
        var_v1 = func_00001FA8(0x122, arg0, arg1, 0x10000);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 350
void LoadExecForKernel_6D8D3A3A(s32 arg0, s32 arg1) {
    func_00001FA8(0x123, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION >= 201
void sceKernelLoadExecBufferVSHUsbWlan(s32 arg0, s32 arg1, s32 arg2) {
    func_00002190(0x130, arg0, arg1, arg2, 0x10000);
}

s32 sceKernelLoadExecBufferVSHUsbWlanDebug(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80020002;
    if (sceKernelIsToolMode() != 0) {
        var_v1 = func_00002190(0x131, arg0, arg1, arg2, 0x10000);
    }
    return var_v1;
}

void sceKernelLoadExecVSHMs1(s32 arg0, s32 arg1) {
    func_00001FA8(0x140, arg0, arg1, 0x10000);
}

void sceKernelLoadExecVSHMs2(s32 arg0, s32 arg1) {
    func_00001FA8(0x141, arg0, arg1, 0x10000);
}

void sceKernelLoadExecVSHMs3(s32 arg0, s32 arg1) {
    func_00001FA8(0x142, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION >= 300
void sceKernelLoadExecVSHMs4(s32 arg0, s32 arg1) {
    func_00001FA8(0x143, arg0, arg1, 0x10000);
}

void sceKernelLoadExecVSHMs5(s32 arg0, s32 arg1) {
    func_00001FA8(0x144, arg0, arg1, 0x10000);
}
#endif

#if FW_VERSION >= 250
void sceKernelExitVSHKernel(s32 arg0) {
    func_00002288(0x200, arg0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/loadexec", sceKernelRegisterExitCallback);

INCLUDE_ASM("nonmatchings/loadexec", sceKernelUnregisterExitCallback);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/loadexec", sceKernelInvokeExitCallback);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/loadexec", LoadExecForKernel_11412288);
#endif

INCLUDE_ASM("nonmatchings/loadexec", module_bootstart);

#if FW_VERSION == 280 || FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/loadexec", D_00001F7C);
#endif

#if FW_VERSION == 260 || FW_VERSION >= 271
INCLUDE_RODATA("nonmatchings/loadexec", D_00003098);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/loadexec", D_0000309C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/loadexec", D_000030A4);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/loadexec", func_00001BD0);

INCLUDE_ASM("nonmatchings/loadexec", func_00001C94);

INCLUDE_ASM("nonmatchings/loadexec", func_00001DB0);

INCLUDE_ASM("nonmatchings/loadexec", func_00001FA8);

INCLUDE_ASM("nonmatchings/loadexec", func_00002190);

INCLUDE_ASM("nonmatchings/loadexec", func_00002288);
#endif

#if FW_VERSION >= 250
void func_00001C70(s32 arg0) {
    func_00002288(0x300, arg0);
}
#endif

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

#if FW_VERSION < 150
void sceKernelReboot(void) {

}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/loadexec", func_00001DF4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/loadexec", func_00001DA4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/loadexec", func_00001F08);

INCLUDE_ASM("nonmatchings/loadexec", func_00001FA8);

INCLUDE_ASM("nonmatchings/loadexec", func_00002190);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/loadexec", func_00002288);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/loadexec", D_00002F08);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002F0C);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002F14);

INCLUDE_RODATA("nonmatchings/loadexec", D_00002F2C);

INCLUDE_ASM("nonmatchings/loadexec", func_00002304);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/loadexec", func_00002700);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/loadexec", func_00002304);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/loadexec", func_0000193C);
#endif
