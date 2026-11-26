#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00042460);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00034AC4);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00042650);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004298C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000429D4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00042AF8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00042C0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00042CD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00042D58);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000350F8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00038674);
#endif

#if FW_VERSION < 152
s32 func_00035204(void *arg0, s32 *arg1) {
    s32 var_v0;

    var_v0 = 0x2002;
    if (arg0 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x284);
        var_v0 = -(M2C_FIELD(arg0, s32 *, 0x284) == 0) & 0x2002;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003522C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003528C);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00042DF8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00042F74);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00042F94);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00042FEC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004351C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00043614);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004362C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00043658);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00043850);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00035B14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00035B88);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004392C);

void func_0004396C(struct Unk_func_0004396C_0 *arg0) {
    if ((u32) (arg0->unkD4 - 1) < 0xFU) {
        arg0->unkD4 = 0x10;
    }
    if (arg0->unkA0 == 0) {

    } else {
        func_0005EBB0(&arg0->unkA0);
    }
}

s32 func_000439BC(struct Unk_func_000439BC_0 *arg0, s32 *arg1, s32 arg2) {
    s32 var_a3;
    struct Unk_func_000439BC_temp_v0 *temp_v0;

    var_a3 = 0x2003;
    if (arg0->unkA0 != 0) {
        temp_v0 = arg0->unk298;
        if ((temp_v0 != NULL) && (var_a3 = 0, (temp_v0->unk84 == 0))) {
            *arg1 = arg0->unkB8;
        } else {
            var_a3 = func_0004D0F4((s32) ((u8 *)arg0 + 0x174), (s32) arg1, arg2);
        }
    }
    return var_a3;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00043A14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00043D74);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00043E10);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004405C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000440BC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000440F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000441A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00044230);

#if FW_VERSION < 201
s32 func_00036458(u32 *arg0, u32 arg1) {
    s32 var_a2;
    u32 temp_v0;
    u32 temp_v1;

    temp_v0 = *arg0;
    temp_v1 = temp_v0 + arg1;
    var_a2 = 0x500E;
    if ((temp_v1 >= temp_v0) & (temp_v1 >= arg1)) {
        *arg0 = temp_v1;
        var_a2 = 0;
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003648C);
#else
s32 func_00044274(u32 *arg0, u32 arg1) {
    s32 var_a2;
    u32 temp_v0;
    u32 temp_v1;

    temp_v0 = *arg0;
    temp_v1 = temp_v0 + arg1;
    var_a2 = 0x500E;
    if ((temp_v1 >= temp_v0) & (temp_v1 >= arg1)) {
        *arg0 = temp_v1;
        var_a2 = 0;
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000442A8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00044358);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000444B4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004461C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000446CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00044CFC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00045164);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000454B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000458A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00045AF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00045D44);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00046090);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00038490);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00046510);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00046694);

#if FW_VERSION < 201
void func_00046A68(struct Unk_func_00046A68_0 *arg0, s32 arg1) {
    func_00059210((s32) &arg0->pad0[9], 3, arg1);
    arg0->unkC = func_000590D0(arg1);
    arg0->unk10 = func_000590D0(arg1);
}

void func_00046ABC(struct Unk_func_00046ABC_0 *arg0, s32 arg1) {
    func_00059210((s32) &arg0->pad0[9], 3, arg1);
    arg0->unkC = func_000590D0(arg1);
    arg0->unk10 = func_000590D0(arg1);
    arg0->unk14 = func_000590D0(arg1);
    arg0->unk18 = func_000590D0(arg1);
    arg0->unk1C = func_000590D0(arg1);
    arg0->unk20 = func_000590D0(arg1);
    arg0->unk24 = func_000590D0(arg1);
    arg0->unk28 = func_000590D0(arg1);
}

