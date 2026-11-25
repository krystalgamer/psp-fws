#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("nonmatchings/paf_058100", func_00058100);

INCLUDE_ASM("nonmatchings/paf_058100", func_000581E0);

void func_00058420(struct Unk_func_00058420_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk58;
    if (temp_v0 == 0) {

    } else {
        scePaf_545FE2DA(temp_v0);
    }
    if (arg0->unk10 == 0) {

    } else {
        scePaf_83944053(arg0->unk10);
    }
}

void func_00058478(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_503BA324(arg1, 1, arg2, arg0);
}

void func_0005849C(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_2FA84441(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/paf_058100", func_000584B8);

INCLUDE_ASM("nonmatchings/paf_058100", func_000584E4);

INCLUDE_ASM("nonmatchings/paf_058100", func_000585F0);

INCLUDE_ASM("nonmatchings/paf_058100", func_000586C0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058760);

INCLUDE_ASM("nonmatchings/paf_058100", func_000588B4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058998);

INCLUDE_ASM("nonmatchings/paf_058100", func_000589D4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058A38);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058A64);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058AC0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058B08);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058B68);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058B90);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_000549F8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016C9C8);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016AEC8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_058100", D_00166E68);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_058100", D_00166F28);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00054B84);
#endif

#if FW_VERSION == 260
void func_00054B84(void *arg0) {
    M2C_UNK (*temp_s1)(s32);
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x1C0);
    temp_s1 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x1D0);
    func_000549F8((s32) arg0);
    temp_s1(temp_s0);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00054BBC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00054C88);
#endif

#if FW_VERSION == 260
void func_00054C88(s32 arg0, s32 arg1, s32 arg2) {
    func_00054BBC(arg0, arg1, arg2, 1);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00054CA4);
#endif

#if FW_VERSION == 260
void func_00054CA4(s32 arg0, s32 arg1) {
    func_00054BBC(arg0, arg1, scePaf_CA79D58B(arg1) + 1, 1);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00054CF0);
#endif

#if FW_VERSION == 260
void func_00054CF0(s32 arg0, s32 arg1, s32 arg2) {
    func_00054BBC(arg0, arg1, arg2, 1);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00054D0C);
#endif

#if FW_VERSION == 260
void func_00054D0C(s32 arg0, s32 arg1, s32 arg2) {
    func_00054BBC(arg0, arg1, arg2, 2);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00054D28);
#endif

#if FW_VERSION == 260
void func_00054D28(s32 arg0, s32 arg1, s32 arg2) {
    func_00054BBC(arg0, arg1, arg2, 4);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00054D44);
#endif

#if FW_VERSION == 260
void func_00054D44(s32 arg0, s32 arg1, s32 arg2) {
    func_00054BBC(arg0, arg1, arg2, 4);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00054D60);
#endif

#if FW_VERSION == 260
void func_00054D60(s32 arg0, s32 arg1, s32 arg2) {
    func_00054BBC(arg0, arg1, arg2, 4);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00054D7C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00054E8C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00054F20);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_00054F14);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00166F84);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00166F8C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00166F90);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_058100", D_00166FC0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00166FE8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167008);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167040);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167064);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167080);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00166FB4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00166FE0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016709C);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_058100", D_001670BC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001670E4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00167110);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016CBA4);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B0A4);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_058100", D_00167044);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016712C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_000568DC);

INCLUDE_ASM("nonmatchings/paf_058100", func_000569A4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00056A1C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_000569EC);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_00056A98);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00058244);

INCLUDE_ASM("nonmatchings/paf_058100", func_000582BC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00057F68);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_0005836C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_000587B4);

INCLUDE_ASM("nonmatchings/paf_058100", func_000587F4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058908);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058B78);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00058C24);
#endif

#if FW_VERSION == 260
void func_00058C24(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    func_00059694((s32) arg0);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00058C48);
#endif

#if FW_VERSION == 260
s32 func_00058C48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00058C50);
#endif

#if FW_VERSION == 260
s32 func_00058C50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14) == 0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00058C5C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167294);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001672A0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001672B0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001672BC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001672C8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001672D8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001672E4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167300);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167310);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016726C);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016731C_v200);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00167328);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167334);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167344);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167358);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167360);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167368);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167378);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167384);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167394);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001673A4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001673B4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001673C4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001673D4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001673E0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001673EC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167400);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016740C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167418);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167424);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167430);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167440);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167454);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167468);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167478);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167484);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167498);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001674AC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001674B8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001674C4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001674CC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001674DC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001674E8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167500);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016750C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016751C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167528);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167534);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167540);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167550);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167558);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167560);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016756C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016757C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167588);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167598);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001675A8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001675B8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001675C8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B588);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B594);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_058100", D_00167528_v201);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167534_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00167544);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_001675D8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001675EC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167600);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167614);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167628);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167634);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167640);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016764C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167658);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167664);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167674);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167684);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167694);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001676A8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001676BC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001676D0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001676E4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001676F0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167700);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016768C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016770C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B708);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_058100", D_001676A8_v201);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00167718);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_001676C0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001676DC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001676E8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001676FC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167710);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167728);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167738);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167744);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167758);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016776C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167778);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016778C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001677A0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001677AC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001677BC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001677D0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001677E4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001677F4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167804);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167814);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167828);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016783C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167850);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167864);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167874);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167884);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167894);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001678A8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001678B8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001678CC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001678DC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001678F0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167904);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167910);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167924);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167938);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167944);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167954);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167964);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016797C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167994);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001679A4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001679B8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001679CC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001679D8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001679E4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001679F8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167A10);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00167A24);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00167720);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058F0C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058FEC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00059028);
#endif

#if FW_VERSION == 260
void func_00059028(void **arg0, void **arg1) {
    scePaf_66FE90D7(M2C_FIELD(*arg0, s32 *, 0x10), M2C_FIELD(*arg1, s32 *, 0x10));
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00059050);

INCLUDE_ASM("nonmatchings/paf_058100", func_00059110);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00058BB4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00058BE8);
#endif

#if FW_VERSION == 260
s32 func_00058BE8(void) {
    return 2;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00058BF0);
#endif

#if FW_VERSION == 260
s32 func_00058BF0(void) {
    return 8;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00058BF8);
#endif

#if FW_VERSION == 260
s32 func_00058BF8(void) {
    return 4;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0005915C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00059204);

INCLUDE_ASM("nonmatchings/paf_058100", func_000592DC);

INCLUDE_ASM("nonmatchings/paf_058100", func_000593F8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00059538);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_000595F8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00059694);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005A77C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005A9CC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005A9FC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005AAA4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005AC28);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005ACAC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168464);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168480);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00168D58);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_058100", D_001684AC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_001684E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00168DA0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168DD4);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_058100", D_001684F4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168528);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016855C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168598);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001685B4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001685C4);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_058100", D_001685D8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_001685F0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168610);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168634);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005AD88);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0005A7EC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005A878);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005A978);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005AA08);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005AAD0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005AB10);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005AC0C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0005AC4C);
#endif

#if FW_VERSION == 260
s32 func_0005AC4C(s32 arg0, s32 arg1, s32 arg2) {
    return func_0005AAA4(arg0, arg1, arg2) != 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0005AC6C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005AF40);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B450);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B58C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B6C4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B804);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B9D0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005BB18);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C4C0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005BD70);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005BDDC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016865C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168678);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001686AC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001686C4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001686EC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016873C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016874C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168778);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168788);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001687B8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001687CC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001687F8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168828);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168834);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168858);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016888C);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_0005ADF0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005AE7C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B090);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B120);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B1DC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B21C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B318);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B358);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B378);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B65C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005BB6C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005BCA0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005BDD0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005BF08);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C0D4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C1AC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C2F4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C4C0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C54C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C5B8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0005C61C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C928);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005CA00);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005CA38);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005D06C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0005C904);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00168A08);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_0005D0E0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0005D208);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00168E2C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005D390);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005D6E8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005DB98);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005DE70);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005E2FC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005E36C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005E418);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005E53C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005E6D0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005E740);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005E7C0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005E954);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005EA78);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005EB24);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005EE5C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005EF00);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005F294);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005F364);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005F3F8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005F498);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005F580);

