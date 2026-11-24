#ifndef K1_H
#define K1_H

#ifndef M2CTX

/* $k1 holds the caller's privilege level in kernel exports. */
static inline u32 shiftK1(void) {
    u32 oldK1;

    __asm__ __volatile__("move %0, $27\n\tsrl $27, $27, 16" : "=r"(oldK1));
    return oldK1;
}

static inline int k1IsUserMode(void) {
    int ret;

    __asm__ __volatile__("andi %0, $27, 0x18" : "=r"(ret));
    return ret;
}

static inline u32 getK1(void) {
    u32 ret;

    __asm__ __volatile__("move %0, $27" : "=r"(ret));
    return ret;
}

static inline void setK1(u32 newK1) {
    __asm__ __volatile__("move $27, %0" : : "r"(newK1));
}

#endif /* M2CTX */

#endif
