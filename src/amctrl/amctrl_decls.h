#ifndef AMCTRL_DECLS_H
#define AMCTRL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_sceAmctrl_driver_525B8218_temp_v1 {
    u8 pad0[0x4];
    s8 unk4;
};

struct Unk_sceAmctrl_driver_9951C50F_temp_v1 {
    u8 pad0[0x8];
    s8 unk8;
};


s32 module_start(void);
s32 sceAmctrl_driver_525B8218(void *arg0, s32 arg1);
s32 sceAmctrl_driver_9951C50F(void *arg0);

#endif
