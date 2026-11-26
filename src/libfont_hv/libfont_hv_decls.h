#ifndef LIBFONT_HV_DECLS_H
#define LIBFONT_HV_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00002C74_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x24];
    s32 unk2C;
};

struct Unk_func_00002C74_temp_a0 {
    u8 pad0[0x48];
    struct Unk_func_00002C74_temp_a1 *unk48;
};

struct Unk_func_00002C74_temp_a1 {
    u8 pad0[0x34];
    u16 unk34;
};

struct Unk_func_00002C74_temp_s0 {
    u8 unk0;
    u8 pad1[0x3];
    struct Unk_func_00002C74_temp_a0 *unk4;
};

struct Unk_func_00004204_0 {
    u8 pad0[0x1E4];
    s32 unk1E4;
    u16 unk1E8;
    u8 unk1EA;
};

struct Unk_func_00004254_0 {
    u8 pad0[0x1EC];
    s32 unk1EC;
    u16 unk1F0;
    u8 unk1F2;
};

extern M2C_UNK D_00009F31;
extern M2C_UNK D_0000BB05;
extern M2C_UNK D_0000BB45;
extern s32 D_0000BB90;
extern s32 D_0000BB94;
extern s32 D_0000BBD0;
extern s32 D_0000BBD4;

s32 func_00000214(u8 *arg0);
s32 func_00000244(void);
s32 func_00002BF8(s32);
s32 func_00002C74(struct Unk_func_00002C74_0 *arg0);
s32 func_00004204(struct Unk_func_00004204_0 *arg0, s32 *arg1);
s32 func_00004254(struct Unk_func_00004254_0 *arg0, s32 *arg1);
s32 func_00006D0C(void);
s32 func_00009234(s32);
u8 *func_00009750(u8 *arg0, u8 *arg1, s32 arg2);
u8 *func_00009FE4(u8 *arg0, u8 *arg1);
s32 module_start(void);
s32 module_stop(void);
void sceRegCloseCategory(void);
void sceRegFlushCategory(void);
void sceRegSetKeyValue(void);
void sceRegOpenCategory(void);
void sceRegGetKeyValue(void);
void sceRegGetKeysNum(void);
void sceRegGetKeys(void);
void sceRegRemoveKey(void);
void sceRegFlushRegistry(void);
void sceRegRemoveCategory(void);
void sceRegCreateKey(void);
void sceRegOpenRegistry(void);
void sceRegExit(void);
void sceRegGetKeyInfo(void);
void sceRegRemoveRegistry(void);
void sceRegCloseRegistry(void);

#endif
