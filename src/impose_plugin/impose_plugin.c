/* cflags[152]: -Os */
/* cflags[150]: -Os */
/* cflags[100]: -Os */
#include "common.h"
#include "impose_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/impose_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/impose_plugin", module_start);

#if FW_VERSION < 282
s32 module_stop(void) {
    func_00000DE8();
    return 0;
}
#else
s32 module_stop(void) {
    func_000010D0();
    return 0;
}
#endif

#if FW_VERSION < 282 || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose_plugin", func_0000015C);
#else
void func_0000015C(struct Unk_func_0000015C_0 *arg0) {
    arg0->unk1FD = 0;
    arg0->unk1FE = 0;
    _ZN3paf8PhWidget13UpdateCamerasEv();
}
#endif

#if FW_VERSION < 282 || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000180);
#else
void func_00000180(struct Unk_func_00000180_0 *arg0) {
    arg0->unk1FD = 0;
    arg0->unk1FE = 0;
    _ZN3paf8PhWidget13UpdateCamerasEv();
}
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001610);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001614);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_0000161C);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001628);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001634);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001644);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001654);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001674);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001678);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_000016E0);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_000016E4);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_000016EC);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001364);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_000016FC);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001370);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001374);
#endif

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001378);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001380);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_0000138C);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001398);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001734);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013A4);
#endif

INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013B4);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013C0);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001758);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/impose_plugin", D_0000168C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013A4);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013C8);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013DC);
#endif

INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013EC);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001404);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001414);

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/impose_plugin", D_000016F4);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/impose_plugin", D_000017C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001290);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013A4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001420);
#endif

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001434);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001444);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001450);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_0000145C);

INCLUDE_ASM("nonmatchings/impose_plugin", func_000001A4);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/impose_plugin", func_000003CC_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/impose_plugin", func_000003CC_v330);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/impose_plugin", func_000003CC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000420);
#endif

#if FW_VERSION == 152
void func_000003BC_v152(s32 arg0) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_000013A4);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(s32), 0xA4)(arg0 != 0);
        }
    }
}
#endif

#if FW_VERSION == 150
void func_000003BC_v150(s32 arg0) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_000013A4);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(s32), 0xA4)(arg0 != 0);
        }
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose_plugin", func_000003BC);
#endif

INCLUDE_ASM("nonmatchings/impose_plugin", func_000006B8);

INCLUDE_ASM("nonmatchings/impose_plugin", func_0000073C);

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000770);

INCLUDE_ASM("nonmatchings/impose_plugin", func_0000082C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose_plugin", func_000008DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000980);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000AC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000924);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000964);
#endif

#if FW_VERSION >= 350
void func_00000964(void) {
    s32 temp_s1;
    void *temp_v0;

    temp_s1 = vshImposeGetParam(0x40000000);
    temp_v0 = scePaf_DCE3D225(scePaf_88784487(&D_00001734), 1);
    if (temp_s1 == 0) {
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK, M2C_UNK), 0x10C)(0x1F, 1);
        }
        scePaf_2F94EF32(0x40D, 0, 0);
        scePaf_1941BB4E();
    } else {
        scePaf_FA7E6DA3();
        scePaf_2F94EF32(0x40D, temp_s1, temp_s1);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK, M2C_UNK), 0x10C)(0x1F, 0);
        }
    }
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00000964(void) {
    s32 temp_s1;
    void *temp_v0;

    temp_s1 = vshImposeGetParam(0x40000000);
    temp_v0 = _ZNK3paf4View12GetInterfaceEi(_ZN3paf4View4FindEPKc(&D_000013A4), 1);
    if (temp_s1 == 0) {
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK, M2C_UNK), 0x10C)(0x1F, 1);
        }
        PhiPostSystemEvent(0x40D, 0, 0);
        scePaf_3DEE8DB4();
    } else {
        scePaf_499FF48D();
        PhiPostSystemEvent(0x40D, temp_s1, temp_s1);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK, M2C_UNK), 0x10C)(0x1F, 0);
        }
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000BAC);
#endif

#if FW_VERSION >= 350
void func_00000BAC(s32 arg0) {
    scePaf_648CA0C5();
    scePaf_B94FDC08();
    scePaf_6A82A8C6(arg0, 0x64);
    scePaf_8B38372A(D_0000189C, &D_000016F4);
    vsh_6D4C06F7(1);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000BE4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000B20);

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000D1C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000A2C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000B5C);
#endif

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000C04);

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000C70);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000CDC);
#else
void func_00000CDC(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_000013A4);
    if (temp_v0 != 0) {
        _ZN3paf4View9PlaySoundEPKc(temp_v0, &D_00001434);
    }
}
#endif

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000D14);

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000E6C);

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000ED0);

#if FW_VERSION < 282
void func_00000D64(void) {

}
#else
void func_0000104C(void) {
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/impose_plugin", func_00001054);
#else
void func_00001054(s32 arg0) {
    _ZN3paf6Module12SetInterfaceEiPv(arg0, 1, (s32) &D_000014A0);
}
#endif
