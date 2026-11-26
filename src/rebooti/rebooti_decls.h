#ifndef REBOOTI_DECLS_H
#define REBOOTI_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00003BB4_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_00003ED8_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00007EF0_0 {
    u8 pad0[0x10];
    s32 unk10;
};

extern M2C_UNK D_00014F21;

M2C_UNK func_0000004C();
void func_00000768(void);
s32 func_00001CB8(s32 arg0);
void func_00001CCC(s32 arg0, M2C_UNK arg1);
void func_00001CF0(void);
s32 func_00001D2C(s32 arg0);
s32 func_00001D68(s32 arg0);
s32 func_00001DA4();
M2C_UNK *func_00001DB4(void);
M2C_UNK func_00001ED0(M2C_UNK, s32);
M2C_UNK func_00001F44();
M2C_UNK func_00003174();
s32 func_000032CC(s8);
s32 func_000032F8(s8 arg0);
s32 func_000033C4();
void func_000033EC(void);
void func_00003470(void);
void func_0000348C(s8 arg0);
s32 func_000034E8(void);
s32 func_000034F0(void);
void func_00003BB4(struct Unk_func_00003BB4_0 *arg0, s32 arg1);
s32 func_00003ED8(struct Unk_func_00003ED8_0 *arg0);
s32 func_00006114(void);
s32 func_000061C4(void);
M2C_UNK func_000069D4(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_00006E34(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0000724C(s32);
s32 func_00007428();
s32 func_00007D00();
s32 func_00007E4C(void);
s32 func_00007E54(void);
void func_00007E5C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
s32 func_00007EB8(s32 arg0);
void func_00007EF0(struct Unk_func_00007EF0_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00008238(s32 arg0, M2C_UNK arg1);
void func_00008274(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_000083A0(void);
s32 func_000083CC(void);
M2C_UNK func_00009E0C(s32, M2C_UNK);
M2C_UNK func_00009F84(s32, M2C_UNK, M2C_UNK);
M2C_UNK func_0000CE50();
s32 func_0000CE94(void);
M2C_UNK func_0000EA00();
s32 func_0000F734(void);
s32 func_000102AC(s32, s32, s32, s32, s32);
s32 func_000106F0(void);
s32 func_000107E4(void);
void func_000108CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00011ED8(void);
void func_00011EF8(void);
void func_00011F18(void);
void func_00011F38(void);
void func_00011F58(void);
void func_00011F78(void);
void func_00011F98(void);
void func_00011FB8(void);
void func_00011FD8(void);
void func_00012080(void);
void func_000120A0(void);
void func_000120C0(void);
void func_000120E0(void);
void func_00012100(void);
void func_00012120(void);
void func_000121C8(void);
void func_000121E8(void);
void func_00012208(void);
void func_00012228(void);
void func_00012248(void);
void func_00012268(void);
M2C_UNK func_00012310(M2C_UNK, M2C_UNK);
void func_0001233C(void);
void func_0001235C(void);
void func_0001237C(void);
void func_0001239C(void);
void func_000123BC(void);
void func_000123DC(void);
void func_00012484(void);
void func_000124A4(void);
void func_0001254C(void);
void func_0001256C(void);
void func_0001258C(void);
void func_000125AC(void);
void func_000125CC(void);
void func_000125EC(void);
void func_00012624(void);
void func_00012644(void);
M2C_UNK func_000127F8(M2C_UNK, M2C_UNK);
s32 module_bootstart(void);

#endif