INCLUDE_ASM("nonmatchings/paf_058100", func_000600C8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00060230);

INCLUDE_ASM("nonmatchings/paf_058100", func_000605E4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006068C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00060AE0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00060BE0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00060C7C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00060D30);

INCLUDE_ASM("nonmatchings/paf_058100", func_00060E38);

INCLUDE_ASM("nonmatchings/paf_058100", func_00060F5C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00061B10);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006212C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00062404);

INCLUDE_ASM("nonmatchings/paf_058100", func_000627BC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00062958);

INCLUDE_ASM("nonmatchings/paf_058100", func_00062A40);

INCLUDE_ASM("nonmatchings/paf_058100", func_00062B68);

INCLUDE_ASM("nonmatchings/paf_058100", func_00062C68);

INCLUDE_ASM("nonmatchings/paf_058100", func_00062F48);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006308C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00063100);

INCLUDE_ASM("nonmatchings/paf_058100", func_00063164);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006361C);

INCLUDE_ASM("nonmatchings/paf_058100", func_000636E8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00063914);

INCLUDE_ASM("nonmatchings/paf_058100", func_000639E4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00063B54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0006362C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00063634);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0006363C);
#endif

#if FW_VERSION == 260
void func_0006363C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x120) = &D_001692E8;
    if (arg1 != 0x4D4D) {
        M2C_FIELD(arg0, M2C_UNK **, 0x11C) = &D_00169350;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x11C) = &D_0016931C;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) | 0x80);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_001692E0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001692E4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001692E8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016931C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00169350);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_00063E08);

INCLUDE_ASM("nonmatchings/paf_058100", func_00063E10);

INCLUDE_ASM("nonmatchings/paf_058100", func_00063E18);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00063E70);

INCLUDE_ASM("nonmatchings/paf_058100", func_00063EFC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0006442C);
#endif

#if FW_VERSION == 260
s32 func_0006442C(s32 *arg0) {
    return *arg0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00064434);
#endif

#if FW_VERSION == 260
s32 func_00064434(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    *arg0 = arg1;
    return temp_v0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00064440);
#endif

#if FW_VERSION == 260
s32 func_00064440(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00064448);
#endif

#if FW_VERSION == 260
s32 func_00064448(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return temp_v0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00064454);
#endif

#if FW_VERSION == 260
s32 func_00064454(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C0);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0006445C);
#endif

#if FW_VERSION == 260
s32 func_0006445C(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C0);
    M2C_FIELD(arg0, s32 *, 0x1C0) = arg1;
    return temp_v0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00064468);
#endif

#if FW_VERSION == 260
s32 func_00064468(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00064470);
#endif

#if FW_VERSION == 260
s32 func_00064470(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return temp_v0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0006447C);
#endif

#if FW_VERSION == 260
s32 func_0006447C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC) >> 0xA) & 1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0006448C);
#endif

#if FW_VERSION == 260
s32 func_0006448C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x124);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00064494);
#endif

#if FW_VERSION == 260
u16 func_00064494(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x128);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0006449C);
#endif

#if FW_VERSION == 260
s32 func_0006449C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x12C);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000644A4);
#endif

#if FW_VERSION == 260
s32 func_000644A4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x144);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000644AC);
#endif

#if FW_VERSION == 260
s32 func_000644AC(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC) >> 7) & 1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000644BC);
#endif

#if FW_VERSION == 260
s32 func_000644BC(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC) >> 0xE) & 1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000644CC);
#endif

#if FW_VERSION == 260
s32 func_000644CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) & 1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000644D8);
#endif

#if FW_VERSION == 260
s32 func_000644D8(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x114) == 0x4D4D;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000644E8);
#endif

#if FW_VERSION == 260
s32 func_000644E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C4);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000644F0);
#endif

#if FW_VERSION == 260
s32 func_000644F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C8);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000644F8);
#endif

#if FW_VERSION == 260
s32 func_000644F8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1CC);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00064500);
#endif

#if FW_VERSION == 260
s32 func_00064500(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D0);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00064508);
#endif

#if FW_VERSION == 260
s32 func_00064508(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00064510);
#endif

#if FW_VERSION == 260
s32 func_00064510(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1B8);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00064518);
#endif

#if FW_VERSION == 260
s32 func_00064518(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1BC);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00064520);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006464C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00064718);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006488C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001696D8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00064AD0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00064CCC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00064D90);

INCLUDE_ASM("nonmatchings/paf_058100", func_00064EA4);

INCLUDE_ASM("nonmatchings/paf_058100", func_000650DC);

INCLUDE_ASM("nonmatchings/paf_058100", func_000652B4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065394);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065460);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065570);

INCLUDE_ASM("nonmatchings/paf_058100", func_000655F0);

INCLUDE_ASM("nonmatchings/paf_058100", func_000655F8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00064E74);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00065624);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065654);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065684);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006569C);

INCLUDE_ASM("nonmatchings/paf_058100", func_000656F8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065778);

INCLUDE_ASM("nonmatchings/paf_058100", func_000657E8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00065A14);
#endif

#if FW_VERSION == 260
void func_00065A14(s32 arg0) {
    u32 temp_a1;
    u32 temp_a2;
    void *temp_v0;

    temp_v0 = arg0 + 0x20;
    temp_a2 = M2C_FIELD(temp_v0, u32 *, 0x14);
    temp_a1 = M2C_FIELD(temp_v0, u32 *, 0x3C);
    func_000657E8(arg0, (s32) ((temp_a2 < temp_a1) ? temp_a2 : temp_a1));
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00065A40);
#endif

#if FW_VERSION == 260
void func_00065A40(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(), 0x18C)();
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00065A60);
#endif

#if FW_VERSION == 260
u32 func_00065A60(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;
    u32 temp_lo;

    var_a1 = arg1;
    if (var_a1 <= 0) {
        temp_v0 = func_00065AAC(arg0);
        var_a1 = 0x2000;
        if (temp_v0 != 0) {
            temp_lo = 0x2000U / (u32) temp_v0;
            var_a1 = (s32) ((temp_lo != 0) ? temp_lo : 1U);
        }
    }
    return (u32) var_a1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00065AAC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00169A78);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00169B78);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065BEC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065C00);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065C24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_000654E4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00065C5C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065CA4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065CDC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00065D3C);
#endif

#if FW_VERSION == 260
M2C_UNK *func_00065D3C(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = &D_00169A78;
    if (arg0 == 0) {
        var_v0 = &D_00169B78;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00065D58);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065E3C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065E54);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065EB0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00065FFC);

INCLUDE_ASM("nonmatchings/paf_058100", func_000660C0);

INCLUDE_ASM("nonmatchings/paf_058100", func_000661E8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00066290);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00066474);
#endif

#if FW_VERSION == 260
void func_00066474(void *arg0) {
    func_00066290((s32) arg0, M2C_FIELD(arg0, s32 *, 0x40));
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00066490);

INCLUDE_ASM("nonmatchings/paf_058100", func_000664B0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00066518);
#endif

#if FW_VERSION == 260
void func_00066518(void) {
    sceIoRead();
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00066534);
#endif

#if FW_VERSION == 260
void func_00066534(void) {
    sceIoWrite();
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00066550);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00066578);
#endif

#if FW_VERSION == 260
void func_00066578(s32 arg0) {
    sceIoClose(arg0);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00066594);

INCLUDE_ASM("nonmatchings/paf_058100", func_000665F0);

INCLUDE_ASM("nonmatchings/paf_058100", func_000665F8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00066600);

INCLUDE_ASM("nonmatchings/paf_058100", func_00066678);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00066740);
#endif

#if FW_VERSION == 260
void func_00066740(void) {
    scePaf_5FAC9869();
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0006675C);
#endif