void func_00046B58(struct Unk_func_00046B58_0 *arg0, s32 arg1) {
    func_00059210((s32) &arg0->pad0[9], 3, arg1);
    arg0->unkC = func_000590D0(arg1);
    arg0->unk10 = func_000590D0(arg1);
    arg0->unk14 = func_000590D0(arg1);
    arg0->unk18 = func_000590D0(arg1);
    arg0->unk1C = func_000590D0(arg1);
    arg0->unk20 = func_000590D0(arg1);
    arg0->unk24 = func_000590D0(arg1);
    arg0->unk28 = func_000590D0(arg1);
    arg0->unk2C = func_000590D0(arg1);
    arg0->unk30 = func_000590D0(arg1);
}
#else
void func_00046A68(struct Unk_func_00046A68_0 *arg0, s32 arg1) {
    func_00059210((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_000590D0(arg1);
    arg0->unk10 = func_000590D0(arg1);
}

void func_00046ABC(struct Unk_func_00046ABC_0 *arg0, s32 arg1) {
    func_00059210((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_000590D0(arg1);
    arg0->unk10 = func_000590D0(arg1);
    arg0->unk14 = func_000590D0(arg1);
    arg0->unk18 = func_000590D0(arg1);
    arg0->unk1C = func_000590D0(arg1);
    arg0->unk20 = func_000590D0(arg1);
    arg0->unk24 = func_000590D0(arg1);
    arg0->unk28 = func_000590D0(arg1);
}

void func_00046B58(struct Unk_func_00046B58_0 *arg0, s32 arg1) {
    func_00059210((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_000590D0(arg1);
    arg0->unk10 = func_000590D0(arg1);
    arg0->unk14 = func_000590D0(arg1);
    arg0->unk18 = func_000590D0(arg1);
    arg0->unk1C = func_000590D0(arg1);
    arg0->unk20 = func_000590D0(arg1);
    arg0->unk24 = func_000590D0(arg1);
    arg0->unk28 = func_000590D0(arg1);
    arg0->unk2C = func_000590D0(arg1);
    arg0->unk30 = func_000590D0(arg1);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00046C0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00046C88);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00046FB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000471C4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000396AC);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000474EC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00047A1C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00039CD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003A040);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00047B54);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00047EC4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00048394);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000484CC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004878C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000590D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003A998);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003A9E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003AA9C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003AAEC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00059210);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003AB98);
#else
void func_00048BB0(struct Unk_func_00048BB0_0 *arg0, s32 arg1) {
    arg0->unk0 = func_00059170(arg1);
    arg0->unk2 = func_00059170(arg1);
    arg0->unk4 = func_000590D0(arg1);
    arg0->unk8 = func_000590D0(arg1);
    arg0->unkC = func_000590D0(arg1);
    arg0->unk10 = func_000591C0(arg1);
    arg0->unk12 = func_000591C0(arg1);
    arg0->unk14 = func_00059120(arg1);
    arg0->unk18 = func_00059120(arg1);
    arg0->unk1C = func_000590D0(arg1);
    arg0->unk20 = func_00059170(arg1);
    func_00059210((s32) ((u8 *)arg0 + 0x22), 0x20, arg1);
    arg0->unk42 = func_000591C0(arg1);
    arg0->unk44 = func_00059170(arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00048C88);

void func_00048D54(struct Unk_func_00048D54_0 *arg0, s32 arg1) {
    func_00059210((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_000591C0(arg1);
    arg0->unkE = func_000591C0(arg1);
    arg0->unk10 = func_000591C0(arg1);
    arg0->unk12 = func_000591C0(arg1);
}

void func_00048DC0(struct Unk_func_00048DC0_0 *arg0, s32 arg1) {
    func_00059210((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_000591C0(arg1);
    arg0->unkE = func_00059170(arg1);
}

void func_00048E14(struct Unk_func_00048E14_0 *arg0, s32 arg1) {
    func_00059210((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_000590D0(arg1);
    arg0->unk10 = func_000590D0(arg1);
    arg0->unk14 = func_000590D0(arg1);
    arg0->unk18 = func_000590D0(arg1);
    arg0->unk1C = func_00059170(arg1);
    arg0->unk1E = func_00059170(arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00048E98);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00048FD0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004912C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00049140);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000491EC);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003AE0C);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00049294);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00049388);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003AF68);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000493F4);

s32 func_000495C8(s32 *arg0, s32 *arg1) {
    *arg1 = *arg0;
    return 0;
}

s32 func_000495D8(struct Unk_func_000495D8_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk8;
    return 0;
}

s32 func_000495E8(struct Unk_func_000495E8_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk4;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000495F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00049670);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00049814);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000498A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00049F08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004A140);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003BB58);
#endif

