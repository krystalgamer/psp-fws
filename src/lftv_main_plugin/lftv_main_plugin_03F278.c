/* lang: c++ */
#include "common.h"
#include "lftv_main_plugin_decls.h"

void func_0003F278(void) {
}

#if FW_VERSION < 270 || FW_VERSION >= 282
void func_0003F280(void) {
}
#endif

#if FW_VERSION < 270
void func_00032D58(s8 *arg0) {
    s32 var_s1;
    s8 *var_s0;

    var_s1 = 0xF;
    var_s0 = arg0;
    do {
        var_s1 -= 1;
        func_0003F268(var_s0);
        var_s0 += 0xC;
    } while (var_s1 != -1);
}

void func_00032DA4(s8 *arg0) {
    s32 var_s1;
    s8 *var_s0;

    var_s1 = 0xF;
    var_s0 = arg0;
    do {
        var_s1 -= 1;
        func_0003F268(var_s0);
        var_s0 += 0xC;
    } while (var_s1 != -1);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00032DF0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00032E38);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F288);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F378);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F440);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F4A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F504);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F600);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F684);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F6F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F798);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F86C);

void func_0003F920(void) {
    func_0003F998();
}

void func_0003F93C(void) {
    func_0003F998();
}

void func_0003F958(void) {
    func_0003F998();
}

void func_0003F974(void) {
    func_0003F998();
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F990);
#endif

#if FW_VERSION >= 282
void func_0003F990(void) {
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F998);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003F9F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003FA60);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003FBD4);

void func_0003FC60(s32 arg0) {
    if ((func_0003F9F0() >= 0) && (func_0003FA60(arg0) >= 0)) {
        func_0003FBD4(arg0);
    }
}

void func_0003FCA4(s32 arg0) {
    func_0003F990();
    sysInfoWriteMAC(arg0 + 4);
    sysInfoWriteUniqueId(arg0 + 0xA);
}

void func_0003FCDC(s32 arg0) {
    func_0003F990();
    sysInfoWriteModelInfo(arg0 + 0x1B, 1);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003FD10);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003FEE0);

void func_0003FF90(s32 arg0) {
    func_00042CF0(arg0 + 0xC);
    func_000424B0(arg0 + 4);
}

void func_0003FFC4(s32 arg0) {
    func_00042CF0(arg0 + 0xC);
    func_000424B0(arg0 + 4);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003FFF8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004004C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000400C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00040148);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004018C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00040308);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000403E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00040490);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CA48);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00032E8C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004072C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00040A34);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00040D0C);

void func_00040F04(void) {
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00040F0C);

s32 func_0004109C(struct Unk_func_0004109C_0 *arg0) {
    return (func_000403E0((s32) arg0, (u8 *)arg0 + 0x1CC, arg0->unk1F8, arg0->unk280, (u8 *)arg0 + 0x200) >= 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000410D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00041180);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00041738);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CAB8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00041C4C);

void func_0004205C(void) {
    func_0004228C();
}

void func_00042078(s32 arg0) {
    func_00042150();
    func_0004228C(arg0);
}

void func_000420A4(s32 arg0) {
    func_00042150();
    func_0004228C(arg0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000420D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042150);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000421A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000421FC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004228C);

s32 func_000422E0(struct Unk_func_000422E0_0 *arg0) {
    sceVshLftvMw_89DC95D4((u8 *)arg0 + 0xC, arg0->unk8, (u8 *)arg0 + 0x40C);
    return 0;
}

void func_0004230C(struct Unk_func_0004230C_0 *arg0) {
    s32 temp_v0;

    arg0->unk4 = -1;
    arg0->unk0 = 0;
    temp_v0 = sceKernelCreateEventFlag(&D_0005CB14, 0x200U, 0U, NULL);
    if (temp_v0 < 0) {
        arg0->unk0 = temp_v0;
    }
    arg0->unk4 = temp_v0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004235C);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CB14);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00045EBC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00032F5C);

s32 func_00033010(void *arg0) {
    s32 var_v0;
    void *var_a0;

    var_a0 = arg0;
    var_v0 = 0xF;
    do {
        var_v0 -= 1;
        M2C_FIELD(var_a0, s32 *, 0) = 0;
        M2C_FIELD(var_a0, s32 *, 4) = 0;
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        var_a0 += 0xC;
    } while (var_v0 >= 0);
    return 0;
}

s32 func_00033034(void *arg0) {
    s32 var_v0;
    void *var_a0;

    var_a0 = arg0;
    var_v0 = 0xF;
    do {
        var_v0 -= 1;
        M2C_FIELD(var_a0, s32 *, 0) = 0;
        M2C_FIELD(var_a0, s32 *, 4) = 0;
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        var_a0 += 0xC;
    } while (var_v0 >= 0);
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033058);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00045F0C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00045F34);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00045F58);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000331D4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033348);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000423AC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000424B0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000424F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042510);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042578);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000425D8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042694);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000454E0);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044C6C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000437CC);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004399C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043A8C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043A98);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043604);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004277C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004294C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042A80);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042A88);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042A90);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042A98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042AA0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042AA8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042AB0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042B88);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042BD4);

void func_00042C80(struct Unk_func_00042C80_0 *arg0) {
    func_0004235C();
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    func_00042D24(arg0);
    func_00043104(arg0);
}

void func_00042CBC(void *arg0) {
    func_00042D24(arg0);
    func_00043104(arg0);
    func_000424B0((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042CF0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042D24);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042D54);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042D98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042DF0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00042F6C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043068);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043104);

void func_00043158(s32 arg0) {
    func_00042510(arg0, 0x40000);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043174);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000432D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004336C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043420);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000434F4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000434F4(s32 arg0) {
    sce_paf_private_memset(arg0, 0, 0x14);
}
#endif

void func_00043514(void) {
}

void func_0004351C(void) {
}

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043524);
#else
void func_0003351C(void) {

}

s32 func_00033524(void) {
    return D_0004919C;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000336B8);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033530);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00032A6C);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00045FA0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00045FB0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00045FCC);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000335BC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033608);

s32 func_000337B8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000338F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033928);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000337C0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033880);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000338F0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033A10);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033A4C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033A74);
#endif

#if FW_VERSION < 282
void func_00033A9C(void) {

}

void func_00033AA4(void) {

}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033AAC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033C24);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033170);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033EC4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033D00);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033D48);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033D90);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000460B4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000460C4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000460DC);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000460F4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004610C);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046128);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046148);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004576C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033C24);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033170);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033D8C);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000461F4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046218);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033EC4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033F64);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046240);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046274);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000333F4);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003404C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00034148);
#endif

