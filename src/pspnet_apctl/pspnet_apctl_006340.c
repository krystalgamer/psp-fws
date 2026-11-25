/* cflags: -Os -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

#if FW_VERSION < 151 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006340);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006414);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000045B8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004704);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000047D8);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000046F4);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000487C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000646C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000659C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000667C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006708);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006870);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004AEC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006BD8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006C50);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004CDC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004DE0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004E50);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004EBC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004FC4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005064);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000693C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006BD8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006C50);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006CE0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006DE4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006E58);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006F34);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006FC8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000708C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005290);
#else
void func_000070C0(s32 *arg0) {
    if (arg0 != NULL) {
        sceNet_lib_57CC57DA(arg0, 0, 0x404);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000070E8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007244);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007358);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005434);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000588C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005678);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005B2C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000060AC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000643C);
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000074A8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000078F8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007CD0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007FF8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008300);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000080F0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000080AC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000080D0);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010DA4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006A14);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006D34);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000070FC);

s32 func_00007324(void) {
    s32 var_v0;

    var_v0 = 0x8041030B;
    if (D_00013F20 != NULL) {
        var_v0 = sceKernelSignalSema(D_00013F20->unk4, 1);
    }
    return var_v0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000085A8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008834);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008BE0);

s32 func_00008E00(void) {
    s32 var_v0;

    var_v0 = 0x8041030B;
    if (D_00013F20 != NULL) {
        var_v0 = sceKernelSignalSema(D_00013F20->unk4, 1);
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008E34);

#if FW_VERSION < 282
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000073E4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000741C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000070DC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007490);
#endif

#if FW_VERSION < 282
u8 *func_000074D0(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007504);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007184);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007530);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008EB0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009098);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000091A8);

s32 func_00009328(void) {
    sceNet_lib_DB88F458();
    return 0;
}

s32 func_00009348(void) {
    s32 temp_v0;

    temp_v0 = sceNet_lib_B6FC0A5B();
    return (temp_v0 < 0) ? 0x80410E87 : temp_v0;
}

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010DF0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009374);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009500);

s32 func_00009588(s32 arg0) {
    D_00016528 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009598);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009818);
#endif
