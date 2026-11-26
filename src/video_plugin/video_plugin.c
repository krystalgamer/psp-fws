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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", module_stop);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 260 && FW_VERSION < 282)
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

INCLUDE_ASM("nonmatchings/video_plugin", func_0000029C);
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

INCLUDE_ASM("nonmatchings/video_plugin", func_00000F04);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00001104);
#endif

#if FW_VERSION == 100
void func_00001104(M2C_UNK **arg0) {
    *arg0 = &D_00040E98;
    D_00045A48 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_00001130);
#endif

#if FW_VERSION == 100
void func_00001130(M2C_UNK **arg0) {
    *arg0 = &D_00040E98;
    D_00045A48 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/video_plugin", func_0000115C);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0000147C);
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

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000051FC);
#endif

#if FW_VERSION == 152
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

INCLUDE_ASM("nonmatchings/video_plugin", func_00008528);

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

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin", func_00008528);
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

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000096A4);
#endif

#if FW_VERSION == 152
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

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000098C8);
#endif

#if FW_VERSION == 100
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

INCLUDE_ASM("nonmatchings/video_plugin", func_00009C0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009C5C);

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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A340);
#endif

#if FW_VERSION == 260
void func_0000A340(M2C_UNK **arg0) {
    *arg0 = &D_00041668;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A350);
#endif

#if FW_VERSION == 260
void func_0000A350(M2C_UNK **arg0) {
    *arg0 = &D_00041668;
    _ZdlPv();
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

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BD50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
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
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FA94);
#endif

#if FW_VERSION == 152
void func_0000FA94(s32 arg0, s32 arg1, s32 arg2) {
    func_0000E2B4(arg0, arg1, arg2);
}
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FAB0);
#endif

#if FW_VERSION == 152
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

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010CE8);
#endif

#if FW_VERSION == 100
void func_00010CE8(M2C_UNK **arg0) {
    *arg0 = &D_00041F30;
    D_00045A98 = 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00010D00);
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

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000130B8);
#endif

#if FW_VERSION == 100
void func_000130B8(M2C_UNK **arg0) {
    *arg0 = &D_000426E8;
    D_00045B04 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000130E4);
#endif

#if FW_VERSION == 100
void func_000130E4(M2C_UNK **arg0) {
    *arg0 = &D_000426E8;
    D_00045B04 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013124);
#endif

#if FW_VERSION == 100
void func_00013124(M2C_UNK **arg0) {
    *arg0 = &D_00042708;
    D_00045B00 = NULL;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013150);
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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001383C);
#endif

#if FW_VERSION == 260
void func_0001383C(M2C_UNK **arg0) {
    *arg0 = &D_00042760;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001384C);
#endif

#if FW_VERSION == 260
void func_0001384C(M2C_UNK **arg0) {
    *arg0 = &D_00042760;
    _ZdlPv();
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

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013AAC);
#endif

#if FW_VERSION == 100
void func_00013AAC(M2C_UNK **arg0) {
    *arg0 = &D_00042AC0;
    D_00045B60 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013AD8);
#endif

#if FW_VERSION == 100
void func_00013AD8(M2C_UNK **arg0) {
    *arg0 = &D_00042AC0;
    D_00045B60 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00013B04);
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
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00015934);
#endif

#if FW_VERSION == 152
void func_00015934(s32 arg0) {
    func_00015F14(arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00015950);

INCLUDE_ASM("nonmatchings/video_plugin", func_000159E0);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00015B74);
#endif

#if FW_VERSION == 152
void func_00015B74(s32 arg0) {
    func_00015FE8(arg0);
}
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00016584);
#endif

#if FW_VERSION == 152
void func_00016584(s32 arg0) {
    func_000165BC(arg0);
}
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000165A0);
#endif

#if FW_VERSION == 152
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
    _ZdlPv();
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

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0001801C);
#endif

#if FW_VERSION == 152
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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00018C08);
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
M2C_UNK *func_0001CE1C(void) {
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
M2C_UNK *func_0001CE54(void) {
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
M2C_UNK *func_0001CE84(void) {
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
M2C_UNK *func_0001CEB4(void) {
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
M2C_UNK *func_0001CF2C(void) {
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
M2C_UNK *func_0001CF60(void) {
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
void func_0001CA60(void) {
    _Z11PSJS_Mallocj();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CA7C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CA7C(void) {
    _Z9PSJS_FreePv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CA98);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CA98(void) {
    _Z11PSJS_Mallocj();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CAB4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CAB4(void) {
    _Z9PSJS_FreePv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CAD0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CAD0(void) {
    _Z11PSJS_Mallocj();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CAEC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CAEC(void) {
    _Z9PSJS_FreePv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB08);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CB08(void) {
    _Z11PSJS_Mallocj();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB24);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CB24(void) {
    _Z9PSJS_FreePv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB40);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CB40(void) {
    _Z11PSJS_Mallocj();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB5C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0001CB5C(void) {
    _Z9PSJS_FreePv();
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

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001EFDC);
#endif

#if FW_VERSION == 260
void func_0001EFDC(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION == 100
void func_0001CB78(void) {
    _Z11PSJS_Mallocj();
}

void func_0001CB94(void) {
    _Z9PSJS_FreePv();
}

void func_0001CBB0(void) {
    _Z11PSJS_Mallocj();
}

void func_0001CBCC(void) {
    _Z9PSJS_FreePv();
}

void func_0001CBE8(void) {
    _Z11PSJS_Mallocj();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC04);
#endif

#if FW_VERSION == 260
void func_0001CC04(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F014);
#endif

#if FW_VERSION == 260
void func_0001F014(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC20);
#endif

#if FW_VERSION == 260
void func_0001CC20(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F04C);
#endif

#if FW_VERSION == 260
void func_0001F04C(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC3C);
#endif

#if FW_VERSION == 260
void func_0001CC3C(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F084);
#endif

#if FW_VERSION == 260
void func_0001F084(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC58);
#endif

#if FW_VERSION == 260
void func_0001CC58(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F0BC);
#endif

#if FW_VERSION == 260
void func_0001F0BC(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC74);
#endif

#if FW_VERSION == 260
void func_0001CC74(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F0F4);
#endif

#if FW_VERSION == 260
void func_0001F0F4(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC90);
#endif

#if FW_VERSION == 260
void func_0001CC90(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F12C);
#endif

#if FW_VERSION == 260
void func_0001F12C(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CCAC);
#endif

#if FW_VERSION == 260
void func_0001CCAC(M2C_UNK **arg0) {
    *arg0 = &D_00047FE0;
    func_0001CB5C();
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

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0002258C);
#endif

#if FW_VERSION == 152
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
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FBAC);
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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000205CC);
#endif

#if FW_VERSION == 150
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

INCLUDE_ASM("nonmatchings/video_plugin", func_000210FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021118);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021134);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021150);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002116C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021188);

INCLUDE_ASM("nonmatchings/video_plugin", func_000211A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000211C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000211DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000211F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021214);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021230);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002124C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021268);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021284);

INCLUDE_ASM("nonmatchings/video_plugin", func_000212A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000212BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000212D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000212F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021310);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002132C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021348);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021364);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021380);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002139C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000213B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000213D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000213F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002140C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021428);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021448);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021464);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021480);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002149C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000214B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000214D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000214F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002150C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021528);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021544);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021560);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002157C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002157C(s32 arg0, s32 arg1, s32 arg2) {
    func_0002087C(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002373C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000237CC_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023840);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000238B4);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_000238B4(s32 arg0) {
    func_0001DE04(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000238D0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_000238D0(s32 arg0) {
    func_0001DE60(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000238EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002390C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002390C(s32 arg0, s32 arg1) {
    func_0001DF20(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023928);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023928(s32 arg0, s32 arg1) {
    func_0001DF80(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023944);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023964);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023964(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E044(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023980);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023980(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E0B8(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002399C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002399C(s32 arg0) {
    func_0001E12C(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000239B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023A24);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023A24(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E234(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023A40);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023A40(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E2A8(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023A5C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023A5C(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E31C(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023A78);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023A78(s32 arg0, s32 arg1) {
    func_0001E390(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023A94);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023A94(s32 arg0, s32 arg1) {
    func_0001E3F4(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023AB0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023AB0(s32 arg0, s32 arg1) {
    func_0001E458(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023ACC);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023ACC(s32 arg0, s32 arg1) {
    func_0001E4BC(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023AE8);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023AE8(s32 arg0, s32 arg1) {
    func_0001E520(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00025D24);
#endif

#if FW_VERSION == 260
void func_00025D24(s32 arg0) {
    func_00022340(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023B04);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023B78);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023BEC);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023BEC(s32 arg0) {
    func_000214A8(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023C08);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023C08(s32 arg0) {
    func_0001EF3C(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023C24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023C44);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023C44(s32 arg0, s32 arg1) {
    func_0002185C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023C60);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023C60(s32 arg0, s32 arg1) {
    func_000219D8(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023C7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023C9C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023C9C(s32 arg0, s32 arg1, s32 arg2) {
    func_00021BFC(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023CB8);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023CB8(s32 arg0, s32 arg1, s32 arg2) {
    func_0001F590(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023CD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023CF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00025F98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023D5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023D78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023D94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023DB0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023DCC);
#endif

#if FW_VERSION == 152
void func_00023DCC(s32 arg0, s32 arg1) {
    func_0002217C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023DE8);
#endif

#if FW_VERSION == 152
void func_00023DE8(s32 arg0, s32 arg1) {
    func_00022294(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023E04);
#endif

#if FW_VERSION == 152
void func_00023E04(s32 arg0) {
    func_0001FA40(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023E20);
#endif

#if FW_VERSION == 152
void func_00023E20(s32 arg0) {
    func_0001FA94(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023E3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023E58);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023E74);
#endif

#if FW_VERSION == 152
void func_00023E74(s32 arg0) {
    func_0002258C(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023E90);
#endif

#if FW_VERSION == 152
void func_00023E90(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    func_0001FB78(arg0 - 0x3C, arg1, arg2, arg3);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023EAC);
#endif

#if FW_VERSION == 152
void func_00023EAC(s32 arg0, s32 arg1) {
    func_000225EC(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023EC8);
#endif

#if FW_VERSION == 152
void func_00023EC8(s32 arg0, s32 arg1) {
    func_0001FBD0(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023EE4);
#endif

#if FW_VERSION == 152
void func_00023EE4(s32 arg0) {
    func_0001FBEC(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023F00);
#endif

#if FW_VERSION == 152
void func_00023F00(s32 arg0) {
    func_0001FC08(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023F1C);
#endif

#if FW_VERSION == 152
void func_00023F1C(s32 arg0) {
    func_0001FC28(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023F38);
#endif

#if FW_VERSION == 152
void func_00023F38(s32 arg0) {
    func_0001FC48(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023F54);
#endif

#if FW_VERSION == 152
void func_00023F54(s32 arg0, s32 arg1) {
    func_000226D0(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023F70);
#endif

#if FW_VERSION == 152
void func_00023F70(s32 arg0, s32 arg1) {
    func_0001FD1C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023F8C);
#endif

#if FW_VERSION == 152
void func_00023F8C(s32 arg0, s32 arg1) {
    func_0001FD4C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023FA8);
#endif

#if FW_VERSION == 152
void func_00023FA8(s32 arg0, s32 arg1) {
    func_000228E8(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023FC4);
#endif

#if FW_VERSION == 152
void func_00023FC4(s32 arg0, s32 arg1) {
    func_0001FEB0(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023FE0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023FFC);
#endif

#if FW_VERSION == 152
void func_00023FFC(s32 arg0, s32 arg1) {
    func_0001FF00(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00024018);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024034);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00024050);
#endif

#if FW_VERSION == 152
void func_00024050(s32 arg0, s32 arg1, s32 arg2) {
    func_0001FF50(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0002406C);
#endif

#if FW_VERSION == 152
void func_0002406C(s32 arg0, s32 arg1, s32 arg2) {
    func_00020004(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00024088);
#endif

#if FW_VERSION == 152
void func_00024088(s32 arg0, s32 arg1) {
    func_000200A4(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000240A4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000240C0);
#endif

#if FW_VERSION == 152
void func_000240C0(s32 arg0, s32 arg1, s32 arg2) {
    func_00020120(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000240DC);
#endif

#if FW_VERSION == 152
void func_000240DC(s32 arg0, s32 arg1, s32 arg2) {
    func_000201DC(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000240F8);
#endif

#if FW_VERSION == 260
void func_00027344_v260(s32 arg0, s32 arg1, s32 arg2) {
    func_000201DC(arg0 - 0x3C, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00027360);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00024114);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024134);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00024150);
#endif

#if FW_VERSION == 152
void func_00024150(s32 arg0, s32 arg1) {
    func_00020308(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0002416C);
#endif

#if FW_VERSION == 152
void func_0002416C(s32 arg0, s32 arg1) {
    func_000203A0(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00024188);
#endif

#if FW_VERSION == 152
void func_00024188(s32 arg0, s32 arg1) {
    func_00020438(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000241A4);
#endif

#if FW_VERSION == 152
void func_000241A4(s32 arg0, s32 arg1, s32 arg2) {
    func_00020534(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000241C0);
#endif

#if FW_VERSION == 152
void func_000241C0(s32 arg0, s32 arg1, s32 arg2) {
    func_00020578(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000241DC);
#endif

#if FW_VERSION == 152
void func_000241DC(s32 arg0) {
    func_000205CC(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000241F8);
#endif

#if FW_VERSION == 152
void func_000241F8(s32 arg0, s32 arg1) {
    func_00023090(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00024214);
#endif

#if FW_VERSION == 152
void func_00024214(s32 arg0, s32 arg1) {
    func_00020634(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00024230);
#endif

#if FW_VERSION == 152
void func_00024230(s32 arg0, s32 arg1) {
    func_000206DC(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0002424C);
#endif

#if FW_VERSION == 152
void func_0002424C(s32 arg0, s32 arg1) {
    func_00020758(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00024268);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00024268(s32 arg0, s32 arg1, s32 arg2) {
    func_000234A0(arg0 - 0x40, arg1, arg2);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021598);
#endif

#if FW_VERSION == 260
void func_00021598(M2C_UNK **arg0) {
    *arg0 = &D_00043510;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000215A8);
#endif

#if FW_VERSION == 260
void func_000215A8(M2C_UNK **arg0) {
    *arg0 = &D_00043510;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000215D0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000215D0(void) {

}
#endif

#if FW_VERSION == 260
s32 func_0002752C(void) {
    return 0;
}

s32 func_00027534(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000215D8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000215D8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000215E0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000215E0(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000215E8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000215E8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000215F0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000215F0(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000215F8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000215F8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021600);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021600(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021608);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021608(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021610);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021610(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021618);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021618(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021620);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021620(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021628);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021628(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021630);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021630(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021638);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021638(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021640);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021640(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021648);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021648(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021650);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021650(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021658);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021658(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021660);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021660(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021668);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021668(void) {
    return 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin", func_00021670);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_00021670(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000265BC);
#endif

#if FW_VERSION == 260
s32 func_000265BC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000265C4);
#endif

#if FW_VERSION == 260
s32 func_000265C4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00024364);
#endif

#if FW_VERSION == 150
s32 func_00024364(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x99C);
}
#endif

#if FW_VERSION == 260
s32 func_00024364(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xBFC);
}
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_00021678);
#endif

#if FW_VERSION == 152
void func_00021678(s32 arg0) {
    func_00024364(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000265F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026638);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026680);

INCLUDE_ASM("nonmatchings/video_plugin", func_000266B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000266E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026720);

INCLUDE_ASM("nonmatchings/video_plugin", func_000268DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026CC4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00026D30);
#endif

#if FW_VERSION == 260
s32 func_00026D30(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x198) = 0;
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00026D44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026D60);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026D7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026DB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026DEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026E34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026E7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00026ED8);
#endif

#if FW_VERSION == 260
s32 func_00026ED8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00026EE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026FB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026FC0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027344);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027370);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027428);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027444);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027460);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027498);

INCLUDE_ASM("nonmatchings/video_plugin", func_000274D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027500);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027530);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027570);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002761C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027628);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027A10);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027A3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027AF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027B0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027B28);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027C00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027CD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027D08);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027D38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027D78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028060);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002807C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028098);

INCLUDE_ASM("nonmatchings/video_plugin", func_000280A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002872C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000290F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029434);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029788);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029894);

INCLUDE_ASM("nonmatchings/video_plugin", func_000299C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029A78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029CC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029ECC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029EF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029F6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A0F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A12C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A198);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A218);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A334);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A41C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A4B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A640);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A6EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A774);
#endif

#if FW_VERSION == 260
s32 func_0002A774(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A77C);
#endif

#if FW_VERSION == 260
s32 func_0002A77C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A784);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A960);
#endif

#if FW_VERSION == 260
s32 func_0002A960(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xDC) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A96C);
#endif

#if FW_VERSION == 260
s32 func_0002A96C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE0) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A978);
#endif

#if FW_VERSION == 260
s32 func_0002A978(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE4) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A984);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AAF8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002ACA8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002ADBC);
#endif

#if FW_VERSION == 260
s32 func_0002ADBC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002ADC8);
#endif

#if FW_VERSION == 260
s32 func_0002ADC8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD20) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002ADD4);
#endif

#if FW_VERSION == 260
s32 func_0002ADD4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BE1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BEC8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002ADE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B270);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B2FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B3C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B45C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B5FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B7C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B870);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B90C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B994);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C860);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA2C_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BEF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C264);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C6CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C7D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC18);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CFCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D394);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D780);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004EFF8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F028);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043510);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F450);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F478);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F4C0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F510);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F560);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F5A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F5B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F5C0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F5CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F5D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F5E4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F5F0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F5FC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F604);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F610);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F618);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F620);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EC48);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D9E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DD40);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E000);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E434);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E618);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E6DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E8C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002ED60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EE74);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F11C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F294);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F3D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F6FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F860);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F97C);
#endif