#if FW_VERSION == 260
void func_0006675C(void) {
    scePaf_545FE2DA();
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00066778);
#endif

#if FW_VERSION == 260
void func_00066778(void) {
    scePaf_8FC65EB0();
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00066794);
#endif

#if FW_VERSION == 260
void func_00066794(void) {
    scePaf_6829D7AF();
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000667B0);
#endif

#if FW_VERSION == 260
void func_000667B0(void) {
    scePaf_F95EA3F1();
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000667CC);
#endif

#if FW_VERSION == 260
void func_000667CC(void) {
    scePaf_3FBD9639();
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_000667E8);

INCLUDE_ASM("nonmatchings/paf_058100", func_000667F4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00066800);
#endif

#if FW_VERSION == 260
s32 func_00066800(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_00196E48;
    D_00196E48 = arg0;
    return temp_v0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00066810);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006705C);

INCLUDE_ASM("nonmatchings/paf_058100", func_000673CC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00067500);

INCLUDE_ASM("nonmatchings/paf_058100", func_00067678);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006779C);

INCLUDE_ASM("nonmatchings/paf_058100", func_000678D0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00067ADC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00067B70);
#endif

#if FW_VERSION == 260
void func_00067B70(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x130) = arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00067444);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A8FC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00067B78);

INCLUDE_ASM("nonmatchings/paf_058100", func_00067DB0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00067E54);

INCLUDE_ASM("nonmatchings/paf_058100", func_00068878);

INCLUDE_ASM("nonmatchings/paf_058100", func_000688F0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00068A7C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00068CF0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00068F48);

INCLUDE_ASM("nonmatchings/paf_058100", func_00069008);

INCLUDE_ASM("nonmatchings/paf_058100", func_000692CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00068CB0);
#endif

#if FW_VERSION == 260
void func_00068CB0(s32 arg0) {
    func_000692CC(arg0, (s32) &D_0016A160);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00068CD0);
#endif

#if FW_VERSION == 260
void func_00068CD0(s32 arg0) {
    func_000692CC(arg0, (s32) &D_0016A16C);
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/paf_058100", func_0006B6A4);
#endif

#if FW_VERSION == 260
void func_0006B6A4(s32 arg0) {
    func_000692CC(arg0, (s32) &D_0016A174);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/paf_058100", func_00068CF0_v201);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A160);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A16C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A174);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_00069338);

INCLUDE_ASM("nonmatchings/paf_058100", func_00069358);

INCLUDE_ASM("nonmatchings/paf_058100", func_00069378);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00069398);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00069404);
#endif

#if FW_VERSION == 260
void func_00069404(s32 arg0) {
    func_00069398(arg0, (s32) &D_0016A160);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00069424);
#endif

#if FW_VERSION == 260
void func_00069424(s32 arg0) {
    func_00069398(arg0, (s32) &D_0016A16C);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00069444);
#endif

#if FW_VERSION == 260
void func_00069444(s32 arg0) {
    func_00069398(arg0, (s32) &D_0016A174);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00069464);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0006948C);
#endif

#if FW_VERSION == 260
s32 func_0006948C(void) {
    return 1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00069494);
#endif

#if FW_VERSION == 260
s32 func_00069494(void) {
    return 1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0006949C);

INCLUDE_ASM("nonmatchings/paf_058100", func_000694A4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00069564);

INCLUDE_ASM("nonmatchings/paf_058100", func_000695CC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00069630);

INCLUDE_ASM("nonmatchings/paf_058100", func_000698A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000699F8);
#endif

#if FW_VERSION == 260
void func_000699F8(s32 arg0) {
    func_000698A0(arg0, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00069A14);
#endif

#if FW_VERSION == 260
s32 func_00069A14(void *arg0) {
    s32 temp_s0;

    if (M2C_FIELD(arg0, s32 *, 0xA8) != 0) {

    } else {
        func_000673CC((s32) arg0);
    }
    temp_s0 = func_000698A0((s32) arg0, 0);
    func_00067B70(arg0, M2C_FIELD(arg0, s32 (**)(s32, M2C_UNK, M2C_UNK), 0x1CC)(M2C_FIELD(arg0, s32 *, 0x1C0), 0, 2));
    return temp_s0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A2DC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A2FC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A324);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A350);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_058100", D_0017077C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016EC7C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016AC1C);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A37C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006A080);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006A09C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0006A110);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006A670);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006A6D4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006A720);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006A804);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006A8F0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006A958);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006AA1C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006AA70);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006AAF4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006AB34);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006AD44);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006AD84);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006ADA0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006B100);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006B1BC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006B1F4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A5DC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A5FC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A61C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006B568);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A690);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A694);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A698);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A69C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A6A0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A6A4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A6AC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A6B0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A6BC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A6C8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A6D0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A6D8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A6E8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A6F4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A700);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A710);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A720);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A72C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A734);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A744);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A750);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A758);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006B824);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0006B864);
#endif

#if FW_VERSION == 260
s32 func_0006B864(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14C) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x150) = &func_0006B824;
    M2C_FIELD(arg0, s32 *, 0x15C) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x158) = &func_0006B824;
    return 1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0006B884);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006B8C4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006B998);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016A7C0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016AA50);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006BA28);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006BA54);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006BA90);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006BAEC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006BB18);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006BB44);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006BB90);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006BBBC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006C2D8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016AE24);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006D2E0);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_0006D618);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0006D6B4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0006D854);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006D98C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006D5DC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016AF0C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016AF30);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B030);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B130);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B138);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B16C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B174);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B180);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B18C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B19C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B1B4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B1C4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B1D4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B1E0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B1E8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B2C4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B2D4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B2E8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B2F8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B30C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B320);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B340);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016BBE0);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B34C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B380);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_0006D854);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006D98C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006DD10);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0006DF40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016BC2C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016C02C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", func_001690E8);

INCLUDE_RODATA("nonmatchings/paf_058100", func_00169128);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_058100", D_001748CC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017402C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00189B8C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00189B98);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00189B9C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00189BAC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00189BBC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00189BC8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00189BD0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_058100", D_00172DB4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/paf_058100", D_0017402C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_058100", D_0018808C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00188098);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0018809C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001880AC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001880BC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001880C8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001880D0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_058100", D_0018402C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184038);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0018403C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0018404C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0018405C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184068);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184070);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B398);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0016B798);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173798);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00177F74);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183798);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001837A4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001837A8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001837B8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001837C8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001837D4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001837DC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_0018387C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006DFFC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006E1AC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006E504);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006E63C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006E6CC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006E7B0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006E844);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006EB94);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006EE70);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006EE78);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006EFF4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006F054);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006FBF8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006FC84);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006FD34);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006FDC8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00070394);

INCLUDE_ASM("nonmatchings/paf_058100", func_000703F0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007044C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007059C);

INCLUDE_ASM("nonmatchings/paf_058100", func_000706F4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007074C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00070780);

INCLUDE_ASM("nonmatchings/paf_058100", func_000707F4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070868);
#endif

#if FW_VERSION == 260
s32 func_00070868(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_00082570(arg0);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_000708B0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00070908);

INCLUDE_ASM("nonmatchings/paf_058100", func_00070970);

INCLUDE_ASM("nonmatchings/paf_058100", func_000709C8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070A20);
#endif

#if FW_VERSION == 260
s32 func_00070A20(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_0007FEDC(arg0, arg1, arg2);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070A88);
#endif

#if FW_VERSION == 260
s32 func_00070A88(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_00080010(arg0, arg1, arg2);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070AF0);
#endif

#if FW_VERSION == 260
s32 func_00070AF0(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_0007FA50(arg0);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070B38);
#endif

#if FW_VERSION == 260
s32 func_00070B38(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_0007FD7C(arg0);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00070B80);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070BD4);
#endif

#if FW_VERSION == 260
s32 func_00070BD4(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_0008A69C(arg0);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070C1C);
#endif