#if FW_VERSION < 152
void func_0003BB58(s32 arg0) {
    func_0003BB74(arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003BB74);
#else
void func_0004A274(void) {
    func_0004A290();
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004A290);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004A75C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004AB74);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004AC04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004AF50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004AFE0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B068);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B3D8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B4B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B4FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B538);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B570);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B5A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B5EC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B628);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B670);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B6A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B6EC);

#if FW_VERSION < 201
s32 func_0003CF0C(void *arg0, u32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x500F;
    if (arg0 != NULL) {
        if (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x10)) {
            var_v0 = func_0005E090((s32) arg0, arg2);
        } else {
            var_v0 = func_0005CF38((s32) (arg0 + 0x14), (s32) arg1, 1, 0, arg2);
        }
    }
    return var_v0;
}
#else
s32 func_0004B7A0(struct Unk_func_0004B7A0_0 *arg0, u32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x500F;
    if (arg0 != NULL) {
        if (arg1 >= (u32) arg0->unk10) {
            var_v0 = func_0005E090((s32) arg0, arg2);
        } else {
            var_v0 = func_0005CF38((s32) ((u8 *)arg0 + 0x14), (s32) arg1, 1, 0, arg2);
        }
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B7F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B860);

#if FW_VERSION < 201
s32 func_0003D034(void *arg0, u32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x500F;
    if (arg0 != NULL) {
        if (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x10)) {
            var_v0 = func_0005E1D4((s32) arg0, arg2);
        } else {
            var_v0 = func_0005CF38((s32) (arg0 + 0x14), (s32) arg1, 1, 0, arg2);
        }
    }
    return var_v0;
}
#else
s32 func_0004B8C8(struct Unk_func_0004B8C8_0 *arg0, u32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x500F;
    if (arg0 != NULL) {
        if (arg1 >= (u32) arg0->unk10) {
            var_v0 = func_0005E1D4((s32) arg0, arg2);
        } else {
            var_v0 = func_0005CF38((s32) ((u8 *)arg0 + 0x14), (s32) arg1, 1, 0, arg2);
        }
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B91C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004B988);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004BA0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004BA2C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004BB24);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004BBA8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004BC84);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004BD80);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004BE54);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004BF54);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004BFF4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004C088);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004C3B4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003DE90);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003DF58);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004C728);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004C83C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004CA9C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004CB20);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004CD8C);

#if FW_VERSION < 201
s32 func_0003E62C(void *arg0, s32 *arg1, s32 *arg2) {
    s32 *temp_v1;
    s32 var_a3;

    temp_v1 = M2C_FIELD(arg0, s32 **, 0x108);
    var_a3 = 7;
    if (temp_v1 != NULL) {
        var_a3 = 0;
        *arg1 = *temp_v1;
        *arg2 = M2C_FIELD(arg0, s32 *, 0xA0);
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003E654);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003E6F4);

s32 func_0003E788(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x108), s32 *, 4) + M2C_FIELD(arg0, s32 *, 0xC4);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004CFA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D028);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D0F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D1B4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D224);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D24C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D278);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D2A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D318);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D38C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D44C);

#if FW_VERSION < 152
s32 func_0003EB78(s32 arg0) {
    return -(arg0 == 0) & 0x500F;
}
#endif

#if FW_VERSION == 152
s32 func_0003EB78(s32 arg0) {
    return (arg0 != 0) ? 0 : 0x500F;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003EB88);
#else
s32 func_0004D60C(s32 arg0) {
    return (arg0 != 0) ? 0 : 0x500F;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D618);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D784);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D830);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004D8B4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003EF80);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003F09C);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004DA50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004DA80);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004DAC0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004DC04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004DDA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004DEEC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004E0C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004E244);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004E524);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004E6B4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004E760);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004E804);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004E960);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004EB84);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004ECE0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004EEB4);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004EFEC);
#else
void func_0004EFEC(s32 arg0, s32 arg1) {
    func_0003F09C((s32) &D_000491AC, arg0, arg1);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004F16C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004F268);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004F32C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004F3E4);