#if FW_VERSION == 260
void func_0002F97C(s32 arg0) {
    func_000290F4(arg0 - 0x7C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F998);
#endif

#if FW_VERSION == 260
void func_0002F998(s32 arg0) {
    func_000290F4(arg0 - 0x68);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F9B4);
#endif

#if FW_VERSION == 260
void func_0002F9B4(s32 arg0) {
    func_00029434(arg0 - 0x7C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F9D0);
#endif

#if FW_VERSION == 260
void func_0002F9D0(s32 arg0) {
    func_00029434(arg0 - 0x68);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F9EC);
#endif

#if FW_VERSION == 260
void func_0002F9EC(s32 arg0) {
    func_00029894(arg0 - 0x68);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FA08);
#endif

#if FW_VERSION == 260
void func_0002FA08(s32 arg0) {
    func_000299C0(arg0 - 0x7C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FA24);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002FA68);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002FAA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002FB68);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC34);
#endif

#if FW_VERSION == 260
void func_0002FC34(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC3C);
#endif

#if FW_VERSION == 260
s32 func_0002FC3C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC44);
#endif

#if FW_VERSION == 260
s32 func_0002FC44(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC4C);
#endif

#if FW_VERSION == 260
s32 func_0002FC4C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC54);
#endif

#if FW_VERSION == 260
s32 func_0002FC54(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC5C);
#endif

#if FW_VERSION == 260
s32 func_0002FC5C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC64);
#endif

#if FW_VERSION == 260
s32 func_0002FC64(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC6C);
#endif

#if FW_VERSION == 260
s32 func_0002FC6C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC74);
#endif

#if FW_VERSION == 260
s32 func_0002FC74(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC7C);
#endif

#if FW_VERSION == 260
s32 func_0002FC7C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC84);
#endif

#if FW_VERSION == 260
s32 func_0002FC84(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC8C);
#endif

#if FW_VERSION == 260
s32 func_0002FC8C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC94);
#endif

#if FW_VERSION == 260
s32 func_0002FC94(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FC9C);
#endif

#if FW_VERSION == 260
s32 func_0002FC9C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FCA4);
#endif

#if FW_VERSION == 260
s32 func_0002FCA4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FCAC);
#endif

#if FW_VERSION == 260
s32 func_0002FCAC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FCB4);
#endif

#if FW_VERSION == 260
s32 func_0002FCB4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FCBC);
#endif

#if FW_VERSION == 260
s32 func_0002FCBC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FCC4);
#endif

#if FW_VERSION == 260
s32 func_0002FCC4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FCCC);
#endif

#if FW_VERSION == 260
s32 func_0002FCCC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FCD4);
#endif

#if FW_VERSION == 260
s32 func_0002FCD4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FCDC);
#endif

#if FW_VERSION == 260
s32 func_0002FCDC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FCE4);
#endif

#if FW_VERSION == 260
s32 func_0002FCE4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FCEC);
#endif

#if FW_VERSION == 260
s32 func_0002FCEC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FCF4);
#endif

#if FW_VERSION == 260
s32 func_0002FCF4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FCFC);
#endif

#if FW_VERSION == 260
s32 func_0002FCFC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FD04);
#endif

#if FW_VERSION == 260
s32 func_0002FD04(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FD0C);
#endif

#if FW_VERSION == 260
s32 func_0002FD0C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FD14);
#endif

#if FW_VERSION == 260
s32 func_0002FD14(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FD1C);
#endif

#if FW_VERSION == 260
s32 func_0002FD1C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FD24);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002FDE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002FE9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002FF74);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003004C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00030138);
#endif

#if FW_VERSION == 260
void func_00030138(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00030140);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000312A0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00030378_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000303F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030448);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003051C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030558);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030594);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003063C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000306A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000306E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000308E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003096C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000309F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030A74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030AA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030ADC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030B5C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_000528C8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000528CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000528D0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000528D4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000528D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000528DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F648);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F708);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F790);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F798);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F7A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F7B0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F7C0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F7CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F7D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F7E0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F7E4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F7EC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004F800);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030C1C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021694);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021748);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002189C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002193C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000219E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021A54);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021A54(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_0002951C(arg1);
    var_v1 = 0;
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    if (temp_v0 == 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021A90);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021AEC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00021AEC(void *arg0) {
    func_000292F0(M2C_FIELD(arg0, s32 *, 8));
}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004320C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004321C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043250);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043510);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043658);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043668);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004368C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000436B0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000436D4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043704);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043728);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021B08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021B3C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021B3C(void *arg0) {
    func_00025B40(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24);
}
#endif

#if FW_VERSION == 100
void func_00021B3C(void *arg0) {
    func_00025B40(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021B64);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021B98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00021B98(s32 arg0, s32 arg1) {
    func_00026004(arg0 + (arg1 * 0x5C) + 0x18);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00021B98(s32 arg0, s32 arg1) {
    func_00026004(arg0 + (arg1 << 6) + 0x18);
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_00021B98(s32 arg0, s32 arg1) {
    func_00026004(arg0 + (arg1 * 0x60) + 0x18);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021BC0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021BC0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021BCC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021BCC(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 6;
    if (arg1 < 3) {
        M2C_FIELD(arg0, s32 *, 0xC) = arg1;
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021BE8);
#endif

#if FW_VERSION < 201
s32 func_00021BE8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x11C);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021BF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021C6C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021D00);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021D00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = func_00026100((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x18));
}
#endif

#if FW_VERSION == 100
void func_00021D00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = func_00026100((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18));
}
#endif

#if FW_VERSION == 260
void func_00021D00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = func_00026100((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18));
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021D38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021D88);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021DD8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021DD8(void *arg0) {
    func_00026194((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x18));
}
#endif

#if FW_VERSION == 100
void func_00021DD8(void *arg0) {
    func_00026194((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18));
}
#endif

#if FW_VERSION == 260
void func_00021DD8(void *arg0) {
    func_00026194((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18));
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021E00);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00021E8C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021E8C(void *arg0) {
    func_000261A0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x18));
}
#endif

#if FW_VERSION == 100
void func_00021E8C(void *arg0) {
    func_000261A0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18));
}
#endif