#if FW_VERSION == 250
s32 func_00034148(void *arg0) {
    sce_paf_private_memset(arg0 + 0x24, 0, 0x21);
    sce_paf_private_memset(arg0 + 0x45, 0, 0xD);
    sce_paf_private_memset(arg0 + 0x52, 0, 0x10);
    sce_paf_private_memset(arg0 + 0x62, 0, 0x80);
    M2C_FIELD(arg0, s32 *, 0xE4) = -1;
    sce_paf_private_memset((s32) (arg0 + 0xE8), 0, 8);
    sce_paf_private_memset((s32) (arg0 + 0xF0), 0, 7);
    sce_paf_private_memset((s32) (arg0 + 0xF7), 0, 0x21);
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000341E8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004638C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033F80);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00033FFC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000340FC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00034150);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000341A4);
#endif

#if FW_VERSION == 250
s32 func_000341E8(void *arg0) {
    void *temp_s0;

    sce_paf_private_memcpy(arg0 + 0x52, sceVshLftvMw_5C471047(0), 0xF);
    sce_paf_private_memcpy(arg0 + 0x62, sceVshLftvMw_59456C6E(0), 0x7F);
    M2C_FIELD(arg0, s32 *, 0xE4) = sceVshLftvMw_95745BE1(0);
    temp_s0 = arg0 + 0xF0;
    sce_paf_private_memcpy((s32) (arg0 + 0xE8), sceVshLftvMw_2A7D1F76(0), 7);
    sce_paf_private_memcpy((s32) (arg0 + 0xF7), sceVshLftvMw_38CC4A9B(0), 0x20);
    sce_paf_private_memcpy((s32) temp_s0, sceVshLftvMw_1D700DE1(0), 6);
    if (strnlen(temp_s0, 7) == 0) {
        sce_paf_private_strncpy(temp_s0, (M2C_UNK*) ("1.000"), 6);
    }
    M2C_FIELD(arg0, s32 *, 0x118) = sceVshLftvMw_0F42084B(0);
    return 0;
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000342D8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000343EC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000462F4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004632C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00034590);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00034778);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004638C);
#endif

#if FW_VERSION == 250
void func_000348AC(s32 arg0) {
    func_00034778(arg0, 0x20000);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000348C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000349C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00034A78);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003442C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000345C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00034668);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00034894);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00034CA0);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00034AC0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000463C0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000463DC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00034CFC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00034E18);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004648C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000464A4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000464C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035188);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000465B8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000465CC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000465E0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046600);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004662C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004664C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046660);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004667C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003588C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035DE4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046788);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004678C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046790);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046794);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00034FE0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035248);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035280);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000467A4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000467AC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000467C4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000467D4);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00045DD4);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000467E8);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036130);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000361F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000362D4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046954);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035904);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035A20);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000359C0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035B90);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035CC4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035CCC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035CD4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035CDC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035CE4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035CEC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035CF4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035DCC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035E18);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046958);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004697C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046998);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000469C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003696C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046A30);

void func_00036A88(M2C_UNK **arg0) {
    *arg0 = &D_00046A30;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00035F20);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036AB0);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036C38);
#endif

#if FW_VERSION >= 282
void func_00043698(struct Unk_func_00043698_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
}
#endif

void func_000436AC(struct Unk_func_000436AC_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
}

void func_000436C0(void) {
}

void func_000436C8(void) {
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036D68);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046B10);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046B20);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046B34);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046B44);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046B64);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046B84);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036ED4);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000436D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043790);
#endif

s32 func_00043818(void) {
    return 0;
}

s32 func_00043820(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043828);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043840);

void func_00043858(void) {
}

void func_00043860(void) {
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043868);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000438BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043908);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004396C);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036144);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036184);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000439C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043A04);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CC8C);

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003719C);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CC98);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CCA8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CCB8);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CCCC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CCDC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CCF0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CD04);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CD18);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CD30);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CD48);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CD64);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CD80);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CD98);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005E12C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005E144);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005E15C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CDB4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CDC4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CDD8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CDEC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CE00);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CE18);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CE30);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CE4C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CE68);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CE80);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005E25C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005E274);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005E28C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CE9C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CEAC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CEC0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CED4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CEE8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CF00);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CF18);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CF34);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CF50);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CF68);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005E38C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005E3A4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005E3BC);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043A28);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043AD0);

void func_00043B00(void) {
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043B08);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00037388);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00037984);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00037A28);
#endif

s32 func_00043B4C(s32 arg0, s32 arg1, s32 arg2) {
    D_0005F9E4 = arg0;
    D_0005F9E8 = arg1;
    D_0005F9EC = arg2;
    D_0005F9E0 = 1;
    return 0;
}

s32 func_00043B78(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 var_v0;

    var_v0 = -1;
    if (D_0005F9E0 != 0) {
        if (arg0 != NULL) {
            *arg0 = D_0005F9E4;
        }
        if (arg1 != NULL) {
            *arg1 = D_0005F9E8;
        }
        if (arg2 != NULL) {
            *arg2 = D_0005F9EC;
        }
        var_v0 = 0;
    }
    return var_v0;
}

s32 func_00043BC8(void) {
    return D_0005F9E8;
}

void func_00043BD4(void) {
    func_00043B4C(0, 0, 0);
    D_0005F9E0 = 0;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043C00);
#else
void func_00043C00(s32 arg0) {
    Heap_Alloc(D_0005F9E4, 0, arg0);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043C28);

#if FW_VERSION < 270
void func_00037D78(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00047020;
    M2C_FIELD(arg0, s32 *, 4) = -1;
}

void func_00037D90(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00047020;
    M2C_FIELD(arg0, s32 *, 4) = -1;
}

void func_00037DA8(M2C_UNK **arg0) {
    *arg0 = &D_00047020;
    func_00043DF0((s32) arg0);
}

void func_00037DD0(M2C_UNK **arg0) {
    *arg0 = &D_00047020;
    func_00043DF0((s32) arg0);
}

void func_00037DF8(M2C_UNK **arg0) {
    *arg0 = &D_00047020;
    func_00043DF0((s32) arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043C50);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043D24);
#else
s32 func_00043D24(void *arg0) {
    M2C_UNK *temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    temp_s0 = (M2C_UNK*) ("SceVshLftvApctlHandler");
    temp_v0 = sceKernelCreateMbx(temp_s0, 0x400U, NULL);
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        D_000491B8 = var_s1;
        temp_v0_2 = sceKernelCreateThread(temp_s0, (s32) &func_00043E98, 0x42, 0x2000U, 0U, NULL);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            var_s1 = sceKernelStartThread(temp_v0_2, 0U, NULL);
            M2C_FIELD(arg0, s32 *, 4) = sceNetApctlAddInternal03Handler((s32) &func_00043C50, 0);
        }
    }
    return var_s1;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043DF0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043E98);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036C7C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000380F8);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00047020);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00043F34);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004415C);

