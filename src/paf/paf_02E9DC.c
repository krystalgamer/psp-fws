/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

s32 *func_0002E9DC(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0002EB64(arg1, arg2);
    return arg0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002C3B0);
#else
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002EA14);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002EAC8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002EB0C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002EB64);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031F34);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00032B2C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00032D90);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00032EC8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00032F48);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033110);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033164);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002C514);
#endif

#if FW_VERSION < 200
s32 *func_0002C514(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = func_0002EB64(arg1, arg2);
    return arg0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002C54C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002C590);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00032248);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002C718);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002C8EC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002C95C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002CB40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002CCB4);
#endif

#if FW_VERSION == 100
void func_0002CCB4(M2C_UNK **arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_a2;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg1, M2C_UNK **, 8);
    temp_a2 = M2C_FIELD(arg1, M2C_UNK **, 0);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK **, 4);
    M2C_FIELD(arg1, M2C_UNK **, 0) = temp_v1;
    M2C_FIELD(temp_v1, M2C_UNK **, 4) = arg1;
    M2C_FIELD(arg1, M2C_UNK **, 8) = temp_v0;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    if (temp_a2 == NULL) {
        *arg0 = temp_v1;
    } else if (M2C_FIELD(temp_a2, M2C_UNK **, 4) == arg1) {
        M2C_FIELD(temp_a2, M2C_UNK **, 4) = temp_v1;
    } else {
        M2C_FIELD(temp_a2, M2C_UNK **, 8) = temp_v1;
    }
    M2C_FIELD(temp_v1, M2C_UNK **, 0) = temp_a2;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002CCF4);
#endif

#if FW_VERSION == 100
void func_0002CCF4(M2C_UNK **arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_a2;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg1, M2C_UNK **, 4);
    temp_a2 = M2C_FIELD(arg1, M2C_UNK **, 0);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK **, 8);
    M2C_FIELD(arg1, M2C_UNK **, 0) = temp_v1;
    M2C_FIELD(arg1, M2C_UNK **, 4) = temp_v0;
    M2C_FIELD(temp_v1, M2C_UNK **, 8) = arg1;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    if (temp_a2 == NULL) {
        *arg0 = temp_v1;
    } else if (M2C_FIELD(temp_a2, M2C_UNK **, 4) == arg1) {
        M2C_FIELD(temp_a2, M2C_UNK **, 4) = temp_v1;
    } else {
        M2C_FIELD(temp_a2, M2C_UNK **, 8) = temp_v1;
    }
    M2C_FIELD(temp_v1, M2C_UNK **, 0) = temp_a2;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002EBC0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002ED58);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002EFBC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F0F4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F174);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F33C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F390);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F3E4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F434);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F508);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F584);

s32 func_0002F598(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if ((s32) arg1 != (s32) &D_001704F0) {
        var_a2 = _ZNK10PSJSObject10IsSubClassEPKt(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0002F5CC(void) {
    return &D_001704F0;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F5D8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F640);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F680);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F6C0);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001703D8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001703EC);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0017040C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0017041C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0017043C);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00165D08);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170458);
#endif

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001704B8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001704C0);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001704F0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F7FC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002FAB8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002FB08);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002FBD0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002FC40);

s32 func_0002FC54(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if ((s32) arg1 != (s32) &D_001705A0) {
        var_a2 = _ZNK10PSJSObject10IsSubClassEPKt(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0002FC88(void) {
    return &D_001705A0;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002FC94);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002FCE0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002FD58);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002FD98);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002FDD8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170520);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0017052C);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00165DE8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170538);
#endif

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170570);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001705A0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002FF30);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003002C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00030128);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000302DC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003045C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00030648);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00030890);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003401C);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002E468);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00030B08);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00030C60);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00030EB0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000310F0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031234);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031378);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000314BC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031600);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003170C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031784);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031878);

void func_0003191C(struct Unk_func_0003191C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk8;
    if (temp_v0 == 0) {

    } else {
        _Z9PSJS_FreePv(temp_v0);
    }
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN15psjsstring_impl6DecRefEv);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZNK15psjsstring_impl7compareEPKS_);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034F34);
#endif