#if FW_VERSION == 260
void func_00021E8C(void *arg0) {
    func_000261A0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021EB4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021EB4(void *arg0) {
    func_00025CAC((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_00021EB4(void *arg0) {
    func_00025CAC((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021EDC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021EDC(void *arg0) {
    func_00025CB8((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_00021EDC(void *arg0) {
    func_00025CB8((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021F04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021F04(void *arg0) {
    func_00025B5C((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_00021F04(void *arg0) {
    func_00025B5C((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021F2C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021F2C(void *arg0) {
    func_00025B68((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_00021F2C(void *arg0) {
    func_00025B68((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021F54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021FC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021FC4(void *arg0) {
    func_00025CE4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_00021FC4(void *arg0) {
    func_00025CE4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00021FEC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021FEC(void *arg0, s32 arg1) {
    func_00025CF4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24), arg1);
}
#endif

#if FW_VERSION == 100
void func_00021FEC(void *arg0, s32 arg1) {
    func_00025CF4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24), arg1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00022014);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000220C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000220C0(void *arg0) {
    func_00025CD4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_000220C0(void *arg0) {
    func_00025CD4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000220E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000220E8(void *arg0) {
    func_000257E4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_000220E8(void *arg0) {
    func_000257E4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00022110);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022110(void *arg0, s32 arg1, s32 arg2) {
    func_00025788((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24), arg1, arg2);
}
#endif

#if FW_VERSION == 100
void func_00022110(void *arg0, s32 arg1, s32 arg2) {
    func_00025788((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24), arg1, arg2);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00022138);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000221DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000221DC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00025D94((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24), arg1, arg2, arg3);
}
#endif

#if FW_VERSION == 100
void func_000221DC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00025D94((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24), arg1, arg2, arg3);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022204);

INCLUDE_ASM("nonmatchings/video_plugin", func_000222C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022380);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022458);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000224A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000224F8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00022548);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022548(void *arg0, s32 arg1) {
    func_00028614((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x30), arg1);
}
#endif

#if FW_VERSION == 100
void func_00022548(void *arg0, s32 arg1) {
    func_00026880((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x30), arg1);
}
#endif

#if FW_VERSION == 260
void func_00022548(void *arg0, s32 arg1) {
    func_00028614((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x30), arg1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00022570);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022610);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000226EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000226EC(void *arg0, s32 arg1) {
    func_0002870C((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x38), arg1);
}
#endif

#if FW_VERSION == 100
void func_000226EC(void *arg0, s32 arg1) {
    func_00026960((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x38), arg1);
}
#endif

#if FW_VERSION == 260
void func_000226EC(void *arg0, s32 arg1) {
    func_0002870C((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x38), arg1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00022714);

INCLUDE_ASM("nonmatchings/video_plugin", func_000227C4);
#endif

#if FW_VERSION == 100
void func_000228B0(void *arg0, s32 arg1) {
    func_00026A6C((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x40), arg1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000228D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022978);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00022A54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022A54(void *arg0) {
    func_000254FC((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x48));
}
#endif

#if FW_VERSION == 100
void func_00022A54(void *arg0) {
    func_000254FC((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x48));
}
#endif

#if FW_VERSION == 260
void func_00022A54(void *arg0) {
    func_000254FC((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x48));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00032168);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00022A7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022B38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000322F8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000323D0);
#endif

#if FW_VERSION == 260
void func_000323D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000322F8(arg0, arg1, arg2 + arg3, arg4);
}
#endif

#if FW_VERSION == 100
void func_00022BA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00022B38(arg0, arg1 + arg2, arg3);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00022BC0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00032418);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00022BF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022BF0(void *arg0, s32 arg1, s32 arg2) {
    func_000255B0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x48), arg1, arg2);
}
#endif

#if FW_VERSION == 100
void func_00022BF0(void *arg0, s32 arg1, s32 arg2) {
    func_000255B0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x48), arg1, arg2);
}
#endif

#if FW_VERSION == 260
void func_00022BF0(void *arg0, s32 arg1, s32 arg2) {
    func_000255B0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x48), arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00032470);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00025A60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022C18);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022D00);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00022D64);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00022EC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022EC4(void *arg0, s32 arg1) {
    func_000266A4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x18), arg1);
}
#endif

#if FW_VERSION == 100
void func_00022EC4(void *arg0, s32 arg1) {
    func_000266A4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18), arg1);
}
#endif

#if FW_VERSION == 260
void func_00022EC4(void *arg0, s32 arg1) {
    func_000266A4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18), arg1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00022EEC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00032A50);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00022F80);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin", func_00023000);
#endif

#if FW_VERSION == 152
void func_00023000(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = func_000251F0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x4C), arg1 - 1, arg2);
}
#endif

#if FW_VERSION == 260
void func_00023000(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = func_000251F0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x50), arg1 - 1, arg2);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002304C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00032C5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032D90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00025F54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000230C8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000231D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000330AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00026174);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000232B8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000233DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000234C0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023548);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000235C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000235C4(void *arg0) {
    func_000251C8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x4C);
}
#endif

#if FW_VERSION == 100
void func_000235C4(void *arg0) {
    func_000251C8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x4C);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000235EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00023684);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023684(void *arg0, s32 arg1, s32 arg2) {
    func_00025248((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x4C), arg1 - 1, arg2);
}
#endif

#if FW_VERSION == 100
void func_00023684(void *arg0, s32 arg1, s32 arg2) {
    func_00025248((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x4C), arg1 - 1, arg2);
}
#endif

#if FW_VERSION == 260
void func_00023684(void *arg0, s32 arg1, s32 arg2) {
    func_00025248((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x50), arg1 - 1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000265E0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000265E0(void *arg0, s32 arg1) {
    func_00026E30((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x4C), arg1 - 1);
}
#endif

#if FW_VERSION == 260
void func_000265E0(void *arg0, s32 arg1) {
    func_00026E30((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x50), arg1 - 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000236B0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000236B0(void *arg0) {
    func_000267E8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60);
}
#endif

#if FW_VERSION == 100
void func_000236B0(void *arg0) {
    func_000262E4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000236D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000236D8(void *arg0, s32 arg1) {
    func_000281F8((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60), arg1);
}
#endif

#if FW_VERSION == 100
void func_000236D8(void *arg0, s32 arg1) {
    func_000262F0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18), arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023700);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023700(void *arg0, s32 arg1, s32 arg2) {
    func_00028268((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60), arg1, arg2);
}
#endif

#if FW_VERSION == 100
void func_00023700(void *arg0, s32 arg1, s32 arg2) {
    func_00026370((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18), arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023728);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023728(void *arg0, s32 arg1, s32 arg2) {
    func_00028320((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60), arg1, arg2);
}
#endif

#if FW_VERSION == 100
void func_00023728(void *arg0, s32 arg1, s32 arg2) {
    func_00026438((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18), arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023750);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023750(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00028394((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60), arg1, arg2, arg3);
}
#endif

#if FW_VERSION == 100
void func_00023750(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000264A4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18), arg1, arg2, arg3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023778);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023778(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00028468((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60), arg1, arg2, arg3, arg4);
}
#endif

#if FW_VERSION == 100
void func_00023778(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0002657C((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18), arg1, arg2, arg3, arg4);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00026734);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00026734(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00028198((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60), arg1);
    return temp_v0 + ((u32) ~temp_v0 >> 0x1F);
}
#endif

#if FW_VERSION == 260
s32 func_00026734(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00028198((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x64), arg1);
    return temp_v0 + ((u32) ~temp_v0 >> 0x1F);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000237A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000237A0(void *arg0) {
    return func_000260F8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x18) + 1;
}
#endif

#if FW_VERSION == 100
s32 func_000237A0(void *arg0) {
    return func_000260F8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18) + 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000237CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000237CC(void *arg0) {
    func_00025E54(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24);
}
#endif

#if FW_VERSION == 100
void func_000237CC(void *arg0) {
    func_00025E54(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000237F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000237F4(void *arg0, s32 arg1) {
    s32 var_v1;

    if (arg1 != 0x1B) {
        if (((arg1 == 0x10) | (arg1 == 0xA0)) == 0) {
            var_v1 = 0;
            if (arg1 == 0xB1) {
                var_v1 = func_000269EC(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x40);
            }
        } else {
            var_v1 = func_000268D0(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x38);
        }
    } else {
        var_v1 = func_00026878(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x30);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_000237F4(void *arg0, s32 arg1) {
    s32 var_v1;

    if (arg1 != 0x1B) {
        if (((arg1 == 0x10) | (arg1 == 0xA0)) == 0) {
            var_v1 = 0;
            if (arg1 == 0xB1) {
                var_v1 = func_000269EC(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x40);
            }
        } else {
            var_v1 = func_000268D0(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x38);
        }
    } else {
        var_v1 = func_00026878(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x30);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00023890);

INCLUDE_ASM("nonmatchings/video_plugin", func_000238B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000238E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023904);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023924);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023F00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024064);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024104);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024414);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024738);

s32 func_00024808(void *arg0) {
    void *sp0;
    func_00021BC0(arg0, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK), 0xC)(arg0, 1);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK), 0x18)(arg0, 0);
    M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, void *), 0x50)(arg0, 0, &sp0);
    M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, M2C_UNK, void *), 0x54)(arg0, 0, 0, &sp0);
    M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x58)(arg0, 0, 0xE000, 0, &sp0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_000248BC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00024EC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024F10);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00024F20);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00024F68);
#endif

#if FW_VERSION == 260
void func_00024F68(M2C_UNK **arg0) {
    *arg0 = &D_000437B8;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00024F78);
#endif

#if FW_VERSION == 260
void func_00024F78(M2C_UNK **arg0) {
    *arg0 = &D_000437B8;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00033920);
#endif

#if FW_VERSION == 260
s32 func_00033920(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FA0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00024FA0(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FA8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00024FA8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FB0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00024FB0(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FB8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00024FB8(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FC0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00024FC0(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024FEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024FFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002500C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002501C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002502C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00025044);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025044(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002504C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002504C(void) {
    return 1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00025054);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00025070);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025070(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00025078);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025078(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00025080);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025080(void) {
    return 1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00025088);

INCLUDE_ASM("nonmatchings/video_plugin", func_000250AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000250D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00033A8C);
#endif

#if FW_VERSION == 260
s32 func_00033A8C(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00026B48);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_00026B48(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000250FC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000250FC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00025104);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025104(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00033AAC);
#endif

#if FW_VERSION == 260
s32 func_00033AAC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00033AB4);
#endif

#if FW_VERSION == 260
s32 func_00033AB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00026B60);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026BE0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00026CB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00026CB8(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        sce_paf_private_free(temp_v0);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0_2 != 0) {
        sce_paf_private_free(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002510C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025134);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin", func_00025150);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_00025150(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_00026D38((s32) arg0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00026D38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002516C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000251C8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000251C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00026E30);
#endif

#if FW_VERSION == 100
s32 func_000251D0(s32 arg0) {
    func_00025380(arg0);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000251F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025248);
#endif

#if FW_VERSION == 100
s32 func_00025298(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00043828;
    return (s32) &D_00043828;
}

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043748);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000437B8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043828);

INCLUDE_ASM("nonmatchings/video_plugin", func_000252B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025380);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004386C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043890);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025404);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025454);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002549C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002549C(s32 arg0, s32 arg1) {
    return (arg0 << 8) | arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000254A8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000254A8(s32 *arg0) {
    *arg0 = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000254B0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000254B0(s32 *arg0) {
    *arg0 = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000254B8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000254B8(s32 *arg0) {
    *arg0 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000254C4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000254C4(s32 *arg0, s32 arg1) {
    func_000254B8(arg0);
    *arg0 = arg1;
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000254FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025518);

INCLUDE_ASM("nonmatchings/video_plugin", func_000255B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00025670);
#endif

#if FW_VERSION < 201
void func_00025670(void *arg0) {
    func_000267F4((s32) (arg0 + 0xC));
    func_000268C4((s32) (arg0 + 0x14));
    func_000269E0((s32) (arg0 + 0x1C));
    func_000254B0(arg0 + 0x24);
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 260
void func_00025670(void *arg0) {
    func_000267F4(arg0 + 0xC);
    func_000268C4(arg0 + 0x14);
    func_000269E0(arg0 + 0x1C);
    func_000254B0(arg0 + 0x24);
    func_000254B0(arg0 + 0x28);
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000256C0);
#endif

#if FW_VERSION < 201
s32 func_000256C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00026800((s32) (arg0 + 0xC));
    func_000268D8((s32) (arg0 + 0x14));
    func_000269F4((s32) (arg0 + 0x1C));
    func_000254B8(arg0 + 0x24);
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_000256C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00026800((s32) (arg0 + 0xC));
    func_000268D8((s32) (arg0 + 0x14));
    func_000269F4((s32) (arg0 + 0x1C));
    func_000254B8(arg0 + 0x24);
    func_000254B8(arg0 + 0x28);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00025714);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025764);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025788);

INCLUDE_ASM("nonmatchings/video_plugin", func_000257E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025968);

INCLUDE_ASM("nonmatchings/video_plugin", func_000259F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025A74);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00025B40);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00025B40(void *arg0) {
    func_00029E44(M2C_FIELD(arg0, s32 *, 8));
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00025B5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025B68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025B74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025C24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00025CAC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025CAC(s32 arg0) {
    return M2C_FIELD(arg0, s32 *, 8) + 0x2C;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00025CB8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00025CC4);
#endif

#if FW_VERSION < 201
s32 func_00025CC4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x1C), s32 *, 4);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00025CD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025CE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025CF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025D94);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00025E54);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025E54(s32 *arg0) {
    return *arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00048680);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000437B8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00025E5C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043910);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043934);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025EAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025EFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025F44);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin", func_00025F8C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00025F8C(void *arg0) {
    func_00025670(arg0 + 0xC);
    func_00026BE0((s32) (arg0 + 0x34));
    func_00027F20((s32) (arg0 + 0x48));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 260
