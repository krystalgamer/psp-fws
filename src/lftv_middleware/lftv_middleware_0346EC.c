/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000346EC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00034730);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", sceVshLftvMw_E6A8CAC0);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", sceVshLftvMw_D60D6F2D);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000349A8);

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_000562CC);
#endif

#if FW_VERSION < 311
INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_000562E0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_000562F0);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000349B4);

void func_00034B00(struct Unk_func_00034B00_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

void func_00034B0C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_00034B14(void) {
}

void func_00034B1C(void) {
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00034B24);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00034BE0);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00034CFC);

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_00058420);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_00058468);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_000584B0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_000584F0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_000584F4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_000584F8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_000584FC);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00034E08);

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035E64);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035E98);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035024);

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035F40);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000317D0);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000350D0);
#endif

#if FW_VERSION == 303
void func_000350D0(s32 **arg0) {
    *arg0 = &D_00056340;
    func_000354F4((s32) arg0);
    func_00039E1C(arg0);
}
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035108);
#endif

#if FW_VERSION == 303
void func_00035108(s32 **arg0) {
    *arg0 = &D_00056340;
    func_000354F4((s32) arg0);
    func_00039E1C(arg0);
}
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035140);
#endif

#if FW_VERSION == 303
void func_00035140(s32 **arg0) {
    *arg0 = &D_00056340;
    func_000354F4((s32) arg0);
    func_00039E1C(arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036070);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000360DC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036138);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036140);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000361A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000361F8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_0003624C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_0003626C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000362B0);
#else
INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_00056340);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035180);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_00055D18_v282);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_00055D38);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_00056480);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D8C0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D910);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D1F0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D210);
#endif

#if FW_VERSION < 271 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035180);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D238);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D23C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D26C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D294);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D2A8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D2BC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D2E0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D2F4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D308);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D32C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D34C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D374);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D384);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D394);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D3B4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D3E0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D408);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D430);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D450);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D46C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D48C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0346EC", D_0007D4B4);
#endif

#if FW_VERSION < 311
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000354F4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_0003562C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035698);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00031E00);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035740);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000321B0);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00032234);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000323AC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000323C8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_0005228C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035740);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00052858);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035700);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035740);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035AB0);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_0003636C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036374);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036384_v311);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036390);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000363A0);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000363B0);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000363D8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036428);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036478);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000364B4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000364F0);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036534);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036548);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036638);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000366B4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036718);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_0003676C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000367DC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036814);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036830);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000368A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036920);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036928);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000369A8);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035B34);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035CAC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035CC8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035DC8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035E90);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035F24);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035F78);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00035FF0);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036EC4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036F94);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000370D0);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000371B4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_0003736C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00037388);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000374A8);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036048);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000360A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036100);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036158);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000361B0);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036210);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000362BC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036384);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_0003643C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_000364B8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_0003659C);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00037C68);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036788);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0346EC", func_00036988);
#endif