#if FW_VERSION == 282
void psjsstring_impl::DecRef() {
    s32 *arg0 = (s32 *) this;
    s32 temp_v0;

    temp_v0 = *arg0 - 1;
    *arg0 = temp_v0;
    if (temp_v0 > 0) {

    } else {
        func_0003191C((Unk_func_0003191C_0* ) arg0);
        func_00031CDC(arg0);
    }
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZNK15psjsstring_impl7compareEPKS_);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031A20);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN10psjsstringC1EPKt);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031C1C);

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F5B8);
#endif

void func_00031CC0(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031CDC);

void func_00031CF8(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_00031D14(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}

void func_00031D30(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_00031D4C(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}

void func_00031D68(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_00031D84(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031DA0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031DA8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031DB0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031DD4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031DFC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031E44);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031EA8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001705E8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001705FC);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0017060C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0017061C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170634);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170644);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170654);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0017066C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170688);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170694);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001706A8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001706C0);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001706E4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001706FC);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00165FD0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170720);
#endif

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170818);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170848);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031F0C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031F3C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031FA4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170850);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170854);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170858);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0017085C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003200C);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003555C);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002F9B4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00032048);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", _Z11PSJS_Mallocj);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _Z9PSJS_FreePv);

void func_00032A0C(void) {
    func_000331AC();
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContext);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContext13PSJSValueType);
#endif

#if FW_VERSION == 282
s32 _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContext13PSJSValueType(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_000331AC(temp_v0 + 0x10);
        var_v1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            M2C_FIELD(temp_v0_2, s32 *, 4) = arg1;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION < 200
s32 func_00030334(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_000331AC(temp_v0 + 8);
        var_v1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            M2C_FIELD(temp_v0_2, s32 *, 4) = arg1;
        }
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContextb);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContexti);
#endif

#if FW_VERSION < 200
s32 _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContexti(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_000331AC(temp_v0 + 8);
        var_v1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            M2C_FIELD(var_v1, s32 *, 4) = 3;
            M2C_FIELD(var_v1, s32 *, 8) = arg1;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
s32 _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContexti(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_000331AC(temp_v0 + 0x10);
        var_v1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            M2C_FIELD(var_v1, s32 *, 4) = 3;
            M2C_FIELD(var_v1, s32 *, 8) = arg1;
        }
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContextf);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContextRK10psjsstring);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContextRK10psjsvector);
#endif

#if FW_VERSION == 282
s32 _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContextRK10psjsvector(s32 *arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;

    var_s1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_000331AC(temp_v0 + 0x10);
        var_s1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            temp_v0_3 = func_0003AEB0(*arg0 + 8, arg1);
            M2C_FIELD(var_s1, s32 *, 8) = temp_v0_3;
            if (temp_v0_3 != 0) {
                M2C_FIELD(var_s1, s32 *, 4) = 9;
            }
        }
    }
    return var_s1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContextP10PSJSObject);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00030598);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166140);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001705FC_v280);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170628);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170654_v280);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F73C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F768_v271);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F794);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016EFBC);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016EFE8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F014);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016BB34);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016BB60);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016BB8C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016A034);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016A060);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016A08C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001660AC);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001660D8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166104);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016616C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166198);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001661C4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000363E0);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00126ACC);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00114DBC);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00114DE4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00114E0C);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001125BC);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001125E4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0011260C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0011443C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00114464);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0011448C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00126AF4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00126B1C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00126B44);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00030728);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00032D28);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00032ECC);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN13PSJSValueImpl6DecRefEv);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000330B8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000331AC);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036744);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00030A94);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033230);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033348);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN9PSJSValueaSERKS_);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN9PSJSValueaSEP13PSJSValueImpl);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170890);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001708BC);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001708E8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170914);
#endif

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170940);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001661F4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170944);
#endif

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170B44);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170B58);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170B64);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170B74);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170B84);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170B8C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170BA0);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170BB4);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166474);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170BC4);
#endif

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170BD4);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170BE4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166494);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00126C00);
#endif

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170C10);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170C1C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170C28);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170C54);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170C80);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170CAC);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170CD8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170D04);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001664D8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166504);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166530);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016A424);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016655C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166588);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001665B4);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00126C40);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00126C68);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00126C90);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00126CB8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00126CE0);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00126D08);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033468);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033A88);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033CF8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZNK9PSJSValue7ToInt32Ev);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZNK9PSJSValue8ToUint32Ev);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034170);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZNK9PSJSValue7ToFloatEv);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016666C);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034394);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037924);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037960);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN9PSJSValue16TypeToPsjsstringE13PSJSValueType);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037BC8);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031C84);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031CF4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034410);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003444C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN9PSJSValue16TypeToPsjsstringE13PSJSValueType);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000346B4);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZNK9PSJSValue8ToStringEv);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZNK9PSJSValue6ToBoolEv);

