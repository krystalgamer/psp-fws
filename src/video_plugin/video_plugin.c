/* lang: c++ */
/* cflags[152]: -O2 */
/* cflags[150]: -O2 */
/* cflags[100]: -O2 */
/* cflags: -Os */
#include "common.h"
#include "video_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/video_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/video_plugin", module_start);

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", module_stop);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 260 && FW_VERSION < 282)
s32 module_stop(void) {
    func_0003F3C0();
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000015C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00002080);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002094);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000294);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000019C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000001DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000234);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00000244);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00000268_v250);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00000268);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000029C);
#endif

#if FW_VERSION == 100
void func_0000029C(void) {
    if (D_00045A40 == NULL) {

    } else {
        func_0000096C(D_00045A40);
    }
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_000002D0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000003A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000003EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000004A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000500);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000544);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000588);

INCLUDE_ASM("nonmatchings/video_plugin", func_000005D4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000066C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000730);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/video_plugin", func_000008FC);
#endif

#if FW_VERSION == 271
void func_000008FC(void *arg0) {

}
#endif

#if FW_VERSION == 260
void func_000008FC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000090C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/video_plugin", func_000009B0);
#endif

#if FW_VERSION == 260
void func_000009B0(void) {
    _ZN3vsh13Infobar_CloseEb(0);
    func_0001698C();
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00005884);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000096C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00000B58);
#endif

#if FW_VERSION == 260
s32 func_00000B58(void *arg0) {
    _ZN3vsh13Infobar_CloseEb(0);
    func_00016958();
    func_000008FC(arg0);
    return 1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00000B94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000BEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000A38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000B40);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000CEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001068);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000F04);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00000F6C);
#endif

#if FW_VERSION == 260
void func_00000F6C(void) {
    if ((D_0004AA04 == NULL) || (M2C_FIELD(D_0004AA04, u8 *, 0x94) == 0)) {
        func_00002474();
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00000FA4);
#endif

#if FW_VERSION == 250 || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001008);
#endif

#if FW_VERSION == 260
s32 func_00001008(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}
#endif

#if FW_VERSION == 271
void func_00000530(void) {
    s32 temp_v0;
    void *temp_v0_2;

    func_00001060(0);
    temp_v0 = _ZN3paf4View4FindEPKc(&D_0004095C);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 8)(0);
        }
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000013A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001410);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001480);

INCLUDE_ASM("nonmatchings/video_plugin", func_000014AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000014D8);
#endif

#if FW_VERSION >= 282
s32 module_stop(void) {
    func_000020F8();
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0000015C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_plugin", D_0000293C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002940);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002958);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002960);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0000296C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0000297C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002988);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002998);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000029AC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000029CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000029E4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002A1C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002A24);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002A98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002A9C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002ABC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002ACC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002ADC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002B1C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002558);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002B48);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002568);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0000256C);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00002570);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040884);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000408A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000408BC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000408DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040900);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040924);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040940);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00002104);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0000210C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002118);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004095C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004DEFC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00000580);

void func_00000B48(s32 arg0) {
    void *temp_v0;

    temp_v0 = _ZNK3paf4View12GetInterfaceEi(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *, M2C_UNK), 4)(&func_00000BDC, 0);
        Job_Start(0, &func_00000D00, 0, -1, -1, func_00000D38);
    }
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00000BA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000BDC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000D00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000D38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000D40);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000DA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001060);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_0000063C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000730);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00000848);
#endif

#if FW_VERSION < 201
void func_00000848(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00000854);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000910);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0000096C);
#endif

#if FW_VERSION < 201
void func_0000096C(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x20);
    func_00005884((s32) arg0);
    M2C_FIELD(arg0, s32 *, 0x20) = temp_s1;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_000009A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000009EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000A38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000B40);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000CEC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00001068);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00000F04);
#endif

#if FW_VERSION < 201
void func_00000F04(s32 arg0) {
    if (D_00045A3C == NULL) {

    } else {
        M2C_FIELD(D_00045A3C, s32 *, 0x14) = arg0;
        M2C_FIELD(M2C_FIELD(D_00045A3C, void **, 0), M2C_UNK (**)(void *), 8)(D_00045A3C);
    }
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x80004, &func_000045E0, 0);
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00000F6C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00000F6C(void) {
    if ((D_0004AA04 == NULL) || (M2C_FIELD(D_0004AA04, u8 *, 0x94) == 0)) {
        func_00002474();
    }
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00000FA4);
#endif

#if FW_VERSION < 152 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00001008);
#endif

#if FW_VERSION == 152
s32 func_00001008(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_000011C0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00001094);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00001104);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00001104(s32 **arg0) {
    *arg0 = &D_00040E98;
    D_00045A48 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 150
void func_00001104(M2C_UNK **arg0) {
    *arg0 = &D_00040E98;
    D_00045A48 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00001130);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00001130(s32 **arg0) {
    *arg0 = &D_00040E98;
    D_00045A48 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 150
void func_00001130(M2C_UNK **arg0) {
    *arg0 = &D_00040E98;
    D_00045A48 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0000115C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0000115C(s32 **arg0) {
    *arg0 = &D_00040E98;
    D_00045A48 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150
void func_0000115C(M2C_UNK **arg0) {
    *arg0 = &D_00040E98;
    D_00045A48 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040978);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040988);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000119C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00001890);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001B44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001D18);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001D60);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000156C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001814);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001984);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00001C2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001A60_v100);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001A80);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001CB4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001AE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00001AE8(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x344) = arg1;
    }
}
#endif

#if FW_VERSION == 100
void func_00001AE8(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x33C) = arg1;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001CF8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001DA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001AFC_v100);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00001B98);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001C30);
#endif

#if FW_VERSION < 201
void func_00001C30(void) {
    s32 temp_v0;

    if (D_00045A48 != 0) {
        temp_v0 = M2C_FIELD(D_00045A48, s32 *, 0x20);
        if (temp_v0 == 0) {

        } else {
            func_0000FC1C(temp_v0);
        }
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001C70);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001C94);
#endif

#if FW_VERSION < 201
void func_00001C94(void) {
    s32 temp_v0;

    if (D_00045A48 != 0) {
        temp_v0 = M2C_FIELD(D_00045A48, s32 *, 0x20);
        if (temp_v0 == 0) {

        } else {
            func_0000FC58(temp_v0);
        }
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001CD4);
#endif

#if FW_VERSION < 201
void func_00001CD4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 == 0) {

    } else {
        func_00000A38(temp_v0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001D04);
#endif

#if FW_VERSION < 201
void func_00001D04(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 == 0) {

    } else {
        func_00000B40(temp_v0, arg1, arg2);
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001D34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001D88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001F04);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001F68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002084);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002188);

INCLUDE_ASM("nonmatchings/video_plugin", func_000022CC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040A2C);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00002584);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045B7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004C950);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040A4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045BB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000236C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040A98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045BD0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040AA8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040AC4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040AD8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040AF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045C40);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00045C50);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B14);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B24);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B34);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B44);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B4C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004CA40);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B5C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B68);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004FBD4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004FBE0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004CA6C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045CB0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B74);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000002B4);
#endif

#if FW_VERSION >= 300
void func_0000057C(void) {
    func_00001678(1, 0);
    func_00001678(2, 1);
    func_0000185C(2, 0);
}
#endif

#if FW_VERSION == 282
void func_00000540(void) {
}

void func_00000548(void) {
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_plugin", func_00000550);
#endif

#if FW_VERSION == 282
void func_00000550(void) {
    s32 temp_v0;
    struct Unk_func_00000550_temp_v0_2 *temp_v0_2;

    func_00001174(0);
    temp_v0 = _ZN3paf4View4FindEPKc(&D_00002614);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk8(0);
        }
    }
}
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000025EC);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004FC20);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004E144);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004CAAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045CE8);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000025F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045D1C);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000025FC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002608);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002614);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002624);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C40);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C60);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C80);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040CB4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040CEC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040D24);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040D58);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040D70);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040D90);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DAC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DC8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DE0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DF4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E08);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E68);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E6C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00002100);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00002164);

INCLUDE_ASM("nonmatchings/video_plugin", func_000021AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000021F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002258);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000238C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00002474);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00002474(void) {
    s32 var_v0;

    func_0000A3B0();
    func_00013398(0);
    var_v0 = Job_Start(0, &func_00004268, 0, -1, -1, func_00004320);
    if (var_v0 != 0) {

    } else {
        var_v0 = func_0000A3EC();
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000024D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000025B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000025F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000026D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000028D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002968);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00002A18);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00002A18(void) {
    s32 temp_v0;
    void *temp_v0_2;

    D_00054EEC = 0;
    temp_v0 = _ZN3paf4View4FindEPKc(&D_0004095C);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            D_00054EEC = M2C_FIELD(temp_v0_2, s32 (**)(), 0x2C)();
        }
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000147C);

void func_000011A4(s32 arg0) {
    if (arg0 != 0) {
        sce_paf_private_memset(&D_00002340, 0, 0x1958);
        M2C_FIELD(&D_00002340, s32 *, 0x1950) = -1;
        sce_paf_private_memset(&D_00003CB0, 0, 0x10);
        sce_paf_private_memset(&D_00003CD0, 0, 0x10);
        sce_paf_private_memset(&D_00003CF0, 0, 0x100);
        func_00002A18();
        D_00003DF8 = 0;
        _ZN3paf4View12SetInterfaceEiPv(arg0, 1, &D_000022F8);
    }
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00001254);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001834);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00002A74);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00002A2C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00002B20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00002BB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002CD4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00002B94);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00002BAC_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00002C54);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E70);

INCLUDE_ASM("nonmatchings/video_plugin", func_000023F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000024EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000025A0);
#endif

#if FW_VERSION < 201
void func_000025A0(void) {
    s32 temp_v0;
    void *temp_v0_2;

    if (D_00045A4C != 0) {

    } else {
        temp_v0 = _ZN3paf4View4FindEPKc(&D_00040A98);
        if (temp_v0 != 0) {
            temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
            if (temp_v0_2 != NULL) {
                M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 0x50)();
                D_00045A4C = 1;
            }
        }
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000260C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00002674);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || (FW_VERSION >= 260 && FW_VERSION < 282)
void func_00002674(void) {
    func_00002474();
}
#endif

