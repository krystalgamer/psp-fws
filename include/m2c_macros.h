#ifndef M2C_MACROS_H
#define M2C_MACROS_H

/* Definitions for m2c --valid-syntax output that compile to plain C.
 * Constructs m2c can't express (M2C_ERROR, M2C_CARRY, ...) are left undefined
 * on purpose so such code fails to build. */

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;

#define M2C_FIELD(expr, type, offset) (*(type)((u8 *)(expr) + (offset)))
/* Field of a volatile object (keeps the base address in a register). */
#define M2C_VFIELD(expr, type, offset) (((volatile struct { u8 pad[offset]; type x; } *)(expr))->x)
#define M2C_BITWISE(type, expr) ((type)(expr))

#endif
