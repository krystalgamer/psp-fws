#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 100
void func_00013558(s32 arg0) {
    func_000125EC(arg0 - 0x38);
}

void func_00013574(s32 arg0, s32 arg1) {
    func_000125F4(arg0 - 0x38, arg1);
}

void func_00013590(s32 arg0) {
    func_00016E78(arg0 - 0x38);
}

void func_000135AC(s32 arg0) {
    func_00016F20(arg0 - 0x38);
}

void func_000135C8(s32 arg0, s32 arg1) {
    func_000179EC(arg0 - 0x38, arg1);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00017E5C);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00014CB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00014D28);

void func_00014D9C(s32 arg0) {
    func_00010264(arg0 - 0x3C);
}

void func_00014DB8(s32 arg0) {
    func_000102C0(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00014DD4);

void func_00014DF4(s32 arg0, s32 arg1) {
    func_00010380(arg0 - 0x3C, arg1);
}

void func_00014E10(s32 arg0, s32 arg1) {
    func_000103E0(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00014E2C);

void func_00014E4C(s32 arg0, s32 arg1, s32 arg2) {
    func_000104A4(arg0 - 0x3C, arg1, arg2);
}

void func_00014E68(s32 arg0, s32 arg1, s32 arg2) {
    func_00010518(arg0 - 0x3C, arg1, arg2);
}

void func_00014E84(s32 arg0) {
    func_0001058C(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00014EA0);

void func_00014F0C(s32 arg0, s32 arg1, s32 arg2) {
    func_00010694(arg0 - 0x3C, arg1, arg2);
}

void func_00014F28(s32 arg0, s32 arg1, s32 arg2) {
    func_00010708(arg0 - 0x3C, arg1, arg2);
}

void func_00014F44(s32 arg0, s32 arg1, s32 arg2) {
    func_0001077C(arg0 - 0x3C, arg1, arg2);
}

void func_00014F60(s32 arg0, s32 arg1) {
    func_000107F0(arg0 - 0x3C, arg1);
}

void func_00014F7C(s32 arg0, s32 arg1) {
    func_00012274(arg0 - 0x3C, arg1);
}

void func_00014F98(s32 arg0, s32 arg1) {
    func_00012380(arg0 - 0x3C, arg1);
}

void func_00014FB4(s32 arg0, s32 arg1) {
    func_0001091C(arg0 - 0x3C, arg1);
}

void func_00014FD0(s32 arg0, s32 arg1) {
    func_00010980(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00014FEC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00015060);

void func_000150D4(s32 arg0) {
    func_00012F14(arg0 - 0x3C);
}

void func_000150F0(s32 arg0) {
    func_000130A0(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_0001510C);

void func_0001512C(s32 arg0, s32 arg1) {
    func_000132A4(arg0 - 0x3C, arg1);
}

void func_00015148(s32 arg0, s32 arg1) {
    func_000133C8(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00015164);

void func_00015184(s32 arg0, s32 arg1, s32 arg2) {
    func_00013598(arg0 - 0x3C, arg1, arg2);
}

void func_000151A0(s32 arg0) {
    func_00015CE8(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000151BC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000151D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00015244);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00015260);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_0001527C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00015298);

void func_000152B4(s32 arg0, s32 arg1) {
    func_00011C20(arg0 - 0x3C, arg1);
}

void func_000152D0(s32 arg0, s32 arg1) {
    func_00011C68(arg0 - 0x3C, arg1);
}

void func_000152EC(s32 arg0, s32 arg1) {
    func_00016218(arg0 - 0x3C, arg1);
}

void func_00015308(s32 arg0, s32 arg1) {
    func_00011D88(arg0 - 0x3C, arg1);
}

void func_00015324(s32 arg0) {
    func_00011E2C(arg0 - 0x3C);
}

void func_00015340(s32 arg0) {
    func_00011E4C(arg0 - 0x3C);
}

void func_0001535C(s32 arg0) {
    func_0001636C(arg0 - 0x3C);
}

void func_00015378(s32 arg0, s32 arg1) {
    func_00011EA0(arg0 - 0x3C, arg1);
}

void func_00015394(s32 arg0, s32 arg1) {
    func_00013E04(arg0 - 0x3C, arg1);
}

void func_000153B0(s32 arg0) {
    func_00011EE0(arg0 - 0x3C);
}

void func_000153CC(s32 arg0) {
    func_00011EFC(arg0 - 0x3C);
}

void func_000153E8(s32 arg0) {
    func_00011F1C(arg0 - 0x3C);
}

void func_00015404(s32 arg0) {
    func_00011F3C(arg0 - 0x3C);
}

void func_00015420(s32 arg0, s32 arg1) {
    func_00013EB0(arg0 - 0x3C, arg1);
}

void func_0001543C(s32 arg0) {
    func_00016574(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 152
void func_00015458(s32 arg0, s32 arg1) {
    func_00013F6C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION == 150
void func_00015458(s32 arg0, s32 arg1) {
    func_00013F98_v150(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00015474(s32 arg0, s32 arg1) {
    func_00014094(arg0 - 0x3C, arg1);
}

void func_00015490(s32 arg0, s32 arg1) {
    func_00012134(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000154AC);

void func_000154C8(s32 arg0, s32 *arg1) {
    func_00012184(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000154E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00015500);

void func_0001551C(s32 arg0) {
    func_000167C4(arg0 - 0x3C);
}

void func_00015538(s32 arg0, s32 arg1, s32 arg2) {
    func_00012288(arg0 - 0x3C, arg1, arg2);
}

void func_00015554(s32 arg0) {
    func_00016880(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00015570);

void func_0001558C(s32 arg0) {
    func_000168FC(arg0 - 0x3C);
}

void func_000155A8(s32 arg0) {
    func_000169B8(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000155C4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000155E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00015600);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_0001561C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00015638);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00015654);

void func_00015670(s32 arg0) {
    func_00016D1C(arg0 - 0x3C);
}

void func_0001568C(s32 arg0) {
    func_00016D60(arg0 - 0x3C);
}

void func_000156A8(s32 arg0) {
    func_000125EC(arg0 - 0x3C);
}

void func_000156C4(s32 arg0, s32 arg1) {
    func_000125F4(arg0 - 0x3C, arg1);
}

void func_000156E0(s32 arg0) {
    func_00016E78(arg0 - 0x3C);
}

void func_000156FC(s32 arg0) {
    func_00016F20(arg0 - 0x3C);
}

void func_00015718(s32 arg0, s32 arg1) {
    func_000179EC(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00015734);
#endif

#if FW_VERSION < 152
void func_00013600(s32 **arg0) {
    *arg0 = &D_00063588;
}
#endif

#if FW_VERSION == 152
void func_00013600(M2C_UNK **arg0) {
    *arg0 = &D_00063588;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00017E78);

void func_00017E94(s32 arg0) {
    func_00015F00(arg0 - 0x3C);
}

void func_00017EB0(s32 arg0) {
    func_00015F20(arg0 - 0x3C);
}

void func_00017ECC(s32 arg0) {
    func_00016038(arg0 - 0x3C);
}

void func_00017EE8(s32 arg0) {
    func_0001626C(arg0 - 0x3C);
}

void func_00017F04(s32 arg0) {
    func_00016300(arg0 - 0x3C);
}

void func_00017F20(s32 arg0) {
    func_00016320(arg0 - 0x3C);
}

void func_00017F3C(s32 arg0) {
    func_00016340(arg0 - 0x3C);
}

void func_00017F58(s32 arg0) {
    func_0001636C(arg0 - 0x3C);
}

void func_00017F74(s32 arg0) {
    func_000163A0(arg0 - 0x3C);
}

void func_00017F90(s32 arg0, s32 arg1) {
    func_000163D0(arg0 - 0x3C, arg1);
}

void func_00017FAC(s32 arg0) {
    func_00016438(arg0 - 0x3C);
}

void func_00017FC8(s32 arg0) {
    func_00016454(arg0 - 0x3C);
}

void func_00017FE4(s32 arg0) {
    func_00016470(arg0 - 0x3C);
}

void func_00018000(s32 arg0) {
    func_0001648C(arg0 - 0x3C);
}

void func_0001801C(s32 arg0) {
    func_000164A8(arg0 - 0x3C);
}

void func_00018038(s32 arg0) {
    func_00016574(arg0 - 0x3C);
}

void func_00018054(s32 arg0) {
    func_000165A4(arg0 - 0x3C);
}

void func_00018070(s32 arg0) {
    func_000166AC(arg0 - 0x3C);
}

void func_0001808C(s32 arg0) {
    func_00016724(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000180A8);

void func_000180C4(s32 arg0, s32 *arg1) {
    func_00016774(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000180E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000180FC);

void func_00018118(s32 arg0) {
    func_000167C4(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00018134);

void func_00018150(s32 arg0) {
    func_00016880(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_0001816C);

void func_00018188(s32 arg0) {
    func_000168FC(arg0 - 0x3C);
}

void func_000181A4(s32 arg0) {
    func_000169B8(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000181C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000181DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000181FC);

void func_00018218(s32 arg0) {
    func_00016AE4(arg0 - 0x3C);
}

void func_00018234(s32 arg0) {
    func_00016B7C(arg0 - 0x3C);
}

void func_00018250(s32 arg0) {
    func_00016C14(arg0 - 0x3C);
}

void func_0001826C(s32 arg0) {
    func_00016D1C(arg0 - 0x3C);
}

void func_00018288(s32 arg0) {
    func_00016D60(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000182A4);

void func_000182C0(s32 arg0) {
    func_00016DBC(arg0 - 0x3C);
}

void func_000182DC(s32 arg0) {
    func_00016E78(arg0 - 0x3C);
}

void func_000182F8(s32 arg0) {
    func_00016F20(arg0 - 0x3C);
}

void func_00018314(s32 arg0) {
    func_00016F9C(arg0 - 0x3C);
}

void func_00018330(s32 arg0) {
    func_00017264(arg0 - 0x44);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_0001834C);

void func_0001839C(s32 arg0) {
    func_000176B8(arg0 - 0x40);
}

void func_000183B8(s32 arg0) {
    func_000176E0(arg0 - 0x40);
}

void func_000183D4(s32 arg0) {
    func_00017708(arg0 - 0x40);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000183F0);

void func_00018410(s32 arg0) {
    func_00017758(arg0 - 0x40);
}

void func_0001842C(M2C_UNK **arg0) {
    *arg0 = &D_00063588;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_0001843C);
#else
void func_0001843C(s32 **arg0) {
    *arg0 = &D_00063588;
    _ZdlPv(arg0);
}

void func_00013638(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00015790(void) {
    return 0;
}
#endif

#if FW_VERSION < 201
s32 func_00013640(void) {
    return 0;
}

s32 func_00013648(void) {
    return 0;
}

s32 func_00013650(void) {
    return 0;
}

s32 func_00013658(void) {
    return 0;
}

s32 func_00013660(void) {
    return 0;
}

s32 func_00013668(void) {
    return 0;
}

s32 func_00013670(void) {
    return 0;
}

s32 func_00013678(void) {
    return 0;
}

s32 func_00013680(void) {
    return 0;
}

s32 func_00013688(void) {
    return 0;
}

s32 func_00013690(void) {
    return 0;
}

s32 func_00013698(void) {
    return 0;
}

s32 func_000136A0(void) {
    return 0;
}

s32 func_000136A8(void) {
    return 0;
}

s32 func_000136B0(void) {
    return 0;
}

s32 func_000136B8(void) {
    return 0;
}

s32 func_000136C0(void) {
    return 0;
}

s32 func_000136C8(void) {
    return 0;
}

s32 func_000136D0(void) {
    return 0;
}

s32 func_000136D8(void) {
    return 1;
}

s32 func_000136E0(void) {
    return 0;
}

s32 func_000136E8(void) {
    return 1;
}

s32 func_000136F0(void) {
    return 1;
}

s32 func_000136F8(void) {
    return 0;
}
#else
void func_00018464(void) {
}

s32 func_0001846C(void) {
    return 0;
}

s32 func_00018474(void) {
    return 0;
}

s32 func_0001847C(void) {
    return 0;
}

s32 func_00018484(void) {
    return 0;
}

s32 func_0001848C(void) {
    return 0;
}

s32 func_00018494(void) {
    return 0;
}

s32 func_0001849C(void) {
    return 0;
}

s32 func_000184A4(void) {
    return 0;
}

s32 func_000184AC(void) {
    return 0;
}

s32 func_000184B4(void) {
    return 0;
}

s32 func_000184BC(void) {
    return 0;
}

s32 func_000184C4(void) {
    return 0;
}

s32 func_000184CC(void) {
    return 0;
}

s32 func_000184D4(void) {
    return 0;
}

s32 func_000184DC(void) {
    return 0;
}

s32 func_000184E4(void) {
    return 0;
}

s32 func_000184EC(void) {
    return 0;
}

s32 func_000184F4(void) {
    return 0;
}

s32 func_000184FC(void) {
    return 0;
}

s32 func_00018504(void) {
    return 0;
}

s32 func_0001850C(void) {
    return 0;
}

s32 func_00018514(void) {
    return 0;
}

s32 func_0001851C(void) {
    return 0;
}

s32 func_00018524(void) {
    return 0;
}

s32 func_0001852C(void) {
    return 1;
}

s32 func_00018534(void) {
    return 0;
}

s32 func_0001853C(void) {
    return 1;
}

s32 func_00018544(void) {
    return 1;
}

s32 func_0001854C(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00018554);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00018578);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00018590);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000185A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000185B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000185C0);

#if FW_VERSION < 201
s32 func_0001377C(void) {
    return 1;
}

s32 func_00013784(void) {
    return 1;
}
#else
s32 func_000185D8(void) {
    return 1;
}

s32 func_000185E0(void) {
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000185E8);

#if FW_VERSION < 201
s32 func_000137A8(void) {
    return 1;
}

s32 func_000137B0(void) {
    return 1;
}

s32 func_000137B8(void) {
    return 1;
}
#else
s32 func_00018604(void) {
    return 1;
}

s32 func_0001860C(void) {
    return 1;
}

s32 func_00018614(void) {
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_0001861C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00018640);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_00018668);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001598C(void) {
    return 1;
}
#endif

#if FW_VERSION < 201
s32 func_00013834(void) {
    return 0;
}

s32 func_0001383C(void) {
    return 0;
}
#endif

#if FW_VERSION < 152
void func_00013844(s32 **arg0) {
    *arg0 = &D_000636E0;
}
#endif

#if FW_VERSION == 152
void func_00013844(M2C_UNK **arg0) {
    *arg0 = &D_000636E0;
}
#endif

#if FW_VERSION == 201
s32 func_00018690(void) {
    return 1;
}

s32 func_00018698(void) {
    return 1;
}

s32 func_000186A0(void) {
    return 0;
}

s32 func_000186A8(void) {
    return 0;
}

s32 func_000186B0(void) {
    return 0;
}

void func_000186B8(M2C_UNK **arg0) {
    *arg0 = &D_000636E0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00013558", func_000186C8);
#else
void func_000186C8(s32 **arg0) {
    *arg0 = &D_000636E0;
    _ZdlPv(arg0);
}

s32 func_0001387C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00013884(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x994);
}
#endif

#if FW_VERSION == 100
s32 func_00013884(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x95C);
}
#endif

#if FW_VERSION == 201
s32 func_000186F0(void) {
    return 0;
}

s32 func_000186F8(struct Unk_func_000186F8_0 *arg0) {
    return arg0->unk970;
}
#endif