#if FW_VERSION == 260
s32 func_00070C1C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_00085D9C(arg0, arg1, arg2);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070C84);
#endif

#if FW_VERSION == 260
s32 func_00070C84(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_00085E94(arg0, arg1, arg2);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070CEC);
#endif

#if FW_VERSION == 260
s32 func_00070CEC(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_0008A588(arg0);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070D34);
#endif

#if FW_VERSION == 260
s32 func_00070D34(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_0004EAC0(arg0);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070D7C);
#endif

#if FW_VERSION == 260
s32 func_00070D7C(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_00044DD8(arg0);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070DC4);
#endif

#if FW_VERSION == 260
s32 func_00070DC4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(void *, s32, s32, s32), 8)(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00070E44);

INCLUDE_ASM("nonmatchings/paf_058100", func_00070E5C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00070EAC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00070ECC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070EFC);
#endif

#if FW_VERSION == 260
void func_00070EFC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x654) = (s32) M2C_FIELD(arg0, s32 *, 0x6D4);
    M2C_FIELD(arg0, s32 *, 0x658) = (s32) M2C_FIELD(arg0, s32 *, 0x6D8);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00070F10);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00070FA4);
#endif

#if FW_VERSION == 260
void func_00070FA4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x6D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x6D8) - M2C_FIELD(arg0, s32 *, 0x658));
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00070FB8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001838B4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00071060);

INCLUDE_ASM("nonmatchings/paf_058100", func_00071078);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000710C8);
#endif

#if FW_VERSION == 260
void func_000710C8(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg1 > 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x66C);
        if (temp_v0 >= arg1) {
            M2C_FIELD(arg0, s32 *, 0x66C) = (s32) (temp_v0 - arg1);
            M2C_FIELD(arg0, s32 *, 0x668) = (s32) (M2C_FIELD(arg0, s32 *, 0x668) + arg1);
        } else {
            func_00071078((s32) arg0);
        }
    }
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00071114);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007111C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0007116C);
#endif

#if FW_VERSION == 260
void func_0007116C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x668) = (s32) M2C_FIELD(arg0, s32 *, 0x6D4);
    M2C_FIELD(arg0, s32 *, 0x66C) = (s32) M2C_FIELD(arg0, s32 *, 0x6D8);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00071180);

INCLUDE_ASM("nonmatchings/paf_058100", func_000711B0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00071268);

INCLUDE_ASM("nonmatchings/paf_058100", func_00071340);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00188280);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0019EE58);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001882C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00070FD4);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_00071708);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00071808);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00071A00);
#endif

#if FW_VERSION == 260
void func_00071A00(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(((arg1 * 4) + arg0), void **, 0x40);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x80) = 0;
    }
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00071A1C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00071A44);

INCLUDE_ASM("nonmatchings/paf_058100", func_00071B40);

INCLUDE_ASM("nonmatchings/paf_058100", func_00071D9C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00071AB8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00071B90);

INCLUDE_ASM("nonmatchings/paf_058100", func_00071DE0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00071F04);

INCLUDE_ASM("nonmatchings/paf_058100", func_00071F78);

INCLUDE_ASM("nonmatchings/paf_058100", func_00072320);

INCLUDE_ASM("nonmatchings/paf_058100", func_000723D4);

INCLUDE_ASM("nonmatchings/paf_058100", func_000726AC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000726B4);
#endif

#if FW_VERSION == 260
u32 func_000726B4(void *arg0) {
    u16 temp_a0;
    u32 temp_v1;
    u32 var_a1;
    void *temp_s0;

    temp_s0 = arg0 + 0x20;
    var_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x194), u32 (**)(), 0x6CC)();
    if (var_a1 < (u32) M2C_FIELD(temp_s0, u32 *, 0x14)) {
        temp_a0 = M2C_FIELD(temp_s0, u16 *, 0xA2);
        temp_v1 = temp_a0 * 8;
        var_a1 = ((u32) ((var_a1 + temp_v1) - 1) / temp_v1) * temp_a0 * 8;
    }
    return var_a1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00072724);

INCLUDE_ASM("nonmatchings/paf_058100", func_000727C8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00183B40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_000728F4);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_000720A4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007217C);

INCLUDE_ASM("nonmatchings/paf_058100", func_000723CC);

INCLUDE_ASM("nonmatchings/paf_058100", func_000724F0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00072564);

INCLUDE_ASM("nonmatchings/paf_058100", func_00072908);

INCLUDE_ASM("nonmatchings/paf_058100", func_000729B4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00072C8C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00072C94);

INCLUDE_ASM("nonmatchings/paf_058100", func_00072D04);

INCLUDE_ASM("nonmatchings/paf_058100", func_00072DA8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00072EB4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00073054);

INCLUDE_ASM("nonmatchings/paf_058100", func_00073260);

INCLUDE_ASM("nonmatchings/paf_058100", func_00073348);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00072FE8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00073074);

INCLUDE_ASM("nonmatchings/paf_058100", func_00073100);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007344C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00073568);

INCLUDE_ASM("nonmatchings/paf_058100", func_000738AC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00073938);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00183C44);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183C54);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183C88);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183CB4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183CC4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183CFC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183D34);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183D7C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183D9C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183DA4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183DB0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183DE8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183E14);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183E44);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183E54);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183E64);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183E8C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00183E9C);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_00073550);

INCLUDE_ASM("nonmatchings/paf_058100", func_000735DC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00073668_v200);

INCLUDE_ASM("nonmatchings/paf_058100", func_000739B4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00073AD0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00073E14);

INCLUDE_ASM("nonmatchings/paf_058100", func_00073EA0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00073F2C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00073F94);

INCLUDE_ASM("nonmatchings/paf_058100", func_00074160);

INCLUDE_ASM("nonmatchings/paf_058100", func_000741C4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00074290);

INCLUDE_ASM("nonmatchings/paf_058100", func_00074304);

INCLUDE_ASM("nonmatchings/paf_058100", func_000744CC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00074518);

INCLUDE_ASM("nonmatchings/paf_058100", func_00074610);

INCLUDE_ASM("nonmatchings/paf_058100", func_00074A00);

INCLUDE_ASM("nonmatchings/paf_058100", func_00074B90);

INCLUDE_ASM("nonmatchings/paf_058100", func_00074C60);

INCLUDE_ASM("nonmatchings/paf_058100", func_00074D7C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00074E6C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00074EC8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00074FAC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00075014);

INCLUDE_ASM("nonmatchings/paf_058100", func_00075080);

INCLUDE_ASM("nonmatchings/paf_058100", func_00075210);

INCLUDE_ASM("nonmatchings/paf_058100", func_00075364);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007553C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00075598);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007567C);

INCLUDE_ASM("nonmatchings/paf_058100", func_000756E4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00075750);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007592C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00075934);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000759A8);
#endif

#if FW_VERSION == 260
u32 func_000759A8(u32 arg0, s32 arg1) {
    u32 var_v1;

    var_v1 = arg0 * arg1;
    if (arg0 != 0) {
        var_v1 = (((var_v1 / arg0) ^ arg1) != 0) ? 0U : var_v1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_000759D4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00075AD0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00075BB8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00075CF4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00075E7C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00076000);

INCLUDE_ASM("nonmatchings/paf_058100", func_00076030);

INCLUDE_ASM("nonmatchings/paf_058100", func_00076088);

INCLUDE_ASM("nonmatchings/paf_058100", func_00076268);

INCLUDE_ASM("nonmatchings/paf_058100", func_00076300);

INCLUDE_ASM("nonmatchings/paf_058100", func_00076440);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184084);

INCLUDE_ASM("nonmatchings/paf_058100", func_00076530);

INCLUDE_ASM("nonmatchings/paf_058100", func_00076648);

INCLUDE_ASM("nonmatchings/paf_058100", func_00076670);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001841C8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00076B1C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00076F50);

INCLUDE_ASM("nonmatchings/paf_058100", func_00076FAC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00077028);