#if FW_VERSION < 270
void func_00038350(void) {

}
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CFC0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004419C);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036A7C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044354);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004438C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036B4C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036BB0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036BD0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044470);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044480);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036C28);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00036C60);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CFE8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046308);
#endif

#if FW_VERSION < 270
void func_000384C4(void) {

}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003707C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000384CC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00038508);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003852C);

void func_00038550(M2C_UNK **arg0) {
    *arg0 = &D_00057290;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044470);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044480);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000442FC);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044354);

s32 func_0004438C(struct Unk_func_0004438C_0 *arg0) {
    if (arg0->unk10 != 0) {
        func_0002C4A0();
        arg0->unk10 = 0;
    }
    arg0->unkC = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000443CC);

void func_00044430(void) {
    func_000443CC(1, 0xFFFF);
}

void func_00044450(void) {
    func_000443CC(0, 0xFFFF);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000372A0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000372D8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00037310);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00037358);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000373D8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00037448);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00037488);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00037504);
#endif

#if FW_VERSION >= 282
void func_00044470(M2C_UNK **arg0) {
    *arg0 = &D_00057290;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044480);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00044480(M2C_UNK **arg0) {
    *arg0 = &D_00057290;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000444A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000444E0);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044518);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044608);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000446F8);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044738);
#else
s32 func_00044738(void) {
    func_00044860();
    return (_Z29netconf_write_temporary_apcnfv() >= 0) ? 0 : 0x80004005;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044770);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044860);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004494C);
#else
s32 func_0004494C(void) {
    _Z29netconf_clear_temporary_apcnfv();
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00038B20);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00038B80);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00038BE0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00038C34);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00038C88);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00038CE0);

void func_00038D1C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00038D2C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00038D6C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00038DC0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00038E54);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00038FAC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039018);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039058);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039098);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000390DC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039178);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039214);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000392BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039364);

void func_00039414(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039424);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039464);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000394B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039524);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039590);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000395D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039610);
#endif

#if FW_VERSION < 282
M2C_UNK *func_00039654(void) {
    return &D_0005FA40;
}
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004496C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000449EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044ADC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044B68);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044C08);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044CA8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044D50);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044DB0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044F24);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CFE8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005CFF8);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D010);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D014);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D020);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00044F98);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D064);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D078);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D080);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D08C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D094);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D0A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00045340);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000453B4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000457B4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D0BC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D0C8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D0D0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D0D8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D0E4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D0EC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D0F4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D0F8);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00060658);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00060660);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00060664);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00045BF8);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048760);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D140);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D144);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00046194);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00046364);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D164);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D168);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000463E4);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D2D0);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00060850);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00060864);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00060874);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00060880);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004645C);

u8 func_000464E8(struct Unk_func_000464E8_0 *arg0) {
    return arg0->unk90;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004966C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000496D4);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048DF8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048E90);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000464F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00046558);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000465C0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004663C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000466B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004673C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004677C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00047728);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00047760);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004779C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000477E4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000478F0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000467E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00046C50);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00046D3C);

s32 func_00046D84(void) {
    return 0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00046D8C);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D2D0);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D2F0);
#endif

#if (FW_VERSION >= 282 && FW_VERSION < 330) || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00046D8C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
M2C_UNK *func_00046DB8(void) {
    return &D_0005FA40;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00046DC4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00046F68);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004710C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000473B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00047664);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048D18);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00047918);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00047978);
#else
void func_00047978(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00047BD0);
#else
void func_00047BD0(struct Unk_func_00047BD0_0 *arg0, s8 arg1) {
    arg0->unk4D5 = arg1;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00047BD8);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000393EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003993C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003A2D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003ADD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00047D0C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B620);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049738);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049938);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048378);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004852C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048570);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000463E4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000463F0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046400);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004641C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046428);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046430);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00047124);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00047130);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00047140);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004715C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00047168);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00047170);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000485E8);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B9A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004BA64);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004BAA0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004BAC4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048658);
#else
void func_00048658(void) {
    _ZN3paf13PhApplication14FinishDispListEv();
    _ZN3paf13PhApplication13StartDispListEv();
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004BB2C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049AFC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000393CC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039C70_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039C80);
#endif

void func_0004867C(M2C_UNK **arg0) {
    *arg0 = &D_0005D4E8;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004868C);
#else
void func_0004868C(M2C_UNK **arg0) {
    *arg0 = &D_0005D4E8;
    _ZdlPv(arg0);
}
#endif

void func_000486B4(struct Unk_func_000486B4_0 *arg0) {
    arg0->unk0 = &D_0005D450;
    arg0->unk8 = &D_00057B50;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000486D0);
#else
void func_000486D0(struct Unk_func_000486D0_0 *arg0) {
    arg0->unk0 = &D_0005D450;
    arg0->unk8 = &D_00057B50;
    _ZdlPv(arg0);
}
#endif

void func_00048704(struct Unk_func_00048704_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004870C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004872C);
#else
void func_0004872C(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEii(arg0 + 8);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048748);
#else
void func_00048748(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEif(arg0 + 8);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048764);
#else
void func_00048764(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEiRK4vec4(arg0 + 8);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048780);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000487C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048804);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048840);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048880);

void func_000488A4(struct Unk_vt_func_000488A4_arg0 **arg0) {
    (*arg0)->unk10();
}

void func_000488C8(struct Unk_vt_func_000488C8_arg0 **arg0) {
    (*arg0)->unk14();
}

void func_000488EC(struct Unk_vt_func_000488EC_arg0 **arg0) {
    (*arg0)->unk18();
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048910);

void func_00048934(struct Unk_vt_func_00048934_arg0 **arg0) {
    (*arg0)->unk20();
}

void func_00048958(struct Unk_vt_func_00048958_arg0 **arg0) {
    (*arg0)->unk24();
}

void func_0004897C(struct Unk_vt_func_0004897C_arg0 **arg0) {
    (*arg0)->unk28();
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000489A0);
#else
void func_000489A0(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRb(arg0 + 8);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000489BC);
#else
void func_000489BC(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRi(arg0 + 8);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000489D8);
#else
void func_000489D8(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRf(arg0 + 8);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000489F4);
#else
void func_000489F4(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiR4vec4(arg0 + 8);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048A10);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048A50);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048A90);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048AD0);

void func_00048B10(void) {
}

s32 func_00048B18(void) {
    return -1;
}

s32 func_00048B20(void) {
    return -1;
}

s32 func_00048B28(void) {
    return -1;
}

s32 func_00048B30(void) {
    return -1;
}

s32 func_00048B38(void) {
    return 0;
}

s32 func_00048B40(void) {
    return 0;
}

s32 func_00048B48(void) {
    return 1;
}