void func_00025F8C(void *arg0) {
    func_00025670(arg0 + 0xC);
    func_00026BE0(arg0 + 0x38);
    func_00027F20(arg0 + 0x4C);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin", func_00025FC8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00025FC8(void *arg0) {
    func_00025670(arg0 + 0xC);
    func_00026BE0((s32) (arg0 + 0x34));
    func_00027F20((s32) (arg0 + 0x48));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 260
void func_00025FC8(void *arg0) {
    func_00025670(arg0 + 0xC);
    func_00026BE0(arg0 + 0x38);
    func_00027F20(arg0 + 0x4C);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00026004);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026070);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000260F8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000260F8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00026100);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026114);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00026164);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
s32 func_00026164(s32 arg0, s32 arg1) {
    return (func_00026194(arg0) >= arg1) ? 0 : 6;
}
#endif

#if FW_VERSION < 152
s32 func_00026164(s32 arg0, s32 arg1) {
    return -(func_00026194(arg0) < arg1) & 6;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00026194);

INCLUDE_ASM("nonmatchings/video_plugin", func_000261A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000261F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00027D10);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027D30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026250);

INCLUDE_ASM("nonmatchings/video_plugin", func_000262E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000262F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026370);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026438);

INCLUDE_ASM("nonmatchings/video_plugin", func_000264A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002657C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00026698);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00026698(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000266A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00026738);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
s32 func_00026738(void *arg0, u32 arg1) {
    return (arg1 < (u32) M2C_FIELD(arg0, u32 *, 8)) ? 0 : 6;
}
#endif

#if FW_VERSION < 152
s32 func_00026738(void *arg0, u32 arg1) {
    return ~-(arg1 < (u32) M2C_FIELD(arg0, u32 *, 8)) & 6;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00026750);

INCLUDE_ASM("nonmatchings/video_plugin", func_000267A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00027EA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027F20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00027FF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00027FF8(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        sce_paf_private_free(temp_v0);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0_2 != 0) {
        sce_paf_private_free(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00028050);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00028050(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void **, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = func_0002B548(arg1);
    func_0002808C((s32) arg0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002808C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028198);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000351E0);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin", func_000267E8);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_000267E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000281F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028268);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028320);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028394);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028468);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000267F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026800);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026810);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00026878);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00026878(s32 *arg0) {
    return *arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00028614);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026880);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000268B8);
#endif

#if FW_VERSION == 152
void func_000268B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000268C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000268D0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000268D0(s32 *arg0) {
    return *arg0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000268D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000268E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002870C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026960);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000269D4);
#endif

#if FW_VERSION == 152
void func_000269D4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000269E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000269EC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000269EC(s32 *arg0) {
    return *arg0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000269F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026A04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00028804);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026A6C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00026AD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026C1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026D64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026E14);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026EC4);

void func_00026F7C(s32 arg0) {
    D_00045B90 = arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00028D48(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x5C);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x14);
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00028D68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028EEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028F08);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028F50);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028FEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029030);

INCLUDE_ASM("nonmatchings/video_plugin", func_000290B4);

s32 func_000290F0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0002B9C0((s32) (arg0 + 0x3C), arg1 + 0x40, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0002911C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000293EC);
#endif

#if FW_VERSION == 152
void func_000293EC(s32 arg0) {
    func_00026E14(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00029408);
#endif

#if FW_VERSION == 152
void func_00029408(s32 arg0) {
    func_00026EC4(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00029424);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027558);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002759C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000294C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002960C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029758);

INCLUDE_ASM("nonmatchings/video_plugin", func_000297E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029870);

void func_00029904(s32 arg0) {
    D_0004AB70 = arg0;
}
#endif

#if FW_VERSION == 152
void func_00029850(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x10C);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x3C);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION == 150
void func_00029910_v150(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x10C);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x3C);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00029930);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029DB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029DD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029E1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029F44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029FD8);

s32 func_0002A014(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0002B9C0((s32) (arg0 + 0x3C), arg1 + 0x18, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A040);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A1D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A4E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A54C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A734);
#endif

#if FW_VERSION == 152
void func_0002A734(s32 arg0) {
    func_000297E4(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A750);
#endif

#if FW_VERSION == 152
void func_0002A750(s32 arg0) {
    func_00029870(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A76C);
#endif

#if FW_VERSION == 152
void func_0002A76C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00029DB0(arg0 - 0x3C, arg1, arg2, arg3);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A788);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A844);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A900);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A8BC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A97C_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9F8);

void func_0002AA7C(s32 arg0) {
    D_0004AB74 = arg0;
}

void func_0002AA88(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x70);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0xC0);
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AAA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AC00);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AC4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002ACBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002ADBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AE04);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AE48);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AE98);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B004);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B0C4_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B148);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B1A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B228);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B250);
#endif

#if FW_VERSION == 152
void func_0002B278(s32 arg0) {
    func_0002A8BC(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150
void func_0002B278(s32 arg0) {
    func_0002A97C_v150(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B294);
#endif

#if FW_VERSION == 152
void func_0002B294(s32 arg0) {
    func_0002A9F8(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B2B0);
#endif

#if FW_VERSION == 152
void func_0002B2B0(s32 arg0, s32 arg1, s32 arg2) {
    func_0002AC00(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B2CC);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002B2CC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (func_0002F2C8(arg1) & 1);
    M2C_FIELD(arg0, s32 *, 4) = func_0002F2E0(arg1 + 2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B318);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002B318(s32 *arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg1, u8 *, 0) << 8;
    *arg0 = temp_v0;
    *arg0 = temp_v0 | M2C_FIELD(arg1, u8 *, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000290E0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_000290E0(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B33C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000291A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B40C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B42C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002B42C(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00026F88);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00026F88(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_000439F8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A0C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00048894);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026F90);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002714C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027168);

INCLUDE_ASM("nonmatchings/video_plugin", func_000271B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000271E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002722C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027268);

s32 func_000272A4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_0002B9C0((s32) (arg0 + 0x38), arg1 + 0x40, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_000272D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027504);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027520);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002753C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027558);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002759C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000275D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027714);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027850);

INCLUDE_ASM("nonmatchings/video_plugin", func_000278D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027958);

void func_000279E4(s32 arg0) {
    D_00045B94 = arg0;
}

void func_000279F0(void) {

}

INCLUDE_ASM("nonmatchings/video_plugin", func_000279F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027E74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027E9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027EE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027F80);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027FC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028000);

s32 func_0002803C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_0002B9C0((s32) (arg0 + 0x38), arg1 + 0x18, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00028068);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028220);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028528);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028594);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002870C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028728);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028744);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028760);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028808);

INCLUDE_ASM("nonmatchings/video_plugin", func_000288B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028924);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028998);

void func_00028A14(s32 arg0) {
    D_00045B98 = arg0;
}

void func_00028A20(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A60);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043AA0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043AB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043AC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00048918);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043AD0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043ADC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B00);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B38);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B48);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B58);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_000489D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028A28);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028BE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028C2C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028C9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028CD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028D1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028D60);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028DB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028F68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028FA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028FE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002903C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029064);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002908C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000290A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000290C4);

void func_000290E0(void) {

}

INCLUDE_ASM("nonmatchings/video_plugin", func_000290E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000291A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029258);

void func_00029278(void) {

}

void func_00029280(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B98);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00029288);

INCLUDE_ASM("nonmatchings/video_plugin", func_000292CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B4A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B548);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_0002B548(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x304);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000292F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029320);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002951C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002957C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029630);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B898);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B8F0);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
void func_0002B8F0(s32 arg0) {
    func_0002A964(arg0 + 0x10C);
    func_0002A98C(arg0 + 0x118);
    func_0002A9B4(arg0 + 0x124);
    func_0002E110(arg0 + 4);
}
#endif

#if FW_VERSION == 150
void func_0002B9C0_v150(s32 arg0) {
    func_0002A964(arg0 + 0x10C);
    func_0002A98C(arg0 + 0x118);
    func_0002A9B4(arg0 + 0x124);
    func_0002E110(arg0 + 4);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029694);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00029910);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029AB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029B38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00029BB8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00029BB8(s32 arg0) {
    func_0002E304(arg0 + 4);
    func_00029AB8(arg0);
    func_00029B38(arg0);
    func_00029630(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00029BF8);
#endif

#if FW_VERSION < 201
void func_00029BF8(s32 arg0) {
    func_00029BB8(arg0);
    func_0002A9CC(arg0 + 0x124);
    func_0002A9A4(arg0 + 0x118);
    func_0002A97C(arg0 + 0x10C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00029C38);
#endif

#if FW_VERSION < 201
void func_00029C38(s32 arg0) {
    func_00029BB8(arg0);
    func_0002A9CC(arg0 + 0x124);
    func_0002A9A4(arg0 + 0x118);
    func_0002A97C(arg0 + 0x10C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BD24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029C78);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00029CE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029D74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029DDC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029E44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029E74);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00029E94);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00029E94(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00029E9C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00029E9C(void) {

}
#endif

#if FW_VERSION == 100
void func_00029EA4(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00029EAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029F40);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029F7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A050);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A0D8);
#endif

#if FW_VERSION < 201
void func_0002A0D8(s32 arg0) {
    func_0002A138(arg0);
    func_0002AF20(arg0 + 0x20);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A108);
#endif

#if FW_VERSION < 201
void func_0002A108(s32 arg0) {
    func_0002A138(arg0);
    func_0002AF20(arg0 + 0x20);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A138);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A194);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A20C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002A20C(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, u32 *, 0x18) = (u32) (arg1 >> 0xB);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C308);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002C308(void *arg0) {
    func_0002AF30((s32) (arg0 + 0x20));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION == 260
void func_0002C308(void *arg0) {
    func_0002AF30(arg0 + 0x20);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C334);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002C334(void *arg0) {
    func_0002AF30((s32) (arg0 + 0x20));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION == 260
void func_0002C334(void *arg0) {
    func_0002AF30(arg0 + 0x20);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A21C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A43C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A65C);
#endif

#if FW_VERSION == 260
void func_0002A65C(M2C_UNK **arg0) {
    *arg0 = &D_00043F70;
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043BFC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043C04);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043C3C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043C60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A66C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A73C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A7C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A810);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A8E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A964);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A97C);
#endif

#if FW_VERSION == 260
void func_0002A97C(M2C_UNK **arg0) {
    *arg0 = &D_00043F60;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A98C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9A4);
#endif

#if FW_VERSION == 260
void func_0002A9A4(M2C_UNK **arg0) {
    *arg0 = &D_00043F50;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9B4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9CC);
#endif

#if FW_VERSION == 260
void func_0002A9CC(M2C_UNK **arg0) {
    *arg0 = &D_00043F40;
}
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9DC);
#endif

#if FW_VERSION == 152
void func_0002A9DC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00043F70;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AA78);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AAC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AB98);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AC68);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002ACEC);
#endif

#if FW_VERSION == 260
void func_0002ACEC(M2C_UNK **arg0) {
    *arg0 = &D_00043F30;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002ACFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002ADCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AE50);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AF20);
#endif

#if FW_VERSION == 260
void func_0002AF20(M2C_UNK **arg0) {
    *arg0 = &D_00043F20;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AF30);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AF48);