INCLUDE_ASM("nonmatchings/paf_058100", func_000773AC);

INCLUDE_ASM("nonmatchings/paf_058100", func_000774D4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00077540);

INCLUDE_ASM("nonmatchings/paf_058100", func_000775AC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007768C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00077344);
#endif

#if FW_VERSION == 260
s32 func_00077344(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_0007768C;
    M2C_FIELD(arg0, M2C_UNK **, 0x170) = &func_0007768C;
    M2C_FIELD(arg0, M2C_UNK **, 0x178) = &func_0007768C;
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00077360);

INCLUDE_ASM("nonmatchings/paf_058100", func_000773E0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00184334);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184340);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0018434C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184364);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184380);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184394);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001843AC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001843C0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001843CC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001843DC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001843EC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184400);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184410);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184500);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184510);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184538);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0018456C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001845B0);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_000778AC);

INCLUDE_ASM("nonmatchings/paf_058100", func_000778C8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00077948);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007797C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001845E8);

INCLUDE_ASM("nonmatchings/paf_058100", func_000779BC);

INCLUDE_ASM("nonmatchings/paf_058100", func_000779E0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00077A30);
#endif

#if FW_VERSION == 260
void func_00077A30(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg1 > 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x654);
        if (temp_v0 >= arg1) {
            M2C_FIELD(arg0, s32 *, 0x654) = (s32) (temp_v0 - arg1);
            M2C_FIELD(arg0, s32 *, 0x650) = (s32) (M2C_FIELD(arg0, s32 *, 0x650) + arg1);
        } else {
            func_000779E0((s32) arg0);
        }
    }
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00077A7C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00077A84);

INCLUDE_ASM("nonmatchings/paf_058100", func_00077B64);

INCLUDE_ASM("nonmatchings/paf_058100", func_00077C78);

INCLUDE_ASM("nonmatchings/paf_058100", func_00077EB4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0007804C);
#endif

#if FW_VERSION == 260
s32 func_0007804C(void) {
    return 1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00078054);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007805C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00078280);

INCLUDE_ASM("nonmatchings/paf_058100", func_000782FC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00078C68);

INCLUDE_ASM("nonmatchings/paf_058100", func_00078D0C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00078DC0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00079878);

INCLUDE_ASM("nonmatchings/paf_058100", func_00079CF8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00079D00);
#endif

#if FW_VERSION == 260
u32 func_00079D00(void *arg0) {
    u32 temp_v0;
    u32 var_v1;

    var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x194), u32 (**)(), 0x6A0)();
    if (var_v1 < (u32) M2C_FIELD(arg0, u32 *, 0x34)) {
        temp_v0 = M2C_FIELD(arg0, u16 *, 0xC2) * 0x10;
        var_v1 = ((u32) ((var_v1 + temp_v0) - 1) / temp_v0) * temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00079D6C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00079E08);

INCLUDE_ASM("nonmatchings/paf_058100", func_00079F3C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007A248);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007A2B4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007A2E8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007A590);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007A628);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007A7BC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007A80C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007AA48);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007B180);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007B3BC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007B534);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007B730);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007B934);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184A00);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184A04);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184A08);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184A0C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007BE04);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0007BED4);
#endif

#if FW_VERSION == 260
u32 func_0007BED4(u32 arg0, s32 arg1) {
    u32 var_v1;

    var_v1 = arg0 * arg1;
    if (arg0 != 0) {
        var_v1 = (((var_v1 / arg0) ^ arg1) != 0) ? 0U : var_v1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007BF00);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007BAD4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00184A88);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184A90);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184A98);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_0007C03C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007C070);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184B28);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184B3C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184B64);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184B98);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_058100", D_0018AFB4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0018AFCC);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_058100", D_001894B4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001894CC);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_058100", D_00185454);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0018546C);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_058100", D_00184BC0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184BD8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007C358);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007C48C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007C4C0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007D2F0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007D5A8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007D824);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007DA3C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0007DB00);
#endif

#if FW_VERSION == 260
void func_0007DB00(s32 arg0) {
    void *temp_a0;

    temp_a0 = arg0 + 0x20;
    M2C_FIELD(temp_a0, s16 *, 0x2C) = 8;
    M2C_FIELD(temp_a0, s16 *, 0x2E) = 1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007DB18);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007DC50);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007D8F0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00184CC0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184CC4);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_0007DE58);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007DF24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007DB10);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_0007E078);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007E140);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007E24C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007E320);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007E4BC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007E604);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007E2A4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007E714);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007E790);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007E820);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007E9E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007E874);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007EA58);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007EAC8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007EB78);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007EC24);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007ECB8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007ECC0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00184DF4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184E00);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184E14);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184E24);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_0007EB00);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007EB70);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007EC20);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007ECCC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007ED60);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007ED68);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007EE18);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007F0FC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0007F168);
#endif

#if FW_VERSION == 260
s32 func_0007F168(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_0007F0FC;
    M2C_FIELD(arg0, M2C_UNK **, 0x170) = &func_0007F0FC;
    return 1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007F180);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007F154);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00184EA0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184EA8);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_0007F1FC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007F230);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184EE4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184EF8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007F350);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007F3D0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007F404);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007F4B4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007F578);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007F5E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007F630);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00184F80);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184F84);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_058100", func_0007F6D8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0007F770);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007F89C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00184FC8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001850C8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001851C8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001851DC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001851E8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001851FC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00185208);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0018521C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001852C0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001852D4);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007F9C0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007F9DC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007F9F8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007FA50);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007FCC8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007FD58);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007FD7C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007FE14);

INCLUDE_ASM("nonmatchings/paf_058100", func_0007FEDC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00080010);

INCLUDE_ASM("nonmatchings/paf_058100", func_00080158);

INCLUDE_ASM("nonmatchings/paf_058100", func_00080268);

INCLUDE_ASM("nonmatchings/paf_058100", func_000802C8);

INCLUDE_ASM("nonmatchings/paf_058100", func_000803F0);

INCLUDE_ASM("nonmatchings/paf_058100", func_000804D4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0008054C);
#endif

#if FW_VERSION == 260
void func_0008054C(s32 arg0, s32 arg1) {
    func_000804D4(arg0, 0xFF);
    func_000804D4(arg0, arg1);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_0008058C);
#endif

#if FW_VERSION == 260
void func_0008058C(s32 arg0, s32 arg1) {
    func_000804D4(arg0, (arg1 >> 8) & 0xFF);
    func_000804D4(arg0, arg1 & 0xFF);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_000805D4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00080718);

INCLUDE_ASM("nonmatchings/paf_058100", func_0008084C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00080854);
#endif

#if FW_VERSION == 260
void func_00080854(s32 arg0) {
    func_0008054C(arg0, 0xDD);
    func_0008058C(arg0, 4);
    func_0008058C(arg0, M2C_FIELD(arg0, s32 *, 0xC0));
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00080894);

INCLUDE_ASM("nonmatchings/paf_058100", func_000809AC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00080AB8);
#endif

#if FW_VERSION == 260
void func_00080AB8(s32 arg0) {
    func_0008054C(arg0, 0xE0);
    func_0008058C(arg0, 0x10);
    func_000804D4(arg0, 0x4A);
    func_000804D4(arg0, 0x46);
    func_000804D4(arg0, 0x49);
    func_000804D4(arg0, 0x46);
    func_000804D4(arg0, 0);
    func_000804D4(arg0, (s32) M2C_FIELD(arg0, u8 *, 0xCC));
    func_000804D4(arg0, (s32) M2C_FIELD(arg0, u8 *, 0xCD));
    func_000804D4(arg0, (s32) M2C_FIELD(arg0, u8 *, 0xCE));
    func_0008058C(arg0, (s32) M2C_FIELD(arg0, u16 *, 0xD0));
    func_0008058C(arg0, (s32) M2C_FIELD(arg0, u16 *, 0xD2));
    func_000804D4(arg0, 0);
    func_000804D4(arg0, 0);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00080B7C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00080C40);

