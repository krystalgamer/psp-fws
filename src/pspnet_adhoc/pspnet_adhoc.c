/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_adhoc_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocInit);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocTerm);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000270);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000036C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000047C);

#if FW_VERSION < 282
void func_00000444(s32 arg0) {
    func_00002B90(arg0);
}
#else
void func_00000490(s32 arg0) {
    func_00002D2C(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPollSocket);

#if FW_VERSION < 282
s32 func_0000092C(void *arg0, s32 arg1) {
    s32 var_s2;
    s32 var_s3;
    u8 temp_v1;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *var_s1;

    var_s3 = 0;
    var_s1 = arg0;
    if (arg1 > 0) {
        var_s2 = arg1;
        do {
            temp_a1 = M2C_FIELD(var_s1, void **, 0);
            temp_v1 = M2C_FIELD(temp_a1, u8 *, 0x10);
            switch (temp_v1) {                      /* irregular */
            case 2:
                temp_s0 = M2C_FIELD(var_s1, void **, 4);
                M2C_FIELD(temp_s0, s32 *, 8) = func_000050F8((s32) temp_a1, M2C_FIELD(temp_s0, s32 *, 4));
                break;
            case 1:
                temp_s0_2 = M2C_FIELD(var_s1, void **, 4);
                M2C_FIELD(temp_s0_2, s32 *, 8) = func_00002C00((s32) temp_a1, M2C_FIELD(temp_s0_2, s32 *, 4));
                break;
            }
            temp_v0 = M2C_FIELD(var_s1, void **, 4);
            var_s2 -= 1;
            var_s1 += 8;
            var_s3 += M2C_FIELD(temp_v0, s32 *, 8) != 0;
        } while (var_s2 != 0);
    }
    return var_s3;
}
#else
s32 func_00000974(void *arg0, s32 arg1) {
    s32 var_s2;
    s32 var_s3;
    u8 temp_v1;
    struct Unk_func_00000974_temp_a1 *temp_a1;
    struct Unk_func_00000974_temp_s0 *temp_s0;
    struct Unk_func_00000974_temp_s0_2 *temp_s0_2;
    struct Unk_func_00000974_temp_v0 *temp_v0;
    void *var_s1;

    var_s3 = 0;
    var_s1 = arg0;
    if (arg1 > 0) {
        var_s2 = arg1;
        do {
            temp_a1 = M2C_FIELD(var_s1, void **, 0);
            temp_v1 = temp_a1->unk10;
            switch (temp_v1) {                      /* irregular */
            case 2:
                temp_s0 = M2C_FIELD(var_s1, void **, 4);
                temp_s0->unk8 = func_00005024((s32) temp_a1, temp_s0->unk4);
                break;
            case 1:
                temp_s0_2 = M2C_FIELD(var_s1, void **, 4);
                temp_s0_2->unk8 = func_00002D94((s32) temp_a1, temp_s0_2->unk4);
                break;
            }
            temp_v0 = M2C_FIELD(var_s1, void **, 4);
            var_s2 -= 1;
            var_s1 += 8;
            var_s3 += temp_v0->unk8 != 0;
        } while (var_s2 != 0);
    }
    return var_s3;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocSetSocketAlert);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGetSocketAlert);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000DD0);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000E18);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000E90);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000E44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000FB4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000ED0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000ED8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000F60);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000FFC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001044);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001078);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPdpCreate);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPdpSend);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPdpDelete);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000016B4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001530);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001B90);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001600);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001C28);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPdpRecv);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_67346A2A);

#if FW_VERSION >= 201 && FW_VERSION < 282
void sceNetAdhoc_lib_F9240FBA(void) {
    sceNet_lib_57CC57DA(&D_00007A8C, 0, 0x18);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceNetAdhoc_lib_F9240FBA(void) {
    M2C_VFIELD(&D_00007A8C, s32, 0) = 0;
    M2C_VFIELD(&D_00007A8C, s32, 0x14) = 0;
    M2C_VFIELD(&D_00007A8C, s32, 4) = 0;
    M2C_VFIELD(&D_00007A8C, s32, 8) = 0;
    M2C_VFIELD(&D_00007A8C, s32, 0xC) = 0;
    M2C_VFIELD(&D_00007A8C, s32, 0x10) = 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_1059683E);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000215C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001F20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002108);
#endif

#if FW_VERSION == 282
void sceNetAdhoc_lib_F9240FBA(void) {
    sceNet_lib_57CC57DA(&D_000079CC, 0, 0x18);
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_1059683E);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000020A4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000223C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002404);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000023C4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000022FC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGetPdpStat);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000297C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000029E8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002B7C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002A9C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002108);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002A6C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002AFC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002CD4);

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00002B84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00002B84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002B90);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002C00);
#else
s32 func_00002D20(struct Unk_func_00002D20_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002D2C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002D94);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002E48);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpOpen);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpConnect);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpListen);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpAccept);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpSend);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpRecv);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpFlush);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpClose);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00003A68);