void func_00048B50(void) {
}

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000398E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000398F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039900);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039910);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039920);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039928);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039930);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003997C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000399C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039A10);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039A58);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039A64);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039AF4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039B5C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039B80);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039BA4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039C5C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039D0C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003B664);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D3B0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D450);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D4E8);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046590);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00044E08);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048B58);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048C7C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00048C7C(struct Unk_func_00048C7C_0 *arg0) {
    arg0->unk18 = 0;
    arg0->unk3C = -1;
    arg0->unkE0 = -1;
    arg0->unkE4 = 0;
    sce_paf_private_memset((s32) arg0, 0, 0x18);
    sce_paf_private_memset((s32) ((u8 *)arg0 + 0x19), 0, 0x21);
    sce_paf_private_memset((s32) ((u8 *)arg0 + 0x40), 0, 0x21);
    sce_paf_private_memset((s32) ((u8 *)arg0 + 0x61), 0, 0xD);
    sce_paf_private_memset((s32) ((u8 *)arg0 + 0x6E), 0, 0x10);
    sce_paf_private_memset((s32) ((u8 *)arg0 + 0x7E), 0, 0x21);
    sce_paf_private_memset((s32) ((u8 *)arg0 + 0x9F), 0, 0x40);
    sce_paf_private_memset((s32) ((u8 *)arg0 + 0xE8), 0, 0x80);
    sce_paf_private_memset((s32) ((u8 *)arg0 + 0x168), 0, 7);
}
#endif

#if FW_VERSION >= 282
void func_00048D40(void) {
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048D48);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048E44);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048EF0);

s32 func_00048F50(void *arg0) {
    s32 var_v0;
    void *var_a0;

    var_a0 = arg0;
    var_v0 = 0xF;
    do {
        var_v0 -= 1;
        M2C_FIELD(var_a0, s32 *, 0) = 0;
        M2C_FIELD(var_a0, s32 *, 4) = 0;
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        var_a0 += 0xC;
    } while (var_v0 >= 0);
    return 0;
}

s32 func_00048F74(void *arg0) {
    s32 var_v0;
    void *var_a0;

    var_a0 = arg0;
    var_v0 = 0xF;
    do {
        var_v0 -= 1;
        M2C_FIELD(var_a0, s32 *, 0) = 0;
        M2C_FIELD(var_a0, s32 *, 4) = 0;
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        var_a0 += 0xC;
    } while (var_v0 >= 0);
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00048F98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049050);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049100);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D508);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D50C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D510);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D514);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D518);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D51C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D520);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D53C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D54C);

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_000472E8);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000491DC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049258);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00039E9C);
#endif

#if FW_VERSION < 282
void func_0003B73C(void) {

}
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
void func_00049290(void) {
    M2C_FIELD(D_0005F9F8, M2C_UNK (**)(void **), 0xC)(&D_0005F9F8);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000492B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049300);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049380);

s32 func_000493F0(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    void *sp0;
    s32 var_v1;

    var_v1 = -4;
    if (func_000497E0(arg0, arg1, arg2, &sp0) != 0) {
        var_v1 = (arg3 >= sp0) ? 0 : -4;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049430);

s32 func_000494AC(s32 arg0, s32 arg1, s32 arg2) {
    void *sp0;
    return (func_00049878(arg0, arg1, &sp0, arg2) != 0) ? 0 : -4;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000494D8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049550);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0003A594);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000497E0);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049878);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049A40);
#else
void func_00049A40(void) {
    sce_paf_private_malloc();
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049A5C);
#else
void func_00049A5C(void) {
    sce_paf_private_free();
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049A78);
#else
void func_00049A78(struct Unk_func_00049A78_0 *arg0) {
    arg0->unk50 = func_00049A40;
    arg0->unk54 = func_00049A5C;
    arg0->unk0 = 0;
    arg0->unk3C = 0;
    arg0->unk40 = 0;
    arg0->unk44 = 0;
    arg0->unk48 = 0;
    arg0->unk4C = 0;
    sce_paf_private_memset((s32) ((u8 *)arg0 + 4), 0, 0x38);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049AD0);
#else
void func_00049AD0(struct Unk_func_00049AD0_0 *arg0) {
    arg0->unk50 = func_00049A40;
    arg0->unk54 = func_00049A5C;
    arg0->unk0 = 0;
    arg0->unk3C = 0;
    arg0->unk40 = 0;
    arg0->unk44 = 0;
    arg0->unk48 = 0;
    arg0->unk4C = 0;
    sce_paf_private_memset((s32) ((u8 *)arg0 + 4), 0, 0x38);
}
#endif

void func_00049B28(void) {
    func_00049DA0();
}

void func_00049B44(void) {
    func_00049DA0();
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049B60);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00044E84);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00044EC4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00044ED8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00044EEC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00044F00);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004660C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0004664C_v260);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046660_v260);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046674);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_00046688);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049DA0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049E34);

s32 func_00049EA8(struct Unk_func_00049EA8_0 *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a3;
    u32 temp_a2;

    var_a3 = 0;
    if (arg1 >= 0) {
        temp_a2 = arg0->unk10;
        if ((temp_a2 >= (u32) (arg1 + 0x1C)) && ((var_a3 = 1, temp_a0 = M2C_FIELD((arg0->unk3C + arg1), s32 *, 4), (temp_a0 < 0)) || (temp_a2 < (u32) (arg1 + (temp_a0 * 0x10) + 0x1C)))) {
            var_a3 = 0;
        }
    }
    return var_a3;
}

s32 func_00049EFC(struct Unk_func_00049EFC_0 *arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if ((arg1 < 0) || ((u32) arg0->unk10 < (u32) (arg1 + 0x10))) {
        var_a2 = 0;
    }
    return var_a2;
}

s32 func_00049F24(struct Unk_func_00049F24_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg1 >= 0) && (arg1 < arg0->unk18)) {
        var_v1 = arg0->unk40 + arg1 + 4;
    }
    return var_v1;
}

s32 func_00049F50(struct Unk_func_00049F50_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg1 >= 0) && (arg1 < arg0->unk20)) {
        var_v1 = arg0->unk44 + arg1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049F78);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049FA8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00049FD8);

void func_0004A060(struct Unk_func_0004A060_0 *arg0) {
    arg0->unk4 = -1;
    arg0->unk0 = 0;
}

void func_0004A070(struct Unk_func_0004A070_0 *arg0) {
    arg0->unk4 = -1;
    arg0->unk0 = 0;
}

void func_0004A080(struct Unk_func_0004A080_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A08C);

void func_0004A098(void) {
}

