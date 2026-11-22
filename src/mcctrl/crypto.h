#ifndef MCCTRL_CRYPTO_H
#define MCCTRL_CRYPTO_H

#include "common.h"

int func_00000E78(void *buf, u32 size);
void func_00000EB4(int arg0, int arg1);
int func_00000EBC(u8 *buf, u32 size);
int func_00000F70(u8 *buf);
int func_00000F8C(u8 *out, u8 *b, u8 *a);
int func_00000FB0(u8 *data, u32 size, u8 *digest);
int func_00000FCC(u8 *cert);
int func_00000FE8(u8 *sig, u8 *pubKey, u8 *data, u32 size);
int func_00001048(u8 *sig, u8 *privKey, u8 *data, u32 size);
int func_000010A8(u8 *src, u8 *dst, u32 size);
int func_000010F0(u8 *src, u8 *dst, u32 size);

#endif