#if FW_VERSION < 282
void func_000039FC(void *arg0) {
    func_00004B30(M2C_FIELD(arg0, s32 *, 0x14));
    func_00004AE4((s32) arg0);
    func_00000FFC((s32) arg0);
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00003A34);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00003C00);
#else
void func_00003BB0(struct Unk_func_00003BB0_0 *arg0) {
    func_00004B30(arg0->unk14);
    func_00004AE4((s32) arg0);
    func_00000FFC((s32) arg0);
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00003BE8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00003D9C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004058);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004408);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000049E4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000045E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_62B875A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void sceNetAdhoc_lib_62B875A8(void) {
    sceNet_lib_57CC57DA(&D_00007CC8, 0, 0x7C);
}
#endif

#if FW_VERSION == 100
void sceNetAdhoc_lib_62B875A8(void) {
    M2C_VFIELD(&D_00007450, s32, 0) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x2C) = 0;
    M2C_VFIELD(&D_00007450, s32, 4) = 0;
    M2C_VFIELD(&D_00007450, s32, 8) = 0;
    M2C_VFIELD(&D_00007450, s32, 0xC) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x10) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x14) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x18) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x1C) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x20) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x24) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x28) = 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000473C);

void sceNetAdhoc_lib_62B875A8(void) {
    sceNet_lib_57CC57DA(&D_000079E8, 0, 0x7C);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_2CA12790);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004964);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000548C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004918);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004A40);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004AE4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004B30);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004E80);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004DFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004C0C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004E60);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004F50);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000050F8);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004BD8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004DA4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004E98);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005024);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGetPtpStat);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000052D4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000532C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000056CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000548C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005528);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00005544(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x38) = 1;
    M2C_FIELD(arg0, s32 *, 0x50) = 1;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00005544(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x50) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C) = 1;
    M2C_FIELD(arg0, s32 *, 0x54) = 1;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00005560(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xCC) = arg1;
    M2C_FIELD(arg0, s32 *, 0xD0) = arg2;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000589C);
#endif

