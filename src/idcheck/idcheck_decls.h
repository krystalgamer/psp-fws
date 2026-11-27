#ifndef IDCHECK_DECLS_H
#define IDCHECK_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_000009F0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00000A08_0 {
    u8 pad0[0x4];
    s32 unk4;
};


s32 func_00000428(s32, s32);
void func_000006D0(s32 arg0);
s32 func_000006EC(void);
s32 func_000006F8(void);
void func_00000704(void);
s32 func_0000070C(void);
s32 func_00000718(void);
s32 func_00000724(void);
void func_00000978(s32 arg0);
void func_000009AC(s32 arg0);
s32 func_000009E0(void);
s32 func_000009E8(void);
s32 func_000009F0(struct Unk_func_000009F0_0 *arg0);
s32 func_00000A08(struct Unk_func_00000A08_0 *arg0);
s32 func_00000AB8(s32, s32);
s32 module_bootstart(void);

#endif