INCLUDE_ASM("nonmatchings/paf_058100", func_00080CBC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00080CD8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00080D48);

INCLUDE_ASM("nonmatchings/paf_058100", func_00080E90);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00080F94);
#endif

#if FW_VERSION == 260
void func_00080F94(s32 arg0) {
    func_0008054C(arg0, 0xD9);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00080FB0);

INCLUDE_ASM("nonmatchings/paf_058100", func_000810A0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00081130);

INCLUDE_ASM("nonmatchings/paf_058100", func_000813C4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00081954);

INCLUDE_ASM("nonmatchings/paf_058100", func_00081A7C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00081C94);

INCLUDE_ASM("nonmatchings/paf_058100", func_00081EDC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00081F20);

INCLUDE_ASM("nonmatchings/paf_058100", func_00081FB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_0004EAC0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00044DD8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0004EB7C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0004EBA8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_000821BC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00082314);
#endif

#if FW_VERSION == 260
void func_00082314(s32 arg0, s32 arg1, s32 arg2) {
    func_000821BC(arg0, 0, (s32) &D_00184FC8, arg1, arg2);
    func_000821BC(arg0, 1, (s32) &D_001850C8, arg1, arg2);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00082380);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000823C4);
#endif

#if FW_VERSION == 260
void func_000823C4(s32 arg0, s32 arg1, s32 arg2) {
    func_00082314(arg0, func_00082380(arg1), arg2);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00082408);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_000824E4);
#endif

#if FW_VERSION == 260
void func_000824E4(s32 arg0) {
    func_00082408(arg0, arg0 + 0x50, (s32) &D_001851C8, (s32) &D_001851DC);
    func_00082408(arg0, arg0 + 0x60, (s32) &D_00185208, (s32) &D_0018521C);
    func_00082408(arg0, arg0 + 0x54, (s32) &D_001851E8, (s32) &D_001851FC);
    func_00082408(arg0, arg0 + 0x64, (s32) &D_001852C0, (s32) &D_001852D4);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00082570);

INCLUDE_ASM("nonmatchings/paf_058100", func_00082690);

INCLUDE_ASM("nonmatchings/paf_058100", func_00082730);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00082A84);
#endif

#if FW_VERSION == 260
s32 func_00082A84(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 0) = 1;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x20) = arg5;
    return arg0 + 0x24;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00082AA8);
#endif

#if FW_VERSION == 260
void *func_00082AA8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_v1 = 0;
    if (arg1 > 0) {
        do {
            M2C_FIELD(var_a0, s32 *, 4) = var_v1;
            var_v1 += 1;
            M2C_FIELD(var_a0, s32 *, 0) = 1;
            M2C_FIELD(var_a0, s32 *, 0x14) = arg2;
            M2C_FIELD(var_a0, s32 *, 0x18) = arg3;
            M2C_FIELD(var_a0, s32 *, 0x1C) = arg4;
            M2C_FIELD(var_a0, s32 *, 0x20) = arg5;
            var_a0 += 0x24;
        } while (var_v1 < arg1);
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00082AE4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00082E10);

INCLUDE_ASM("nonmatchings/paf_058100", func_00082FFC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_058100", func_00083074);
#endif

#if FW_VERSION == 260
void func_00083074(s32 arg0) {
    func_00083E78(arg0, 0x7F, 7);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_000830A8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00083114);

INCLUDE_ASM("nonmatchings/paf_058100", func_0008321C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00083308);

INCLUDE_ASM("nonmatchings/paf_058100", func_00083518);

INCLUDE_ASM("nonmatchings/paf_058100", func_000837F8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00083904);

INCLUDE_ASM("nonmatchings/paf_058100", func_00083C8C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00083CF0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00083E10);

INCLUDE_ASM("nonmatchings/paf_058100", func_00083E78);

INCLUDE_ASM("nonmatchings/paf_058100", func_00083FBC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00084028);

INCLUDE_ASM("nonmatchings/paf_058100", func_000840AC);

INCLUDE_ASM("nonmatchings/paf_058100", func_000842D8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00084560);

INCLUDE_ASM("nonmatchings/paf_058100", func_00084700);

INCLUDE_ASM("nonmatchings/paf_058100", func_0008482C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00084834);

INCLUDE_ASM("nonmatchings/paf_058100", func_00084880);

INCLUDE_ASM("nonmatchings/paf_058100", func_00084950);

INCLUDE_ASM("nonmatchings/paf_058100", func_00084AC4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00084B30);

INCLUDE_ASM("nonmatchings/paf_058100", func_00084C04);

INCLUDE_ASM("nonmatchings/paf_058100", func_00084CF0);

INCLUDE_ASM("nonmatchings/paf_058100", func_00084FD4);

INCLUDE_ASM("nonmatchings/paf_058100", func_000851AC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00043D70);

INCLUDE_ASM("nonmatchings/paf_058100", func_00043E98);

INCLUDE_ASM("nonmatchings/paf_058100", func_00043EB4);
#endif

#if FW_VERSION < 200 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_058100", D_00171A5C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171A9C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_058100", func_00043ED0);

INCLUDE_ASM("nonmatchings/paf_058100", func_000440E0);
#else
INCLUDE_ASM("nonmatchings/paf_058100", func_00058BB8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00058D4C);

INCLUDE_ASM("nonmatchings/paf_058100", setByteArray);

void _TIFFsetByteArray(s32 arg0, s32 arg1, s32 arg2) {
    setByteArray(arg0, arg1, arg2, 1);
}

void _TIFFsetString(s32 arg0, M2C_UNK arg1) {
    setByteArray(arg0, arg1, scePaf_CA79D58B(arg1) + 1, 1);
}

void _TIFFsetNString(s32 arg0, s32 arg1, s32 arg2) {
    setByteArray(arg0, arg1, arg2, 1);
}

void _TIFFsetShortArray(s32 arg0, s32 arg1, s32 arg2) {
    setByteArray(arg0, arg1, arg2, 2);
}

void _TIFFsetLongArray(s32 arg0, s32 arg1, s32 arg2) {
    setByteArray(arg0, arg1, arg2, 4);
}

void _TIFFsetFloatArray(s32 arg0, s32 arg1, s32 arg2) {
    setByteArray(arg0, arg1, arg2, 4);
}

void _TIFFsetDoubleArray(s32 arg0, s32 arg1, s32 arg2) {
    setByteArray(arg0, arg1, arg2, 8);
}

INCLUDE_ASM("nonmatchings/paf_058100", func_00058F44);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171AA8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00059054);

INCLUDE_ASM("nonmatchings/paf_058100", func_000590E4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171B04);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171B0C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171B10);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171B18);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171B48);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171B54);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171B74);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171BAC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171BC8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171BE4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171C08);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171C28);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171C50);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171C7C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005A680);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005A750);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005A7C8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005A844);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B91C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005B994);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005BA44);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005BC44);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005BC84);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005BD98);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C010);

void func_0005C0BC(struct Unk_func_0005C0BC_0 *arg0, s32 arg1) {
    arg0->unk14 = arg1;
    arg0->unk1C = 0;
    func_0005CB58();
}

s32 func_0005C0E0(struct Unk_func_0005C0E0_0 *arg0) {
    return arg0->unk10;
}

s32 func_0005C0E8(struct Unk_func_0005C0E8_0 *arg0) {
    return arg0->unk14 == 0;
}

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C0F4);

M2C_UNK *_TIFFGetFieldInfo(s32 *arg0) {
    *arg0 = 0xA6;
    return &D_00172674;
}