#endif

#if FW_VERSION == 152
void func_0002AF48(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00043F30;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AF60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AFE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B02C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B074);
#endif

#if FW_VERSION == 260
void func_0002B074(M2C_UNK **arg0) {
    *arg0 = &D_00043F70;
    _ZdlPv();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B09C);
#endif

#if FW_VERSION == 260
void func_0002B09C(M2C_UNK **arg0) {
    *arg0 = &D_00043F60;
    _ZdlPv();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B0C4);
#endif

#if FW_VERSION == 260
void func_0002B0C4(M2C_UNK **arg0) {
    *arg0 = &D_00043F50;
    _ZdlPv();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B0EC);
#endif

#if FW_VERSION == 260
void func_0002B0EC(M2C_UNK **arg0) {
    *arg0 = &D_00043F40;
    _ZdlPv();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B114);
#endif

#if FW_VERSION == 260
void func_0002B114(M2C_UNK **arg0) {
    *arg0 = &D_00043F30;
    _ZdlPv();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B13C);
#endif

#if FW_VERSION == 260
void func_0002B13C(M2C_UNK **arg0) {
    *arg0 = &D_00043F20;
    _ZdlPv();
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F30);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F40);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F50);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F60);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F70);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B164);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B2E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B36C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B3F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B454);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B524);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B610);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00038B10);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B718);
#endif

#if FW_VERSION < 201
void func_0002B718(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00043FA8;
    func_0002C9E4(M2C_FIELD(arg0, s32 *, 4));
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B754);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002B754(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B75C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B7BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B81C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B85C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B89C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B8E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B964);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002B964(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B96C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B9B8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002B9B8(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B9C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B9E8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002B9E8(s32 arg0, s32 arg1) {
    func_0002C144(arg1, arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA0C);
#endif

#if FW_VERSION == 260
void func_0002BA0C(M2C_UNK **arg0) {
    *arg0 = &D_00043FF0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA1C);
#endif

#if FW_VERSION == 260
void func_0002BA1C(M2C_UNK **arg0) {
    *arg0 = &D_00043FF0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA2C);
#endif

#if FW_VERSION == 260
void func_0002BA2C(M2C_UNK **arg0) {
    *arg0 = &D_00043FF0;
    _ZdlPv();
}
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA54);
#endif

#if FW_VERSION == 152
void func_0002BA54(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000440B8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA6C);
#endif

#if FW_VERSION == 152
void func_0002BA6C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000440B8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA84);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002BA84(void *arg0) {
    void *temp_s0;
    void *var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000440B8;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, void **, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, void **, 8);
                if (var_v0 != NULL) {
                    _ZdlPv(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BADC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002BADC(void *arg0) {
    void *temp_s0;
    void *var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000440B8;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, void **, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, void **, 8);
                if (var_v0 != NULL) {
                    _ZdlPv(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BB34);
#endif

#if FW_VERSION < 201
void func_0002BB34(void *arg0) {
    void *temp_s0;
    void *var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000440B8;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, void **, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, void **, 8);
                if (var_v0 != NULL) {
                    _ZdlPv(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BBA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BC30);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043FA8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043FB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043FD0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043FF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BC78);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044028);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BD90);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BF9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C048);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C0E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C144);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C200);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C22C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002C22C(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000440B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C234);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C310);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C3C8);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_0002C3C8(void *arg0, s32 arg1) {
    func_0002DB58(M2C_FIELD(arg0, s32 *, 8), arg1);
    return 1;
}
#endif

#if FW_VERSION == 100
s32 func_0002C3C8(void *arg0, s32 arg1) {
    func_0002DB58(M2C_FIELD(arg0, s32 *, 4), arg1);
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C3E8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002C3E8(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C3F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C410);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002C410(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C660((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_0002C410(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C660((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C448);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002C448(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C660((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_0002C448(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C660((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C480);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002C480(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C6B0((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_0002C480(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C6B0((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C4B8);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002C4B8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C6B0((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_0002C4B8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C6B0((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C4F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002C4F0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_0002C310((s32) arg0);
    }
    func_0002C700((s32) (arg0 + 0xC));
}
#endif

#if FW_VERSION == 100
void func_0002C4F0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0002C310((s32) arg0);
    }
    func_0002C700((s32) (arg0 + 0xC));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C53C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002C53C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_0002C310((s32) arg0);
    }
    func_0002C700((s32) (arg0 + 0xC));
}
#endif

#if FW_VERSION == 100
void func_0002C53C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0002C310((s32) arg0);
    }
    func_0002C700((s32) (arg0 + 0xC));
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C588);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E538);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E538(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C948(arg0 + 4);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E578);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E578(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C948(arg0 + 4);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E5B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E5B8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C998(arg0 + 4, arg1);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E5F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E5F8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C998(arg0 + 4, arg1);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E638);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E638(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C9E4(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E660);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E660(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C9E4(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E688);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E688(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C9E4(M2C_FIELD(arg0, s32 *, 4));
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E6C4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E624);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E704_v150);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E758);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002E758(void *arg0, u32 arg1) {
    return func_0002CA10(M2C_FIELD(arg0, s32 *, 4), arg1) == 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E778);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002E778(void *arg0, s32 arg1) {
    return func_0002CA3C(M2C_FIELD(arg0, s32 *, 4), ~arg1) == 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E79C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C600);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C61C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C638);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C660);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C688);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C6B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C6D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C700);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C728);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C764);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002C764(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044140);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00048F38);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044158);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C76C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C7D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C7F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C87C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C948);
#endif

#if FW_VERSION == 260
s32 func_0002C948(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag("OsWrapFlg", 0x200U, 0U, NULL);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_0002C948(s32 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelCreateEventFlag("OsWrapFlg", 0x200U, 0U, NULL);
    var_v1 = 0;
    *arg0 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C998);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
s32 func_0002C998(s32 *arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_0002C998(s32 *arg0, void *arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
    var_v1 = 0;
    *arg0 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C9E4);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
s32 func_0002C9E4(s32 arg0) {
    return (sceKernelDeleteEventFlag(arg0) == 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_0002C9E4(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelDeleteEventFlag(arg0) != 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CA10);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
s32 func_0002CA10(s32 arg0, u32 arg1) {
    return (sceKernelSetEventFlag(arg0, arg1) == 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_0002CA10(s32 arg0, u32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelSetEventFlag(arg0, arg1) != 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CA3C);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
s32 func_0002CA3C(s32 arg0, u32 arg1) {
    return (sceKernelClearEventFlag(arg0, arg1) == 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_0002CA3C(s32 arg0, u32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelClearEventFlag(arg0, arg1) != 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CA68);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CAC4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EBEC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CB48);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CBA8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC54);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002CC54(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC5C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002CC5C(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC64);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002CC64(void) {
    return -9;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC6C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002CC6C(void) {
    return -9;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC74);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002CC74(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CD0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CDCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CE88);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CF20);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D0C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D1E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D260);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002D260(void) {
    func_0002D1E4(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D280);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002D280(void) {
    func_0002D1E4(0, 0xFFFF);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D2A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D2F0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044288);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000442AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D374);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D444);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D48C);
#endif

#if FW_VERSION == 152
void func_0002D48C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000442F0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D4A4);
#endif

#if FW_VERSION == 260
void func_0002D4A4(M2C_UNK **arg0) {
    *arg0 = &D_000442F0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D4B4);
#endif

#if FW_VERSION == 260
void func_0002D4B4(M2C_UNK **arg0) {
    *arg0 = &D_000442F0;
    _ZdlPv();
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D4DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000442F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D56C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D5D0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004432C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D6D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044388);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D768);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D828);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D8B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D914);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DA5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DAF4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002DAF4(s32 arg0) {
    sceKernelDelayThread(arg0 * 0xA);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DB20);
#endif

#if FW_VERSION == 100
M2C_UNK *func_0002DB20(s32 arg0) {
    void *sp0;
    M2C_UNK *var_s0;
    s32 temp_v0;

    var_s0 = &D_0004595C;
    temp_v0 = func_0002D4DC(arg0, &sp0);
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 4;
    }
    return var_s0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DB58);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DC5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DCD8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002DCD8(void) {
    func_0002DC5C(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DCF8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002DCF8(void) {
    func_0002DC5C(0, 0xFFFF);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DD18);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DD68);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044518);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004453C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DDEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DEBC);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DF04);
#endif

#if FW_VERSION == 152
void func_0002DF04(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044588;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DF1C);
#endif

#if FW_VERSION == 260
void func_0002DF1C(M2C_UNK **arg0) {
    *arg0 = &D_00044588;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DF2C);
#endif

#if FW_VERSION == 260
void func_0002DF2C(M2C_UNK **arg0) {
    *arg0 = &D_00044588;
    _ZdlPv();
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044588);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DF54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DFC8);
#endif

#if FW_VERSION == 152
s32 func_0002DFC8(s32 *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (arg0 != NULL) {
        var_s1 = ~sce_paf_private_fclose(*arg0) == 0;
        func_0002F328((s32) arg0);
    }
    return var_s1;
}
#endif

#if FW_VERSION < 152
s32 func_0002DFC8(s32 *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (arg0 != NULL) {
        if (sce_paf_private_fclose(*arg0) == -1) {
            var_s1 = 1;
        }
        func_0002F328((s32) arg0);
    }
    return var_s1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E020);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E03C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002E03C(s32 *arg0) {
    sce_paf_private_fseek(*arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E058);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002E058(s32 *arg0) {
    sce_paf_private_ftell(*arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E074);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E0A8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002E0A8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (func_0002F2C8(arg1) & 1);
    M2C_FIELD(arg0, s32 *, 4) = func_0002F2E0(arg1 + 2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E0F4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002E0F4(s32 *arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg1, u8 *, 0) << 8;
    *arg0 = temp_v0;
    *arg0 = temp_v0 | M2C_FIELD(arg1, u8 *, 1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E110);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E144);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E304);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E344);
#endif

#if FW_VERSION < 201
s32 func_0002E344(s32 *arg0, s32 arg1) {
    s32 temp_s0;
    void *temp_s2;

    temp_s0 = *arg0;
    temp_s2 = temp_s0 + 0x28;
    sce_paf_private_strncpy(arg1, temp_s0 + 4, 4);
    M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(temp_s2, u8 *, 7);
    sce_paf_private_strncpy(arg1 + 5, temp_s0 + 0x31, (s32) M2C_FIELD(temp_s2, u8 *, 8));
    M2C_FIELD((arg1 + M2C_FIELD(temp_s2, u8 *, 8)), s8 *, 5) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E3B8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002E3B8(s32 *arg0, void *arg1) {
    sce_paf_private_memcpy(arg1, *arg0 + 4, 4);
    M2C_FIELD(arg1, s8 *, 4) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E3F8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002E3F8(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 4);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E408);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E4B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E56C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002E56C(s32 *arg0) {
    s32 temp_s0;

    temp_s0 = *arg0;
    return func_0002F2C8(temp_s0 + 4) + temp_s0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E598);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002E598(s32 *arg0) {
    s32 temp_s0;

    temp_s0 = *arg0;
    return func_0002F2C8(temp_s0 + 6) + temp_s0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E5C4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002E5C4(s32 *arg0, s32 *arg1) {
    *arg1 = func_0002F2C8(func_0002E56C(arg0) + 6);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E5FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003089C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000308E8);
#endif

#if FW_VERSION == 100
s32 func_0002E6CC(s32 *arg0, s32 *arg1) {
    *arg1 = func_0002F2C8(func_0002E598(arg0) + 4);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000445A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000445B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000445C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E704);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000445D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E8CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EA60);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002EA60(s32 *arg0, void *arg1) {
    sce_paf_private_memcpy(arg1, *arg0 + 4, 4);
    M2C_FIELD(arg1, s8 *, 4) = 0;
    return 0;
}
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EAA0);
#endif

#if FW_VERSION == 152
s32 func_0002EAA0(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        func_0002F328(temp_v0);
        *arg0 = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EAE0);
#endif