#if FW_VERSION < 200
s32 func_00031F38(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031F40);

s32 func_00031F68(void) {
    return 1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00031F70);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00032134);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034960);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZNK9PSJSValue8ToNumberERK11PSJSContext);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034D44);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000383D8);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00032428);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034EC4);
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN9PSJSValue12SetPrototypeERKS_);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZNK9PSJSValue7IsClassEPKt);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZNK9PSJSValue10IsSubClassEPKt);
#else
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000324B4);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZNK9PSJSValue7GetAttrERK11PSJSContextRK8psjsnamePS_);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN9PSJSValue7SetAttrERK8psjsnameRKS_);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000351A0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000352C0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035904);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035AB8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN9PSJSValue6AssignERK11PSJSContextP13PSJSValueImpl);

void func_00035FFC(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_00036018(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}

void func_00036034(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_00036050(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}

void _ZN9PSJSValuenaEj(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void _ZN9PSJSValuedaEPv(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN9PSJSValuenwEjPv);
#else
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000334DC);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000360AC);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036088);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003609C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000360D0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000360DC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036148);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036188);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000361C8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036270);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036694);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036790);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170AD0);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170AE4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170B04);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170B14);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016FC10);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016FC24);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016FC44);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016FC54);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F490);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F4A4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F4C4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F4D4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166740);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003688C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000368DC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000395C8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039608);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN10psjsvectorC1EjPf);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000397F8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN10psjsvectorC1EjPfPNS_12ELEMENT_TYPEE);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039BB0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039BE4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039C58);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039CD8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039D4C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039EEC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A03C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A11C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A2BC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A40C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A4EC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A68C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A7DC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A8BC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A9BC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003AB20);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003AC00);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003AD00);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003AED0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003AFB0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B090);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B128);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B20C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B2B0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B394);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B438);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B4D8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B5EC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B688);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B79C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B838);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B998);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B824);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B8D0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BA1C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BB7C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BCEC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BE10);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BF24);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C038);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C15C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C2F0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C440);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C58C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C680);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C7D8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C8B8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C998);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003CA98);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003CB78);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003CC58);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016660C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016661C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016662C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016663C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016666C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BA84);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BB34);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BBE4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BD5C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BE8C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003D218);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003D5A0);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016660C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016661C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016662C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016663C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F62C);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016FDC8);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F648_v270);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170F78);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F684);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016666C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BF44);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BFAC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C014);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C0CC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C0DC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C130);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C184);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C1A0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B02C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0002231C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C1BC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C1D0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C204);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B250);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B2E0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B378);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B3E8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B45C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B4FC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00022748);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000227F4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B6B4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B734);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B844);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B874);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B888);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B8BC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003DAB4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B930);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003DB20);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003DB60);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B9E4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BA34);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BAD4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BB30);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BDD8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BE20);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C210);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C2B8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C6F4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C7F0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C140);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C3F8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C8E8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003CB28);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003CDCC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003D0B4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003D404);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003D78C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003DE9C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003E600);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003E92C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003E990);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00025C54);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EAB4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EB70);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EB84);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EBB8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EBC4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016C0E4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016C0F8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F704);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F714);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016C118);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F728);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016FEB4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016FEC4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016FED0);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F734_v270);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F744_v270);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F750_v270);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F75C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F768);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F778);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016C128);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F860);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001261A0);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F8A0);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F8AC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EC70);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003ED6C);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170F34);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170F48);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170F58);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170074_v271);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170088);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170098);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F8F4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F908);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F918);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016F950);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016A5E4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016A5F8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016A618);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0016A628);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001665F4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166608);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166628);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166638);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001666B4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001666C8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001666E8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001666F8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00166740);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C8EC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C93C);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000334EC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000360B4);

s32 func_000360C8(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if ((s32) arg1 != (s32) &D_00170D48) {
        var_a2 = _ZNK10PSJSObject10IsSubClassEPKt(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_000360FC(void) {
    return &D_00170D48;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036108);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036174);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000361B4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000361F4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003629C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170D48);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000366C0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000367BC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000368B8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036908);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000369A0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN10psjsvectorC1EjPf);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036B90);

