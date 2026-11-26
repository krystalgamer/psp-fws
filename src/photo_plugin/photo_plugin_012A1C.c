/* cflags: -Os */
#include "common.h"
#include "photo_plugin_decls.h"

#if FW_VERSION >= 260
void func_00012A1C(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00012DE4();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(s32), 0x10)(arg0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_00012A1C(s32 arg0) {
    struct Unk_func_00012A1C_temp_v0 *temp_v0;

    temp_v0 = func_00012DE4();
    if (temp_v0 != NULL) {
        temp_v0->unk14(arg0);
    }
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00012A54);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00012C38);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_000130B0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00012D5C);
#endif

#if FW_VERSION >= 350
s32 func_00012D7C(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = scePaf_88784487(arg0);
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = scePaf_DCE3D225(temp_v0, arg1);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
s32 func_00012D7C(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = _ZN3paf4View4FindEPKc(arg0);
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = _ZNK3paf4View12GetInterfaceEi(temp_v0, arg1);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00012DC0);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FDAC);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00012DE4);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00012E08);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00012E58);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00012CD0);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00012D90);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00031028);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FDC0);
#endif

#if FW_VERSION >= 271
s32 func_00012A8C(void) {
    return 2;
}
#endif

#if FW_VERSION == 260
s32 func_00012DC0_v260(void) {
    return 2;
}
#endif

#if FW_VERSION >= 260
s32 func_00012DC8(void) {
    return 1;
}

s32 func_00012DD0(void) {
    return 3;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00012EE4);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_000130AC);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00013100);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FDC0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_000131D8);

void func_000132A4(void) {
    func_000131D8(1, 0xFFFF);
}

void func_000132C4(void) {
    func_000131D8(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 310
void func_00013380(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_000134E4();
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_000132E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 310
void func_00013380(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_000134E4();
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_000133A0);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00013418);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_000134E4);

void func_00013504(M2C_UNK **arg0) {
    *arg0 = &D_0002FE68;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00013514);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00013514(M2C_UNK **arg0) {
    *arg0 = &D_0002FE68;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_0001353C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0001353C(M2C_UNK **arg0) {
    *arg0 = &D_0002FE68;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 201
void func_00013564(M2C_UNK **arg0) {
    *arg0 = &D_0002FE68;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00013574);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00013574(M2C_UNK **arg0) {
    *arg0 = &D_0002FE68;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 201
void func_0001359C(M2C_UNK **arg0) {
    *arg0 = &D_0002FE68;
}
#endif

#if FW_VERSION >= 260
void func_00013464(void) {

}
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FDE8);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FDF8);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FE18);
#endif

#if FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030158);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FE28);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FE38);
#endif

#if FW_VERSION >= 280
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FE68);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030740);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FE50);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FE68);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_000135AC);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_0001375C);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FEDC);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FEEC);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_0001396C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00013B48);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00013AC0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FF20);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FF34);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FF44);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FF50);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FF5C);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FF68);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FF80);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FF9C);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FFC0);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FFD8);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0002FFF8);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030014);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030030);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030054);
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_000314A4);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030070);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030094);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0003009C);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_000300A0);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_000300B8);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_000300DC);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_000300F4);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030114);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030128);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0003013C);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030140);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030144);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0003014C);
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_000315AC);

INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_000315C0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_0003111C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030164);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030170);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/photo_plugin_012A1C", D_00030174);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00013BC4);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00013DAC);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00013EC4);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00013F58);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00013F98);

INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00014518);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_00014D14);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/photo_plugin_012A1C", func_000149E4);
#endif

#if FW_VERSION >= 350
void func_00014AE8(void) {
    sceVshCommonGui_F5A16B4D(1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00014AE8(void) {
    _ZN3vsh26ShowButtonNavigation_EnterEb(1);
}
#endif
