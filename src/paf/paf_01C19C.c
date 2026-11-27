/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_01C19C", _ZN11PSJSContext22SetHeapIsEmptyCallbackEPFvPvES0_);
#endif

#if FW_VERSION < 200
void _ZN11PSJSContext22SetHeapIsEmptyCallbackEPFvPvES0_(void **arg0, s32 arg1, s32 arg2) {
    void *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        M2C_FIELD(temp_a0, s32 *, 0xAC) = arg2;
        M2C_FIELD(temp_a0, s32 *, 0xA8) = arg1;
    }
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_01C19C", _ZN11PSJSContext17SetStdOutCallbackEPFvPKtiPvES2_);

INCLUDE_ASM("nonmatchings/paf_01C19C", _ZN11PSJSContext17SetStdErrCallbackEPFvPKtiPvES2_);
#endif

#if FW_VERSION == 282
void _ZN11PSJSContext22SetHeapIsEmptyCallbackEPFvPvES0_(void **arg0, s32 arg1, s32 arg2) {
    struct Unk_scePaf_21A0C6E0_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unkB4 = arg2;
        temp_a0->unkB0 = arg1;
    }
}

void _ZN11PSJSContext17SetStdOutCallbackEPFvPKtiPvES2_(void **arg0, s32 arg1, s32 arg2) {
    struct Unk_scePaf_C1579C1D_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unkBC = arg2;
        temp_a0->unkB8 = arg1;
    }
}

void _ZN11PSJSContext17SetStdErrCallbackEPFvPKtiPvES2_(void **arg0, s32 arg1, s32 arg2) {
    struct Unk_scePaf_ED2DF238_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unkC4 = arg2;
        temp_a0->unkC0 = arg1;
    }
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_01C19C", _ZN11PSJSContext22SetExecMonitorCallbackEjPFbbPvES0_);
#endif

#if FW_VERSION == 282
void _ZN11PSJSContext22SetExecMonitorCallbackEjPFbbPvES0_(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct Unk_scePaf_EB5BDCE1_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unkCC = arg3;
        temp_a0->unkD0 = arg1;
        temp_a0->unkC8 = arg2;
    }
}
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_01C19C", _ZN11PSJSContext12SetExceptionERK9PSJSValue);
#endif

INCLUDE_ASM("nonmatchings/paf_01C19C", _Z26PSJS_BuildValueImpl_ObjectRK11PSJSContext);

INCLUDE_ASM("nonmatchings/paf_01C19C", _Z25PSJS_BuildValueImpl_ArrayRK11PSJSContextiP9PSJSValue);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F5D8);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F610);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F648);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F680);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F6B8);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F6E8);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F6FC);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F70C);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F71C);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F734);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F744);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F750);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F764);

INCLUDE_ASM("nonmatchings/paf_01C19C", func_0001C3F8);

INCLUDE_ASM("nonmatchings/paf_01C19C", _Z25PSJS_BuildValueImpl_ErrorRK11PSJSContext19PSJS_EXCEPTION_TYPEPKc);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_01C19C", _Z30PSJS_BuildValueImpl_NativeFuncRK11PSJSContextPFbS1_R9PSJSValue12PSJSCallTypeiPS2_S5_Eh);
#else
INCLUDE_ASM("nonmatchings/paf_01C19C", func_0001BBB4);
#endif

INCLUDE_ASM("nonmatchings/paf_01C19C", _Z31PSJS_BuildValue_TemporaryObjectRK11PSJSContext);

INCLUDE_ASM("nonmatchings/paf_01C19C", _Z33PSJS_RecycleValue_TemporaryObjectRK11PSJSContextR9PSJSValue);

M2C_UNK *func_0001C91C(void) {
    return &D_0016FE80;
}

M2C_UNK *func_0001C928(void) {
    return &D_0016FD08;
}

M2C_UNK *func_0001C934(void) {
    return &D_001705A0;
}

M2C_UNK *_Z20PSJS_ClassType_Arrayv(void) {
    return &D_00170F78;
}

M2C_UNK *_Z25PSJS_ClassType_NativeFuncv(void) {
    return &D_001702B8;
}

M2C_UNK *_Z25PSJS_ClassType_ScriptFuncv(void) {
    return &D_001704F0;
}

M2C_UNK *func_0001C964(void) {
    return &D_0016FC7C;
}

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_01C19C", func_0001C0A0);
#endif

#if FW_VERSION == 282
M2C_UNK *func_0001C970(void) {
    return &D_00170D48;
}
#endif
