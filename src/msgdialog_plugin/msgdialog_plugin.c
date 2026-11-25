/* cflags: -Os */
#include "common.h"
#include "msgdialog_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", module_start);

#if FW_VERSION < 282
s32 module_stop(void) {
    func_00000CC4();
    return 0;
}

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_0000015C);
#else
s32 module_stop(void) {
    func_00001014();
    return 0;
}

void func_0000015C(void) {
    scePaf_F609FA81(D_00001A5C, &D_000012F0, 0, 0);
    scePaf_CAF05F1D(D_00001A5C, &D_000012F0);
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_000001AC);
#else
void func_000001AC(void) {
    scePaf_27F64616(D_00001A5C);
    D_00001A68 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_000001E4);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000238);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000012BC);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000012D4);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000012F0);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000244);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_000002E8);

#if FW_VERSION < 282
void func_00000384(void) {
    scePaf_27F64616(D_00001A5C);
    D_00001A68 = 0;
}
#else
void func_000003C8(void) {
    scePaf_27F64616(D_00001A5C);
    D_00001A68 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_000003F0);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000414);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000444);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_000004C4);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000530);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_000006A4);
#endif

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_000009E0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_000005F4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_000009E0_v271);
#endif

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000ADC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000984);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_000009B4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000B00);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000B30);
#endif

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001324);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000138C);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000013A4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001298);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000013E8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000012D8_v260);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000012B4_v250);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000012B4_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000012D8);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000012F8);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001318);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000133C);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001360);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000013A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001384);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000013F0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000013A4_v250);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000013A4_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000013C4);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000013E4);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001400);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000141C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001480);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001434_v250);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001434_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001450);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000146C);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001490);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000014A8);
#endif

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000013CC);

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000013E8);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000140C);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000142C);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000144C);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001470);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001494);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000014B8);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000014E0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001500);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001520);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001540);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000155C);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001578);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001590);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000015AC);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000015C8);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000015EC);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001604);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001624);
#endif

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001638);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000164C);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001660);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001678);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000016F0);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001708);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000171C);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001734);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001750);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001768);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001784);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000179C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000017B4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000017D8);
#endif

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001808);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000182C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001518);
#endif

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001854);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001874);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001898);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000018B8);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000018E0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001604);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001434);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000163C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001638_v201);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000144C_v152);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000144C_v150);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001910);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001938);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001960);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000198C);
#endif

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000019AC);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000017D8);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001808_v271);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000182C_v271);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001854_v271);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001874_v271);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001898_v271);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000018B8_v271);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000018E0_v271);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001910);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001938);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_00001960);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_0000198C);

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000019AC_v271);
#endif

INCLUDE_RODATA("nonmatchings/msgdialog_plugin", D_000019E0);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000B98);

void func_00000BC8(void) {
    func_00000BE4();
}

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000BE4);

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00000998(void) {
    void *sp0;
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
    func_00000E88(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00000E88(&sp0);
}
#endif

#if FW_VERSION < 260
void func_00000998(void) {
    void *sp0;
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_E9930C29(-1));
    func_00000E88(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_5C161337(-1));
    func_00000E88(&sp0);
}
#endif

#if FW_VERSION == 282
void func_00000C0C(void) {
    void *sp0;
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
    func_00000E88(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00000E88(&sp0);
}
#endif

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000C58);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000E88);

#if FW_VERSION < 282
void func_00000B68(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_00000F08(arg0, arg1, var_v0);
}
#else
void func_00000EB8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_00000F08(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000F08);

INCLUDE_ASM("nonmatchings/msgdialog_plugin", func_00000FBC);