#if FW_VERSION < 201
void func_0003F684(s32 arg0, s32 arg1) {
    func_0003F09C((s32) &D_000491CC, arg0, arg1);
}

void func_0003F6B0(void *arg0, s32 arg1) {
    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {

    } else {
        func_0004F6B4(arg0 + 8, arg1);
    }
}
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004F4F8);

void func_0004F654(struct Unk_func_0004F654_0 *arg0, s32 arg1) {
    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    if (arg0->unk8 == 0) {

    } else {
        func_0004F6B4(&arg0->unk8, arg1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004F6B4);

#if FW_VERSION < 201
void func_0004F7C0(struct Unk_func_0004F7C0_0 *arg0, s32 arg1) {
    func_0003F09C((s32) &D_000491E8, (s32) arg0, arg1);
}
#else
void func_0004F7C0(struct Unk_func_0004F7C0_0 *arg0, s32 arg1) {
    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    func_00059450((u8 *)arg0 + 8, 1, arg1);
    func_00059450((u8 *)arg0 + 9, 3, arg1);
    func_00059318(arg0->unkC, arg1);
    func_00059318(arg0->unk10, arg1);
    func_00059318(arg0->unk14, arg1);
    func_00059318(arg0->unk18, arg1);
    func_000593B0(arg0->unk1C, arg1);
    func_000593B0(arg0->unk1E, arg1);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004F868);

#if FW_VERSION < 201
void func_0003F8D0(s32 arg0, s32 arg1) {
    func_0003F09C((s32) &D_00049200, arg0, arg1);
}

void func_0003F8FC(s32 arg0, s32 arg1) {
    func_0003F09C((s32) &D_0004920C, arg0, arg1);
}

void func_0003F928(void *arg0, s32 arg1) {
    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {

    } else {
        func_0003F988((s32) (arg0 + 8), arg1);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003F988);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003FA20);
#else
void func_0004F978(struct Unk_func_0004F978_0 *arg0, s32 arg1) {
    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    func_00059450((u8 *)arg0 + 8, 1, arg1);
    func_00059450((u8 *)arg0 + 9, 3, arg1);
    func_000593B0(arg0->unkC, arg1);
    func_000593B0(arg0->unkE, arg1);
    func_000593B0(arg0->unk10, arg1);
    func_000593B0(arg0->unk12, arg1);
}

void func_0004FA08(struct Unk_func_0004FA08_0 *arg0, s32 arg1) {
    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    func_00059450((u8 *)arg0 + 8, 1, arg1);
    func_00059450((u8 *)arg0 + 9, 3, arg1);
    func_00059400(arg0->unkC, arg1);
    func_000593B0(arg0->unkE, arg1);
}

void func_0004FA80(struct Unk_func_0004FA80_0 *arg0, s32 arg1) {
    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    if (arg0->unk8 == 0) {

    } else {
        func_0004FAE0(&arg0->unk8, arg1);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004FAE0);

void func_0004FBB8(struct Unk_func_0004FBB8_0 *arg0, s32 arg1) {
    s32 temp_v1;

    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    func_00059450((u8 *)arg0 + 8, 1, arg1);
    func_00059450(&arg0->unk9, 3, arg1);
    if (((arg0->unk9 << 0x10) | (arg0->unkA << 8) | arg0->unkB) == 0) {
        if (arg0->unk4 == 0x75726C20) {
            temp_v1 = arg0->unk0;
            if (temp_v1 != 0xC) {
                func_00059450(arg0->unkC, temp_v1 - 0xC, arg1);
            }
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004FC6C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003FBE8);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004FDA0);

void func_0004FF88(struct Unk_func_0004FF88_0 *arg0, s32 arg1) {
    s32 temp_v1;

    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    temp_v1 = arg0->unk0;
    if (temp_v1 != 8) {
        func_00059450(arg0->unk8, temp_v1 - 8, arg1);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004FFE4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000501C8);
#endif

#if FW_VERSION < 201
void func_000501C8(void *arg0, s32 arg1) {
    s32 temp_v1;

    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v1 != 8) {
        func_00059450(M2C_FIELD(arg0, void **, 8), temp_v1 - 8, arg1);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0003FDD8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0005024C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00050330);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000503E4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0004008C);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000504D4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000505B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00050678);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0005076C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00050864);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00050974);

#if FW_VERSION < 201
s32 func_00050AF4(struct Unk_func_00050AF4_0 *arg0, s32 arg1) {
    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    func_00059450(arg0->pad8, 1, arg1);
    func_00059450(&arg0->pad8[1], 3, arg1);
    func_00059318(arg0->unkC, arg1);
    func_00059318(arg0->unk10, arg1);
    return 0;
}

s32 func_00050B70(struct Unk_func_00050B70_0 *arg0, s32 arg1) {
    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    func_00059450(arg0->pad8, 1, arg1);
    func_00059450(&arg0->pad8[1], 3, arg1);
    func_00059318(arg0->unkC, arg1);
    func_00059318(arg0->unk10, arg1);
    func_00059318(arg0->unk14, arg1);
    func_00059318(arg0->unk18, arg1);
    func_00059318(arg0->unk1C, arg1);
    func_00059318(arg0->unk20, arg1);
    func_00059318(arg0->unk24, arg1);
    func_00059318(arg0->unk28, arg1);
    return 0;
}

s32 func_00050C34(struct Unk_func_00050C34_0 *arg0, s32 arg1) {
    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    func_00059450(arg0->pad8, 1, arg1);
    func_00059450(&arg0->pad8[1], 3, arg1);
    func_00059318(arg0->unkC, arg1);
    func_00059318(arg0->unk10, arg1);
    func_00059318(arg0->unk14, arg1);
    func_00059318(arg0->unk18, arg1);
    func_00059318(arg0->unk1C, arg1);
    func_00059318(arg0->unk20, arg1);
    func_00059318(arg0->unk24, arg1);
    func_00059318(arg0->unk28, arg1);
    func_00059318(arg0->unk2C, arg1);
    func_00059318(arg0->unk30, arg1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00059318);
#else
s32 func_00050AF4(struct Unk_func_00050AF4_0 *arg0, s32 arg1) {
    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    func_00059450((u8 *)arg0 + 8, 1, arg1);
    func_00059450((u8 *)arg0 + 9, 3, arg1);
    func_00059318(arg0->unkC, arg1);
    func_00059318(arg0->unk10, arg1);
    return 0;
}

s32 func_00050B70(struct Unk_func_00050B70_0 *arg0, s32 arg1) {
    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    func_00059450((u8 *)arg0 + 8, 1, arg1);
    func_00059450((u8 *)arg0 + 9, 3, arg1);
    func_00059318(arg0->unkC, arg1);
    func_00059318(arg0->unk10, arg1);
    func_00059318(arg0->unk14, arg1);
    func_00059318(arg0->unk18, arg1);
    func_00059318(arg0->unk1C, arg1);
    func_00059318(arg0->unk20, arg1);
    func_00059318(arg0->unk24, arg1);
    func_00059318(arg0->unk28, arg1);
    return 0;
}

s32 func_00050C34(struct Unk_func_00050C34_0 *arg0, s32 arg1) {
    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    func_00059450((u8 *)arg0 + 8, 1, arg1);
    func_00059450((u8 *)arg0 + 9, 3, arg1);
    func_00059318(arg0->unkC, arg1);
    func_00059318(arg0->unk10, arg1);
    func_00059318(arg0->unk14, arg1);
    func_00059318(arg0->unk18, arg1);
    func_00059318(arg0->unk1C, arg1);
    func_00059318(arg0->unk20, arg1);
    func_00059318(arg0->unk24, arg1);
    func_00059318(arg0->unk28, arg1);
    func_00059318(arg0->unk2C, arg1);
    func_00059318(arg0->unk30, arg1);
    return 0;
}

void func_00050D10(struct Unk_func_00050D10_0 *arg0, s32 arg1) {
    func_000593B0(arg0->unk0, arg1);
    func_000593B0(arg0->unk2, arg1);
    func_00059318(arg0->unk4, arg1);
    func_00059318(arg0->unk8, arg1);
    func_00059318(arg0->unkC, arg1);
    func_00059400(arg0->unk10, arg1);
    func_00059400(arg0->unk12, arg1);
    func_00059364(arg0->unk14, arg1);
    func_00059364(arg0->unk18, arg1);
    func_00059318(arg0->unk1C, arg1);
    func_000593B0(arg0->unk20, arg1);
    func_00059450((u8 *)arg0 + 0x22, 0x20, arg1);
    func_00059400(arg0->unk42, arg1);
    func_000593B0(arg0->unk44, arg1);
}

void func_00050DE4(struct Unk_func_00050DE4_0 *arg0, s32 arg1, M2C_UNK arg2) {
    func_000593B0(arg0->unk0, arg2);
    func_000593B0(arg0->unk2, arg2);
    func_00059318(arg0->unk4, arg2);
    func_000593B0(arg0->unk8, arg2);
    func_000593B0(arg0->unkA, arg2);
    func_000593B0(arg0->unkC, arg2);
    func_000593B0(arg0->unkE, arg2);
    func_00059318(arg0->unk10, arg2);
    if ((arg1 & 0xFFFF) != 1) {

    } else {
        func_00059318(arg0->unk14, arg2);
        func_00059318(arg0->unk18, arg2);
        func_00059318(arg0->unk1C, arg2);
        func_00059318(arg0->unk20, arg2);
    }
}

void func_00050EC0(struct Unk_func_00050EC0_0 *arg0, s32 arg1) {
    func_00059318(arg0->unk0, arg1);
    func_00059318(arg0->unk4, arg1);
    func_00059450((u8 *)arg0 + 8, 6, arg1);
    func_000593B0(arg0->unkE, arg1);
}

void func_00050F1C(struct Unk_func_00050F1C_0 *arg0) {
    arg0->unk8 = 1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00050F28);

s32 func_00050FD4(struct Unk_func_00050FD4_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x2003;
    if (arg0 != NULL) {
        arg0->unk15C = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00050FEC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00051418);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00051544);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000515B0);

s32 func_000515F4(void **arg0, void **arg1) {
    s32 var_a2;
    struct Unk_func_000515F4_temp_v0 *temp_v0;

    temp_v0 = *arg1;
    var_a2 = 0xA;
    if (temp_v0 != NULL) {
        var_a2 = 0;
        temp_v0->unk1C = (void *) *arg0;
        *arg0 = *arg1;
        *arg1 = NULL;
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00051620);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000517F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000518F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00051CE8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00051EA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000520A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000524A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00052698);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000528C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00052C7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00052D94);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00052E90);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00053134);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00053254);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00053354);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000536C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0005387C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00053A6C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00053DC8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00053F54);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0005410C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00054188);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000542FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0005454C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0005461C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000546EC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00054890);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000549C4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00054BCC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00054CF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00054D8C);

