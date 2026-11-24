/* cflags: -O2 -frename-registers */
#include "common.h"
#include "np9660_decls.h"

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004658);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_0000465C);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004674);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004688);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_0000469C);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_000046B8);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_000046D8);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_000046EC);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004704);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_0000471C);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004730);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004748);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_0000475C);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_0000477C);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004784);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004834);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004840);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_000048B0);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_000048C4);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_000048EC);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004900);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004918);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004920);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004928);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_0000494C);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004950);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_0000495C);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_0000497C);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_000049D8);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_000049F0);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_000049F8);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004A00);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004A08);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004A60);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004A64);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004A6C);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004A80);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", module_start);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", module_reboot_before);

s32 sceUmdMan_driver_60933ECD(void) {
    return 0;
}

s32 sceUmd9660_driver_2C6C3F4C(void) {
    return 0;
}

s32 sceUmd9660_driver_C7CD9CE8(void) {
    return 0;
}

s32 sceUmd9660_driver_44EF600C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmd_230666E3);

void sceUmd_9B22AED7(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004CA8 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmd_659587F7);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdActivate);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00000434);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdRegisterUMDCallBack);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdUnRegisterUMDCallBack);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004AD4);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_0000067C);

s32 func_00000718(void) {
    if (D_00004CB0 > 0) {
        sceKernelDeleteEventFlag(D_00004CB0);
        D_00004CB0 = 0;
    }
    return 0;
}

s32 sceUmd_D45D1FE6(void) {
    return D_00004CA4;
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmd_AE53DC2D);

s32 sceUmd_71F81482(void) {
    return D_00004CA8;
}

s32 func_000007C8(void) {
    return D_00004CA0;
}

void func_000007D4(s32 arg0) {
    D_00004CA0 = arg0;
}

void func_000007E0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = D_00004CAC;
    if (temp_s0 == 0) {

    } else if (sceKernelGetThreadmanIdType(temp_s0) == 8) {
        sceKernelNotifyCallback(temp_s0, arg0);
    }
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdCheckMedium);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdDeactivate);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdGetDiscInfo);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdGetDriveStat);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdGetErrorStat);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdReplaceProhibit);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdReplacePermit);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdWaitDriveStat);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdWaitDriveStatWithTimer);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdWaitDriveStatCB);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdCancelWaitDriveStat);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00000B58);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004AEC);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00000C30);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00000D68);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004B18);

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004B24);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00000E50);

s32 func_00000F88(void) {
    return D_00004CD4;
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00000F94);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00000FD8);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00001084);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00001220);

s32 func_000013B4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_000013BC);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00001480);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_0000154C);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00001604);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdMan_driver_BF8AED79);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdMan_driver_4217E7F5);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", sceUmdMan_driver_F65D819F);

s32 sceUmdMan_driver_2787078E(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004CEC = 0;
    D_00004CF0 = 0;
    D_00004CF4 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_000017E0);

void func_00001874(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004D08 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 func_000018A8(void) {
    return D_00004D08;
}

s32 func_000018B4(void) {
    return 0;
}

s32 func_000018BC(void) {
    func_00002528();
    return 0;
}

s32 func_000018DC(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00004D0C = arg0;
    sceKernelCpuResumeIntr(temp_a0);
    return 0;
}

s32 func_00001914(void) {
    return D_00004D0C;
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00001920);

s32 func_00001A78(void) {
    if (D_00004D10 > 0) {
        sceKernelDeleteMutex(D_00004D10);
        D_00004D10 = 0;
    }
    memset(&D_00004D1C, 0, 0x3C);
    func_000042F8();
    func_00002634();
    if (D_00004D14 > 0) {
        sceKernelDeleteFpl(D_00004D14);
        D_00004D14 = 0;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00001AFC);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00001BCC);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00001CC8);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00001D5C);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00001D98);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_000020D4);

void func_00002114(void) {
    func_000022CC();
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00002130);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_000021E0);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00002290);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_000022CC);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00002304);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00002340);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00002420);

s32 func_00002474(void) {
    return 0x80020325;
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00002480);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00002528);

s32 func_00002578(void) {
    return 0;
}

s32 func_00002580(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = 0x10;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_000025A0);

s32 func_00002634(void) {
    func_00002674();
    if (D_00004DD8 > 0) {
        sceKernelDeleteMutex(D_00004DD8);
        D_00004DD8 = 0;
    }
    return 0;
}

s32 func_00002674(void) {
    D_00004DE0 = -1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00002688);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_0000270C);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00002794);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_000027F0);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_0000284C);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00002CB0);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00002D54);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00002DD4);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_0000366C);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_000038D0);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_0000402C);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_00004124);

INCLUDE_ASM("tmp/asm/352/np9660/nonmatchings/np9660", func_000042C8);

s32 func_000042F8(void) {
    return 0;
}

INCLUDE_RODATA("tmp/asm/352/np9660/nonmatchings/np9660", D_00004C20);