#if FW_VERSION < 201
s32 func_0002EAE0(void **arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = *arg0;
    sce_paf_private_memcpy(arg1, (s32) (temp_s0 + 4), 4);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_s0, u8 *, 0x2E);
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_0002EAE0(void **arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = *arg0;
    sce_paf_private_memcpy(arg1, temp_s0 + 4, 4);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_s0, u8 *, 0x2E);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EB28);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002EB28(s32 *arg0, void *arg1) {
    s32 temp_s0;
    void *temp_s0_2;

    temp_s0 = *arg0;
    temp_s0_2 = temp_s0 + func_0002F2E0(temp_s0 + 8);
    M2C_FIELD(arg1, void **, 0) = temp_s0_2;
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_s0_2, u8 *, 0x11);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EB70);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002EB70(s32 *arg0, void *arg1) {
    s32 temp_s1;

    temp_s1 = *arg0;
    func_0002E0A8(arg1, temp_s1 + 4);
    func_0002E0A8(arg1 + 8, temp_s1 + 0xA);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EBC0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002EBC0(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 4);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EBD0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00030DE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00030DE8(void *arg0, void *arg1) {
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg1, s8 *, 0) = (s8) ((u8) M2C_FIELD(temp_a2, u8 *, 0) >> 4);
    M2C_FIELD(arg1, s8 *, 1) = (s8) (M2C_FIELD(temp_a2, u8 *, 0) & 0xF);
    M2C_FIELD(arg1, s8 *, 2) = (s8) ((u8) M2C_FIELD(temp_a2, u8 *, 1) >> 4);
    M2C_FIELD(arg1, s8 *, 3) = (s8) (M2C_FIELD(temp_a2, u8 *, 1) & 1);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00030E24);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00030E24(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg1, s8 *, 0) = (s8) ((u8) M2C_FIELD(temp_s0, u8 *, 0) >> 4);
    sce_paf_private_memcpy(arg1 + 1, (s32) (temp_s0 + 2), 2);
    M2C_FIELD(arg1, u8 *, 3) = (u8) M2C_FIELD(temp_s0, u8 *, 4);
    M2C_FIELD(arg1, s8 *, 4) = (s8) ((u8) M2C_FIELD(temp_s0, u8 *, 5) >> 4);
    M2C_FIELD(arg1, s8 *, 5) = (s8) (M2C_FIELD(temp_s0, u8 *, 5) & 0xF);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00030E90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00030E90(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg1, s8 *, 0) = (s8) ((u8) M2C_FIELD(temp_s0, u8 *, 0) >> 4);
    sce_paf_private_memcpy(arg1 + 1, (s32) (temp_s0 + 2), 2);
    M2C_FIELD(arg1, s8 *, 3) = (s8) ((u8) M2C_FIELD(temp_s0, u8 *, 5) >> 4);
    M2C_FIELD(arg1, s8 *, 4) = (s8) (M2C_FIELD(temp_s0, u8 *, 5) & 1);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EC84);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EE78);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EF04);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EFB8);
#endif

#if FW_VERSION < 201
s32 func_0002EFB8(s32 arg0) {
    func_0002F328(arg0);
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_0002EFB8(s32 arg0) {
    if (arg0 != 0) {
        func_0002F328(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00031160);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EFD8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F224);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002F224(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 4) + (arg1 * 0xA);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F23C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F268);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F2AC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002F2AC(s32 arg0) {
    func_0002F2E0(arg0 + 6);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F2C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F2E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F30C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002F30C(void) {
    sce_paf_private_malloc();
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F328);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000445E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F348);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003BBCC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003143C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000445F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F3C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000319F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031A3C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003C4AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00031BF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00031E28);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031F0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003233C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F7A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000326F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000328C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F8F4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FB40);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002FD8C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FFE0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00030040);

INCLUDE_ASM("nonmatchings/video_plugin", func_000301A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030294);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030378);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003049C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003050C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E630);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003057C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00030A50);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EA90);
#endif

#if FW_VERSION == 260
void func_0003EA90(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x12C8) = (s32) M2C_FIELD(arg0, s32 *, 0x1330);
    M2C_FIELD(arg0, s32 *, 0x12D8) = (s32) M2C_FIELD(arg0, s32 *, 0x1334);
    M2C_FIELD(arg0, s32 *, 0x12D0) = (s32) M2C_FIELD(arg0, s32 *, 0x1340);
    M2C_FIELD(arg0, s32 *, 0x12E0) = (s32) M2C_FIELD(arg0, s32 *, 0x1344);
    M2C_FIELD(arg0, s32 *, 0x12CC) = (s32) M2C_FIELD(arg0, s32 *, 0x1338);
    M2C_FIELD(arg0, s32 *, 0x12D4) = (s32) M2C_FIELD(arg0, s32 *, 0x1348);
    M2C_FIELD(arg0, s32 *, 0x12DC) = (s32) M2C_FIELD(arg0, s32 *, 0x133C);
    M2C_FIELD(arg0, s32 *, 0x12E4) = (s32) M2C_FIELD(arg0, s32 *, 0x134C);
    func_0003EAEC((s32) arg0, (s32) M2C_FIELD(arg0, u8 *, 0x1281));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EAEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003ECD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EE4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000343FC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD94) = (s32) M2C_FIELD(arg0, s32 *, 0xDFC);
    M2C_FIELD(arg0, s32 *, 0xDA4) = (s32) M2C_FIELD(arg0, s32 *, 0xE00);
    M2C_FIELD(arg0, s32 *, 0xD9C) = (s32) M2C_FIELD(arg0, s32 *, 0xE0C);
    M2C_FIELD(arg0, s32 *, 0xDAC) = (s32) M2C_FIELD(arg0, s32 *, 0xE10);
    M2C_FIELD(arg0, s32 *, 0xD98) = (s32) M2C_FIELD(arg0, s32 *, 0xE04);
    M2C_FIELD(arg0, s32 *, 0xDA0) = (s32) M2C_FIELD(arg0, s32 *, 0xE14);
    M2C_FIELD(arg0, s32 *, 0xDA8) = (s32) M2C_FIELD(arg0, s32 *, 0xE08);
    M2C_FIELD(arg0, s32 *, 0xDB0) = (s32) M2C_FIELD(arg0, s32 *, 0xE18);
    func_00030BD8((s32) arg0, (s32) M2C_FIELD(arg0, u8 *, 0xC41));
}
#endif

#if FW_VERSION == 100
void func_00030B7C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x564) = (s32) M2C_FIELD(arg0, s32 *, 0x5CC);
    M2C_FIELD(arg0, s32 *, 0x574) = (s32) M2C_FIELD(arg0, s32 *, 0x5D0);
    M2C_FIELD(arg0, s32 *, 0x56C) = (s32) M2C_FIELD(arg0, s32 *, 0x5DC);
    M2C_FIELD(arg0, s32 *, 0x57C) = (s32) M2C_FIELD(arg0, s32 *, 0x5E0);
    M2C_FIELD(arg0, s32 *, 0x568) = (s32) M2C_FIELD(arg0, s32 *, 0x5D4);
    M2C_FIELD(arg0, s32 *, 0x570) = (s32) M2C_FIELD(arg0, s32 *, 0x5E4);
    M2C_FIELD(arg0, s32 *, 0x578) = (s32) M2C_FIELD(arg0, s32 *, 0x5D8);
    M2C_FIELD(arg0, s32 *, 0x580) = (s32) M2C_FIELD(arg0, s32 *, 0x5E8);
    func_00030BD8((s32) arg0, (s32) M2C_FIELD(arg0, u8 *, 0x411));
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00030BD8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044690);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044694);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044698);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004469C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000446A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000446A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_000494D4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000494DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0005056C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446B0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000494E8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000494EC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000494F0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000494F4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000494F8);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00050590);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00049500);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00030D98);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F014);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F140);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F38C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F500);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F674);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00034720);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00030E7C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00031094);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00034A68);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00034BB8_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000312EC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00031740);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00031804);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00031804(void) {
    _ZN3paf13PhApplication14FinishDispListEv();
    _ZN3paf13PhApplication13StartDispListEv();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00035050);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031828);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00031E38);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00031E7C);
#endif

#if FW_VERSION == 152
void func_00031E7C(M2C_UNK **arg0) {
    *arg0 = &D_00044830;
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00031E8C);
#endif

#if FW_VERSION == 152
void func_00031E8C(M2C_UNK **arg0) {
    *arg0 = &D_00044830;
    _ZdlPv();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00031EB4);
#endif

#if FW_VERSION == 260
void func_00031EB4(M2C_UNK **arg0) {
    *arg0 = &D_00044818;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00031EC4);
#endif

#if FW_VERSION == 260
void func_00031EC4(M2C_UNK **arg0) {
    *arg0 = &D_00044818;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00031EEC);
#endif

#if FW_VERSION < 201
void func_00031EEC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044780;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00044830;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00031F08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00031F3C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00031F3C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00031F44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00031F64);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00031F64(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEii(arg0 + 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00031F80);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00031F80(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEif(arg0 + 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00031F9C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00031F9C(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEiRK4vec4(arg0 + 8);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00031FB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031FFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003203C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032078);

INCLUDE_ASM("nonmatchings/video_plugin", func_000320B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000320DC);
#endif

#if FW_VERSION < 201
void func_000320DC(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10)();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00032100);
#endif

#if FW_VERSION < 201
void func_00032100(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00032124);
#endif

#if FW_VERSION < 201
void func_00032124(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00032148);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003216C);
#endif

#if FW_VERSION < 201
void func_0003216C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00032190);
#endif

#if FW_VERSION < 201
void func_00032190(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x24)();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000321B4);
#endif

#if FW_VERSION < 201
void func_000321B4(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x28)();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000321D8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000321D8(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRb(arg0 + 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000321F4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000321F4(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRi(arg0 + 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00032210);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00032210(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRf(arg0 + 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0003222C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0003222C(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiR4vec4(arg0 + 8);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00032248);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032288);

INCLUDE_ASM("nonmatchings/video_plugin", func_000322C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032308);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00032348);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00032348(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00032350);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032350(void) {
    return -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00032358);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032358(void) {
    return -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00032360);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032360(void) {
    return -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00032368);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032368(void) {
    return -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00032370);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032370(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00032378);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032378(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00032380);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032380(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00032388);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00032388(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00035B6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035BD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035C4C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000495D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049618);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044780);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044818);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044830);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044838);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044848);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044860);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00049774);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004489C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000448B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000448C4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000448D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000448E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032390);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032710);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032AE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032B30);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032B88);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032BF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032C24);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032CB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032D44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032DE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032EAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033114);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033178);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003349C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033558);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033764);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033834);

INCLUDE_ASM("nonmatchings/video_plugin", func_000338EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000339C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00033AA0);
#endif

#if FW_VERSION < 201
void func_00033AA0(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x4C4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x4C8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x4D0) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x4D4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x4D8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x4DC) = (s32) M2C_FIELD(arg2, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x4E0) = (s32) M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x4E4) = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x4E8) = (s32) M2C_FIELD(arg3, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x4EC) = (s32) M2C_FIELD(arg3, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x4F0) = (s32) M2C_FIELD(arg4, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x4F4) = (s32) M2C_FIELD(arg4, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x4F8) = (s32) M2C_FIELD(arg4, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x4FC) = (s32) M2C_FIELD(arg4, s32 *, 0xC);
    func_00033DA4((s32) arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00033B38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00033B80);
#endif

#if FW_VERSION < 201
void func_00033B80(void *arg0, u32 arg1) {
    if (arg1 >= 3U) {

    } else {
        M2C_FIELD(arg0, u32 *, 0x500) = arg1;
        func_00033DA4((s32) arg0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00033BAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00033BAC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x504) = arg1;
    M2C_FIELD(arg0, s32 *, 0x508) = arg2;
    func_00033DA4((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00033BAC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x504) = arg1;
    func_00033DA4((s32) arg0);
}
#endif

#if FW_VERSION == 260
void func_00033BAC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x534) = arg1;
    M2C_FIELD(arg0, s32 *, 0x538) = arg2;
    func_00033DA4((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00033BCC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00033BCC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x50C) = arg1;
    func_00033C20((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x4B0) == 0);
}
#endif

#if FW_VERSION == 100
void func_00033BCC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x508) = arg1;
    func_00033C20((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x4B0) == 0);
}
#endif

#if FW_VERSION == 260
void func_00033BCC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x53C) = arg1;
    func_00033C20((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x4D8) == 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00033BF4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00033BF4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x50D) = arg1;
    func_00033C20((s32) arg0, 2, M2C_FIELD(arg0, s32 *, 0x4B0) == 2);
}
#endif