void **func_00054DDC(void **arg0) {
    void **var_a0;
    void *temp_v0;
    struct Unk_func_00054DDC_var_v1 *var_v1;

    var_a0 = arg0;
    var_v1 = *var_a0;
    if (var_v1 != NULL) {
        do {
            temp_v0 = var_v1->unk1C;
            var_a0 = &var_v1->unk1C;
            var_v1 = temp_v0;
        } while (temp_v0 != NULL);
    }
    return var_a0;
}

void *func_00054E00(void *arg0) {
    void *temp_v0;
    struct Unk_func_00054E00_var_a0 *var_a0;
    struct Unk_func_00054E00_var_a0 *var_v1;

    var_a0 = arg0;
    var_v1 = var_a0->unk1C;
    if (var_v1 != NULL) {
        do {
            temp_v0 = var_v1->unk1C;
            var_a0 = var_v1;
            var_v1 = temp_v0;
        } while (temp_v0 != NULL);
    }
    return var_a0;
}

s32 func_00054E24(s32 *arg0) {
    return *arg0 + 0x1C;
}

s32 func_00054E30(struct Unk_func_00054E30_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00054E3C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00055060);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0005513C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0005520C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00055278);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000555A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0005567C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_000556F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_0005599C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00055DA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00055E30);

INCLUDE_ASM("nonmatchings/msvideo_plugin_042460", func_00056258);
#endif