M2C_UNK *_TIFFGetExifFieldInfo(s32 *arg0) {
    *arg0 = 0x39;
    return &D_00173720;
}

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171E1C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171E28);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171E38);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171E44);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171E50);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171E60);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171E6C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171E88);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171E98);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171EA4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171EB0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171EBC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171ECC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171EE0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171EE8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171EF0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171F00);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171F0C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171F1C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171F2C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171F3C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171F4C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171F5C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171F68);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171F74);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171F88);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171F94);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171FA0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171FAC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171FB8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171FC8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171FDC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00171FF0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172000);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017200C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172020);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172034);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172040);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017204C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172054);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172064);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172070);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172088);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172094);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001720A4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001720B0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001720BC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001720C8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001720D8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001720E0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001720E8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001720F4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172104);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172110);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172120);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172130);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172140);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172150);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172160);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017216C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017217C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017218C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001721A0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001721B4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001721C8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001721DC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001721E8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001721F4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172200);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017220C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172218);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172228);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172238);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172248);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017225C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172274);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172288);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017229C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001722A8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001722B8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001722C4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001722D4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001722E0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001722F0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001722F8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172314);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172320);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172334);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172348);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172360);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172370);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017237C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172390);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001723A4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001723B0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001723C4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001723D8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001723E4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001723F4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172408);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017241C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017242C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017243C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017244C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172460);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172474);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172488);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017249C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001724AC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001724BC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001724CC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001724E0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001724F0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172504);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172514);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172528);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017253C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172548);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017255C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172570);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017257C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017258C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017259C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001725B4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001725CC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001725DC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001725F0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172604);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172610);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017261C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172630);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172648);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017265C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00172674);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017336C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017337C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173384);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173394);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001733A8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001733B8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001733D8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001733E4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001733F8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017340C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173424);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017343C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173450);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173460);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173470);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173484);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173498);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001734A8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001734B8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001734C4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001734CC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001734D8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001734E4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001734F0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001734FC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173508);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017351C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173530);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173540);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173550);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173560);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173574);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173580);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017359C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001735B4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001735CC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001735E8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001735F8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173608);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173618);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173624);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173630);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017363C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017364C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017365C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017366C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173680);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173698);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001736AC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001736B8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001736C4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001736D0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001736DC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001736F8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173710);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173720);

INCLUDE_ASM("nonmatchings/paf_058100", _TIFFSetupFieldInfo);

INCLUDE_ASM("nonmatchings/paf_058100", tagCompare);

void func_0005C508(struct Unk_vt_func_0005C508_arg0 **arg0, struct Unk_vt_func_0005C508_arg1 **arg1) {
    scePaf_66FE90D7((*arg0)->unk10, (*arg1)->unk10);
}

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C530);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C5EC);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C638);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C66C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C674);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C67C);

INCLUDE_ASM("nonmatchings/paf_058100", _TIFFSampleToTagType);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFindFieldInfo);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFindFieldInfoByName);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005C940);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005CA98);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005CB58);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173C94);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173CBC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173CD4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173CE0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173D00);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173D24);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173D48);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173D70);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173D78);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173DB8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173DF8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173E48);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173E58);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173E64);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173E70);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173E80);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173E88);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173E90);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173EB4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173EE8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173F18);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173F5C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173F7C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173FA4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00173FC8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005DCFC);

INCLUDE_ASM("nonmatchings/paf_058100", EstimateStripByteCounts);

INCLUDE_ASM("nonmatchings/paf_058100", MissingRequired);

INCLUDE_ASM("nonmatchings/paf_058100", CheckDirCount);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchData);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchString);

INCLUDE_ASM("nonmatchings/paf_058100", cvtRational);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001741DC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174218);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174234);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174260);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174294);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001742A8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001742DC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174310);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017434C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174368);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174378);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017438C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001743AC);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001743D0);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchRational);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchFloat);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchByteArray);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchShortArray);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchShortPair);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchLongArray);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchRationalArray);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchFloatArray);

s32 TIFFFetchDoubleArray(void) {
    return TIFFFetchData() != 0;
}

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchAnyArray);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchNormalTag);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchPerSampleShorts);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchPerSampleLongs);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchPerSampleAnys);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchStripThing);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFetchRefBlackWhite);

INCLUDE_ASM("nonmatchings/paf_058100", ChopUpSingleUncompressedStrip);

s32 func_0005FEFC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A5068;
    D_001A5068 = arg0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/paf_058100", func_0005FF0C);

INCLUDE_ASM("nonmatchings/paf_058100", func_0005FFE0);

INCLUDE_ASM("nonmatchings/paf_058100", func_000600C4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00060130);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001743F8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174414);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174448);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174460);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174488);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001744D8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001744E8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174514);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174524);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174554);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174568);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174594);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001745C4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001745D0);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001745F4);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174628);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFRGBAImageOK);

void TIFFRGBAImageEnd(struct Unk_TIFFRGBAImageEnd_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;

    temp_a0 = arg0->unk38;
    if (temp_a0 != 0) {
        func_0006A618(temp_a0);
        arg0->unk38 = 0;
    }
    temp_a0_2 = arg0->unk3C;
    if (temp_a0_2 != 0) {
        func_0006A618(temp_a0_2);
        arg0->unk3C = 0;
    }
    temp_a0_3 = arg0->unk40;
    if (temp_a0_3 != 0) {
        func_0006A618(temp_a0_3);
        arg0->unk40 = 0;
    }
    temp_a0_4 = arg0->unk44;
    if (temp_a0_4 != 0) {
        func_0006A618(temp_a0_4);
        arg0->unk44 = 0;
    }
    temp_a0_5 = arg0->unk48;
    if (temp_a0_5 != 0) {
        func_0006A618(temp_a0_5);
        arg0->unk48 = 0;
    }
    temp_a0_6 = arg0->unk24;
    if (temp_a0_6 == 0) {

    } else {
        func_0006A618(temp_a0_6);
        func_0006A618(arg0->unk28);
        func_0006A618(arg0->unk2C);
    }
}

INCLUDE_ASM("nonmatchings/paf_058100", isCCITTCompression);

INCLUDE_ASM("nonmatchings/paf_058100", func_000605C8);

INCLUDE_ASM("nonmatchings/paf_058100", func_00060BFC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00060C88);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001747A4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00060DB4);

INCLUDE_ASM("nonmatchings/paf_058100", func_00060F3C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00061298);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00174BC8);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006174C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00061A28);

INCLUDE_ASM("nonmatchings/paf_058100", put8bitcmaptile);

INCLUDE_ASM("nonmatchings/paf_058100", put4bitcmaptile);

INCLUDE_ASM("nonmatchings/paf_058100", put2bitcmaptile);

INCLUDE_ASM("nonmatchings/paf_058100", put1bitcmaptile);

INCLUDE_ASM("nonmatchings/paf_058100", putgreytile);

INCLUDE_ASM("nonmatchings/paf_058100", put16bitbwtile);

INCLUDE_ASM("nonmatchings/paf_058100", put1bitbwtile);

INCLUDE_ASM("nonmatchings/paf_058100", put2bitbwtile);

INCLUDE_ASM("nonmatchings/paf_058100", put4bitbwtile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBcontig8bittile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBcontig8bitMaptile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBAAcontig8bittile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBUAcontig8bittile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBcontig16bittile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBAAcontig16bittile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBUAcontig16bittile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBcontig8bitCMYKtile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBcontig8bitCMYKMaptile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBseparate8bittile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBseparate8bitMaptile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBAAseparate8bittile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBUAseparate8bittile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBseparate16bittile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBAAseparate16bittile);

INCLUDE_ASM("nonmatchings/paf_058100", putRGBUAseparate16bittile);

INCLUDE_ASM("nonmatchings/paf_058100", putcontig8bitCIELab);

INCLUDE_ASM("nonmatchings/paf_058100", putcontig8bitYCbCr44tile);

INCLUDE_ASM("nonmatchings/paf_058100", putcontig8bitYCbCr42tile);

INCLUDE_ASM("nonmatchings/paf_058100", putcontig8bitYCbCr41tile);

INCLUDE_ASM("nonmatchings/paf_058100", putcontig8bitYCbCr22tile);

INCLUDE_ASM("nonmatchings/paf_058100", putcontig8bitYCbCr21tile);