#if FW_VERSION == 100
void func_00005560(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
    M2C_FIELD(arg0, s32 *, 0xB0) = arg2;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000556C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000056B0(void *arg0, s32 arg1) {
    void *temp_a2;

    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
    M2C_FIELD(arg0, s32 *, 0xDC) = arg1;
    temp_a2 = M2C_FIELD(arg0, void **, 0x58);
    M2C_FIELD(temp_a2, s32 *, 0xC) = (s32) (M2C_FIELD(temp_a2, s32 *, 0xC) | 0x1000);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_000056B0(void *arg0, s32 arg1) {
    void *temp_a2;

    M2C_FIELD(arg0, s32 *, 0x60) = 1;
    M2C_FIELD(arg0, s32 *, 0xBC) = arg1;
    temp_a2 = M2C_FIELD(arg0, void **, 0x5C);
    M2C_FIELD(temp_a2, s32 *, 0xC) = (s32) (M2C_FIELD(temp_a2, s32 *, 0xC) | 0x1000);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000056D4(void *arg0) {
    s32 temp_s2;
    void *temp_a1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x10);
    if (var_s0 != NULL) {
        do {
            temp_a1 = M2C_FIELD(var_s0, void **, 8);
            temp_s2 = M2C_FIELD(var_s0, s32 *, 0x58);
            if (temp_a1 != NULL) {
                M2C_FIELD(temp_a1, void ***, 0xC) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            } else {
                M2C_FIELD(arg0, void ***, 0x14) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            }
            *M2C_FIELD(var_s0, void ***, 0xC) = temp_a1;
            M2C_FIELD(arg0, s32 *, 0xD8) = (s32) (M2C_FIELD(arg0, s32 *, 0xD8) - 1);
            func_00004F50((s32) var_s0);
            func_000056D4(var_s0);
            func_00004AE4(temp_s2);
            func_00000FFC(temp_s2);
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
        } while (var_s0 != NULL);
    }
    sceNet_lib_57CC57DA(arg0 + 0x18, 0, 6);
    sceNet_lib_57CC57DA(arg0 + 0x1E, 0, 6);
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    func_00004B30((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000056D4(void *arg0) {
    s32 temp_s2;
    void *temp_a1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x10);
    if (var_s0 != NULL) {
        do {
            temp_a1 = M2C_FIELD(var_s0, void **, 8);
            temp_s2 = M2C_FIELD(var_s0, s32 *, 0x58);
            if (temp_a1 != NULL) {
                M2C_FIELD(temp_a1, void ***, 0xC) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            } else {
                M2C_FIELD(arg0, void ***, 0x14) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            }
            *M2C_FIELD(var_s0, void ***, 0xC) = temp_a1;
            M2C_FIELD(arg0, s32 *, 0xD8) = (s32) (M2C_FIELD(arg0, s32 *, 0xD8) - 1);
            func_00004F50((s32) var_s0);
            func_000056D4(var_s0);
            func_00004AE4(temp_s2);
            func_00000FFC(temp_s2);
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
        } while (var_s0 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    func_00004B30((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005AAC);
#endif

#if FW_VERSION == 100
void func_000056D4(void *arg0) {
    s32 temp_s2;
    void *temp_a1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x10);
    if (var_s0 != NULL) {
        do {
            temp_a1 = M2C_FIELD(var_s0, void **, 8);
            temp_s2 = M2C_FIELD(var_s0, s32 *, 0x5C);
            if (temp_a1 != NULL) {
                M2C_FIELD(temp_a1, void ***, 0xC) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            } else {
                M2C_FIELD(arg0, void ***, 0x14) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            }
            *M2C_FIELD(var_s0, void ***, 0xC) = temp_a1;
            M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8) - 1);
            func_00004F50((s32) var_s0);
            func_000056D4(var_s0);
            func_00004AE4(temp_s2);
            func_00000FFC(temp_s2);
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
        } while (var_s0 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    M2C_FIELD(arg0, s16 *, 0x26) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = 0;
    func_00004B30((s32) arg0);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000053EC);

s32 func_00005594(struct Unk_func_00005594_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk34 = arg1;
    arg0->unk4C = arg2;
    arg0->unk38 = 1;
    arg0->unk50 = 1;
    return 0;
}

void func_000055B0(struct Unk_func_000055B0_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkCC = arg1;
    arg0->unkD0 = arg2;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000055BC);

s32 func_000056E4(struct Unk_func_000056E4_0 *arg0, s32 arg1) {
    struct Unk_func_000056E4_temp_a2 *temp_a2;

    arg0->unk5C = 1;
    arg0->unkDC = arg1;
    temp_a2 = arg0->unk58;
    temp_a2->unkC = (s32) (temp_a2->unkC | 0x1000);
    return 0;
}

void func_00005708(struct Unk_func_00005708_0 *arg0) {
    s32 temp_s2;
    struct Unk_func_00005708_temp_a1 *temp_a1;
    struct Unk_func_00005708_var_s0 *var_s0;

    var_s0 = arg0->unk10;
    if (var_s0 != NULL) {
        do {
            temp_a1 = var_s0->unk8;
            temp_s2 = var_s0->unk58;
            if (temp_a1 != NULL) {
                temp_a1->unkC = (void **) var_s0->unkC;
            } else {
                arg0->unk14 = (void **) var_s0->unkC;
            }
            *var_s0->unkC = temp_a1;
            arg0->unkD8 = (s32) (arg0->unkD8 - 1);
            func_00004E98((s32) var_s0);
            func_00005708(var_s0);
            func_00004AE4(temp_s2);
            func_00000FFC(temp_s2);
            var_s0 = arg0->unk10;
        } while (var_s0 != NULL);
    }
    sceNet_lib_57CC57DA((u8 *)arg0 + 0x18, 0, 6);
    sceNet_lib_57CC57DA((u8 *)arg0 + 0x1E, 0, 6);
    arg0->unk24 = 0;
    func_00004B30((s32) arg0);
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000057CC);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_0000789C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000078A0);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000078A4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000078AC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005B98);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000065F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000578C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006324);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000667C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006AF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006878);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005FF8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006340);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000648C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000058B8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000062FC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000660C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000067F8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000069D4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006B1C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006AA0);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_7F75C338);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_3278AB0C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_98C204C8);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_A0229362);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006880);
#else
s32 func_00006F68(void) {
    D_000079C0.unk0 = 0;
    D_000079C0.unk4 = &D_000079C0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006F80);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_3278AB0C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_FA324B4E);
#else
void sceNetAdhoc_FA324B4E(s32 arg0, s32 arg1) {
    func_00006C3C(arg0, arg1, 0);
}
#endif

#if FW_VERSION < 282
void sceNetAdhoc_lib_AF6DFB15(s32 arg0, s32 arg1) {
    func_00006C3C(arg0, arg1, 1);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_A0229362);
#endif

#if FW_VERSION == 282
void sceNetAdhoc_lib_AF6DFB15(s32 arg0, s32 arg1) {
    func_00007298(arg0, arg1, 1);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_0B2228E9);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00007018);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006AB8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006BB8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006C3C);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006D6C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006DA4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006E18);

u8 *func_00006E58(u8 *arg0, u8 *arg1, s32 arg2) {
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

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006E8C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00007344);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006EB8);

void func_00006EF8(s32 arg0, s32 arg1) {
    func_00006DA4(arg1, arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006F1C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000070E8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00007204);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00007298);
#endif
