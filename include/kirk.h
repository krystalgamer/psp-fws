#ifndef KIRK_H
#define KIRK_H

#include "common.h"

/* KIRK commands, named after the sceDdrdb functions that issue them. */
#define KIRK_CMD_ENCRYPT 0x04
#define KIRK_CMD_DECRYPT 0x07
#define KIRK_CMD_SHA1 0x0B
#define KIRK_CMD_MUL1 0x0C
#define KIRK_CMD_MUL2 0x0D
#define KIRK_CMD_PRNG 0x0E
#define KIRK_CMD_SIGGEN 0x10
#define KIRK_CMD_SIGVRY 0x11
#define KIRK_CMD_CERTVRY 0x12

int sceUtilsBufferCopyWithRange(void *out, int outSize, void *in, int inSize, int cmd);

#endif