#if FW_VERSION == 100
void func_00033BF4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x509) = arg1;
    func_00033C20((s32) arg0, 2, M2C_FIELD(arg0, s32 *, 0x4B0) == 2);
}
#endif

#if FW_VERSION == 260
void func_00033BF4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x53D) = arg1;
    func_00033C20((s32) arg0, 3, M2C_FIELD(arg0, s32 *, 0x4D8) == 3);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00033C20);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033DA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033DF8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033EE0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00033F68);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00033F68(void) {
    func_00033EE0(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000421D0);
#endif

#if FW_VERSION == 260
void func_000421D0(void) {
    func_00033EE0(0, 0xFFFF);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00033F88);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00033FB4);
#endif

#if FW_VERSION < 201
s32 func_00033FB4(void) {
    return D_00045994;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00033FC0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033FFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034040);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003406C);
#endif

#if FW_VERSION < 201
s32 func_0003406C(void) {
    return D_00045998;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00034078);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00034078(s32 arg0) {
    return arg0 + 0x334;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00034080);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034170);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00034218);
#endif

#if FW_VERSION == 260
void func_00034218(s32 arg0, s32 arg1) {
    func_00016DBC(arg0, arg1, (s32) &D_00044D30, 1, 3);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044D80;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003425C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000449C8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000449D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044AA8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044B78);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044B88);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BA4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BD0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BDC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BFC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C0C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C28);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C38);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C54);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C68);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C8C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C9C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044CB8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044CC8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044CEC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044CFC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D30);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D3C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034280);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034424);

INCLUDE_ASM("nonmatchings/video_plugin", func_000344FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034560);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000345A4);
#endif

#if FW_VERSION == 100
void func_000345A4(M2C_UNK **arg0) {
    *arg0 = &D_00044D80;
    D_00046370 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000345D0);
#endif

#if FW_VERSION == 100
void func_000345D0(M2C_UNK **arg0) {
    *arg0 = &D_00044D80;
    D_00046370 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00034610);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000346C4);
#endif

#if FW_VERSION == 260
void func_000346C4(s32 arg0, s32 arg1) {
    func_00016DBC(arg0, arg1, (s32) &D_00044D98, 0, 3);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044DF0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000381FC);
#endif

#if FW_VERSION == 152
void func_000381FC(M2C_UNK **arg0) {
    *arg0 = &D_00044DF0;
    D_00046374 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034714);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_000347C8);
#endif

#if FW_VERSION == 152
void func_000347C8(M2C_UNK **arg0) {
    *arg0 = &D_00044DF0;
    D_00046374 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin", func_0003487C);
#endif

#if FW_VERSION == 152
void func_0003487C(M2C_UNK **arg0) {
    *arg0 = &D_00044DF0;
    D_00046374 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D80);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D98);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00034938);
#endif

#if FW_VERSION == 150
void func_00034938(void *arg0) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        temp_v0_2 = _ZN3paf8PhWidget9FindChildEPKci(temp_v0, "video_home_menu_plane", 0);
        M2C_FIELD(arg0, void **, 0x20) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, s8 *, 0x1FE) = 0;
            M2C_FIELD(temp_v0_2, s8 *, 0x1FF) = 0;
            _ZN3paf8PhWidget13UpdateCamerasEv(temp_v0_2);
        }
    }
}
#endif

#if FW_VERSION == 100
void func_00034938(void *arg0) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        temp_v0_2 = _ZN3paf8PhWidget9FindChildEPKci(temp_v0, "video_home_menu_plane", 0);
        M2C_FIELD(arg0, void **, 0x24) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, s8 *, 0x1FE) = 0;
            M2C_FIELD(temp_v0_2, s8 *, 0x1FF) = 0;
            _ZN3paf8PhWidget13UpdateCamerasEv(temp_v0_2);
        }
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00034998);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00034998(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000349A0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_000349A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return 1;
}
#endif

#if FW_VERSION == 100
s32 func_000349A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return 1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00038308);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000349AC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00034B74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034BB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034C5C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00044420);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00034C9C);
#endif

#if FW_VERSION < 201
void func_00034C9C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(temp_v0, 0x10001, &func_00034D24, (s32) arg0);
    }
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00034CE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034D24);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00034D2C);
#endif

#if FW_VERSION == 100
void func_00034D2C(M2C_UNK **arg0) {
    *arg0 = &D_00044E20;
    D_00046378 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00034D58);
#endif

#if FW_VERSION == 100
void func_00034D58(M2C_UNK **arg0) {
    *arg0 = &D_00044E20;
    D_00046378 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000444B8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044DF0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00054070);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0005408C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000540A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000540C4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000540E4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00054108);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0005412C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00054148);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004458C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000447AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011BDC);

s32 func_0004480C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00044814);

INCLUDE_ASM("nonmatchings/video_plugin", func_00044888);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00034D98);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00034E4C);
#endif

#if FW_VERSION < 201
void func_00034E4C(s32 arg0, s32 arg1) {
    func_00016DBC(arg0, arg1, (s32) &D_00044E38, 1, 3);
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044E58;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00034E9C);
#endif

#if FW_VERSION < 201
void func_00034E9C(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterE6Locale(-1));
    func_00001A30(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackE6Locale(-1));
    func_00001A30(&sp0);
}
#endif

#if FW_VERSION == 260
void func_00034E9C(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterEv());
    func_00001A30(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackEv());
    func_00001A30(&sp0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00034EE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034F20);

INCLUDE_ASM("nonmatchings/video_plugin", func_000350A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000350D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00035114);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00035114(void) {
    _ZN3vsh26ShowButtonNavigation_EnterEb(0);
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    return 1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003513C);
#endif

#if FW_VERSION == 100
void func_0003513C(M2C_UNK **arg0) {
    *arg0 = &D_00044E58;
    D_0004637C = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00035168);
#endif

#if FW_VERSION == 100
void func_00035168(M2C_UNK **arg0) {
    *arg0 = &D_00044E58;
    D_0004637C = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000443AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00044530);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00043388);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043520);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000436B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036E1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036EB8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_000351A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000352C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000353E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000354A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035568);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00039014(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x6C);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x20);
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00039034);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003563C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035644);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00035860);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035888);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00039364);

INCLUDE_ASM("nonmatchings/video_plugin", func_00039450);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035950);

INCLUDE_ASM("nonmatchings/video_plugin", func_000359B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000359F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00035A34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00035A70(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x148) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00035A70(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x13C) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00035A7C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0002B9C0((s32) (arg0 + 0x3C), arg1 + 0x2C, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00035A7C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_0002B9C0((s32) (arg0 + 0x38), arg1 + 0x2C, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00035AA8);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00035DB4);
#endif

#if FW_VERSION == 152
void func_00035DB4(s32 arg0) {
    func_000354A8(arg0 - 0x3C);
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00035DD0);
#endif

#if FW_VERSION == 152
void func_00035DD0(s32 arg0) {
    func_00035568(arg0 - 0x3C);
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00035DEC);
#endif

#if FW_VERSION == 152
void func_00035DEC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00035860(arg0 - 0x3C, arg1, arg2, arg3);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00035E08);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035EE0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00039AC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00039B64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00039C00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035FB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036040);

INCLUDE_ASM("nonmatchings/video_plugin", func_000360C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00036158);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00036158(s32 arg0) {
    D_00046384 = arg0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0004393C);
#endif

#if FW_VERSION == 260
void func_0004393C(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003ABA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000371C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043BCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043C98);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043D34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043F10);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043FF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00039CB0(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x84);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x24);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036164);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044DF0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E08);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E38);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E58);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E70);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E80);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00049D98);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044EA0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044EB8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044EF0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F00);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F10);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F20);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00039CD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003616C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_000362FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036328);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036384);

INCLUDE_ASM("nonmatchings/video_plugin", func_000363C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036410);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A014);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036454);

s32 func_000365B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_000365C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000365E0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A244);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A2E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003664C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_000366B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000366F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036758);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036790);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003696C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00036994);
#endif

#if FW_VERSION == 152
void func_00036994(s32 arg0) {
    func_000369B0(arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_000369B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036A38);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00036AAC);
#endif

#if FW_VERSION == 152
void func_00036AAC(s32 arg0) {
    func_00039B64(arg0 - 0x3C);
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00036AC8);
#endif

#if FW_VERSION == 152
void func_00036AC8(s32 arg0) {
    func_00039C00(arg0 - 0x3C);
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00036AE4);
#endif

#if FW_VERSION == 152
void func_00036AE4(s32 arg0, s32 arg1, s32 arg2) {
    func_000362FC(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00036B00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036C40);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036D80);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036E1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036EB8);

void func_00036F5C(s32 arg0) {
    D_0004638C = arg0;
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00036F68);
#endif

#if FW_VERSION == 152
void func_00036F68(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003ABA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036F70);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_000371C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00037238);

INCLUDE_ASM("nonmatchings/video_plugin", func_000372F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00037388);

INCLUDE_ASM("nonmatchings/video_plugin", func_00037468);

INCLUDE_ASM("nonmatchings/video_plugin", func_00037524);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B2AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B3C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B4D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B5E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000375EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00037684);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003772C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000377DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000378D4(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x98);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    return M2C_FIELD(arg0, s32 *, 0xA4);
}
#endif

#if FW_VERSION == 100
s32 func_000378D4(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x88);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    return M2C_FIELD(arg0, s32 *, 0x94);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000378F0(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x98);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0xA8);
}
#endif

#if FW_VERSION == 100
s32 func_000378F0(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x88);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0x98);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003790C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003797C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00037A34(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0xEC);
    }
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00037A34(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0xDC);
    }
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00037A4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B950);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00037A98);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00038384);

INCLUDE_ASM("nonmatchings/video_plugin", func_000383E0);
#endif

#if FW_VERSION == 100
s32 func_0003840C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00038418);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038444);
#endif

#if FW_VERSION < 201
s32 func_00038470(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003C4C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003C4F4);
#endif

#if FW_VERSION < 201
s32 func_0003847C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0003C52C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00038488);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003C70C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003C864);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003CB18);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003CC60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003865C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003878C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003893C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038A9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00038BE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038CFC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00038E2C);
#endif

#if FW_VERSION == 152
void func_00038E2C(s32 arg0) {
    func_00036E1C(arg0 - 0x3C);
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00038E48);
#endif

#if FW_VERSION == 152
void func_00038E48(s32 arg0) {
    func_00036EB8(arg0 - 0x3C);
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin", func_00038E64);
#endif

#if FW_VERSION == 152
void func_00038E64(s32 arg0, s32 arg1, s32 arg2) {
    func_000371C8(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION < 201
s32 func_00038E80(void) {
    return D_000463B8;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00038E8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003936C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00039AE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00039D7C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E594);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A110);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E798);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E83C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E9DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EBEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EC68);

s32 func_0003ED94(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    switch (arg1) {                                 /* irregular */
    case 1:
        M2C_FIELD(arg0, s8 *, 0x114) = 0;
        break;
    default:
        var_v1 = 1;
        break;
    case 0:
        M2C_FIELD(arg0, s8 *, 0x108) = 0;
        break;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EDBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EE28);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EEA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EFA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F088);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F11C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F2B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F360);

s32 func_0003F3EC(void) {
    return 0;
}

s32 func_0003F3F4(void) {
    return 0;
}

s32 func_0003F3FC(void) {
    return 0;
}

s32 func_0003F404(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC8) = arg1;
    return 0;
}

s32 func_0003F410(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xCC) = arg1;
    return 0;
}

s32 func_0003F41C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD0) = arg1;
    return 0;
}

s32 func_0003F428(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x778) = arg1;
    func_0002E758(arg0 + 0xB8, 0x10000U);
    return 0;
}

s32 func_0003F450(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x77C) = arg1;
    func_0002E758(arg0 + 0xB8, 0x20000U);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F478);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F59C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F6C0);

s32 func_0003F7D4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
    return 0;
}

s32 func_0003F7E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB88) = arg1;
    return 0;
}

s32 func_0003F7EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x74) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F7F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FA7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FB18);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FBD0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FD80);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FDF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FE60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FEE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FF4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000403A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000408B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00040D30);

INCLUDE_ASM("nonmatchings/video_plugin", func_00040E34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00041288);

