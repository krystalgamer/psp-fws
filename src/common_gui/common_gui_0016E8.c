#include "common.h"
#include "common_gui_decls.h"

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_70490BCC);
#endif

INCLUDE_ASM("nonmatchings/common_gui_0016E8", func_0000173C);

void func_000017BC(void) {
}

void func_000017C4(void) {
}

void func_000017CC(void) {
}

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_614630E6);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_7B52F0E6);
#endif

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00003438);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_F4D1E387);
#else
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00006080);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_0000608C);
#endif

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00003454);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000060C8);

INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_607D5C82);

INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_891E0954);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_0000614C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00007E94);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00007F24);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00007FB4);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00008044);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00003468);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00003528);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000035E8);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000036A8);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00003768);
#endif

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00003798);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_0000379C);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000037A0);

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00003900_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00003900_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00003900_v300);
#endif

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000037A4);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000037A8);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_0000390C);
#endif

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000037AC);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_607D5C82);

INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_891E0954);
#else
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000061A0);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000061A4);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000061A8);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000061AC);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000061B0);

INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000061B4);
#endif

INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_C5B53362);

INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_A1C3DDD6);

INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_ADB52779);

INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_7C7B935B);

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_8EB783F5);
#else
void sceVshCommonGui_8EB783F5(void) {
    if (D_00003B00 == 0) {

    } else {
        scePaf_44EB8C62(D_00003B00);
    }
    if (D_00003B04 == 0) {

    } else {
        scePaf_44EB8C62(D_00003B04);
    }
}
#endif

s32 sceVshCommonGui_F7A03543(void) {
    return D_00003934 != 0;
}

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_25D6E91D);
#endif

#if FW_VERSION >= 282
M2C_UNK *sceVshCommonGui_25D6E91D(void) {
    return &D_00003920;
}
#endif

INCLUDE_ASM("nonmatchings/common_gui_0016E8", func_0000295C);

INCLUDE_ASM("nonmatchings/common_gui_0016E8", func_00002988);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/common_gui_0016E8", sceVshCommonGui_CD76A885);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00008148);
#endif

INCLUDE_ASM("nonmatchings/common_gui_0016E8", func_00002C7C);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_00008148);
#endif

void func_00002CE8(void) {
    func_00002C7C(1, 0xFFFF);
}

#if FW_VERSION >= 152 && FW_VERSION < 282
void func_000071EC(void) {
    func_00002C7C(0, 0xFFFF);
}

void func_0000720C(M2C_UNK **arg0) {
    *arg0 = &D_00008148;
}

void func_0000721C(M2C_UNK **arg0) {
    *arg0 = &D_00008148;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION >= 282
void func_00002D08(void) {
    func_00002C7C(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/common_gui_0016E8", func_00002D28);
#endif

#if FW_VERSION == 282
void func_00002D28(M2C_UNK **arg0) {
    *arg0 = &D_000037F0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/common_gui_0016E8", func_00002E9C);

INCLUDE_ASM("nonmatchings/common_gui_0016E8", func_00002EDC);

INCLUDE_ASM("nonmatchings/common_gui_0016E8", func_00002F50);
#endif

#if FW_VERSION >= 282
void func_00002D38(M2C_UNK **arg0) {
    *arg0 = &D_000037F0;
    scePaf_4E67BB08();
}
#endif

INCLUDE_ASM("nonmatchings/common_gui_0016E8", func_00002D60);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/common_gui_0016E8", D_000037F0);
#endif