#if FW_VERSION == 100
void func_00002674(void) {
    func_00002188(0);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001410);

void func_000014DC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_000018C8(arg0, arg1, var_v0);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00004EA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00002DD0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002EC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00002690);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00002718);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000277C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00003134);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00003234);

INCLUDE_ASM("nonmatchings/video_plugin", func_000032F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_000031C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00003554);

INCLUDE_ASM("nonmatchings/video_plugin", func_000036E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000281C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002874);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00002BAC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00003CD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00003F54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00003988);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00002CFC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000363C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00004268);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004320);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000036BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00003764);

INCLUDE_ASM("nonmatchings/video_plugin", func_00003A6C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00003F9C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00003F9C(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000043C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00004714);
#endif

#if FW_VERSION == 260
s32 func_00004714(void) {
    s32 temp_v0;
    s32 var_s0;
    void *temp_v0_2;

    var_s0 = 0;
    temp_v0 = _ZN3paf4View4FindEPKc(&D_0004C950);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            var_s0 = M2C_FIELD(temp_v0_2, s32 (**)(), 0x78)() != 0;
        }
    }
    return var_s0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00004774);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004818);

INCLUDE_ASM("nonmatchings/video_plugin", func_000049C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004D38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00004D78);
#endif

#if FW_VERSION == 260
void func_00004D78(void) {
    s32 temp_v0;
    void *temp_v0_2;

    func_0000260C();
    func_0000A3EC();
    temp_v0 = _ZN3paf4View4FindEPKc(&D_0004095C);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 8)(0);
        }
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00003FA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000407C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00005458);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00005290);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00005394);

INCLUDE_ASM("nonmatchings/video_plugin", func_000045E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000054D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000054D4(void) {
    if (D_0004A9FB == 0) {
        if ((D_0004AA04 == NULL) || (M2C_FIELD(D_0004AA04, u8 *, 0x94) == 0)) {
            func_0000A3B0();
            D_0004A9E2 = 0;
            func_00002474();
        }
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000043BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000045E0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000464C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000046D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000005A0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_plugin", func_00000B84);
#endif

#if FW_VERSION >= 350
void func_00000B84(s32 arg0) {
    void *temp_v0;

    func_00001678(8, 0);
    func_00001678(0x10, 1);
    func_0000185C(8, 0);
    temp_v0 = scePaf_DCE3D225(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *, M2C_UNK), 4)(&func_00000D40, 0);
        scePaf_3EDD45EF(0, &func_00000D70, 0, -1, -1, func_00000DF8);
    }
}
#endif

#if FW_VERSION == 282
void func_00000B84(s32 arg0) {
    struct Unk_func_00000B84_temp_v0 *temp_v0;

    temp_v0 = _ZNK3paf4View12GetInterfaceEi(arg0, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk4(&func_00000C18, 0);
        Job_Start(0, &func_00000D70, 0, -1, -1, func_00000DF8);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00000BE0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_plugin", func_00000D40);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00000C18);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00000D70);

void func_00000DF8(void) {
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00000E00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000E68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001174);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/video_plugin", D_000027B8);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_plugin", D_00002DB0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/video_plugin", D_00002FA4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002FB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001398);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_plugin", func_00001238);
#endif

#if FW_VERSION >= 350
void func_00001238(void) {
    s32 temp_v0;
    void *temp_v0_2;

    D_00004950 = 0;
    temp_v0 = scePaf_88784487(&D_00002614);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_DCE3D225(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            D_00004950 = M2C_FIELD(temp_v0_2, s32 (**)(), 0x2C)();
        }
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00001294);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001360);

void func_00001444(void) {
    func_00001360();
}

void func_00001460(void) {
    func_00001294();
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_plugin", func_00001678);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001760);
#endif

#if FW_VERSION >= 350
void func_0000176C(void) {
    s32 temp_v0;

    D_00004968 = 0;
    temp_v0 = scePaf_61A8E8EC(0x110);
    sceVshCommonUtil_E85C45FF(temp_v0);
    D_00004968 = temp_v0;
    sceVshCommonUtil_951BC384(temp_v0, &func_000017D0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_0000176C(void) {
    s32 temp_v0;

    D_00004CB8 = 0;
    temp_v0 = _Znwj(0x110);
    sceVshCommonUtil_B9B916C5(temp_v0);
    D_00004CB8 = temp_v0;
    sceVshCommonUtil_622815DD(temp_v0, &func_00001888);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_plugin", func_000017C0);
#endif

#if FW_VERSION >= 350
void func_0000180C(s32 arg0) {
    sceVshCommonUtil_21EF453A(D_00004968, arg0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_0000180C(s32 arg0) {
    sceVshCommonUtil_8584376D(D_00004CB8, arg0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_plugin", func_00001830);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000185C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_plugin", func_000017D0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_plugin", func_00001888);
#endif

#if FW_VERSION >= 300
void func_00001954(void) {
    D_00004CC0 = 0;
}
#endif

#if FW_VERSION >= 350
void func_00001870(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_88784487(&D_00002570);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_DCE3D225(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            func_00001830(0x100, 0);
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 4)();
        }
    }
}

void func_000018D0(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_88784487(&D_00002624);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_DCE3D225(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            func_00001830(0x200, 0);
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(void (*)()), 0xC)(func_00001B24);
        }
    }
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_plugin", func_00001960);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00003120);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00003138);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001A3C);
#endif

#if FW_VERSION >= 350
void func_00001B24(void) {
    s32 temp_v0;

    temp_v0 = scePaf_88784487(&D_00002624);
    if (temp_v0 != 0) {
        scePaf_58DF4B4F(temp_v0, &func_00001B80);
        func_00001678(0x10, 0);
        func_00001678(0x20, 1);
        func_00001830(0x10, 1);
    }
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00001B24(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00002624);
    if (temp_v0 != 0) {
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0, &func_00001B80);
        func_00001678(0x10, 0);
        func_00001678(0x20, 1);
        func_00001830(0x10, 1);
    }
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_plugin", func_00001B80);

s32 func_00001BC8(s32 arg0, s32 arg1) {
    return arg0 & arg1;
}

s32 func_00001BD0(s32 arg0, s32 arg1) {
    return arg0 | arg1;
}
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 271) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000147C);
#endif

#if FW_VERSION < 201
void func_0000147C(s32 arg0) {
    _ZN3paf6Module12SetInterfaceEiPv(arg0, 1, (s32) &D_000027F0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000014A0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000027B8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000015C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001768);

void func_000017F4(void) {
    func_00001768(1, 0xFFFF);
}

void func_00001814(void) {
    func_00001768(0, 0xFFFF);
}
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001834);
#endif

#if FW_VERSION >= 282
void func_00001864(void) {
    func_00001AFC();
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00001880);
#endif

#if FW_VERSION >= 350
void func_0000194C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_C1B0AA0D(arg1);
    }
    func_00001D38(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000194C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_00001D38(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000199C);
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_00001A30);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001A60);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00002474);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00004B8C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00004B8C(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    func_0000504C((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00004BAC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00004BAC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00004BBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004C48);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00004D64);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00004D64(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000504C((s32) arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00004D84);
#endif

#if FW_VERSION == 260
void func_00004D84(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_00001D38(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BDFC);
#endif

#if FW_VERSION == 260
void func_0000BDFC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_wcslen(arg1);
    }
    func_00006128(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001AFC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00004DF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004EA8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00004F3C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00004F3C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005294((s32) arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00004F5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004FD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000504C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000506C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00001B28);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00001D38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00006128);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000051FC);
#endif

#if FW_VERSION < 201
void func_000051FC(s32 arg0) {
    func_000052B4(arg0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000066BC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000018C8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00005218);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005250);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00005294);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00006A80);

INCLUDE_ASM("nonmatchings/video_plugin", func_00006B5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00006C94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00006CE8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000052B4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/video_plugin", func_0000698C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00005360);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005430);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00005668);
#endif

#if FW_VERSION < 201
void *func_00005668(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_000056A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00005814);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00005814(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000581C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00005870);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00005870(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000587C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0000587C(void) {

}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00006BA8);
#endif

#if FW_VERSION == 260
void func_00006BA8(void) {

}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00006BB0);
#endif

#if FW_VERSION == 260
void func_00006BB0(void) {

}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00005884);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00005974);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00005974(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000597C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000059C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005A0C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00005A38);
#endif

#if FW_VERSION < 201
s32 func_00005A38(void) {
    return D_00045308;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00005A44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005A84);

INCLUDE_ASM("nonmatchings/video_plugin", func_00006AD4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00007B24);

INCLUDE_ASM("nonmatchings/video_plugin", func_00007BDC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00008D34(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = arg1 & 0xFF;
    var_a2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xA8) != 0) {
        if (temp_v1 != 0) {
            M2C_FIELD(arg0, u8 *, 0xA8) = 0U;
        }
        var_a2 = func_0001A0B8(M2C_FIELD(arg0, s32 *, 0x9C), temp_v1);
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00008D74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008EBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009084);

INCLUDE_ASM("nonmatchings/video_plugin", func_000091F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000092CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000931C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000093A0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/video_plugin", func_000094E8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000094DC_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00009584);

INCLUDE_ASM("nonmatchings/video_plugin", func_000098CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000084E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000084F4);

s32 *func_00008528(void) {
    return &D_00041338;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00008534);

INCLUDE_ASM("nonmatchings/video_plugin", func_000085D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008854);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00007C74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00007D94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00007E38);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040EB8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040F88);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040FA0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040FD0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040FEC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041008);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004102C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041058);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041078);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041094);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000410AC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000410C4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000410E4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041100);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041114);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041130);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041148);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004115C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041170);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041180);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041194);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000411A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000411C4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000411D4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000411F0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041204);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041214);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004122C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004124C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041268);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041284);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000412A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000412B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00046328);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000412DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000412E8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000412F4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041300);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004130C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00046380);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00008E78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008FE4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00008D34);
#endif