INCLUDE_ASM("nonmatchings/paf_02E9DC", _ZN10psjsvectorC1EjPfPNS_12ELEMENT_TYPEE);

void func_00036F48(struct Unk_func_00036F48_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk14;
    if (temp_v0 == 0) {

    } else {
        func_0003AF68(temp_v0, arg0);
    }
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036F7C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036FF0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037070);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000370E4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037284);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000373D4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000374B4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037654);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000377A4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037884);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037A24);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037B74);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037C54);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037D54);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037EB8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00037F98);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038098);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038268);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038348);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038428);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000384C0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000385A4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038648);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003872C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170D90);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170DA4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170DC4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170DD4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170E20);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000387D0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038870);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038984);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038A20);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038B34);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038BD0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038D30);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038E1C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00038EC8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039014);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039174);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000392E4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039408);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003951C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039630);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039754);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000398E8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039A38);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039B84);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039C78);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039DD0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039EB0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00039F90);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A090);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A170);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A250);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A350);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A400);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A4B0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A628);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A758);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003A810);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003AB98);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003ADE0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003AE48);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003AEB0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003AF68);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003AF78);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003AFCC);

void func_0003B020(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_0003B03C(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B058);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B140);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B228);

s32 func_0003B23C(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if ((s32) arg1 != (s32) &D_00170F2C) {
        var_a2 = _ZNK10PSJSObject10IsSubClassEPKt(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0003B270(void) {
    return &D_001703B0;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B27C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B30C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B3A4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B414);

s32 func_0003B488(struct Unk_func_0003B488_0 *arg0, s32 arg1, s32 *arg2) {
    struct Unk_func_0003B488_temp_s1 *temp_s1;

    temp_s1 = (Unk_func_0003B488_temp_s1*) &arg0->unk20;
    if (arg1 >= temp_s1->unk4) {
        func_000278D0(temp_s1, arg1 + 1);
    }
    if (arg1 >= 0) {
        if (arg1 >= temp_s1->unk4) {

        } else {
            _ZN9PSJSValue6AssignERK11PSJSContextP13PSJSValueImpl(arg0->unk20 + (arg1 * 4), arg0->unk18, *arg2);
        }
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B528);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B584);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B630);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B6E0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B760);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B844);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B8A0);

s32 func_0003B8B4(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if ((s32) arg1 != (s32) &D_00170F78) {
        var_a2 = _ZNK10PSJSObject10IsSubClassEPKt(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0003B8E8(void) {
    return &D_00170F78;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B8F4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B95C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003B9D0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BA10);

s32 func_0003BA60(struct Unk_func_0003BA60_0 *arg0, s32 arg1, s32 *arg2) {
    struct Unk_func_0003BA60_temp_s1 *temp_s1;

    temp_s1 = (Unk_func_0003BA60_temp_s1*) &arg0->unk1C;
    if (arg1 >= temp_s1->unk4) {
        func_000278D0(temp_s1, arg1 + 1);
    }
    if (arg1 >= 0) {
        if (arg1 >= temp_s1->unk4) {

        } else {
            _ZN9PSJSValue6AssignERK11PSJSContextP13PSJSValueImpl(arg0->unk1C + (arg1 * 4), arg0->unk18, *arg2);
        }
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BB00);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BB5C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BDD8);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170ECC);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170EDC);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170EEC);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170EFC);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170F2C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170F48);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170F78);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170F84);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BE4C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003BF74);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C070);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C16C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C424);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003C914);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003CB54);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003CDF8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003D0E0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003D430);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003D7B8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003DEC8);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003E62C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003E958);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003E9BC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EA84);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EAE0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EB9C);

s32 func_0003EBB0(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if ((s32) arg1 != (s32) &D_00171190) {
        var_a2 = _ZNK10PSJSObject10IsSubClassEPKt(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0003EBE4(void) {
    return &D_00171190;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EBF0);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170FD0);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00170FE4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171004);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171014);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171020);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171028);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171034);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171044);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171050);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_0017105C);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171068);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171078);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171088);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171160);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171190);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001711A0);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001711AC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EC9C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003ED98);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EE94);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003EEE4);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_DOMGetNodeTable);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_DOMGetNodeFirstChild);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000336BC);
