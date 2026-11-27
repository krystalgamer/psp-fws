#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
void func_0012038C(s32 arg0) {
    sceCccIsValidUCS4(arg0);
}

INCLUDE_ASM("nonmatchings/paf_12038C", func_001203A8);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccDecodeUTF16);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccEncodeUTF16);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccDecodeUTF8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120544);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccUTF8toUTF16);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccUTF16toUTF8);

s32 func_001207C0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A7DD8;
    D_001A7DD8 = arg0;
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccSetTable);

void scePaf_8D3EAEA3(s32 arg0) {
    D_001A7DDC = arg0;
}

void scePaf_C8E7B03F(s32 arg0) {
    D_001A7DE0 = arg0;
}

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccSetCTable);

INCLUDE_ASM("nonmatchings/paf_12038C", scePaf_15939BB8);

INCLUDE_ASM("nonmatchings/paf_12038C", scePaf_8D736C8F);

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/paf_12038C", sceCccStrlenSJIS);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011F274);

INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6CDC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011F374);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccJIStoUCS);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011F49C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011F574);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0012091C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001209AC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120A1C);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccJIStoUCS);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120B44);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120C1C);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/paf_12038C", sceCccSJIStoUTF16);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccUTF16toSJIS);
#endif

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120EB0);

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6C0C);
#endif

#if FW_VERSION < 200
s32 func_000C6C0C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_0013BAB8;
    D_0013BAB8 = arg0;
    return temp_v0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6C1C);
#endif

#if FW_VERSION < 200
s32 func_000C6C1C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_0013BABC;
    D_0013BABC = arg0;
    return temp_v0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
u32 sceCccIsValidUCS4(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6C2C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6C38);
#endif

#if FW_VERSION < 200
s32 func_000C6C38(u32 arg0) {
    s32 cmp_tmp = arg0 > 0xFFFFU;
    return cmp_tmp == 0;
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6C48);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6CDC);
#endif