#if FW_VERSION == 260
s32 func_00008D34(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = arg1 & 0xFF;
    var_a2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xB0) != 0) {
        if (temp_v1 != 0) {
            M2C_FIELD(arg0, u8 *, 0xB0) = 0U;
        }
        var_a2 = func_0001A0B8(M2C_FIELD(arg0, s32 *, 0x9C), temp_v1);
    }
    return var_a2;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000090BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000091FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000093C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000094EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009680);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000931C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009754);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009890);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009938);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009C80);
#endif

#if FW_VERSION == 100
void func_00007EDC(void) {
    sce_paf_private_printf("psjs heap is empty!\n");
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00007EFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00007F48);

INCLUDE_ASM("nonmatchings/video_plugin", func_00007FE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000808C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000083B8);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000084E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000084F4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00008528);
#endif

#if FW_VERSION == 100
s32 *func_00008528(void) {
    return &D_00041338;
}
#endif

#if FW_VERSION == 260
M2C_UNK *func_00008528(void) {
    return &D_00041338;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00008534);

INCLUDE_ASM("nonmatchings/video_plugin", func_000085D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008854);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041338);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000896C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008A34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008B1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008C04);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008CEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008DD4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A478);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00008EC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000090C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009290);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009360);

INCLUDE_ASM("nonmatchings/video_plugin", func_000094DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000095BC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000096A4);
#endif

#if FW_VERSION < 201
void func_000096A4(void) {
    func_000096C0();
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000096C0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B360);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000096DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000097A4);
#endif

#if FW_VERSION < 201
void *func_000097A4(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000413FC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041414);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004142C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041434);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041460);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041490);

INCLUDE_ASM("nonmatchings/video_plugin", func_000097DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000AEA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000AEA4(void) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4;

    temp_a2 = (((D_00045A58 & 0x3FFFFF) != 0) << 0x16) + (D_00045A58 & 0xFFC00000);
    temp_a4 = temp_a2 + 0x90000;
    temp_a1 = (((D_00045A58 & 0x3F) != 0) << 6) + (D_00045A58 & ~0x3F);
    temp_a3 = 0x800000 - (temp_a4 - D_00045A58);
    D_00045A60 = ((D_00045A58 - temp_a1) - temp_a3) + 0x770000;
    D_00045A5C = temp_a1;
    D_0004AA48 = temp_a2;
    D_0004AA40 = temp_a4;
    D_0004AA44 = temp_a3;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000098C8);
#endif

#if FW_VERSION < 201
void func_000098C8(void) {
    if (D_00045A58 != 0) {
        _ZN3vsh10FixedAlloc6UnlockEPKc(_ZN3vsh10FixedAlloc8InstanceEv(), &D_00041490);
        D_00045A58 = 0;
        D_00045A5C = 0;
        D_00045A60 = 0;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B350);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B538);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B578);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B5B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B640);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B6C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B758);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B7E0);
#endif

#if FW_VERSION == 260
void func_0000B7E0(s32 arg0) {
    sceIoClose(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B7FC);
#endif

#if FW_VERSION == 260
void func_0000B7FC(s32 arg0) {
    sce_paf_private_fclose(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B818);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B8CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B944);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B974);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004D350);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00009920);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041520);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004152C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BA80);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B974);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004156C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00009AD4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00009C0C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00009C0C(s32 **arg0) {
    *arg0 = &D_00041598;
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x01000009);
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x0100000A);
    _ZN3paf8PhWidgetD2Ev(arg0);
}
#endif

#if FW_VERSION == 100
void func_00009C0C(M2C_UNK **arg0) {
    *arg0 = &D_00041598;
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x01000009);
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x0100000A);
    _ZN3paf8PhWidgetD2Ev(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00009C5C);
#endif

#if FW_VERSION < 201
void func_00009C5C(s32 **arg0) {
    *arg0 = &D_00041598;
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x01000009);
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x0100000A);
    _ZN3paf8PhWidgetD2Ev(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00009CB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009D70);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00009E84);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00009E84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x330) = arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00009E8C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00009E8C(void *arg0, s32 arg1) {
    u8 temp_a1;

    temp_a1 = arg1 & 0xFF;
    if (M2C_FIELD(arg0, u8 *, 0x338) != temp_a1) {
        M2C_FIELD(arg0, u8 *, 0x338) = temp_a1;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BEB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000BEE4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00009EA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A21C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B8D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000B8D0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x33C) = arg1;
    M2C_FIELD(arg0, s8 *, 0x340) = 1;
}
#endif

#if FW_VERSION == 260
void func_0000B8D0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x33C) = arg1;
    func_00009EA4((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B8E0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C464);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C6F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B984);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A254);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A340);
#endif

#if FW_VERSION < 201
void func_0000A340(s32 **arg0) {
    *arg0 = &D_00041668;
}
#endif

#if FW_VERSION == 260
void func_0000A340(M2C_UNK **arg0) {
    *arg0 = &D_00041668;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A350);
#endif

#if FW_VERSION < 201
void func_0000A350(s32 **arg0) {
    *arg0 = &D_00041668;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 260
void func_0000A350(M2C_UNK **arg0) {
    *arg0 = &D_00041668;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A378);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A3A4);
#endif

#if FW_VERSION < 201
s32 func_0000A3A4(void) {
    return D_000453A8;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A3B0);
#endif

#if FW_VERSION < 201
void func_0000A3B0(void) {
    if (D_00045A70 != 0) {

    } else {
        D_00045A70 = 1;
        InputDevice_PspPad_Lock();
        InputDevice_PspHprm_Lock();
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A3EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A424);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A584);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A680);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A764);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A848);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041584);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041598);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041668);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041670);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000CAE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000AC14);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000AF6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D1E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D220);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D300);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A934);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004D500);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004D50C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004D518);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004D524);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004D534);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004D544);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004D564);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0000AC14);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000AF6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B010);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B050);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B130);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041734);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004173C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041744);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004174C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041754);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041760);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004176C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041778);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041784);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041790);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004179C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000417A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000417AC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000417B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000417BC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000417F4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041800);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004180C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_000507F8);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004ED10);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004D668);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/video_plugin", D_000466A0);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00046880);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041818);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041850);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041868);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041888);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418C0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004EDD0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004EDD4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004EDD8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004EDDC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004EDE0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004EDE4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0000CAA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000AC14);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000AF6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D0EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D12C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B130);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_000418D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418E0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418E4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418E8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418EC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B160);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B240);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0000B240(s32 arg0) {
    func_0000B744(arg0);
    func_0000BDA0(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B26C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B514);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0000B514(s32 arg0, s32 arg1) {
    if (func_0000B58C(arg0, arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0xFC) = arg1;
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B54C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B58C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B744);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B78C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000BA7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BD50);
#endif

#if FW_VERSION < 201
void func_0000BD50(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0x1C) != 2) {

    } else {
        if (M2C_FIELD(arg0, u8 *, 0x1FE) != 0) {
            M2C_FIELD(arg0, s8 *, 0x1FF) = 0;
            M2C_FIELD(arg0, u8 *, 0x1FE) = 0U;
        } else {
            M2C_FIELD(arg0, u8 *, 0x1FE) = 1U;
            M2C_FIELD(arg0, s8 *, 0x1FF) = 1;
        }
        _ZN3paf8PhWidget13UpdateCamerasEv(arg0);
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BDA0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D4D4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E13C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D62C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BDFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000BE4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000BF00);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C050);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000C2B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C38C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0000C38C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_0000EB68();
    func_0000E9D0((s32) arg0, M2C_FIELD(arg0, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s8 *, 0x48) = 0;
}
#endif

#if FW_VERSION == 100
void func_0000C38C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_0000EB68();
    func_0000E9D0((s32) arg0, M2C_FIELD(arg0, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s8 *, 0x44) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C3CC);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0000C3CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_0000EB68();
    func_0000E9D0((s32) arg0, M2C_FIELD(arg0, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s8 *, 0x48) = 0;
}
#endif

#if FW_VERSION == 100
void func_0000C3CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_0000EB68();
    func_0000E9D0((s32) arg0, M2C_FIELD(arg0, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s8 *, 0x44) = 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041910);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E618);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_0000DA60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C40C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C6DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000DE34);
#endif

#if FW_VERSION == 100
void func_0000C780(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    func_00012BF4(M2C_FIELD(arg0, s32 *, 0x18));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C7A0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_0000C7A0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x50);
}
#endif

#if FW_VERSION == 100
s32 func_0000C7A0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C7A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E008);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000CB8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E3B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041910);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041928);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041940);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000C8A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000CA70);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000CB8C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000CCD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000CE60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000CFB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D030);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D0B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D1FC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FC18);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F6AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000F6E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D30C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D348);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC44);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC80);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D384);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000ECF8);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_0000ECF8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x50) != 1) {
        return M2C_FIELD(arg0, s32 *, 0x3C);
    }
    return M2C_FIELD(arg0, s32 *, 0x40);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D3C0);

s32 func_0000D3FC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3C);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D404);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D464);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0000D464(s32 arg0, s32 arg1) {
    sce_paf_private_memcpy(arg0 + 0x54, arg1, 0x21);
}
#endif

#if FW_VERSION == 100
void func_0000D464(s32 arg0, s32 arg1) {
    sce_paf_private_memcpy(arg0 + 0x50, arg1, 0x11);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D484);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_0000D484(s32 arg0) {
    return arg0 + 0x54;
}
#endif

#if FW_VERSION == 100
s32 func_0000D484(s32 arg0) {
    return arg0 + 0x50;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EDAC);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_0000EDAC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}
#endif

