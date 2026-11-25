/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002204);
#endif

#if FW_VERSION < 282
s32 func_00000FD0(void) {
    sceKernelSetEventFlag(D_00008240, 2U);
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000020D8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00000FF8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001038);
#else
s32 func_0000228C(void) {
    sceKernelSetEventFlag(D_00011DF0, 2U);
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000022B4);

void func_0000235C(s32 arg0, s32 arg1) {
    func_00000B54((s32) &D_00011DD4, arg0, arg1);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002388);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000021E0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001098);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000010EC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000023BC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002480);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000251C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001440);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010510);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000025E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000015C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001250);
#endif

#if FW_VERSION >= 282
s32 func_00002514(s32 arg0) {
    D_000125BC = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002524);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000027A8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000028B0);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000280C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002A04);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002B7C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002F60);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000030D4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000014B8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000161C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002E2C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001710);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000032EC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003468);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001780);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001858);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001940);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001A68);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003230);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003784);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003358);
#endif

#if FW_VERSION < 250
s32 func_00001BB0(s32 arg0) {
    D_00008B34 = arg0;
    return 0;
}
#endif

#if FW_VERSION < 282
s32 func_00001BC0(void) {
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001E28);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001E14);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001E6C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000035C4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003B50);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000035E4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003644);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000036FC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000037CC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003830);
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000038EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001C54);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001D84);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001DB8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001DE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001E20);
#endif

#if FW_VERSION >= 282
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
#endif

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010A8C);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003DA8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003DC4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003E70);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003EF0);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003A2C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003A98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000021A4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000024C0);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002898);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000020D4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002408);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002818);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002B90);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002FAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002B04);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002F50);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003F70);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003FDC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000040BC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000043C4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000479C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004A10);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004E18);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010ADC);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010578);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010594);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010AE0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010AFC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000051A0);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003754);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005634);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000051E8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003908);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003978);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003914);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003988);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000570C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000057B4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000585C);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005394);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003A18);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003C00);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003AA8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003CD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000058B8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005984);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005B6C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005D14);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005E00);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005E90);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000059B0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000407C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005ED4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00006050);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004150);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004190);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004270);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000042D0);
#endif

#if FW_VERSION < 282
s32 func_00004424(s32 arg0) {
    s32 var_v0;

    var_v0 = sceNetInet_lib_E6F67D14();
    if (var_v0 >= 0) {
        var_v0 = __builtin_allegrex_min(sceNetInet_lib_6A046357(arg0), 0);
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004314);
#endif

#if FW_VERSION >= 282
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
#endif
