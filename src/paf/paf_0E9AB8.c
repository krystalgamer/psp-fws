#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000E9AB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000E9AF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000E9CA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000E9ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000E9FFC);

s32 func_000EA2D8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    s32 var_v0;

    temp_a4 = arg2 & 0xFF;
    if (arg1 != 0x33) {
        var_v0 = func_000E5428(arg0, arg1, temp_a4);
    } else {
        M2C_FIELD(arg0, s8 *, 0x6C8) = (s8) temp_a4;
        func_000EB590(arg0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EA314);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EA3B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EA44C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EA488);

void func_000EA4DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_000E58B4(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x70)(temp_v0, arg2, arg3);
    }
}

void func_000EA528(s32 arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_000E5B88(arg0, arg1, arg2);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32), 0x74)(temp_v0, arg2);
    }
}

void func_000EA570(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_000E5E5C(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x78)(temp_v0, arg2, arg3);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EA5BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EA604);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EA64C);

s32 scePaf_6141934B(s32 arg0, s32 arg1) {
    s32 var_v0;

    if ((arg1 & 0xFFFF) != 8) {
        var_v0 = func_000E6D80(arg0, arg1);
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x700);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EA74C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EA800);

s32 scePaf_5A99AE67(s32 arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_A72594EF();
    if (temp_v0 >= 0) {
        scePaf_EAA5AFF6(arg0, 0x0100000C);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EAAE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", scePaf_D5F5E68F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EAE3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EB234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EB2C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EB3C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EB508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EB590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EB7D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EBA00);

void func_000EBB58(void) {
    func_000E5558();
}

s32 func_000EBB74(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47DC != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EBBA0(void) {
    return D_001A47DC;
}

s32 scePaf_C6F44EF9(void) {
    return D_001A47DC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", func_000EBBB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0E9AB8", scePaf_D180ACBA);