INCLUDE_ASM("nonmatchings/paf_058100", putcontig8bitYCbCr11tile);

INCLUDE_ASM("nonmatchings/paf_058100", initYCbCrConversion);

INCLUDE_ASM("nonmatchings/paf_058100", initCIELabConversion);

INCLUDE_ASM("nonmatchings/paf_058100", makebwmap);

INCLUDE_ASM("nonmatchings/paf_058100", setupMap);

INCLUDE_ASM("nonmatchings/paf_058100", checkcmap);

INCLUDE_ASM("nonmatchings/paf_058100", cvtcmap);

INCLUDE_ASM("nonmatchings/paf_058100", makecmap);

INCLUDE_ASM("nonmatchings/paf_058100", buildMap);

INCLUDE_ASM("nonmatchings/paf_058100", pickTileContigCase);

INCLUDE_ASM("nonmatchings/paf_058100", pickTileSeparateCase);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFReadRGBAStrip);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFReadRGBATile);

s32 func_00067A5C(void) {
    return 0;
}

void func_00067A64(void) {
}

void func_00067A6C(struct Unk_func_00067A6C_0 *arg0, s32 arg1) {
    arg0->unkE8 = &D_00175084;
    if (arg1 != 0x4D4D) {
        arg0->unkE4 = &D_001750EC;
        return;
    }
    arg0->unkE4 = &D_001750B8;
    arg0->unkC = (s32) (arg0->unkC | 0x80);
}

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017507C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00175080);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00175084);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001750B8);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001750EC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00067AAC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00067B38);

s32 func_000680B4(s32 *arg0) {
    return *arg0;
}

s32 func_000680BC(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    *arg0 = arg1;
    return temp_v0;
}

s32 func_000680C8(struct Unk_func_000680C8_0 *arg0) {
    return arg0->unk4;
}

s32 func_000680D0(struct Unk_func_000680D0_0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk4;
    arg0->unk4 = arg1;
    return temp_v0;
}

s32 func_000680DC(struct Unk_func_000680DC_0 *arg0) {
    return arg0->unk188;
}

s32 func_000680E4(struct Unk_func_000680E4_0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk188;
    arg0->unk188 = arg1;
    return temp_v0;
}

s32 func_000680F0(struct Unk_func_000680F0_0 *arg0) {
    return arg0->unk8;
}

s32 func_000680F8(struct Unk_func_000680F8_0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk8;
    arg0->unk8 = arg1;
    return temp_v0;
}

s32 func_00068104(struct Unk_func_00068104_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unkC, 0xA, 1);
}

s32 func_00068110(struct Unk_func_00068110_0 *arg0) {
    return arg0->unkEC;
}

u16 func_00068118(struct Unk_func_00068118_0 *arg0) {
    return arg0->unkF0;
}

s32 func_00068120(struct Unk_func_00068120_0 *arg0) {
    return arg0->unkF4;
}

s32 func_00068128(struct Unk_func_00068128_0 *arg0) {
    return arg0->unk10C;
}

s32 func_00068130(struct Unk_func_00068130_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unkC, 7, 1);
}

s32 func_0006813C(struct Unk_func_0006813C_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unkC, 0xE, 1);
}

s32 func_00068148(struct Unk_func_00068148_0 *arg0) {
    return arg0->unkC & 1;
}

s32 func_00068154(struct Unk_func_00068154_0 *arg0) {
    return arg0->unkDC == 0x4D4D;
}

s32 func_00068164(struct Unk_func_00068164_0 *arg0) {
    return arg0->unk18C;
}

s32 func_0006816C(struct Unk_func_0006816C_0 *arg0) {
    return arg0->unk190;
}

s32 func_00068174(struct Unk_func_00068174_0 *arg0) {
    return arg0->unk194;
}

s32 func_0006817C(struct Unk_func_0006817C_0 *arg0) {
    return arg0->unk198;
}

s32 func_00068184(struct Unk_func_00068184_0 *arg0) {
    return arg0->unk19C;
}

s32 func_0006818C(struct Unk_func_0006818C_0 *arg0) {
    return arg0->unk180;
}

s32 func_00068194(struct Unk_func_00068194_0 *arg0) {
    return arg0->unk184;
}

INCLUDE_ASM("nonmatchings/paf_058100", func_0006819C);

INCLUDE_ASM("nonmatchings/paf_058100", func_000682D0);

INCLUDE_ASM("nonmatchings/paf_058100", func_0006839C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00068514);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017547C);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFFillStrip);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFReadTile);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFReadEncodedTile);

INCLUDE_ASM("nonmatchings/paf_058100", func_00068B54);

INCLUDE_ASM("nonmatchings/paf_058100", func_00068D9C);

INCLUDE_ASM("nonmatchings/paf_058100", func_00068F88);

INCLUDE_ASM("nonmatchings/paf_058100", func_00069068);

INCLUDE_ASM("nonmatchings/paf_058100", func_00069134);

INCLUDE_ASM("nonmatchings/paf_058100", func_00069244);

void func_000692C8(void) {
}

INCLUDE_ASM("nonmatchings/paf_058100", func_000692D0);

INCLUDE_ASM("nonmatchings/paf_058100", func_000692FC);

INCLUDE_ASM("nonmatchings/paf_058100", func_00069334);

INCLUDE_ASM("nonmatchings/paf_058100", func_00069364);

INCLUDE_ASM("nonmatchings/paf_058100", func_00069394);

u32 func_000693AC(struct Unk_func_000693AC_0 *arg0, s32 arg1, u32 arg2, s32 arg3) {
    u32 var_a4;

    var_a4 = arg1 * arg2;
    if (arg2 != 0) {
        if ((var_a4 / arg2) != arg1) {
            func_0005FFE0(arg0->unk188, arg0->unk0, (s32) "Integer overflow in %s", arg3);
            var_a4 = 0;
        }
    }
    return var_a4;
}

INCLUDE_ASM("nonmatchings/paf_058100", func_00069404);

INCLUDE_ASM("nonmatchings/paf_058100", func_00069488);

INCLUDE_RODATA("nonmatchings/paf_058100", D_00175798);

INCLUDE_RODATA("nonmatchings/paf_058100", D_001757A8);

INCLUDE_ASM("nonmatchings/paf_058100", func_000694F8);

void TIFFStripSize(s32 arg0) {
    u32 temp_a1;
    u32 temp_a2;
    struct Unk_TIFFStripSize_temp_v0 *temp_v0;

    temp_v0 = arg0 + 0x20;
    temp_a2 = temp_v0->unk14;
    temp_a1 = temp_v0->unk3C;
    func_000694F8(arg0, (s32) ((temp_a2 < temp_a1) ? temp_a2 : temp_a1));
}

void TIFFDefaultStripSize(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(), 0x154)();
}

u32 _TIFFDefaultStripSize(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;
    u32 temp_lo;

    var_a1 = arg1;
    if (var_a1 <= 0) {
        temp_v0 = func_000697C4(arg0);
        var_a1 = 0x2000;
        if (temp_v0 != 0) {
            temp_lo = 0x2000U / (u32) temp_v0;
            var_a1 = (s32) ((temp_lo != 0) ? temp_lo : 1U);
        }
    }
    return (u32) var_a1;
}

INCLUDE_ASM("nonmatchings/paf_058100", func_000697C4);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFSwabShort);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFSwabLong);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFSwabArrayOfShort);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFSwabArrayOfTriples);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFSwabArrayOfLong);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFSwabDouble);

INCLUDE_ASM("nonmatchings/paf_058100", TIFFSwabArrayOfDouble);

M2C_UNK *TIFFGetBitRevTable(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = &D_0017581C;
    if (arg0 == 0) {
        var_v0 = &D_0017591C;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_058100", TIFFReverseBits);

INCLUDE_ASM("nonmatchings/paf_058100", summarize);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017581C);

INCLUDE_RODATA("nonmatchings/paf_058100", D_0017591C);
#endif
