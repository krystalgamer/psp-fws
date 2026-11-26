/* cflags[152]: -O2 -frename-registers */
/* cflags[151]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100]: -O2 -frename-registers */
#include "common.h"
#include "libupdown_decls.h"

INCLUDE_ASM("nonmatchings/libupdown", func_00000000);

INCLUDE_ASM("nonmatchings/libupdown", func_0000016C);

INCLUDE_ASM("nonmatchings/libupdown", func_000001EC);

INCLUDE_ASM("nonmatchings/libupdown", func_00000250);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/libupdown", D_000029A8);

INCLUDE_RODATA("nonmatchings/libupdown", D_000029AC);

INCLUDE_RODATA("nonmatchings/libupdown", D_000029BC);

INCLUDE_RODATA("nonmatchings/libupdown", D_000029C8);

INCLUDE_RODATA("nonmatchings/libupdown", D_000029DC);

INCLUDE_RODATA("nonmatchings/libupdown", D_000029EC);

INCLUDE_RODATA("nonmatchings/libupdown", D_00002A00);

INCLUDE_RODATA("nonmatchings/libupdown", D_00002A10);

INCLUDE_RODATA("nonmatchings/libupdown", D_00002A20);

INCLUDE_RODATA("nonmatchings/libupdown", D_00002A70);

INCLUDE_RODATA("nonmatchings/libupdown", D_00002A84);

INCLUDE_RODATA("nonmatchings/libupdown", D_00002AD0);

INCLUDE_RODATA("nonmatchings/libupdown", D_00002ADC);

INCLUDE_RODATA("nonmatchings/libupdown", D_00002B00);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libupdown", func_000002A0);
#else
INCLUDE_ASM("nonmatchings/libupdown", func_000002E8);
#endif

INCLUDE_ASM("nonmatchings/libupdown", func_00000480);

INCLUDE_ASM("nonmatchings/libupdown", func_000004F8);

INCLUDE_ASM("nonmatchings/libupdown", func_00000550);

INCLUDE_ASM("nonmatchings/libupdown", func_00000564);

INCLUDE_ASM("nonmatchings/libupdown", func_00000574);

INCLUDE_ASM("nonmatchings/libupdown", func_000007B4);

INCLUDE_ASM("nonmatchings/libupdown", func_00000A24);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libupdown", func_00000C1C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libupdown", func_00000B68);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/libupdown", func_00000B44);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libupdown", func_00000C0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00001DA4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libupdown", func_00000C10);
#endif

INCLUDE_ASM("nonmatchings/libupdown", func_00000D1C);

INCLUDE_ASM("nonmatchings/libupdown", func_00000D70);

INCLUDE_ASM("nonmatchings/libupdown", func_00000DF4);

INCLUDE_ASM("nonmatchings/libupdown", func_00000F24);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libupdown", func_00001188);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_000011D8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libupdown", func_00001200);
#endif

INCLUDE_ASM("nonmatchings/libupdown", func_00001534);

INCLUDE_ASM("nonmatchings/libupdown", func_000017D0);

INCLUDE_ASM("nonmatchings/libupdown", func_000018A0);

INCLUDE_ASM("nonmatchings/libupdown", func_000018E0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libupdown", func_00001888);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libupdown", D_00003310);

INCLUDE_RODATA("nonmatchings/libupdown", D_00003320);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libupdown", func_00001944);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libupdown", func_000018D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libupdown", func_00001BCC);

INCLUDE_ASM("nonmatchings/libupdown", func_00001DBC);

INCLUDE_ASM("nonmatchings/libupdown", func_00001DA4);

INCLUDE_ASM("nonmatchings/libupdown", func_00001FB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_000018B4);