#else
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003F0BC);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_DOMGetNodeNext);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_DOMGetNodeChildByID);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_DOMGetNodeChildByPos);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033634);
#endif

#if FW_VERSION < 151
s32 func_000339F0(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0x13) << 0x18) | ((M2C_FIELD(arg0, u8 *, 0x12) << 0x10) | ((M2C_FIELD(arg0, u8 *, 0x11) << 8) | M2C_FIELD(arg0, u8 *, 0x10)));
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003F2EC);
#endif

s32 PAF_Resource_DOMGetNodeType(struct Unk_scePaf_D6CD39AF_0 *arg0) {
    return (arg0->unk1 << 8) | arg0->unk0;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_DOMGetNodeID);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_DOMGetNodeData);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003F340);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033ADC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033B24);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_GetWidgetNodeByID);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000345D0);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003375C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033B9C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_SetLocale);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003F334);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_GetFileType);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_GetScript);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003F454);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033784);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000337EC);
#endif

#if FW_VERSION < 151
s32 func_00033B6C(void *arg0) {
    return ((M2C_FIELD(arg0, u8 *, 0xF) << 0x18) | ((M2C_FIELD(arg0, u8 *, 0xE) << 0x10) | ((M2C_FIELD(arg0, u8 *, 0xD) << 8) | M2C_FIELD(arg0, u8 *, 0xC)))) != 0;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033B9C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033BE4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033C38);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033C8C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00033D50);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003F348);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003F374);

s32 PAF_Resource_GetWidgetNodeByID(s32 arg0, s32 arg1, s32 *arg2) {
    void *sp0;
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00040CB4(arg0, arg1, func_0003F424(arg0), &sp0, 0x800);
    var_v1 = 0;
    if (temp_v0 == 0) {
        *arg2 = sp0;
    } else {
        *arg2 = 0;
        var_v1 = temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003F414);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003F424);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_SetLocale);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_GetFileType);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_GetScript);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003F55C);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_GetWString);

void func_0003F7CC(s32 arg0, s32 arg1, s32 arg2) {
    func_0004051C(arg0, arg1, 0x400, arg2, 0);
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003F7F0);

void func_0003F8BC(s32 arg0, s32 arg1, s32 arg2) {
    func_0004051C(arg0, arg1, 0x500, arg2, 0);
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003F8E0);

void func_0003FA44(s32 arg0, s32 arg1, s32 arg2) {
    func_0004051C(arg0, arg1, 0x600, arg2, 0);
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003FA68);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034438);
#else
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003FB34);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003FBFC);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003FC88);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003FD14);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_GetPageNodeByID);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_ResolveRefNode);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034880);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034954);
#else
INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001711F4);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171208);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171218);

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_00171250);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_ResolveRefNode);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003FF04);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_ResolveRefString);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_ResolveRefWString);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034608);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035040);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034764);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034F6C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035040);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035188);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0004032C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000403C0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00040488);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0004051C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00040670);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000349F4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000407B4);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000354FC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00040718);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000408BC);
#endif

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00040B2C);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034C08);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035744);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000364B0);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00034F20);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_Load);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_Unload);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000411D0);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00041278);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036710);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003594C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035B2C);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035D24);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035DEC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035E4C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035EB8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00040B9C);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00040CB4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00040EB4);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_Load);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_Unload);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_LoadMem);

INCLUDE_ASM("nonmatchings/paf_02E9DC", PAF_Resource_UnloadMem);
#endif

s32 func_00041424(struct Unk_func_00041424_0 *arg0) {
    s32 temp_v0;
    s32 var_a0;

    var_a0 = -0x78;
    if (arg0->unk0 == 1) {
        temp_v0 = arg0->unk4;
        if (temp_v0 != -1) {
            sceIoClose(temp_v0);
        }
        arg0->unk4 = -1;
        var_a0 = 0;
    }
    return var_a0;
}

INCLUDE_RODATA("nonmatchings/paf_02E9DC", D_001712D0);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00041340);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035F3C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00041484);
#endif

s32 func_00041960(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00041968);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00041A04);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_0003651C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00035BAC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_000375E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00036828);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00041C54);

INCLUDE_ASM("nonmatchings/paf_02E9DC", func_00041EC0);
#endif
