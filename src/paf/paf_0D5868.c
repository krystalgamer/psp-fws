#include "common.h"
#include "paf_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D5868);
#else
void func_000D5868(struct Unk_func_000D5868_0 *arg0) {
    arg0->unk0 = &D_00199A10;
    scePaf_1B043852((u8 *)arg0 + 0x28);
    sceKernelDeleteSema(arg0->unk24);
    func_000D58C4((s32) ((u8 *)arg0 + 0x14));
    func_000D58C4((s32) ((u8 *)arg0 + 8));
    scePaf_E977B833((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D58C4);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199840);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199844);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199848);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_001998A8);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_001998D8);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_001998E0);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199960);
#endif

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_001999F0);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_001999FC);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199A10);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0D5868", func_000CEFE4);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0D5868", func_0007C0CC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D591C);
#endif

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D59E8);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0D5868", func_000CF1C0);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0D5868", func_0007C264);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D5AF8);
#endif

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D5CB0);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D5CE4);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D5CF0);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D5CFC);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D5D08);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D5D14);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D5ED4);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D5F18);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199A7C);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199A80);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199A84);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199A88);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199A8C);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199A90);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199A94);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199A98);

INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199A9C);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_001996B0);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_001984F8);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00197528);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_001938D8);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00191DC0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_0018DD30);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_0018D420);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_0011C2E0);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00119AE0);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_0011B960);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_0012DFF0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0D5868", D_00199AA0);
#endif

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D5F3C);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D5FD4);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D61B0);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D61E8);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D6228);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D6260);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D62D4);

INCLUDE_ASM("nonmatchings/paf_0D5868", func_000D6338);