INCLUDE_ASM("nonmatchings/libupdown", func_00001B4C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libupdown", func_0000191C);

INCLUDE_RODATA("nonmatchings/libupdown", D_00002B78);

INCLUDE_RODATA("nonmatchings/libupdown", D_00002B88);

INCLUDE_ASM("nonmatchings/libupdown", func_00001938);

INCLUDE_ASM("nonmatchings/libupdown", func_00001A48);

INCLUDE_ASM("nonmatchings/libupdown", func_00001C34);

INCLUDE_ASM("nonmatchings/libupdown", func_00001DA4);

INCLUDE_ASM("nonmatchings/libupdown", func_00001E30);
#endif

INCLUDE_ASM("nonmatchings/libupdown", func_00001F84);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/libupdown", func_000020A0);
#else
void func_000020A0(s32 arg0) {
    func_00002660((s32) &D_000030D4, arg0);
    M2C_VFIELD(&D_00003A98, s32, 0) = 0;
    M2C_VFIELD(&D_00003A98, s32, 0x24) = 0;
    M2C_VFIELD(&D_00003A98, s32, 4) = 0;
    M2C_VFIELD(&D_00003A98, s32, 8) = 0;
    M2C_VFIELD(&D_00003A98, s32, 0xC) = 0;
    M2C_VFIELD(&D_00003A98, s32, 0x10) = 0;
    M2C_VFIELD(&D_00003A98, s32, 0x14) = 0;
    M2C_VFIELD(&D_00003A98, s32, 0x18) = 0;
    M2C_VFIELD(&D_00003A98, s32, 0x1C) = 0;
    M2C_VFIELD(&D_00003A98, s32, 0x20) = 0;
}
#endif

INCLUDE_ASM("nonmatchings/libupdown", func_000020D8);

INCLUDE_ASM("nonmatchings/libupdown", func_0000214C);

INCLUDE_ASM("nonmatchings/libupdown", func_000021D0);

INCLUDE_ASM("nonmatchings/libupdown", sceUpdateDownloadInitEx);

INCLUDE_ASM("nonmatchings/libupdown", sceUpdateDownloadInit);

INCLUDE_ASM("nonmatchings/libupdown", sceUpdateDownloadEnd);

INCLUDE_ASM("nonmatchings/libupdown", sceUpdateDownloadConnectServer);

INCLUDE_ASM("nonmatchings/libupdown", sceUpdateDownloadReadData);

void func_0000258C(void) {
    sceKernelGetSystemTimeLow();
}

s32 sceUpdateDownloadSetDestCode(s32 arg0) {
    func_00000550(arg0 & 0xFF);
    return 0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libupdown", sceUpdateDownloadSetServerRegion);
#else
void sceUpdateDownloadSetServerRegion(s32 arg0) {
    func_0000191C(arg0 & 0xFF);
}
#endif

void sceUpdateDownloadSetUrl(void) {
    func_00000D70();
}

s32 sceUpdateDownloadSetVersion(void) {
    func_00000564();
    return 0;
}

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/libupdown", sceUpdateDownloadAbort);
#else
s32 sceUpdateDownloadAbort(void) {
    s32 var_a0;

    var_a0 = 0x805F0002;
    if (D_00003AC0 == 1) {
        var_a0 = func_000017D0();
    }
    return var_a0;
}
#endif

INCLUDE_ASM("nonmatchings/libupdown", func_00002660);

INCLUDE_ASM("nonmatchings/libupdown", func_000026F0);

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/libupdown", func_00002510);

INCLUDE_ASM("nonmatchings/libupdown", func_0000253C);

INCLUDE_ASM("nonmatchings/libupdown", func_00002568);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libupdown", func_0000257C);
#endif

#if FW_VERSION == 100
M2C_UNK *func_0000257C(void) {
    return &D_000037C1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libupdown", func_00002588);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libupdown", func_000029F0);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/libupdown", func_000025C0);
#endif

#if FW_VERSION < 201
u8 *func_00002600(u8 *arg0, u8 *arg1, s32 arg2) {
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

INCLUDE_ASM("nonmatchings/libupdown", func_00002634);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libupdown", func_00002AC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00002660_v100);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libupdown", func_00002700);

INCLUDE_ASM("nonmatchings/libupdown", func_00002780);

INCLUDE_ASM("nonmatchings/libupdown", func_00002858);

INCLUDE_ASM("nonmatchings/libupdown", func_000028A0);

INCLUDE_ASM("nonmatchings/libupdown", func_000028D4);

INCLUDE_ASM("nonmatchings/libupdown", func_0000293C);

INCLUDE_ASM("nonmatchings/libupdown", func_00002B14);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/libupdown", func_00002F88);
#endif

#if FW_VERSION < 201
u8 *func_00002B44(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = arg1;
    var_v0 = NULL;
    var_a2 = arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}
#endif