void func_0004A0A0(void) {
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A0A8);
#else
void *func_0004A0A8(struct Unk_func_0004A070_0 *arg0, struct Unk_func_0004A0A8_1 *arg1) {
    struct Unk_func_00049EA8_0 *temp_s0;
    struct Unk_func_0004A0A8_temp_s2 *temp_s2;

    temp_s0 = arg1->unk0;
    if ((temp_s0 == NULL) || (temp_s2 = temp_s0->unk3C + arg1->unk4, (func_00049EA8(temp_s0, temp_s2->unk8) == 0))) {
        func_0004A070(arg0);
    } else {
        func_0004A08C(arg0, temp_s0, temp_s2->unk8);
    }
    return arg0;
}
#endif

void *func_0004A120(struct Unk_func_0004A070_0 *arg0, struct Unk_func_0004A120_1 *arg1) {
    struct Unk_func_00049EA8_0 *temp_s0;
    struct Unk_func_0004A120_temp_s2 *temp_s2;

    temp_s0 = arg1->unk0;
    if ((temp_s0 == NULL) || (temp_s2 = temp_s0->unk3C + arg1->unk4, (func_00049EA8(temp_s0, temp_s2->unk10) == 0))) {
        func_0004A070(arg0);
    } else {
        func_0004A08C(arg0, temp_s0, temp_s2->unk10);
    }
    return arg0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A198);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A288);

s32 func_0004A2C4(struct Unk_func_0004A2C4_0 *arg0) {
    s32 var_v0;
    struct Unk_func_0004A2C4_temp_v1 *temp_v1;

    temp_v1 = arg0->unk0;
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD((temp_v1->unk3C + arg0->unk4), s32 *, 4);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A2E8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A36C);

void func_0004A48C(struct Unk_func_0004A48C_0 *arg0) {
    arg0->unk4 = -1;
    arg0->unk0 = 0;
}

void func_0004A49C(struct Unk_func_0004A49C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
}

void func_0004A4A8(struct Unk_func_0004A4A8_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
}

void func_0004A4B4(void) {
}

void func_0004A4BC(void) {
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A4C4);

s32 func_0004A500(struct Unk_func_0004A500_0 *arg0) {
    s32 var_v0;
    struct Unk_func_0004A500_temp_v1 *temp_v1;

    temp_v1 = arg0->unk0;
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD((temp_v1->unk3C + arg0->unk4), s32 *, 4);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A524);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A560);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A5A0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A628);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A6B0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A738);

s32 func_0004A7BC(struct Unk_func_0004A7BC_0 *arg0, s32 *arg1) {
    s32 var_a2;
    struct Unk_func_00049F24_0 *temp_a0;
    struct Unk_func_0004A7BC_temp_a1 *temp_a1;

    temp_a0 = arg0->unk0;
    var_a2 = 0;
    if (temp_a0 != NULL) {
        temp_a1 = temp_a0->unk3C + arg0->unk4;
        if (temp_a1->unk4 == 7) {
            *arg1 = func_00049F24(temp_a0, temp_a1->unk8);
            var_a2 = 1;
        }
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A820);

void func_0004A8FC(struct Unk_func_0004A8FC_0 *arg0) {
    arg0->unk4 = -1;
    arg0->unk0 = 0;
    arg0->unk8 = 0;
}

void func_0004A910(struct Unk_func_0004A910_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unk8 = arg3;
}

void func_0004A920(struct Unk_func_0004A920_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unk8 = arg3;
}

void func_0004A930(void) {
}

void func_0004A938(void) {
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A940);

#if FW_VERSION >= 282
void func_0004A97C(struct Unk_func_0004A97C_0 *arg0) {
    arg0->unk0 = &D_0005D5C8;
    arg0->unk8 = 0;
    arg0->unk4 = 0;
}

void func_0004A994(struct Unk_func_0004A994_0 *arg0) {
    arg0->unk0 = &D_0005D5C8;
    arg0->unk8 = 0;
    arg0->unk4 = 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004A9AC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004A9AC(struct Unk_func_0004A9AC_0 *arg0, s32 arg1) {
    s32 temp_v0;

    arg0->unk8 = arg1;
    arg0->unk0 = &D_0005D5C8;
    temp_v0 = _Znaj(arg1);
    arg0->unk4 = temp_v0;
    sce_paf_private_memset(temp_v0, 0, arg1);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004AA04);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004AA04(struct Unk_func_0004AA04_0 *arg0, s32 arg1) {
    s32 temp_v0;

    arg0->unk8 = arg1;
    arg0->unk0 = &D_0005D5C8;
    temp_v0 = _Znaj(arg1);
    arg0->unk4 = temp_v0;
    sce_paf_private_memset(temp_v0, 0, arg1);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004AA5C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004AA5C(struct Unk_func_0004AA5C_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    arg0->unk8 = arg2;
    arg0->unk0 = &D_0005D5C8;
    temp_v0 = _Znaj(arg2);
    arg0->unk4 = temp_v0;
    sce_paf_private_memcpy(temp_v0, arg1, arg2);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004AAC0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004AAC0(struct Unk_func_0004AAC0_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    arg0->unk8 = arg2;
    arg0->unk0 = &D_0005D5C8;
    temp_v0 = _Znaj(arg2);
    arg0->unk4 = temp_v0;
    sce_paf_private_memcpy(temp_v0, arg1, arg2);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004AB24);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004AC3C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004AC7C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004AC7C(struct Unk_func_0004AC7C_0 *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk4;
    arg0->unk0 = &D_0005D5C8;
    if (temp_a1 == 0) {

    } else {
        _ZdaPv(temp_a1);
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004ACBC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004ACBC(struct Unk_func_0004ACBC_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk0 = &D_0005D5C8;
    if (temp_v1 != 0) {
        _ZdaPv(temp_v1);
    }
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004AD0C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004ADA4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004ADA4(struct Unk_func_0004ADA4_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 == 0) {

    } else {
        sce_paf_private_memset(temp_v0, 0, arg0->unk8);
    }
}
#endif

#if FW_VERSION >= 282
s32 func_0004ADDC(struct Unk_func_0004ADDC_0 *arg0) {
    return arg0->unk4;
}

s32 func_0004ADE4(struct Unk_func_0004ADE4_0 *arg0) {
    return arg0->unk8;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004ADEC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004AE7C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004AF04);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004AF8C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B018);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B0A4);

void func_0004B134(s32 arg0) {
    func_000052CC(arg0 + 0x14, 0, 0);
    func_000052CC(arg0 + 0x20, 0, 0);
    func_0000ACBC(arg0 + 0x2C, 0, 0);
    func_0000ACBC(arg0 + 0x44, 0, 0);
    func_000052CC(arg0 + 0x50, 0, 0);
    func_0000ACBC(arg0 + 0x5C, 0, 0);
    func_000052CC(arg0 + 0x68, 0, 0);
    func_000052CC(arg0 + 0x74, 0, 0);
    func_000052CC(arg0 + 0x80, 0, 0);
}

void func_0004B1E8(s32 arg0) {
    func_0004CA24(arg0 + 0x94);
}

s32 func_0004B204(s32 arg0) {
    func_00004FAC(arg0 + 8);
    return 1;
}

void func_0004B224(void) {
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B22C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B29C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B320);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B3AC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D5C8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D5E8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D5EC);

void func_0004B498(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x94;
    func_0004CA60(temp_s0, arg0 + 0x8C, 8);
    func_0004CA60(temp_s0, (s32) "3lpXnEqV", 8);
    func_0004CB78(temp_s0);
}

s32 func_0004B4E4(s32 arg0, s32 arg1) {
    func_0004DF28(arg0, arg1 + 0xEC, 0x10);
    return arg0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B514);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B55C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B5A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B5F8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B64C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B6A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B7A8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D624);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004B7F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004BB54);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004BD74);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004BFA8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004BFF0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004C0A4);

