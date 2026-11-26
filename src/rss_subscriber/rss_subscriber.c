/* cflags: -Os */
#include "common.h"
#include "rss_subscriber_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/rss_subscriber", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00000030);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_000000B8);

INCLUDE_ASM("nonmatchings/rss_subscriber", module_start);

s32 module_stop(void) {
    func_00003278();
    return 0;
}

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00000168);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/rss_subscriber", D_0000375C);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003760);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003774);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_0000378C);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000037A0);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000037B8);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000037C4);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000037DC);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000037F0);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003810);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_0000382C);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_0000383C);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000038B4);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000038BC);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003978);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000039A4);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000039A8);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000039B8);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000039C8_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000039C8_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000039C8_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003960);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003A24);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003970);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003974);
#endif

INCLUDE_ASM("nonmatchings/rss_subscriber", func_0000018C);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00000218);

s32 func_0000028C(void) {
    func_00000818((s32) &D_00003DB0);
    return 0;
}

INCLUDE_ASM("nonmatchings/rss_subscriber", func_000002B0);

void func_0000032C(void) {
    func_000002B0(1, 0xFFFF);
}

void func_0000034C(void) {
    func_000002B0(0, 0xFFFF);
}

#if FW_VERSION < 282 || FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/rss_subscriber", func_0000036C);
#else
void func_0000036C(struct Unk_func_0000036C_0 *arg0) {
    arg0->unk0 = &D_00003D20;
    arg0->unk4 = sceKernelCreateSema(&D_000039F4, 0x100U, 1, 1, NULL);
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    func_000027A4((u8 *)arg0 + 0x1C, 0);
    arg0->unk20 = 0;
    arg0->unk24 = 0;
    arg0->unk28 = 0;
    memset((u8 *)arg0 + 0x2C, 0, 0x100);
    arg0->unk12C = 0;
    memset((u8 *)arg0 + 0x130, 0, 0x304);
    arg0->unk434 = 0;
    memset((u8 *)arg0 + 0x438, 0, 0x400);
    arg0->unk838 = 0;
    memset((u8 *)arg0 + 0x83C, 0, 0x304);
    arg0->unkB40 = 0;
    memset((u8 *)arg0 + 0xB44, 0, 0x100);
    arg0->unkC44 = 0;
    arg0->unkC48 = 0;
}
#endif

#if FW_VERSION < 282 || FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/rss_subscriber", func_0000044C);
#else
void func_0000044C(struct Unk_func_0000044C_0 *arg0) {
    arg0->unk0 = &D_00003D20;
    arg0->unk4 = sceKernelCreateSema(&D_000039F4, 0x100U, 1, 1, NULL);
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    func_000027A4((u8 *)arg0 + 0x1C, 0);
    arg0->unk20 = 0;
    arg0->unk24 = 0;
    arg0->unk28 = 0;
    memset((u8 *)arg0 + 0x2C, 0, 0x100);
    arg0->unk12C = 0;
    memset((u8 *)arg0 + 0x130, 0, 0x304);
    arg0->unk434 = 0;
    memset((u8 *)arg0 + 0x438, 0, 0x400);
    arg0->unk838 = 0;
    memset((u8 *)arg0 + 0x83C, 0, 0x304);
    arg0->unkB40 = 0;
    memset((u8 *)arg0 + 0xB44, 0, 0x100);
    arg0->unkC44 = 0;
    arg0->unkC48 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/rss_subscriber", func_0000052C);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00000594);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000039A0);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000039C8);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_000039F4);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_0000066C);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00000818);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_000008F0);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003A2C);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003A4C);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003A70);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003A90);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003AA4);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003AB8);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003AD8);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003AF4);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003B0C);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003B38);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003B60);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003B88);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003BB0);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003B70);
#endif

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003BD8);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003C08);
#endif

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003C30);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003C5C);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003C8C);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003CA8);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003C9C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003CDC);
#endif

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003CE8);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003CF0);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003CF4);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_000009F4);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00000B0C);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00000B88);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00000C78);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00000DCC);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00001000);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00001228);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_0000130C);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_000013CC);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00001670);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/rss_subscriber", func_000016AC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/rss_subscriber", func_000016A0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/rss_subscriber", func_000016A8);
#endif

INCLUDE_ASM("nonmatchings/rss_subscriber", func_000016E0);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00001738);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00001758);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_000017C0);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00001B18);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/rss_subscriber", func_00001B80);
#else
INCLUDE_ASM("nonmatchings/rss_subscriber", func_00001BA0);
#endif

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00001FF8);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_000020E0);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002388);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_000023E8);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_000026A8);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_0000270C);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_0000273C);

void func_00002784(void) {
    func_0000273C(1, 0xFFFF);
}

void func_000027A4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00002A58();
}

#if FW_VERSION >= 350
void func_000027C4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_C1B0AA0D(arg1);
    }
    func_00002A78(arg0, arg1, var_v0);
}
#else
void func_000027C4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_00002A78(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002814);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_0000288C);

#if FW_VERSION >= 350
void func_000028BC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_5E4447F6(arg1);
    }
    func_00002B24(arg0, arg1, var_v0);
}
#else
void func_000028BC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_wcslen(arg1);
    }
    func_00002B24(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/rss_subscriber", func_0000290C);

#if FW_VERSION >= 350
void func_00002948(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_F5001144(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_F5001144(var_a0);
}
#else
void func_00002948(void **arg0) {
    void *temp_s0;
    struct Unk_func_00002948_var_a0 *var_a0;
    struct Unk_func_00002948_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}
#endif

INCLUDE_ASM("nonmatchings/rss_subscriber", func_000029A0);

void func_00002A20(void) {
    func_00002BD8();
}

void func_00002A3C(void) {
    func_00002C30();
}

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002A58);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002A78);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002B24);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002BD8);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002C30);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002C5C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002D28);
#else
void func_00002D28(M2C_UNK **arg0) {
    *arg0 = &D_00003D40;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 350
s32 func_00002D50(void) {
    return scePaf_723D0C80() != 0;
}
#else
s32 func_00002D50(void) {
    return Job_isCanceled() != 0;
}
#endif

void func_00002D70(M2C_UNK **arg0) {
    *arg0 = &D_00003D30;
}

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002D80);
#else
void func_00002D80(M2C_UNK **arg0) {
    *arg0 = &D_00003D30;
    _ZdlPv();
}
#endif

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002DB0);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002E28);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00002F80);

INCLUDE_ASM("nonmatchings/rss_subscriber", func_00003220);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/rss_subscriber", func_00003278);
#endif

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003D20);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003D30);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003D40);

INCLUDE_RODATA("nonmatchings/rss_subscriber", D_00003D48);