INCLUDE_ASM("nonmatchings/video_plugin", func_00041668);

INCLUDE_ASM("nonmatchings/video_plugin", func_00041A4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00041E64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A028);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F58);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F70);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FA0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00049ED4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049EE4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049EEC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049EF4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FCC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00050E84);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00050E8C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00050E98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00050EA4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00045030);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_000440B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000441D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00044330);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000453E0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00044454);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000378D4);
#endif

#if FW_VERSION == 260
s32 func_000378D4(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xA0);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    return M2C_FIELD(arg0, s32 *, 0xAC);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000378F0);
#endif

#if FW_VERSION == 260
s32 func_000378F0(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xA0);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0xB0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003790C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003797C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00044804);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B950);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038384);

INCLUDE_ASM("nonmatchings/video_plugin", func_00044EE4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00044F10);
#endif

#if FW_VERSION == 260
s32 func_00044F10(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00044F1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00044F48);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00044F74);
#endif

#if FW_VERSION == 260
s32 func_00044F74(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00044F80);
#endif

#if FW_VERSION == 260
s32 func_00044F80(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00044F8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00045150);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004521C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00045298);

INCLUDE_ASM("nonmatchings/video_plugin", func_000452D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004553C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00046848);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00045790);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_000459FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00045BD0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00046E10);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00045D04);

INCLUDE_ASM("nonmatchings/video_plugin", func_000461DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004636C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004651C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00047818);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047A30);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047A7C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00046630);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00038E2C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038E48);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038E64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00046870);

INCLUDE_ASM("nonmatchings/video_plugin", func_00046930);

INCLUDE_ASM("nonmatchings/video_plugin", func_000469F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00046A6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00046AE8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00046B6C);
#endif

#if FW_VERSION == 260
void func_00046B6C(s32 arg0) {
    D_0007C7FC = arg0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00046B78);
#endif

#if FW_VERSION == 260
void func_00046B78(void *arg0) {
    void *var_a0;
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x68);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x38);
        } while (var_v0 != NULL);
    }
    var_a0 = M2C_FIELD(arg0, void **, 0x70);
    if (var_a0 != NULL) {
        do {
            var_a0 = M2C_FIELD(var_a0, void **, 0x24);
        } while (var_a0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00046BB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00046DA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00046E14);

INCLUDE_ASM("nonmatchings/video_plugin", func_00046EA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00046FB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00046FFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047040);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047090);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047324);

INCLUDE_ASM("nonmatchings/video_plugin", func_000473A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047408);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047498);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047518);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00047540);
#endif

#if FW_VERSION == 260
void func_00047540(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    temp_s0 = arg0 + 0x3C;
    func_0002B9C0((s32) temp_s0, arg1 + 0xD8, 2);
    func_0002B9C0((s32) temp_s0, arg1 + 0xEC, 3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00047598);

INCLUDE_ASM("nonmatchings/video_plugin", func_000475B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000475D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000475EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000476F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000477FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047898);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047934);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000479D8);
#endif

#if FW_VERSION == 260
void func_000479D8(s32 arg0) {
    D_0007C800 = arg0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000479E4);
#endif

#if FW_VERSION == 260
void func_000479E4(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0xA0);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x30);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00047A04);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047D58);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047D84);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047E54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00047F10);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00049500);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0004808C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004809C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000480B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048120);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004819C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048240);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048250);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048288);

INCLUDE_ASM("nonmatchings/video_plugin", func_000482F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048328);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048444);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048490);

INCLUDE_ASM("nonmatchings/video_plugin", func_000484DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048528);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004858C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004862C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048648);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048664);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048680);

INCLUDE_ASM("nonmatchings/video_plugin", func_000487C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048910);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004899C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048A28);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00048ABC);
#endif

#if FW_VERSION == 260
void func_00048ABC(s32 arg0) {
    D_0007C804 = arg0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00048AC8);
#endif

#if FW_VERSION == 260
void func_00048AC8(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x114);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x40);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00048AE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048F7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048FA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00048FE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00049100);

INCLUDE_ASM("nonmatchings/video_plugin", func_00049144);

INCLUDE_ASM("nonmatchings/video_plugin", func_000491D8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00049214);
#endif

#if FW_VERSION == 260
s32 func_00049214(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0002B9C0((s32) (arg0 + 0x3C), arg1 + 0x18, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00049240);
#endif

#if FW_VERSION == 260
s32 func_00049240(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00049248);
#endif

#if FW_VERSION == 260
s32 func_00049248(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00049250);

INCLUDE_ASM("nonmatchings/video_plugin", func_00049260);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0004AB00);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00049474);

INCLUDE_ASM("nonmatchings/video_plugin", func_00049490);

INCLUDE_ASM("nonmatchings/video_plugin", func_000494AC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_000494C8);
#endif

#if FW_VERSION == 260
s32 func_000494C8(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FE8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00050F90);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00050FA0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00050FB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00050FC0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00050FD0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00050FE8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00051018);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00051028);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00051038);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045018);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045024);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045030);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00051068);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004503C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00045048);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_00049F70);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049F7C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049F88);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045054);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004505C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00049FA8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049FB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049FB8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000510F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000494D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000497F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000498E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000499D8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_00049AE0);
#endif

#if FW_VERSION == 260
void func_00049AE0(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x6C);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x20);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00049B00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00049D00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00049D60);

INCLUDE_ASM("nonmatchings/video_plugin", func_00049E28);

INCLUDE_ASM("nonmatchings/video_plugin", func_00049EEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00049F30);

INCLUDE_ASM("nonmatchings/video_plugin", func_00049FB4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0004A02C);
#endif

#if FW_VERSION == 260
s32 func_0004A02C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x178) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A110);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A400);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A518);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A6B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A8C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A8F8);

s32 func_0003AA24(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    switch (arg1) {                                 /* irregular */
    case 1:
        M2C_FIELD(arg0, s8 *, 0x120) = 0;
        break;
    default:
        var_v1 = 1;
        break;
    case 0:
        M2C_FIELD(arg0, s8 *, 0x114) = 0;
        break;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AA4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AA88);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AB08);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003ABF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AC80);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AE08);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AEB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AF34);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AF70);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AFAC);

s32 func_0003AFE8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD4) = arg1;
    return 0;
}

s32 func_0003AFF4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD8) = arg1;
    return 0;
}

s32 func_0003B000(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xDC) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B00C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B044);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B07C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B17C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B27C);

s32 func_0003B37C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x94) = arg1;
    return 0;
}

s32 func_0003B388(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x98) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B394);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B624);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B878);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B8B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003BCA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003C270);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003C674);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003C73C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003CB64);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003CF20);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003D0D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003D2A0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003D364);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003D714);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003D8E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003D9A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00042970);

INCLUDE_ASM("nonmatchings/video_plugin", func_00042DAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003DB84);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003DF10);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E018);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00043184);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E2BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0003E414(s32 arg0) {
    func_00039AE4(arg0 - 0x68);
}
#endif

#if FW_VERSION == 100
void func_0003E414(s32 arg0) {
    func_00039AE4(arg0 - 0x8C);
}
#endif

#if FW_VERSION < 201
void func_0003E430(s32 arg0) {
    func_00039AE4(arg0 - 0x54);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0003E44C(s32 arg0) {
    func_00039D7C(arg0 - 0x68);
}
#endif

#if FW_VERSION == 100
void func_0003E44C(s32 arg0) {
    func_00039D7C(arg0 - 0x8C);
}
#endif

#if FW_VERSION < 201
void func_0003E468(s32 arg0) {
    func_00039D7C(arg0 - 0x54);
}

void func_0003E484(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0003A110(arg0 - 0x54, arg1, arg2, arg3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E4A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0003E4A0(void *arg0, s32 arg1) {
    return func_0003E798((s32) (arg0 - 0x68));
}
#endif

#if FW_VERSION == 100
s32 func_0003E4A0(void *arg0, s32 arg1) {
    return func_0003A400((s32) (arg0 - 0x8C));
}
#endif

#if FW_VERSION == 260
s32 func_0003E4A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0002B9C0((s32) (arg0 + 0x3C), arg1 + 0x2C, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E4BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E568);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0004350C);
#endif

#if FW_VERSION == 152
void func_0004350C(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E61C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0003E61C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E624);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0003E624(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E62C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0003E62C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0004A07C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A0A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A15C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A178);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A194);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A1B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A2F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A430);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A4E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A598);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0004A654);
#endif

#if FW_VERSION == 260
void func_0004A654(s32 arg0) {
    D_0007C81C = arg0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0004A660);
#endif

#if FW_VERSION == 260
void func_0004A660(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x60);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x18);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0004A680);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A888);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A8D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A91C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004A9D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004AA1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004AAA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004AADC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0004AB6C);
#endif

#if FW_VERSION == 260
s32 func_0004AB6C(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    temp_s0 = arg0 + 0x3C;
    func_0002B9C0((s32) temp_s0, arg1 + 0x40, 0);
    func_0002B9C0((s32) temp_s0, arg1 + 0x54, 1);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E634);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0003E634(void) {
    return 0;
}
#endif

#if FW_VERSION < 201
s32 func_0003E63C(void) {
    return 0;
}

s32 func_0003E644(void) {
    return 0;
}

s32 func_0003E64C(void) {
    return 0;
}

s32 func_0003E654(void) {
    return 0;
}

s32 func_0003E65C(void) {
    return 0;
}

s32 func_0003E664(void) {
    return 0;
}

s32 func_0003E66C(void) {
    return 0;
}

s32 func_0003E674(void) {
    return 0;
}

s32 func_0003E67C(void) {
    return 0;
}

s32 func_0003E684(void) {
    return 0;
}

s32 func_0003E68C(void) {
    return 0;
}

s32 func_0003E694(void) {
    return 0;
}

s32 func_0003E69C(void) {
    return 0;
}

s32 func_0003E6A4(void) {
    return 0;
}

s32 func_0003E6AC(void) {
    return 0;
}

s32 func_0003E6B4(void) {
    return 0;
}

s32 func_0003E6BC(void) {
    return 0;
}

s32 func_0003E6C4(void) {
    return 0;
}

s32 func_0003E6CC(void) {
    return 0;
}

s32 func_0003E6D4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000435D4(void) {
    return 0;
}

s32 func_000435DC(void) {
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E79C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0004375C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043834);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E85C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E8F4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E98C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000439F8);
#endif

#if FW_VERSION == 152
void func_000439F8(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00043A00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043BBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EA38);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EC28);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003ECCC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00043C8C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00043D50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00043D50(s32 arg0) {
    func_0002E758(arg0 + 0x28, 2U);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003ED1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EDB8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EE18);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EED8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_00043E88);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0004AC08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin", func_00043EC4);
#endif

#if FW_VERSION == 100
void func_0003EF44(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00045238;
    func_0002C948(arg0 + 4);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}

void func_0003EF84(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00045238;
    func_0002C948(arg0 + 4);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}

void func_0003EFC4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00045238;
    func_0002C998(arg0 + 4, arg1);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}

void func_0003F004(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00045238;
    func_0002C998(arg0 + 4, arg1);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F044);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F06C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F094);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F0D0);

s32 func_0003F110(void *arg0, u32 arg1) {
    return func_0002CA10(M2C_FIELD(arg0, s32 *, 4), arg1) == 0;
}

s32 func_0003F130(void *arg0, s32 arg1) {
    return func_0002CA3C(M2C_FIELD(arg0, s32 *, 4), ~arg1) == 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F154);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F178);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F1E0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0003F1E0(s32 arg0, s32 *arg1) {
    func_00004FD4(arg0 + 0x84, *arg1);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F204);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F2A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F344);
#endif

#if FW_VERSION < 201
void func_0003F344(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00001DE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001EC0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001FF8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000204C);
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_000020A0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_plugin", func_000020F8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_plugin", D_00003194);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin", func_0004CF24);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004CFA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004D2F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004D358);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004D3CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004D744);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004D968);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004D9F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004DACC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004DBA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004DE40);

INCLUDE_ASM("nonmatchings/video_plugin", func_0004DF5C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_000450B0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045158);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000451C0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000451CC);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_000451D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000451E4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000451F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004A13C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004A148);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004A150);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004A154);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045204);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00045218);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045238);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045248);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/video_plugin", D_000546C0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000546C4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000546C8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000546CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000546D0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000546D4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000546D8);
#endif
