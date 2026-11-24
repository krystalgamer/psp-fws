/* cflags: -O2 -frename-registers */
#include "common.h"
#include "isofs_decls.h"

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000000);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00005EA0);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00005EA8);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000001B8);

s32 sceIsofs_driver_19F9734D(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00004DB0();
    var_a0 = 0;
    if (arg0 >= 0) {
        if (arg0 < M2C_FIELD(temp_v0, s32 *, 0xC)) {
            var_a0 = D_000065C0 + (arg0 * 0xA8);
        }
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000002F8);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00005F30);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00005F38);

s32 func_00000440(void *arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        var_s1 = 0;
        do {
            var_s2 += 1;
            func_00000790(M2C_FIELD(arg0, s32 *, 0x98) + var_s1 + 8);
            var_s1 += 0x2C;
        } while (var_s2 < (s32) M2C_FIELD(arg0, u8 *, 0x50));
    }
    temp_v0 = SysMemForKernel_7B749390(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x98));
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC("%sERROR: %s: sceKernelFreeHeapMemory(%x)\n", &D_00005F30, "sceIsofsLbTerm", temp_v0);
    }
    return temp_v0;
}

s32 func_000004E4(void *arg0, s32 arg1) {
    func_000007FC(M2C_FIELD(arg0, s32 *, 0x98), arg1);
    return 0;
}

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000504);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00005F98);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00005FA0);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00005FCC);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00005FE0);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000620);

s32 func_000006EC(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_00004DB0();
    func_00000620();
    temp_v0 = SysMemForKernel_7B749390(M2C_FIELD(temp_s0, s32 *, 0x1C), D_000065C4);
    if (temp_v0 != 0) {
        KDebugForKernel_84F370BC(&D_00005FE0, &D_00005F98, "sceIsofsCacheTerm", temp_v0);
    }
    sceKernelDeleteFpl(M2C_FIELD(temp_s0, s32 *, 0x20));
    return 0;
}

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000760);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000790);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000007FC);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00006070);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000890);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000988);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000AB0);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000BE4);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000D00);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000DA8);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000E3C);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000EBC);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00000FCC);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000010AC);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_0000125C);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00001498);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_000060F8);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_000060FC);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00006128);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000015D8);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_0000170C);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00001778);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00001A4C);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00001B0C);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00001C5C);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_000061C8);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00001CC8);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00001F44);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00002024);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000022B8);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00002344);

void func_00002364(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0x2E;
    M2C_FIELD(arg0, s8 *, 1) = 0;
}

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00002374);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000023A4);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000024C4);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00002528);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000026E4);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000027C0);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000028B4);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00002B40);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_000061E0);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_000061E4);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_000061EC);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00002D7C);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00006200);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00006224);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00002E28);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00002FA0);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_0000327C);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000033F0);

INCLUDE_RODATA("tmp/asm/201/isofs/nonmatchings/isofs", D_00006318);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000037A4);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00003ADC);

s32 func_00003BB4(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_v0;
    void *temp_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = sceIsofs_driver_19F9734D(M2C_FIELD(arg0, s32 *, 4));
        temp_v0_2 = sceKernelWaitSema(M2C_FIELD(temp_v0, s32 *, 0x58), 1, NULL);
        if (temp_v0_2 >= 0) {
            temp_s1 = M2C_FIELD(arg0, s32 *, 0x10);
            temp_s0 = sceKernelCpuSuspendIntr();
            func_00004E30(temp_s1);
            sceKernelCpuResumeIntr(temp_s0);
            sceKernelFreeFpl(M2C_VFIELD(&D_00007608, s32, 0x20), M2C_FIELD(temp_s1, void **, 8));
            SysMemForKernel_7B749390(M2C_VFIELD(&D_00007608, s32, 0x1C), temp_s1);
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            sceKernelSignalSema(M2C_FIELD(temp_v0, s32 *, 0x58), 1);
            var_v0 = temp_v0_2;
        } else {
            KDebugForKernel_84F370BC(&D_00006200, &D_00006224, "isofs_dclose", temp_v0_2);
            var_v0 = temp_v0_2;
        }
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00003CA0);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00003D6C);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00003DD4);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00004024);

s32 func_00004064(s32 arg0) {
    return !(arg0 & 0xF02) ? 0 : 0x8001B004;
}

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00004078);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_0000432C);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000044CC);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00004624);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00004780);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_000048CC);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", module_start);

s32 func_00004DB0(void) {
    return (s32) &D_00007608;
}

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", module_reboot_before);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00004E30);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00004E64);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00005010);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00005250);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00005340);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00005400);

INCLUDE_ASM("tmp/asm/201/isofs/nonmatchings/isofs", func_00005878);

s32 func_00005970(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = __builtin_allegrex_min(sceUmdMan_driver_BF8AED79(0x20, &func_000048CC, arg0), 0);
    var_v0 = 0;
    if (temp_s0 != 0) {
        KDebugForKernel_84F370BC("%sERROR: %s: sceIsofsIntrRegisterMediumCallBack(%x)\n", "isofs: ", "sceIsofsIntrInit", temp_s0);
        var_v0 = temp_s0;
    }
    return var_v0;
}

s32 func_000059DC(void) {
    sceUmdMan_driver_4217E7F5(0x20);
    return 0;
}