#if FW_VERSION == 260
s32 func_0000FDFC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D48C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D4C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D504);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D56C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000D56C(void *arg0) {
    void *sp0;
    s32 sp4;
    s32 temp_v0_4;
    void **temp_v0;
    void **temp_v0_2;
    void **temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, void ***, 8);
    sp4 = 0;
    if (M2C_FIELD(*temp_v0, s32 (**)(void **, void *), 0x100)(temp_v0, &sp0) != 0) {

    } else {
        temp_v0_2 = M2C_FIELD(arg0, void ***, 8);
        if (M2C_FIELD(*temp_v0_2, s32 (**)(void **, s32, s32 *), 0x11C)(temp_v0_2, sp0, &sp4) == 0) {
            if ((sp4 == 1) || (M2C_FIELD(arg0, s32 *, 0x50) != 0)) {
                func_000001DC(2);
            } else {
                temp_v0_3 = M2C_FIELD(arg0, void ***, 8);
                if (M2C_FIELD(*temp_v0_3, s32 (**)(void **, M2C_UNK, M2C_UNK), 0x7C)(temp_v0_3, 2, 1) == 0) {
                    temp_v0_4 = M2C_FIELD(arg0, s32 *, 0x14);
                    if (temp_v0_4 == 0) {
                        M2C_FIELD(arg0, s32 *, 0x44) = 1;
                    } else {
                        func_0000B160(temp_v0_4, 0);
                        M2C_FIELD(arg0, s32 *, 0x44) = 1;
                    }
                }
            }
        }
    }
}
#endif

#if FW_VERSION == 100
void func_0000D56C(void *arg0) {
    void *sp0;
    s32 sp4;
    s32 temp_v0_4;
    void **temp_v0;
    void **temp_v0_2;
    void **temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, void ***, 8);
    sp4 = 0;
    if (M2C_FIELD(*temp_v0, s32 (**)(void **, void *), 0xFC)(temp_v0, &sp0) != 0) {

    } else {
        temp_v0_2 = M2C_FIELD(arg0, void ***, 8);
        if (M2C_FIELD(*temp_v0_2, s32 (**)(void **, s32, s32 *), 0x118)(temp_v0_2, sp0, &sp4) == 0) {
            if ((sp4 == 1) || (M2C_FIELD(arg0, s32 *, 0x4C) != 0)) {
                func_000001DC(2);
            } else {
                temp_v0_3 = M2C_FIELD(arg0, void ***, 8);
                if (M2C_FIELD(*temp_v0_3, s32 (**)(void **, M2C_UNK, M2C_UNK), 0x7C)(temp_v0_3, 2, 1) == 0) {
                    temp_v0_4 = M2C_FIELD(arg0, s32 *, 0x14);
                    if (temp_v0_4 == 0) {
                        M2C_FIELD(arg0, s32 *, 0x40) = 1;
                    } else {
                        func_0000B160(temp_v0_4, 0);
                        M2C_FIELD(arg0, s32 *, 0x40) = 1;
                    }
                }
            }
        }
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D650);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D6FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D7FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F1BC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D8C0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0000D8C0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x28) = 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D8CC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0000D8CC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x28) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D8D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000D8D4(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s1;
    s32 temp_v0;

    if (func_0000E84C((s32) arg0) != 1) {
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x2C);
        if (temp_s1 != 2) {
            if (func_0000D650((s32) arg0) == 0) {
                temp_a0 = M2C_FIELD(arg0, s32 *, 0x14);
                if (temp_a0 == 0) {
                    M2C_FIELD(arg0, s32 *, 0x44) = 1;
                } else {
                    func_0000B160(temp_a0, 0);
                    M2C_FIELD(arg0, s32 *, 0x44) = 1;
                }
            }
        } else {
            temp_v0 = func_0000D7FC((s32) arg0);
            if (((temp_v0 == 0) | (temp_v0 == 2)) != 0) {
                temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x14);
                if (temp_a0_2 == 0) {
                    M2C_FIELD(arg0, s32 *, 0x44) = temp_s1;
                } else {
                    func_0000B160(temp_a0_2, 2);
                    M2C_FIELD(arg0, s32 *, 0x44) = temp_s1;
                }
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
}
#endif

#if FW_VERSION == 100
void func_0000D8D4(void *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_s1 != 2) {
        if (func_0000D650((s32) arg0) != 0) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
            if (temp_v0 == 0) {

            } else {
                func_0000B160(temp_v0, 0);
            }
            M2C_FIELD(arg0, s32 *, 0x40) = 1;
        }
    } else if (func_0000D7FC((s32) arg0) != 0) {
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_v0_2 == 0) {
            M2C_FIELD(arg0, s32 *, 0x40) = temp_s1;
        } else {
            func_0000B160(temp_v0_2, 2);
            M2C_FIELD(arg0, s32 *, 0x40) = temp_s1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D980);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D9F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F4C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041910);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000DAD0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000DBAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000DDF8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000DFF0);
#endif

#if FW_VERSION < 201
void func_0000DFF0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x24) != 2) {
        func_0000D56C(arg0);
    } else {
        func_0000D6FC((s32) arg0);
    }
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00010AD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010B54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010C30);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010CAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E2B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E420);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E02C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E094);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E170);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E1D8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E2B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E420);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E5C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E62C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000E62C(void *arg0) {
    void *sp0;
    s32 sp4;
    s32 temp_v0_4;
    void **temp_v0;
    void **temp_v0_2;
    void **temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, void ***, 8);
    sp4 = 0;
    if (M2C_FIELD(*temp_v0, s32 (**)(void **, void *), 0x100)(temp_v0, &sp0) != 0) {

    } else {
        temp_v0_2 = M2C_FIELD(arg0, void ***, 8);
        if (M2C_FIELD(*temp_v0_2, s32 (**)(void **, s32, s32 *), 0x11C)(temp_v0_2, sp0, &sp4) == 0) {
            if ((sp4 == 1) || (M2C_FIELD(arg0, s32 *, 0x50) != 0)) {
                func_000001DC(2);
            } else {
                temp_v0_3 = M2C_FIELD(arg0, void ***, 8);
                if (M2C_FIELD(*temp_v0_3, s32 (**)(void **, M2C_UNK), 0x6C)(temp_v0_3, 1) == 0) {
                    temp_v0_4 = M2C_FIELD(arg0, s32 *, 0x14);
                    if (temp_v0_4 == 0) {

                    } else {
                        func_0000B160(temp_v0_4, 0xC);
                    }
                    M2C_FIELD(arg0, s32 *, 0x44) = 5;
                }
            }
        }
    }
}
#endif

#if FW_VERSION == 100
void func_0000E62C(void *arg0) {
    void *sp0;
    s32 sp4;
    s32 temp_v0_4;
    void **temp_v0;
    void **temp_v0_2;
    void **temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, void ***, 8);
    sp4 = 0;
    if (M2C_FIELD(*temp_v0, s32 (**)(void **, void *), 0xFC)(temp_v0, &sp0) != 0) {

    } else {
        temp_v0_2 = M2C_FIELD(arg0, void ***, 8);
        if (M2C_FIELD(*temp_v0_2, s32 (**)(void **, s32, s32 *), 0x118)(temp_v0_2, sp0, &sp4) == 0) {
            if ((sp4 == 1) || (M2C_FIELD(arg0, s32 *, 0x4C) != 0)) {
                func_000001DC(2);
            } else {
                temp_v0_3 = M2C_FIELD(arg0, void ***, 8);
                if (M2C_FIELD(*temp_v0_3, s32 (**)(void **, M2C_UNK), 0x6C)(temp_v0_3, 1) == 0) {
                    temp_v0_4 = M2C_FIELD(arg0, s32 *, 0x14);
                    if (temp_v0_4 == 0) {

                    } else {
                        func_0000B160(temp_v0_4, 0xC);
                    }
                    M2C_FIELD(arg0, s32 *, 0x40) = 5;
                }
            }
        }
    }
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E708);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E770);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000E770(void *arg0) {
    void *sp0;
    s32 sp4;
    s32 temp_v0_4;
    void **temp_v0;
    void **temp_v0_2;
    void **temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, void ***, 8);
    sp4 = 0;
    if (M2C_FIELD(*temp_v0, s32 (**)(void **, void *), 0x100)(temp_v0, &sp0) != 0) {

    } else {
        temp_v0_2 = M2C_FIELD(arg0, void ***, 8);
        if (M2C_FIELD(*temp_v0_2, s32 (**)(void **, s32, s32 *), 0x11C)(temp_v0_2, sp0, &sp4) == 0) {
            if ((sp4 == 1) || (M2C_FIELD(arg0, s32 *, 0x50) != 0)) {
                func_000001DC(2);
            } else {
                temp_v0_3 = M2C_FIELD(arg0, void ***, 8);
                if (M2C_FIELD(*temp_v0_3, s32 (**)(void **, M2C_UNK), 0x78)(temp_v0_3, 1) == 0) {
                    temp_v0_4 = M2C_FIELD(arg0, s32 *, 0x14);
                    if (temp_v0_4 == 0) {

                    } else {
                        func_0000B160(temp_v0_4, 0xB);
                    }
                    M2C_FIELD(arg0, s32 *, 0x44) = 6;
                }
            }
        }
    }
}
#endif

#if FW_VERSION == 100
void func_0000E770(void *arg0) {
    void *sp0;
    s32 sp4;
    s32 temp_v0_4;
    void **temp_v0;
    void **temp_v0_2;
    void **temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, void ***, 8);
    sp4 = 0;
    if (M2C_FIELD(*temp_v0, s32 (**)(void **, void *), 0xFC)(temp_v0, &sp0) != 0) {

    } else {
        temp_v0_2 = M2C_FIELD(arg0, void ***, 8);
        if (M2C_FIELD(*temp_v0_2, s32 (**)(void **, s32, s32 *), 0x118)(temp_v0_2, sp0, &sp4) == 0) {
            if ((sp4 == 1) || (M2C_FIELD(arg0, s32 *, 0x4C) != 0)) {
                func_000001DC(2);
            } else {
                temp_v0_3 = M2C_FIELD(arg0, void ***, 8);
                if (M2C_FIELD(*temp_v0_3, s32 (**)(void **, M2C_UNK), 0x78)(temp_v0_3, 1) == 0) {
                    temp_v0_4 = M2C_FIELD(arg0, s32 *, 0x14);
                    if (temp_v0_4 == 0) {

                    } else {
                        func_0000B160(temp_v0_4, 0xB);
                    }
                    M2C_FIELD(arg0, s32 *, 0x40) = 6;
                }
            }
        }
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E84C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010DC0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E8E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E92C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0000E92C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E934);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E9D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EA48);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EAAC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
u8 func_0000EAAC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x20);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EAB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EB0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EB68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010568);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00011030);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EB70);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC0C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC50);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041ACC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041AD0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041AF0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B08);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B38);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B50);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B68);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B80);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041BB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041BC8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041BDC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041BF4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C0C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C24);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C40);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C58);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C60);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C6C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041CA4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041CD8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041CE8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D04);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D3C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D58);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D7C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041DB8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_00050DB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C58);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041DD8);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041DE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC94);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001073C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_0001073C(void *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0xC);
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, s32 *, 8);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000ED38);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000ED7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EDC8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
u8 func_0000EDC8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x35);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EDD0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
u8 func_0000EDD0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x37);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EDD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EE38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010A54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010C34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F07C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000F268);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F420);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0000F420(void) {
    func_000001DC(1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010E0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010F34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010F9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F43C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F5B8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0000F5B8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F5C0);
#endif

#if FW_VERSION < 201
void func_0000F5C0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x38) + 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_v0;
    if (temp_v0 >= 3) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    func_0000EA48((s32) arg0, M2C_FIELD(arg0, s32 *, 0x38));
}
#endif

