/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "peq_decls.h"

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/peq", scePeqProc);
#endif

s32 scePeqEntry(void) {
    return 0;
}

#if FW_VERSION == 100
s32 scePeqInit(u32 *buf, u32 a, u32 b) {
    u32 oldK1 = shiftK1();
    s32 ret;

    if (k1IsUserMode() && (s32)((u32)buf | ((u32)buf + 0x28F)) < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    ret = sceMeWrapper_driver_D1EA3DFD(0x120, buf + 4, a, b);
    buf[1] = (a >> 3) << 1;
    buf[2] = (b >> 3) << 1;
    ret = func_00000238(ret);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 scePeqInit(u32 *buf, u32 a, u32 b) {
    u32 oldK1 = shiftK1();
    s32 ret;

    if (k1IsUserMode() && (s32)((u32)buf | ((u32)buf + 0x28F)) < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    ret = sceMeCore_driver_D1EA3DFD(0x120, buf + 4, a, b);
    buf[1] = (a >> 3) << 1;
    buf[2] = (b >> 3) << 1;
    ret = func_00000238(ret);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/peq", scePeqInit);
#endif

INCLUDE_ASM("nonmatchings/peq", scePEQ_FC45514B);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/peq", scePeqProc);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/peq", func_00000238);
#else
INCLUDE_ASM("nonmatchings/peq", func_00000274);

INCLUDE_ASM("nonmatchings/peq", func_000002BC);

INCLUDE_ASM("nonmatchings/peq", func_000002C8);

INCLUDE_ASM("nonmatchings/peq", func_000002D4);

INCLUDE_ASM("nonmatchings/peq", func_000002E0);
#endif