void func_0004C0FC(struct Unk_func_0004C0FC_0 *arg0) {
    arg0->unk0 = &D_0005D700;
    if (arg0->unk18 != 0) {
        func_0004C1E8((s32) arg0);
    }
    func_000504B0((s32) arg0);
}

void func_0004C148(struct Unk_func_0004C148_0 *arg0) {
    arg0->unk0 = &D_0005D700;
    if (arg0->unk18 != 0) {
        func_0004C1E8((s32) arg0);
    }
    func_000504B0((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004C194);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004C194(struct Unk_func_0004C194_0 *arg0) {
    arg0->unk0 = &D_0005D700;
    if (arg0->unk18 != 0) {
        func_0004C1E8((s32) arg0);
    }
    func_000504B0((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D698);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D6C8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D6E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004C1E8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004C62C);

s32 func_0004C6A8(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004C6B0);

s32 func_0004C6DC(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004C6E4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004C7B4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004C7EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004C91C);

s32 func_0004C98C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    if (D_0008F850 != 0) {
        if (D_0008B84C > 0) {
            temp_v0 = func_0004C91C(arg0, arg1, D_0008F850);
            if (temp_v0 > 0) {
                var_s0 = arg0;
                D_0008B84C -= temp_v0;
                D_0008F850 += temp_v0;
            }
        }
    } else {
        var_s0 = func_0004C7EC(arg0, arg1, arg2);
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004CA24);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004CA60);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004CB78);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004CC70);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004D4E8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004D77C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004D77C(struct Unk_func_0004D77C_0 *arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    arg0->unk0 = &D_0005D758;
    temp_v0 = _Znwj(0xC);
    func_0004AA5C((Unk_func_0004AA5C_0*) temp_v0, arg1, arg2);
    arg0->unk4 = temp_v0;
    *temp_v0 = &D_0005D778;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004D7F8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004D7F8(struct Unk_func_0004D7F8_0 *arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    arg0->unk0 = &D_0005D758;
    temp_v0 = _Znwj(0xC);
    func_0004AA5C((Unk_func_0004AA5C_0*) temp_v0, arg1, arg2);
    arg0->unk4 = temp_v0;
    *temp_v0 = &D_0005D778;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004D874);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004D8E8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004D95C);

void func_0004DA10(M2C_UNK **arg0, s32 arg1, s32 arg2) {
    func_0004D77C((Unk_func_0004D77C_0*) arg0, arg1, arg2);
    *arg0 = &D_0005D738;
    func_0004DA48((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004DA48);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004DB48);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004DC4C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004DC4C(M2C_UNK **arg0) {
    *arg0 = &D_0005D778;
    func_0004AC3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_0004DC84(M2C_UNK **arg0) {
    *arg0 = &D_0005D778;
    func_0004AC3C((s32) arg0);
}

s32 func_0004DCAC(struct Unk_func_0004DCAC_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_func_0004DCAC_temp_v1 **temp_v1;

    var_v0 = 0;
    temp_v1 = arg0->unk8;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk10(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004DCE0);

void func_0004DD1C(M2C_UNK **arg0) {
    *arg0 = &D_0005D738;
    func_0004D874((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004DD44);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004DD44(M2C_UNK **arg0) {
    *arg0 = &D_0005D738;
    func_0004D874((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004DD7C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004DDC4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004DE1C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004DEE4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D6EC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D6F0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D6F4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D700);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D738);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D758);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D778);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004DF28);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004DFEC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E0C4);

void func_0004E108(struct Unk_func_0004E108_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E118);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E1AC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E2D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E3F8);

void func_0004E4E8(struct Unk_func_0004E4E8_0 *arg0) {
    arg0->unk0 = &D_0005D7C8;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_0004E500(struct Unk_func_0004E500_0 *arg0) {
    arg0->unk0 = &D_0005D7C8;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E518);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E594);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E610);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E694);

void func_0004E7A4(M2C_UNK **arg0, s32 arg1, s32 arg2) {
    func_0004E4E8((Unk_func_0004E4E8_0*) arg0);
    *arg0 = &D_0005D7B0;
    func_0004E9DC((s32) arg0, arg1, arg2);
}

void func_0004E7FC(M2C_UNK **arg0, s32 arg1, s32 arg2) {
    func_0004E4E8((Unk_func_0004E4E8_0*) arg0);
    *arg0 = &D_0005D7B0;
    func_0004EAC0((s32) arg0, arg1, arg2);
}

void func_0004E854(M2C_UNK **arg0, s32 arg1, s32 arg2) {
    func_0004E4E8((Unk_func_0004E4E8_0*) arg0);
    *arg0 = &D_0005D7B0;
    func_0004EAC0((s32) arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E8AC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E8F8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E944);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E990);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004E9DC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004EAC0);