#if FW_VERSION == 260
void func_0000F5C0(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x38) + 1;
    func_0000EA48((s32) arg0, (temp_a1 >= 3) ? 0 : temp_a1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F5F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000F728);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00012120);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F7D8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F848);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00011E44);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FA94);
#endif

#if FW_VERSION < 201
void func_0000FA94(s32 arg0, s32 arg1, s32 arg2) {
    func_0000E2B4(arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FAB0);
#endif

#if FW_VERSION < 201
void func_0000FAB0(s32 arg0, s32 arg1, s32 arg2) {
    func_0000E420(arg0, arg1, arg2);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FACC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FB88);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FBE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FC1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FC58);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FD34);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041E10);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FDA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FE44);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FE78);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FF1C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000128E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012950);

INCLUDE_ASM("nonmatchings/video_plugin", func_000129B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012A28);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00011A78);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041E10);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00011A9C_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FF5C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041E30);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00011BD4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00012AEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012B64);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00012708);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012734);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012790);

INCLUDE_ASM("nonmatchings/video_plugin", func_000127BC);
#endif

#if FW_VERSION == 100
void func_0000FF84(void *arg0) {
    s32 temp_v0;

    temp_v0 = _Znwj(0x560);
    _ZN3paf7PhSceneC1EPNS_8PhWidgetEPNS_8PhAppearE(temp_v0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
    if (temp_v0 == 0) {

    } else {
        func_00004D84(temp_v0 + 4, (s32) "NavigationMenuPage");
        _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(M2C_FIELD(arg0, s32 *, 0x14), 0x10002, &func_00010074, (s32) arg0);
    }
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00010008);

s32 func_00010034(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 != 0) {
        _ZN3paf8PhWidget13DestroyWidgetEv(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    return 1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010074);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin", func_00010128);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00010128(void) {
    if ((D_00045A84 == NULL) || (M2C_FIELD(D_00045A84, u8 *, 0x94) == 0)) {
        func_00002474();
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010160);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010390);

INCLUDE_ASM("nonmatchings/video_plugin", func_000103C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010550);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000105D0);
#endif

#if FW_VERSION < 201
void func_000105D0(void) {
    s32 temp_v0;

    temp_v0 = D_00045A94 - 1;
    D_00045A94 = temp_v0;
    if (temp_v0 > 0) {

    } else {
        func_0000FE44();
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010608);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010768);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00012F44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00012F80);
#endif

#if FW_VERSION == 260
void func_00012F80(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00012FD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013058);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00017E90);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000107FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010B9C);

void func_00010C44(M2C_UNK **arg0) {
    *arg0 = &D_00041F08;
    D_00045A90 = 0;
    func_00016F3C((s32) arg0);
}

void func_00010C70(M2C_UNK **arg0) {
    *arg0 = &D_00041F08;
    D_00045A90 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}

void func_00010CB0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00041F30;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00010CCC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00010CCC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00041F30;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010CE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00010CE8(s32 **arg0) {
    *arg0 = &D_00041F30;
    D_00045A98 = 0;
}
#endif

#if FW_VERSION == 100
void func_00010CE8(M2C_UNK **arg0) {
    *arg0 = &D_00041F30;
    D_00045A98 = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010D00);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00010D00(s32 **arg0) {
    *arg0 = &D_00041F30;
    D_00045A98 = 0;
}
#endif

#if FW_VERSION == 100
void func_00010D00(M2C_UNK **arg0) {
    *arg0 = &D_00041F30;
    D_00045A98 = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010D18);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010D44);
#endif

#if FW_VERSION < 201
void *func_00010D44(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = D_00045A98;
    if (var_v0 == 0) {
        temp_v0 = _Znwj(0x10);
        func_00010CCC(temp_v0, arg0, arg1);
        D_00045A98 = (s32) temp_v0;
        var_v0 = (s32) temp_v0;
    }
    return (void *) var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010DB8);
#endif

#if FW_VERSION < 201
s32 func_00010DB8(void) {
    return D_00045A98;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010DC4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F08);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010E4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010F58);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011068);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin", func_000110E0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_000110E0(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00011124);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011164);

INCLUDE_ASM("nonmatchings/video_plugin", func_000111A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001121C);
#endif

#if FW_VERSION < 201
void func_0001121C(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {

    } else if (func_0000D48C(temp_v0) == 0) {
        temp_v0_2 = func_0000E84C(M2C_FIELD(arg0, s32 *, 0xC));
        if (temp_v0_2 != 4) {
            if (temp_v0_2 == 5) {
                func_0000D6FC(M2C_FIELD(arg0, s32 *, 0xC));
            }
        } else {
            func_0000D56C((void *) M2C_FIELD(arg0, s32 *, 0xC));
        }
        func_0000D4C8(M2C_FIELD(arg0, s32 *, 0xC));
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000112A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000112DC);
#endif

#if FW_VERSION < 201
void func_000112DC(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {

    } else if (func_0000D48C(temp_v0) == 0) {
        if ((u32) (func_0000E84C(M2C_FIELD(arg0, s32 *, 0xC)) - 2) < 2U) {
            func_0000DFF0((void *) M2C_FIELD(arg0, s32 *, 0xC));
        }
        func_0000D4C8(M2C_FIELD(arg0, s32 *, 0xC));
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00012F20);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012F60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001300C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00011350);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011418);

INCLUDE_ASM("nonmatchings/video_plugin", func_000114F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013398);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011524);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00011558);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001159C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00014A94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014B98);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000116B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000116E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001172C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011774);

INCLUDE_ASM("nonmatchings/video_plugin", func_000118A8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00011CA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014ED0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014F04);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000118EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000119A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F30);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F58);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F6C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F7C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F90);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FA4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FB8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FD4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FE8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FFC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042014);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042028);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042040);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042058);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004206C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042084);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004209C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000420B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000420CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000420E4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000420F4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004210C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042120);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042138);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004214C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004216C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000470F0);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042188);

INCLUDE_ASM("nonmatchings/video_plugin", func_000119F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00011A9C);
#endif

#if FW_VERSION < 201
void func_00011A9C(void) {
    if (D_00045B00 != NULL) {
        M2C_FIELD(D_00045B00, s32 *, 0x24) = 0;
    }
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00011AB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011B78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011BDC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00011C64);
#endif

#if FW_VERSION < 201
s32 func_00011C64(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_v0 != 0) {
        _ZN3vsh13MessageDialog10HideDeleteEv(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return 1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00011CA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011D70);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011DA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011DE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011EB4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000421A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000421AC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000421B4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004DF18);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004DF20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004DF38);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000421D0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000421DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000421FC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042208);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042228);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042234);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042258);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042268);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042284);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042294);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000422B0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000422BC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000422D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000422E0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000422F8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042300);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042318);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042324);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004232C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042344);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042350);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004235C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004237C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042388);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000423A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000423B0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000423C8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000423D4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000423DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000423F8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042404);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004240C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042424);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042430);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004243C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042454);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042460);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042468);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042480);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004E1FC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004E208);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004248C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042498);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000424B0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000424C0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000424CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000424E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011F1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000122CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00012394);
#endif

#if FW_VERSION < 201
s32 func_00012394(s32 arg0) {
    void *temp_v1;

    func_0000019C((s32) &func_00012CA0, arg0);
    temp_v1 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_v1 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(temp_v1, s32 *, 0x4B0);
    }
    M2C_FIELD(arg0, void **, 0x20) = NULL;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    return 1;
}
#endif

#if FW_VERSION == 260
s32 func_00012394(s32 arg0) {
    void *temp_v1;

    func_0000019C((s32) &func_00012CA0, arg0);
    temp_v1 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_v1 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(temp_v1, s32 *, 0x4D8);
    }
    M2C_FIELD(arg0, void **, 0x20) = NULL;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return 1;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0001555C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000158CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001429C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000145C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000123E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000126E4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000128B0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00015B68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015BC0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00012934);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012A00);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00012B54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012B90);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012BF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012CA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012CCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012CF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012D1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012E14);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000426C4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000426C8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000426CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013000);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00013098);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00013098(void) {
    func_00013000(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000130B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000130B8(s32 **arg0) {
    *arg0 = &D_000426E8;
    D_00045B04 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_000130B8(M2C_UNK **arg0) {
    *arg0 = &D_000426E8;
    D_00045B04 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000130E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000130E4(s32 **arg0) {
    *arg0 = &D_000426E8;
    D_00045B04 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 100
void func_000130E4(M2C_UNK **arg0) {
    *arg0 = &D_000426E8;
    D_00045B04 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013124);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00013124(s32 **arg0) {
    *arg0 = &D_00042708;
    D_00045B00 = NULL;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00013124(M2C_UNK **arg0) {
    *arg0 = &D_00042708;
    D_00045B00 = NULL;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00013150(s32 **arg0) {
    *arg0 = &D_00042708;
    D_00045B00 = NULL;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 100
void func_00013150(M2C_UNK **arg0) {
    *arg0 = &D_00042708;
    D_00045B00 = NULL;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013190);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013214);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013298);
#endif

#if FW_VERSION < 201
void func_00013298(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00042738;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x44));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00042760;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000132D8);
#endif

#if FW_VERSION < 201
void func_000132D8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00042738;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x44));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00042760;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013318);
#endif

#if FW_VERSION < 201
void func_00013318(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00042738;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x44));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00042760;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013360);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013428);

