/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

s32 func_000016E0(struct Unk_func_000016E0_0 *arg0, s32 arg1) {
    if (arg1 == 6) {
        if ((arg0->unk7DC & 0xA) == 2) {
            func_00002480((s32) arg0);
        }
    }
    sceWlanDrv_lib_C9A8CAB7();
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000172C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001790);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000017EC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001A3C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001B04);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001C6C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001D64);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000201C);

s32 func_000020CC(s32 *arg0) {
    *arg0 = D_00011DE4;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000020E0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002204);

s32 func_0000228C(void) {
    sceKernelSetEventFlag(D_00011DF0, 2U);
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000022B4);

void func_0000235C(s32 arg0, s32 arg1) {
    func_00000B54((s32) &D_00011DD4, arg0, arg1);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002388);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000023BC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002480);

s32 func_00002514(s32 arg0) {
    D_000125BC = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002524);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000027A8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000028B0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000029CC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002C78);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002DE8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002F5C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000030EC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003244);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000032E8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003464);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003600);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003780);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000038A4);

s32 func_000038E4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000038EC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003974);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003B10);

void func_00003B30(s32 arg0) {
    func_0000BC08(arg0);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003B4C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003BAC);

s32 func_00003C64(void) {
    if (D_00012A0C > 0) {
        func_00009500();
        D_00012A0C = 0;
    }
    if (D_00012A10 > 0) {
        func_0000BCD8();
        D_00012A14 = 0;
        D_00012A10 = 0;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003CC8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010A70);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010A8C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003DC4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003E70);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003EF0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003F70);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003FDC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000040BC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000043C4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000479C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004A10);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004E18);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010ADC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010AE0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010AFC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000051A0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005634);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000570C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000057B4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000585C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000058B8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005984);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005B6C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005D14);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005E00);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005E90);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005ED4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00006050);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000614C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000618C);

s32 func_00006304(s32 arg0) {
    s32 var_v0;

    var_v0 = sceNetInet_lib_E6F67D14();
    if (var_v0 >= 0) {
        var_v0 = __builtin_allegrex_min(sceNetInet_lib_6A046357(arg0), 0);
    }
    return var_v0;
}