void func_0004EBCC(M2C_UNK **arg0) {
    *arg0 = &D_0005D7B0;
    func_0004E518((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004EBF4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004EBF4(M2C_UNK **arg0) {
    *arg0 = &D_0005D7B0;
    func_0004E518((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004EC2C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004EC2C(struct Unk_func_0004EC2C_0 *arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    arg0->unk0 = &D_0005D820;
    temp_v0 = _Znwj(0xC);
    func_0004AA5C((Unk_func_0004AA5C_0*) temp_v0, arg1, arg2);
    arg0->unk4 = temp_v0;
    *temp_v0 = &D_0005D840;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004ECA8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004ECA8(struct Unk_func_0004ECA8_0 *arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    arg0->unk0 = &D_0005D820;
    temp_v0 = _Znwj(0xC);
    func_0004AA5C((Unk_func_0004AA5C_0*) temp_v0, arg1, arg2);
    arg0->unk4 = temp_v0;
    *temp_v0 = &D_0005D840;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004ED24);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004ED98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004EE0C);

void func_0004EEC0(M2C_UNK **arg0, s32 arg1, s32 arg2) {
    func_0004EC2C((Unk_func_0004EC2C_0*) arg0, arg1, arg2);
    *arg0 = &D_0005D800;
    func_0004EEF8((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004EEF8);

void func_0004F054(M2C_UNK **arg0, s32 arg1, s32 arg2) {
    func_0004EC2C((Unk_func_0004EC2C_0*) arg0, arg1, arg2);
    *arg0 = &D_0005D7E0;
    func_0004F08C((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F08C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F1A4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004F1A4(M2C_UNK **arg0) {
    *arg0 = &D_0005D840;
    func_0004AC3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_0004F1DC(M2C_UNK **arg0) {
    *arg0 = &D_0005D840;
    func_0004AC3C((s32) arg0);
}

s32 func_0004F204(struct Unk_func_0004F204_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_func_0004F204_temp_v1 **temp_v1;

    var_v0 = 0;
    temp_v1 = arg0->unk8;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk10(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F238);

void func_0004F274(M2C_UNK **arg0) {
    *arg0 = &D_0005D800;
    func_0004ED24((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F29C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004F29C(M2C_UNK **arg0) {
    *arg0 = &D_0005D800;
    func_0004ED24((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_0004F2D4(M2C_UNK **arg0) {
    *arg0 = &D_0005D7E0;
    func_0004ED24((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F2FC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004F2FC(M2C_UNK **arg0) {
    *arg0 = &D_0005D7E0;
    func_0004ED24((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F334);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F470);

void func_0004F5A0(void) {
    func_0004F5DC();
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F5BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F5DC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F650);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004F650(struct Unk_func_0004F650_0 *arg0) {
    struct Unk_vt_func_0004F650_temp_v0 **temp_v0;

    temp_v0 = _Znwj(0xC);
    func_000515E0(temp_v0, arg0->unk10, arg0->unk8);
    sce_paf_private_memcpy((s32) ((u8 *)arg0 + 0xC), (*temp_v0)->unk8(temp_v0), 4);
    (*temp_v0)->unk4(temp_v0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F6C8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_0004F6C8(struct Unk_func_0004F6C8_0 *arg0) {
    s32 temp_s0;
    struct Unk_vt_func_0004F6C8_temp_v0 **temp_v0;

    temp_v0 = _Znwj(0xC);
    func_000515E0(temp_v0, arg0->unk10, arg0->unk8);
    temp_s0 = sce_paf_private_memcmp((u8 *)arg0 + 0xC, (*temp_v0)->unk8(temp_v0), 4) == 0;
    (*temp_v0)->unk4(temp_v0);
    return temp_s0;
}
#endif

#if FW_VERSION >= 282
void func_0004F748(void) {
    func_0004F780();
}

void func_0004F764(void) {
    func_0004F780();
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F780);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F7A4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_0004F7A4(void *arg0) {
    return sce_paf_private_memcmp(arg0, (s32) &D_0005D860, 4) == 0;
}
#endif

#if FW_VERSION >= 282
s32 func_0004F7CC(void *arg0, u32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 < 4U) {

    } else {
        var_v0 = func_0004F7A4(arg0);
    }
    return var_v0;
}

void func_0004F7FC(M2C_UNK **arg0) {
    *arg0 = &D_0005D8A0;
}

void func_0004F80C(M2C_UNK **arg0) {
    *arg0 = &D_0005D8A0;
}

void func_0004F81C(M2C_UNK **arg0) {
    *arg0 = &D_0005D8A0;
}

void func_0004F82C(M2C_UNK **arg0) {
    *arg0 = &D_0005D8A0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F83C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004F83C(M2C_UNK **arg0) {
    *arg0 = &D_0005D8A0;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F864);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004F8D8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004FA28);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004FAC8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004FB68);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004FC10);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004FD88);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004FE5C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004FF40);

s32 func_0004FFD8(struct Unk_func_0004FFD8_0 *arg0) {
    return arg0->unk34;
}

s32 func_0004FFE0(struct Unk_func_0004FFE0_0 *arg0) {
    return arg0->unk30;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0004FFE8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004FFE8(M2C_UNK **arg0) {
    *arg0 = &D_0005D8E8;
    func_00051BF4((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_00050020(M2C_UNK **arg0) {
    *arg0 = &D_0005D8E8;
    func_00051BF4((s32) arg0);
}

s32 func_00050048(struct Unk_func_00050048_0 *arg0) {
    s32 var_v1;
    struct Unk_vt_func_00050048_temp_v0 **temp_v0;

    var_v1 = 0;
    if (arg0->unk24 != 0) {
        temp_v0 = arg0->unk1C;
        var_v1 = (*temp_v0)->unk10(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0005008C);

void func_000500CC(M2C_UNK **arg0) {
    *arg0 = &D_0005D8C0;
    func_0004FA28((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000500F4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000500F4(M2C_UNK **arg0) {
    *arg0 = &D_0005D8C0;
    func_0004FA28((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
s32 func_0005012C(struct Unk_func_0005012C_0 *arg0) {
    return arg0->unk4;
}

s32 func_00050134(struct Unk_func_00050134_0 *arg0) {
    return arg0->unk8;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0005013C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050158);

void func_00050174(M2C_UNK **arg0) {
    *arg0 = &D_0005D948;
}

void func_00050184(M2C_UNK **arg0) {
    *arg0 = &D_0005D948;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050194);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00050194(M2C_UNK **arg0) {
    *arg0 = &D_0005D948;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_000501BC(s32 arg0) {
    D_0005EE50 = arg0;
}

void func_000501C8(struct Unk_func_000501C8_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

void func_000501D0(void) {
    func_00004FAC((s32) &D_0008F854);
}

void func_000501F0(void) {
    func_00004FAC((s32) &D_0008F860);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050210);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000503A0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000504B0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050500);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00050500(s32 **arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 **, 0) = &D_0005D918;
    if (temp_v1 != 0) {
        _ZdaPv(temp_v1);
    }
    func_00050174(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050550);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00050550(s32 **arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 **, 0) = &D_0005D918;
    if (temp_v1 != 0) {
        _ZdaPv(temp_v1);
    }
    func_00050174(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_000505A8(struct Unk_func_000505A8_0 *arg0) {
    struct Unk_vt_func_000505A8_temp_a0 **temp_a0;

    temp_a0 = arg0->unk10;
    (*temp_a0)->unk14(temp_a0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000505D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050648);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D7A0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D7A4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D7B0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D7C8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D7E0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D800);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D820);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D840);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D860);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D868);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D878);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D8A0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D8C0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D8E8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D908);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D918);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D948);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_03F278", D_0005D968);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050734);

void func_00050834(void) {
    func_00050734(1, 0xFFFF);
}

void func_00050854(void) {
    func_00050734(0, 0xFFFF);
}

void func_00050874(s32 arg0) {
    func_0004AD0C(arg0 + 4);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050890);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000508AC);

void func_000508C8(s32 arg0) {
    func_0004ADA4(arg0 + 4);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000508E4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000508E4(M2C_UNK **arg0) {
    *arg0 = &D_0005D968;
    func_00051118((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_0005091C(M2C_UNK **arg0) {
    *arg0 = &D_0005D968;
    func_00051118((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050944);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050A14);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050AE4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050B0C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050B34);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050B70);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050BD4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00050BD4(struct Unk_func_00050BD4_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    arg0->unk0 = &D_0005D9E8;
    arg0->unk8 = arg1;
    func_00050ECC((s32) arg0, arg2);
    arg0->unk14 = arg3;
    temp_v0 = _Znaj(arg0->unk8 + arg0->unk10 + arg3);
    arg0->unk4 = temp_v0;
    sce_paf_private_memset(temp_v0, 0, arg0->unk8 + arg0->unk10);
    func_00050F0C((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050C58);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00050C58(struct Unk_func_00050C58_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    arg0->unk0 = &D_0005D9E8;
    arg0->unk8 = arg1;
    func_00050ECC((s32) arg0, arg2);
    arg0->unk14 = arg3;
    temp_v0 = _Znaj(arg0->unk8 + arg0->unk10 + arg3);
    arg0->unk4 = temp_v0;
    sce_paf_private_memset(temp_v0, 0, arg0->unk8 + arg0->unk10);
    func_00050F0C((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050CDC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00050CDC(struct Unk_func_00050CDC_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    arg0->unk8 = arg2;
    arg0->unk0 = &D_0005D9E8;
    func_00050ECC((s32) arg0, arg3);
    arg0->unk14 = arg4;
    temp_v0 = _Znaj(arg0->unk8 + arg0->unk10 + arg4);
    arg0->unk4 = temp_v0;
    sce_paf_private_memcpy(temp_v0, arg1, arg2);
    func_00050F0C((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050D6C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00050D6C(struct Unk_func_00050D6C_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    arg0->unk8 = arg2;
    arg0->unk0 = &D_0005D9E8;
    func_00050ECC((s32) arg0, arg3);
    arg0->unk14 = arg4;
    temp_v0 = _Znaj(arg0->unk8 + arg0->unk10 + arg4);
    arg0->unk4 = temp_v0;
    sce_paf_private_memcpy(temp_v0, arg1, arg2);
    func_00050F0C((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050DFC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00050DFC(struct Unk_func_00050DFC_0 *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk4;
    arg0->unk0 = &D_0005D9E8;
    if (temp_a1 == 0) {

    } else {
        _ZdaPv(temp_a1);
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050E3C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00050E3C(struct Unk_func_00050E3C_0 *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk4;
    arg0->unk0 = &D_0005D9E8;
    if (temp_a1 == 0) {

    } else {
        _ZdaPv(temp_a1);
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050E7C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00050E7C(struct Unk_func_00050E7C_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk0 = &D_0005D9E8;
    if (temp_v1 != 0) {
        _ZdaPv(temp_v1);
    }
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050ECC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050F0C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00050F84);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00051018);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00051018(struct Unk_func_00051018_0 *arg0) {
    sce_paf_private_memset(arg0->unk4, 0, arg0->unk8);
    arg0->unk0->unk8(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00051058);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000510B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00051118);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00051160);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000511A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000511F4);

s32 func_00051324(struct Unk_func_00051324_0 *arg0) {
    return arg0->unk4;
}

s32 func_0005132C(struct Unk_func_0005132C_0 *arg0) {
    return arg0->unk8;
}

s32 func_00051334(struct Unk_func_00051334_0 *arg0) {
    return arg0->unk8 + arg0->unk10;
}

s32 func_00051344(struct Unk_func_00051344_0 *arg0) {
    return arg0->unk4;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0005134C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0005134C(struct Unk_func_0005134C_0 *arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    arg0->unk0 = &D_0005DA58;
    temp_v0 = _Znwj(0xC);
    func_0004AA5C((Unk_func_0004AA5C_0*) temp_v0, arg1, arg2);
    arg0->unk4 = temp_v0;
    *temp_v0 = &D_0005DA78;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000513C8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000513C8(struct Unk_func_000513C8_0 *arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    arg0->unk0 = &D_0005DA58;
    temp_v0 = _Znwj(0xC);
    func_0004AA5C((Unk_func_0004AA5C_0*) temp_v0, arg1, arg2);
    arg0->unk4 = temp_v0;
    *temp_v0 = &D_0005DA78;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00051444);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000514B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0005152C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000515E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00051618);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000516DC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000516DC(M2C_UNK **arg0) {
    *arg0 = &D_0005DA78;
    func_0004AC3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_00051714(M2C_UNK **arg0) {
    *arg0 = &D_0005DA78;
    func_0004AC3C((s32) arg0);
}

s32 func_0005173C(struct Unk_func_0005173C_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_func_0005173C_temp_v1 **temp_v1;

    var_v0 = 0;
    temp_v1 = arg0->unk8;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk10(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00051770);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000517D4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000517D4(M2C_UNK **arg0) {
    *arg0 = &D_0005DA38;
    func_00051444((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_0005180C(struct Unk_func_0005180C_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_0005DAC0;
    arg0->unk8 = arg1;
    arg0->unk4 = 0;
}

void func_00051824(struct Unk_func_00051824_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_0005DAC0;
    arg0->unk8 = arg1;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_0005183C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00051884);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00051924);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_000519A4);

void func_00051ADC(struct Unk_func_00051ADC_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_0005DAA0;
    func_00051824((Unk_func_00051824_0*) (((u8 *)arg0 + 4)), arg2);
    func_00050CDC((Unk_func_00050CDC_0*) &arg0->unk14, arg1, arg2, 0x10, 0);
    arg0->unk14 = &D_0005DAD0;
    func_00050BD4((Unk_func_00050BD4_0*) &arg0->unk2C, arg2, 0x10, 0);
    arg0->unk2C = &D_0005DAD0;
}

void func_00051B68(struct Unk_func_00051B68_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_0005DAA0;
    func_00051824((Unk_func_00051824_0*) (((u8 *)arg0 + 4)), arg2);
    func_00050CDC((Unk_func_00050CDC_0*) &arg0->unk14, arg1, arg2, 0x10, 0);
    arg0->unk14 = &D_0005DAD0;
    func_00050BD4((Unk_func_00050BD4_0*) &arg0->unk2C, arg2, 0x10, 0);
    arg0->unk2C = &D_0005DAD0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_03F278", func_00051BF4);
#endif