INCLUDE_ASM("nonmatchings/video_plugin", func_000134A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013518);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001358C);
#endif

#if FW_VERSION == 260
s32 func_0001680C(void) {
    D_00054EE1 = 1;
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000135F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001366C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000136E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013754);

INCLUDE_ASM("nonmatchings/video_plugin", func_000137C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001383C);
#endif

#if FW_VERSION < 201
void func_0001383C(s32 **arg0) {
    *arg0 = &D_00042760;
}
#endif

#if FW_VERSION == 260
void func_0001383C(M2C_UNK **arg0) {
    *arg0 = &D_00042760;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001384C);
#endif

#if FW_VERSION < 201
void func_0001384C(s32 **arg0) {
    *arg0 = &D_00042760;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 260
void func_0001384C(M2C_UNK **arg0) {
    *arg0 = &D_00042760;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00013874);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00013874(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001387C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001388C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0001388C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00013894);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00013894(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001389C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0001389C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000138A4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000138A4(void) {
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_00016ADC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000138AC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000138AC(void) {
    return 0x1E;
}
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_000426E8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042708);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042720);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042738);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042760);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000138B4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000139F0);
#endif

#if FW_VERSION == 260
void func_000139F0(s32 arg0, s32 arg1) {
    func_00016DBC(arg0, arg1, (s32) &D_000427C0, 1, 3);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00042AC0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s8 *, 0x8C) = 0;
    M2C_FIELD(arg0, s8 *, 0x8D) = 0;
    M2C_FIELD(arg0, s8 *, 0x94) = 0;
    M2C_FIELD(arg0, s8 *, 0x95) = 0;
    M2C_FIELD(arg0, s8 *, 0x96) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013AAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00013AAC(s32 **arg0) {
    *arg0 = &D_00042AC0;
    D_00045B60 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00013AAC(M2C_UNK **arg0) {
    *arg0 = &D_00042AC0;
    D_00045B60 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013AD8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00013AD8(s32 **arg0) {
    *arg0 = &D_00042AC0;
    D_00045B60 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00013AD8(M2C_UNK **arg0) {
    *arg0 = &D_00042AC0;
    D_00045B60 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013B04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00013B04(s32 **arg0) {
    *arg0 = &D_00042AC0;
    D_00045B60 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 100
void func_00013B04(M2C_UNK **arg0) {
    *arg0 = &D_00042AC0;
    D_00045B60 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013B44);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_00051708);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042720);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042738);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042760);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00015CE0);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042784);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042788);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004278C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042790);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042794);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042798);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004279C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427AC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427B0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427B8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427BC);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000427C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013BA8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042828);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477B8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477C4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477D0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015CE0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000144B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014684);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00017C64);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00014948);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00017D8C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00014A1C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00014BA4);

void func_00014C70(void) {

}

INCLUDE_ASM("nonmatchings/video_plugin", func_00014C78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014D64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014E68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015014);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015078);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001518C);

void func_000152E8(void *arg0, u32 arg1) {
    s32 temp_v1;

    temp_v1 = arg1 / 90000;
    if (temp_v1 != M2C_FIELD(arg0, s32 *, 0x90)) {
        M2C_FIELD(arg0, s32 *, 0x90) = temp_v1;
        func_00015334((s32) arg0, temp_v1, M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, s32 *, 0x48));
    }
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00015334);

INCLUDE_ASM("nonmatchings/video_plugin", func_000153F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000155BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000156E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015824);

void func_00015934(s32 arg0) {
    func_00015F14(arg0);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00015950);

INCLUDE_ASM("nonmatchings/video_plugin", func_000159E0);

void func_00015B74(s32 arg0) {
    func_00015FE8(arg0);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00015B90);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015D6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015E88);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015F14);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015FE8);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 271)
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042828);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000475D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000475E4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000475F0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000475FC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047610);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004762C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047648);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047664);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047674);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047688);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000476A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000476B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000476CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000476DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000476E8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000476F4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047710);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047730);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047750);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004776C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047788);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004779C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477B4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000178FC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00018564);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018630);

INCLUDE_ASM("nonmatchings/video_plugin", func_000186EC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00017E90);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00014C70);
#endif

#if FW_VERSION == 260
void func_00014C70(void) {

}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/video_plugin", func_000187D4);
#endif

#if FW_VERSION == 260
void func_000187D4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x96) = 1;
    func_00018D90((s32) arg0);
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/video_plugin", func_000187F8);
#endif

#if FW_VERSION == 260
void func_000187F8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x96) = 0;
    func_0001735C((s32) arg0, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00014C78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014D64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018154);

INCLUDE_ASM("nonmatchings/video_plugin", func_000182FC);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_00051A00);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00051A08);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00051A10);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477D0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00051A2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00018360);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018474);

INCLUDE_ASM("nonmatchings/video_plugin", func_000185D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018610);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00018E20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000153F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000155BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000156E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015824);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00015934);
#endif

#if FW_VERSION == 260
void func_00015934(s32 arg0) {
    func_000144B8(arg0);
    func_000192D4(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00015950);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018D90);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00015B74);
#endif

#if FW_VERSION == 260
void func_00015B74(s32 arg0) {
    func_000144B8(arg0);
    func_000193A8(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00015B90);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015D6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015E88);

INCLUDE_ASM("nonmatchings/video_plugin", func_000192D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000193A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004E7EC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_000477D0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042840);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004284C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042858);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042864);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042878);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042894);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000428B0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000428CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000428DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000428F0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004290C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004291C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042934);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042944);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042950);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004295C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042978);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042998);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000429B8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000429D4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000429F0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A04);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A08);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A0C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A1C);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A38);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000160E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001629C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016348);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016384);

INCLUDE_ASM("nonmatchings/video_plugin", func_000163D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016418);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016460);

INCLUDE_ASM("nonmatchings/video_plugin", func_000164DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016530);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00016584);
#endif

#if FW_VERSION < 201
void func_00016584(s32 arg0) {
    func_000165BC(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000165A0);
#endif

#if FW_VERSION < 201
void func_000165A0(s32 arg0) {
    func_000165BC(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000165BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016680);

INCLUDE_ASM("nonmatchings/video_plugin", func_000166D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016728);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016770);

INCLUDE_ASM("nonmatchings/video_plugin", func_000167B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016800);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016848);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016890);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000168BC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000168BC(s32 arg0) {
    D_00045B40 = func_00013B44(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000168E0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A59C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A5E4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00016958);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A660);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001698C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A6D0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00019D18);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_0001698C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000169C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00016A78);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00016A78(void) {
    func_000169C0(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00019EA4);
#endif

#if FW_VERSION == 260
void func_00019EA4(void) {
    func_000169C0(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00019EC4);
#endif

#if FW_VERSION == 260
void func_00019EC4(M2C_UNK **arg0) {
    *arg0 = &D_00044830;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00019ED4);
#endif

#if FW_VERSION == 260
void func_00019ED4(M2C_UNK **arg0) {
    *arg0 = &D_00044830;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00016A98);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016B8C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A070);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00016C04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00018C64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018D7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016CD8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00016DBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016F3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017010);

INCLUDE_ASM("nonmatchings/video_plugin", func_000170E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000171C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001729C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001735C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017468);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000174A8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000174A8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000174B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001752C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017618);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000176D8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000176D8(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000176E0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000176E0(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000176E8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001773C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017828);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00017914);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00017914(void) {
    D_0004AB60 = 0;
}
#endif

#if FW_VERSION == 100
void func_00017914(void) {
    D_00045B84 = 0;
    D_00045B80 = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00017928);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00017928(void) {
    D_0004AB60 = 0;
}
#endif

#if FW_VERSION == 100
void func_00017928(void) {
    D_00045B84 = 0;
    D_00045B80 = 0;
}

s32 func_0001793C(s32 arg0, s32 arg1, s32 arg2) {
    sce_paf_private_strncpy(arg1, arg0 + 0x44, arg2 - 1);
    M2C_FIELD((arg1 + arg2), s8 *, -1) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00017988);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00017988(s32 arg0, s32 arg1, s32 arg2) {
    sce_paf_private_strncpy(arg1, arg0 + 0x48, arg2 - 1);
    M2C_FIELD((arg1 + arg2), s8 *, -1) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000179D4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000179D4(s32 arg0, s32 arg1, s32 arg2) {
    sce_paf_private_strncpy(arg1, arg0 + 0x4C, arg2 - 1);
    M2C_FIELD((arg1 + arg2), s8 *, -1) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00019A5C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_00019A5C(s32 arg0, s32 arg1, s32 arg2) {
    sce_paf_private_strncpy(arg1, arg0 + 0x50, arg2 - 1);
    M2C_FIELD((arg1 + arg2), s8 *, -1) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00017A20);
#endif

#if FW_VERSION < 201
s32 func_00017A20(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_0000D1FC(temp_v0, arg1, arg2, arg3, arg4);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00017A58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00019BA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017B14);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00017B94);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00017BD0);
#endif

