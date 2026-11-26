/* cflags: -O2 -frename-registers */
#include "common.h"
#include "netconf_plugin_auto_bfl_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00000024);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000000AC);

s32 module_start(void) {
    func_00000000();
    return 0;
}

s32 module_stop(void) {
    func_000042A4();
    return 0;
}

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_000044F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_000044FC);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004508);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004518);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004530);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004554);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004560);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004570);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004580);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004590);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_000045B0);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_000045C4);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_000045F4);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_0000461C);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004620);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_0000462C);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004638);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004658);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_0000467C);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004688);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_0000469C);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004698);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_000046A8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_000046AC);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_000046B0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", sceVshNetconfAoss_A117A521);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", sceVshNetconfAoss_D77ACCB7);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", sceVshNetconfAoss_8D307317);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", sceVshNetconfAoss_DFF564AF);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", sceVshNetconfAoss_F5C1F68A);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", sceNetAOSSInit);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", sceNetAOSSTerm);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", sceNetAOSSStart);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", sceNetAOSSStop);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", sceNetAOSSGetState);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00000664);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_0000071C);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000007A0);

s32 func_00000830(void) {
    return 0;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", sceVshNetconfAoss_E635D418);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", sceVshNetconfAoss_47A55B8E);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00000A24);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00000CC0);

s32 func_00000ECC(s32 arg0) {
    D_00004BA4 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00000EDC);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00000F78);

void func_00000FC0(s32 arg0) {
    sceKernelDelayThread(arg0 * 0x3E8);
}

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00000FE4);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000010E8);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00001138);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_000046E0);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000011F0);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00001390);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00001488);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_000046FC);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000015C0);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00001DC8);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00001E24);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00001E88);

void func_00001F28(s32 arg0) {
    D_00004BF8 = arg0;
}

s32 func_00001F34(void) {
    return D_00004BF8;
}

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00001F40);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000021F0);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_0000222C);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_0000231C);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000023A8);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_0000241C);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00002468);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_0000258C);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000026A8);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000027E4);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000028BC);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00002A50);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00002AD0);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_0000471C);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_bfl", D_00004728);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00002B74);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00002C9C);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00002CCC);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00002ECC);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00002EE4);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00002FA4);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003150);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000032B8);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003374);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003454);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000034F0);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000035C0);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003684);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003788);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000038A4);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003958);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000039DC);

s32 func_00003A50(s32 arg0, s32 arg1) {
    return ~func_00003A88(-1, arg0, arg1, 0, (s32) &D_00004BFC) & 0xFF;
}

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003A88);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003B20);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003B70);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003C6C);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003CD0);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003D18);

#if FW_VERSION >= 350
void func_00003D94(void) {
    scePaf_9B900798();
}
#else
void func_00003D94(void) {
    malloc();
}
#endif

#if FW_VERSION >= 350
void func_00003DB0(void) {
    scePaf_60355B42();
}
#else
void func_00003DB0(void) {
    free();
}

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003DCC);
#endif

#if FW_VERSION >= 350
void func_00003DCC(void) {
    scePaf_79112496();
}
#else
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003DE8);
#endif

#if FW_VERSION >= 350
s32 func_00003DE8(s32 arg0) {
    scePaf_DDF24DEC();
    return arg0;
}
#else
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003E10);
#endif

#if FW_VERSION >= 350
void func_00003E10(void) {
    scePaf_7D4045E1();
}
#endif

void func_00003E2C(s32 arg0, void *arg1, u32 arg2, s32 arg3, void *arg4, void *arg5) {
    sceNetInetRecvfrom(arg0, arg1, arg2, arg3, arg4, arg5);
}

void func_00003E48(s32 arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    sceNetInetSelect(arg0, arg1, arg2, arg3, arg4);
}

void func_00003E64(s32 arg0, void *arg1, u32 arg2, s32 arg3, void *arg4, s32 arg5) {
    sceNetInetSendto(arg0, arg1, arg2, arg3, arg4, arg5);
}

void func_00003E80(s32 arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4) {
    sceNetInetSetsockopt(arg0, arg1, arg2, arg3, arg4);
}

void func_00003E9C(s32 arg0, s32 arg1, s32 arg2) {
    sceNetInetSocket(arg0, arg1, arg2);
}

void func_00003EB8(s32 arg0, void *arg1, s32 arg2) {
    sceNetInetBind(arg0, arg1, arg2);
}

void func_00003ED4(s32 arg0) {
    sceNetInetClose(arg0);
}

s32 func_00003EF0(s32 arg0) {
    return __builtin_allegrex_wsbw(arg0);
}

s32 func_00003EF8(s32 arg0) {
    return __builtin_allegrex_wsbh(arg0 & 0xFFFF) & 0xFFFF;
}

s32 func_00003F08(s32 arg0) {
    return __builtin_allegrex_wsbw(arg0);
}

s32 func_00003F10(s32 arg0) {
    return __builtin_allegrex_wsbh(arg0 & 0xFFFF) & 0xFFFF;
}

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003F20);
#else
void func_00003F20(void) {
    scePaf_1919C81F();
}

void func_00003F3C(void) {
    scePaf_5FA42863();
}
#endif

#if FW_VERSION < 350
void func_00003F3C(void) {
    rand();
}
#endif

void func_00003F58(s8 *arg0) {
    s8 *var_a0;
    u32 var_v1;

    var_a0 = arg0;
    var_v1 = 0;
    do {
        var_v1 += 1;
        *var_a0 = 0;
        var_a0 += 1;
    } while (var_v1 < 0x20U);
}

void func_00003F78(u32 arg0, s32 arg1) {
    s32 *temp_a3;

    temp_a3 = ((arg0 >> 5) * 4) + arg1;
    *temp_a3 |= 1 << (arg0 & 0x1F);
}

s32 func_00003FA0(void) {
    return 0x02000767;
}

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_00003FAC);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000040F8);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_0000424C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_bfl", func_000042A4);
#endif