#if FW_VERSION < 201
s32 func_00017BD0(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_0000CFB0(temp_v0, arg1 & 0xFF);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_00017C0C(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_0000CA70(temp_v0, arg1);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00017C44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00019CE0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00019CE0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = *arg0;
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = func_0000E3B0(temp_v0, arg1, arg2 & 0xFF, arg3 & 0xFF);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00017C80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00017CFC);
#endif

#if FW_VERSION < 201
s32 func_00017CFC(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_0000D0B4(temp_v0, arg1);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00019DD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017D34);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042AC0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044830);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042AE0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042AF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00019EB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A0B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017DEC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00017F58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00017F58(void) {
    _ZN8PSJSExec16FinalizeExecSyncEv(_ZN3paf4View4FindEPKc(&D_00042B2C) + 0xF4);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00017F58(void) {
    _ZN8PSJSExec16FinalizeExecSyncEv(_ZN3paf4View4FindEPKc(&D_00042B2C) + 0xF0);
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_00017F58(void) {
    _ZN8PSJSExec16FinalizeExecSyncEv(_ZN3paf4View4FindEPKc(&D_00042B2C) + 0xF8);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A1C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A264);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017F88);

void func_00018000(void) {
    func_000176E8(0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001801C);
#endif

#if FW_VERSION < 201
void func_0001801C(s32 arg0) {
    func_00010608(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A2BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018038);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000180A0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000180A0(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042B2C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000180A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001830C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018398);

INCLUDE_ASM("nonmatchings/video_plugin", func_000183E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018454);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A868);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A8D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A938);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A9A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018550);

INCLUDE_ASM("nonmatchings/video_plugin", func_000185D0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042BDC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042BF4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042C10);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001865C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001874C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001883C);

void func_000188C8(void) {
    func_0001883C(1, 0xFFFF);
}

void func_000188E8(void) {
    func_0001883C(0, 0xFFFF);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00018908);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018A64);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CBC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CCC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CDC4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00018BC0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018BD4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00018C08);
#endif

#if FW_VERSION < 201
s32 *func_00018C08(void) {
    return &D_00042D2C;
}
#endif

#if FW_VERSION == 260
M2C_UNK *func_00018C08(void) {
    return &D_00042D2C;
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042D2C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018C14);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018EA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019200);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001939C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019494);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019584);

INCLUDE_ASM("nonmatchings/video_plugin", func_000196A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000197BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000198DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000199FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019B1C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001BD4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001BE28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019C3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019CC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019D4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019DD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019E5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019EE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019F6C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00019FF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A1F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A2E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A520);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001A520(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A52C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A690);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A770);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001AAC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001ABF4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CD68);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_0001CD68(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CD70);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_0001CD70(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CD78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CE1C);
#endif

#if FW_VERSION == 260
const char *func_0001CE1C(void) {
    return "play";
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AE4C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AECC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001AECC(s32 *arg0, void *arg1) {
    func_00019CE0(M2C_FIELD(arg1, s32 **, 0x28), M2C_FIELD(arg0, s32 *, 8), (s32) M2C_FIELD(arg0, u8 *, 0xC), (s32) M2C_FIELD(arg0, u8 *, 0xD));
}
#endif

#if FW_VERSION == 100
void func_0001AECC(s32 *arg0, void *arg1) {
    func_00017C0C(M2C_FIELD(arg1, s32 **, 0x28), *arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CE54);
#endif

#if FW_VERSION == 260
const char *func_0001CE54(void) {
    return "stop";
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AEF0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0001AEF0(void *arg0, void *arg1) {
    func_00017B94(M2C_FIELD(arg1, s32 *, 0x28), (s32) M2C_FIELD(arg0, u8 *, 6));
}
#endif

#if FW_VERSION == 100
void func_0001AEF0(void *arg0, void *arg1) {
    func_00017C44(M2C_FIELD(arg1, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0), (s32) M2C_FIELD(arg0, u8 *, 4));
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CE84);
#endif

#if FW_VERSION == 260
const char *func_0001CE84(void) {
    return "resume";
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AF18);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AF38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CEB4);
#endif

#if FW_VERSION == 260
const char *func_0001CEB4(void) {
    return "playStep";
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AF58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CF2C);
#endif

#if FW_VERSION == 260
const char *func_0001CF2C(void) {
    return "changeStream";
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AFC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001AFC4(s32 arg0, void *arg1) {
    func_00017CFC(M2C_FIELD(arg1, s32 **, 0x28), arg0 + 8);
}
#endif

#if FW_VERSION == 100
void func_0001AFC4(s32 arg0, void *arg1) {
    func_00017CFC(M2C_FIELD(arg1, s32 **, 0x28), arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CF60);
#endif

#if FW_VERSION == 260
const char *func_0001CF60(void) {
    return "changeResumeInfo";
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AFE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001D40C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001B410);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001B4E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001B634);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001B72C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001B970);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001BEA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001C268);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001C468);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001C5A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E85C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001C760);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001C8C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CA60);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CA60(s32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CA7C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CA7C(s32 arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CA98);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CA98(s32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CAB4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CAB4(s32 arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CAD0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CAD0(s32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CAEC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CAEC(s32 arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB08);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CB08(s32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB24);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CB24(s32 arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB40);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CB40(s32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB5C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CB5C(s32 arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001EC50);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00020F58);
#endif

#if FW_VERSION == 260
void func_00020F58(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            _ZN8PSJSHeap12private_freeEPv(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    _ZN8PSJSHeap12private_freeEPv(var_a0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001EC8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001ECE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001ED44);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CCC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CDC4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001EFDC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001EFDC(s32 **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION == 260
void func_0001EFDC(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION == 100
void func_0001CB78(s32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_0001CB94(s32 arg0) {
    _Z9PSJS_FreePv(arg0);
}

void func_0001CBB0(s32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_0001CBCC(s32 arg0) {
    _Z9PSJS_FreePv(arg0);
}

void func_0001CBE8(s32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001CC04(s32 **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION == 100
void func_0001CC04(s32 **arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION == 260
void func_0001CC04(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F014);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001F014(s32 **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION == 260
void func_0001F014(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC20);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001CC20(s32 **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION == 100
void func_0001CC20(s32 **arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION == 260
void func_0001CC20(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F04C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001F04C(s32 **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION == 260
void func_0001F04C(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC3C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001CC3C(s32 **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION == 100
void func_0001CC3C(s32 **arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION == 260
void func_0001CC3C(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F084);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001F084(s32 **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION == 260
void func_0001F084(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001CC58(s32 **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION == 100
void func_0001CC58(s32 **arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION == 260
void func_0001CC58(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F0BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001F0BC(s32 **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION == 260
void func_0001F0BC(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC74);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001CC74(s32 **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION == 100
void func_0001CC74(s32 **arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION == 260
void func_0001CC74(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F0F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001F0F4(s32 **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION == 260
void func_0001F0F4(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001CC90(s32 **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION == 100
void func_0001CC90(s32 **arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION == 260
void func_0001CC90(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F12C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001F12C(s32 **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION == 260
void func_0001F12C(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CCAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001CCAC(s32 **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION == 100
void func_0001CCAC(s32 **arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION == 260
void func_0001CCAC(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C(arg0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F164);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001F164(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            _ZN8PSJSHeap12private_freeEPv(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    _ZN8PSJSHeap12private_freeEPv(var_a0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CCC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CDC4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042F90);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042F9C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042FAC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042FB8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042FCC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042FE8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043008);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043024);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043048);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043058);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043068);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043078);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043088);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004308C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043090);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043094);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043098);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004309C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000430A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000430A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000430A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000430AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430B0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000430B8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000430BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00047F50);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047F68);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047F80);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047F98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047FB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047FC8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047FE0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CEC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CF9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001D028);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00020968);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0001D0B4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001D18C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001D264);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FABC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002087C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001D748);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DB58);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001DC44);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DD24);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DE04);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DE60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DEBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DF20);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DF80);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DFE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E044);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E0B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E12C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E188);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E234);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E2A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E31C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E390);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E3F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E458);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E4BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E520);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00022340);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00020938);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020A40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00022768);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00020B48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021068);

INCLUDE_ASM("nonmatchings/video_plugin", func_000214A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E584);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E9DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001EDBC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001EF3C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000217A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002185C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000219D8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021AAC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00021B3C_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004805C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004806C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00048078);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00048088);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00048090);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000480A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000480A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F088);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F0FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F1F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F2E8);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004312C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043138);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043144);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043154);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043164);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00048100);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043174);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043184);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043194);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000431A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004EF90);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000431B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000431C4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000431D4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000431E0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021BFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F364);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F590);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F6B8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0001F6B8(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F6C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F764);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0001F764(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F76C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0001F76C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F774);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0001F774(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F77C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0001F77C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00024108);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002217C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022294);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F784);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F890);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FA40);
#endif

#if FW_VERSION == 260
void func_0001FA40(s32 arg0) {
    func_0004808C(arg0 + 0x244);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FA94);
#endif

#if FW_VERSION == 260
void func_0001FA94(s32 arg0) {
    func_0004809C(arg0 + 0x244);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FB38);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FB58);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002258C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002258C(s32 arg0) {
    M2C_FIELD(arg0, s8 *, 0x858) = 1;
    func_0002E758(arg0 + 0x7BC, 1U);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FB78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001FB78(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 var_a0;
    void *temp_v0;

    temp_v0 = (arg1 * 0xC) + arg0;
    var_a0 = 1;
    if (arg1 < 3U) {
        var_a0 = 0;
        M2C_FIELD(temp_v0, u32 *, 0x9C0) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0x9BC) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x9C4) = arg3;
    }
    return var_a0;
}
#endif

#if FW_VERSION == 100
s32 func_0001FB78(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 var_a0;
    void *temp_v0;

    temp_v0 = (arg1 * 0xC) + arg0;
    var_a0 = 1;
    if (arg1 < 3U) {
        var_a0 = 0;
        M2C_FIELD(temp_v0, u32 *, 0x93C) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0x938) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x940) = arg3;
    }
    return var_a0;
}
#endif

#if FW_VERSION == 260
s32 func_0001FB78(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 var_a0;
    void *temp_v0;

    temp_v0 = (arg1 * 0xC) + arg0;
    var_a0 = 1;
    if (arg1 < 3U) {
        var_a0 = 0;
        M2C_FIELD(temp_v0, u32 *, 0xC24) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0xC20) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0xC28) = arg3;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000225EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000225EC(s32 arg0, s32 arg1) {
    void **temp_a0;

    M2C_FIELD(arg0, s32 *, 0x9B8) = arg1;
    func_0003847C(arg0 + 0x44, arg1);
    temp_a0 = M2C_FIELD(arg0, void ***, 0x7AC);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, s32), 0x6C)(temp_a0, arg1);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0001FBAC(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x934) = arg1;
    func_00038470(arg0 + 0x40, arg1);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FBD0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0001FBD0(s32 arg0, s32 arg1) {
    func_0003B950(arg0 + 0x44, arg1);
}
#endif

#if FW_VERSION == 100
void func_0001FBD0(s32 arg0, s32 arg1) {
    func_00037A98(arg0 + 0x40, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FBEC);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0001FBEC(s32 arg0) {
    func_00038384(arg0 + 0x44);
}
#endif

#if FW_VERSION == 100
void func_0001FBEC(s32 arg0) {
    func_00038384(arg0 + 0x40);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FC08);
#endif

#if FW_VERSION == 260
void func_0001FC08(s32 arg0) {
    func_00048490(arg0 + 0x244);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FC28);
#endif

#if FW_VERSION == 260
void func_0001FC28(s32 arg0) {
    func_00048490(arg0 + 0x244);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FC48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001FC48(s32 arg0) {
    func_00036A38(arg0 + 0x220);
}
#endif

#if FW_VERSION == 100
void func_0001FC48(s32 arg0) {
    func_00036A38(arg0 + 0x200);
}
#endif

#if FW_VERSION == 260
void func_0001FC48(s32 arg0) {
    func_000484DC(arg0 + 0x244);
}

s32 func_000253EC(void *arg0) {
    if (func_0002BE1C(M2C_FIELD(arg0, s32 *, 0x9E4), arg0 + 0xC18) != 0) {
        M2C_FIELD(arg0, s32 *, 0xC18) = -1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00025428);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000226D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FC64);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FD1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FD4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000228E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FE68);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FEB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FEF8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0001FEF8(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FF00);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FF40);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0001FF40(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FF48);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0001FF48(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FF50);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020004);

INCLUDE_ASM("nonmatchings/video_plugin", func_000200A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00020118);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00020118(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00020120);

INCLUDE_ASM("nonmatchings/video_plugin", func_000201DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000202F0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000202F0(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000202F8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000202F8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00020300);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00020300(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00020308);

INCLUDE_ASM("nonmatchings/video_plugin", func_000203A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020438);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00020534);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00020534(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a4;

    var_a4 = 1;
    if ((u32) arg2 < 0x41U) {
        M2C_FIELD(arg0, s32 *, 0x88C) = arg2;
        sce_paf_private_memcpy(arg0 + 0x890, arg1, arg2 * 4);
        var_a4 = 0;
    }
    return var_a4;
}
#endif

#if FW_VERSION == 100
s32 func_00020534(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a4;

    var_a4 = 1;
    if ((u32) arg2 < 0x41U) {
        M2C_FIELD(arg0, s32 *, 0x808) = arg2;
        sce_paf_private_memcpy(arg0 + 0x80C, arg1, arg2 * 4);
        var_a4 = 0;
    }
    return var_a4;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00020578);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000205CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
u8 func_000205CC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x820);
}
#endif

#if FW_VERSION == 100
u8 func_000205CC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x7D0);
}
#endif

#if FW_VERSION == 260
u8 func_000205CC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xA80);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023090);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000205D4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00020634);

INCLUDE_ASM("nonmatchings/video_plugin", func_000206DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00020758);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00020758(s32 arg0, s32 arg1) {
    func_000365E0(arg0 + 0x220, arg1);
}
#endif

#if FW_VERSION == 100
void func_00020758(s32 arg0, s32 arg1) {
    func_000365E0(arg0 + 0x200, arg1);
}
#endif

#if FW_VERSION == 260
void func_00020758(s32 arg0, s32 arg1) {
    func_000480B4(arg0 + 0x244, arg1);
}

INCLUDE_RODATA("nonmatchings/video_plugin", D_00052260);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002538C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0002328C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000234A0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000234B8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000265E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026684);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00023548_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020774);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002087C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002091C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A50);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00020A50(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A58);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00020A58(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A60);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00020A60(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A68);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00020A68(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023740);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023740(s32 arg0) {
    func_0001D18C(arg0 - 0x40);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A70);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00020A70(s32 arg0) {
    func_0001D18C(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A8C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00020A8C(s32 arg0) {
    func_0001D264(arg0 - 0x40);
}
#endif

#if FW_VERSION == 100
void func_00020A8C(s32 arg0) {
    func_0001D18C(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00020AA8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00020AA8(s32 arg0) {
    func_0001D264(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 100
void func_00020AC4(s32 arg0) {
    func_0001D264(arg0 - 0x38);
}

void func_00020AE0(s32 arg0, s32 arg1) {
    func_0001DB58(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00020AFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020B70);

void func_00020BE4(s32 arg0) {
    func_0001DE04(arg0 - 0x38);
}

void func_00020C00(s32 arg0) {
    func_0001DE60(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00020C1C);

void func_00020C3C(s32 arg0, s32 arg1) {
    func_0001DF20(arg0 - 0x38, arg1);
}

void func_00020C58(s32 arg0, s32 arg1) {
    func_0001DF80(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00020C74);

void func_00020C94(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E044(arg0 - 0x38, arg1, arg2);
}

void func_00020CB0(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E0B8(arg0 - 0x38, arg1, arg2);
}

void func_00020CCC(s32 arg0) {
    func_0001E12C(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00020CE8);

void func_00020D54(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E234(arg0 - 0x38, arg1, arg2);
}

void func_00020D70(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E2A8(arg0 - 0x38, arg1, arg2);
}

void func_00020D8C(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E31C(arg0 - 0x38, arg1, arg2);
}

void func_00020DA8(s32 arg0, s32 arg1) {
    func_0001E390(arg0 - 0x38, arg1);
}

void func_00020DC4(s32 arg0, s32 arg1) {
    func_0001E3F4(arg0 - 0x38, arg1);
}

void func_00020DE0(s32 arg0, s32 arg1) {
    func_0001E458(arg0 - 0x38, arg1);
}

void func_00020DFC(s32 arg0, s32 arg1) {
    func_0001E4BC(arg0 - 0x38, arg1);
}

void func_00020E18(s32 arg0, s32 arg1) {
    func_0001E520(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00020E34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020EA8);

void func_00020F1C(s32 arg0) {
    func_0001EDBC(arg0 - 0x38);
}

void func_00020F38(s32 arg0) {
    func_0001EF3C(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00020F54);

void func_00020F74(s32 arg0, s32 arg1) {
    func_0001F0FC(arg0 - 0x38, arg1);
}

void func_00020F90(s32 arg0, s32 arg1) {
    func_0001F1F8(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00020FAC);

void func_00020FCC(s32 arg0, s32 arg1, s32 arg2) {
    func_0001F364(arg0 - 0x38, arg1, arg2);
}

void func_00020FE8(s32 arg0, s32 arg1, s32 arg2) {
    func_0001F590(arg0 - 0x38, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00021004);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021020);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002108C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000210A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000210C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000210E0);

void func_000210FC(s32 arg0, s32 arg1) {
    func_0001F784(arg0 - 0x38, arg1);
}

void func_00021118(s32 arg0, s32 arg1) {
    func_0001F890(arg0 - 0x38, arg1);
}

void func_00021134(s32 arg0) {
    func_0001FA40(arg0 - 0x38);
}

void func_00021150(s32 arg0) {
    func_0001FA94(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0002116C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021188);

void func_000211A4(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    func_0001FB78(arg0 - 0x38, arg1, arg2, arg3);
}

void func_000211C0(s32 arg0, s32 arg1) {
    func_0001FBAC(arg0 - 0x38, arg1);
}

void func_000211DC(s32 arg0, s32 arg1) {
    func_0001FBD0(arg0 - 0x38, arg1);
}

void func_000211F8(s32 arg0) {
    func_0001FBEC(arg0 - 0x38);
}

void func_00021214(s32 arg0) {
    func_0001FC08(arg0 - 0x38);
}

void func_00021230(s32 arg0) {
    func_0001FC28(arg0 - 0x38);
}

void func_0002124C(s32 arg0) {
    func_0001FC48(arg0 - 0x38);
}

void func_00021268(s32 arg0, s32 arg1) {
    func_0001FC64(arg0 - 0x38, arg1);
}

void func_00021284(s32 arg0, s32 arg1) {
    func_0001FD1C(arg0 - 0x38, arg1);
}

void func_000212A0(s32 arg0, s32 arg1) {
    func_0001FD4C(arg0 - 0x38, arg1);
}

void func_000212BC(s32 arg0, s32 arg1) {
    func_0001FE68(arg0 - 0x38, arg1);
}

void func_000212D8(s32 arg0, s32 arg1) {
    func_0001FEB0(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_000212F4);

void func_00021310(s32 arg0, s32 arg1) {
    func_0001FF00(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0002132C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021348);

void func_00021364(s32 arg0, s32 arg1, s32 arg2) {
    func_0001FF50(arg0 - 0x38, arg1, arg2);
}

void func_00021380(s32 arg0, s32 arg1, s32 arg2) {
    func_00020004(arg0 - 0x38, arg1, arg2);
}

void func_0002139C(s32 arg0, s32 arg1) {
    func_000200A4(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_000213B8);

void func_000213D4(s32 arg0, s32 arg1, s32 arg2) {
    func_00020120(arg0 - 0x38, arg1, arg2);
}

void func_000213F0(s32 arg0, s32 arg1, s32 arg2) {
    func_000201DC(arg0 - 0x38, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0002140C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021428);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021448);

void func_00021464(s32 arg0, s32 arg1) {
    func_00020308(arg0 - 0x38, arg1);
}

void func_00021480(s32 arg0, s32 arg1) {
    func_000203A0(arg0 - 0x38, arg1);
}

void func_0002149C(s32 arg0, s32 arg1) {
    func_00020438(arg0 - 0x38, arg1);
}

void func_000214B8(s32 arg0, s32 arg1, s32 arg2) {
    func_00020534(arg0 - 0x38, arg1, arg2);
}

void func_000214D4(s32 arg0, s32 arg1, s32 arg2) {
    func_00020578(arg0 - 0x38, arg1, arg2);
}
#endif
