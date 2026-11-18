/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00165FD0_0 {
    u8 pad_00[0x14];
    u32 unk_14;
    u8 pad_18[0x32];
    char unk_4A[1];
} unk_func_00165FD0_0;

typedef struct unk_func_00165FD0_1 {
    u8 pad_00[0x44];
    u32 unk_44;
    u8 pad_48[0x4];
    unk_func_00165FD0_0 *unk_4C;
} unk_func_00165FD0_1;

s32 func_0011DB00(char *, char *);
s32 func_001661B0(unk_func_00165FD0_1 *);
void func_001843B0(unk_func_00165FD0_1 *);
extern char D_00349230[];
extern char D_00349240[];
extern char D_00349250[];
extern unk_func_00165FD0_1 **D_0035FAC0;
extern u32 D_0035FAC4;

static inline s32 func_00165FD0_f(unk_func_00165FD0_0 *q, u32 m) {
    return (q->unk_14 & m) == m;
}

static inline s32 func_00165FD0_a(unk_func_00165FD0_1 *p) {
    unk_func_00165FD0_0 *q;

    if (p && (q = p->unk_4C) && (q->unk_14 & 0x10000) == 0x10000) {
        return 1;
    }
    return 0;
}

static inline s32 func_00165FD0_b(unk_func_00165FD0_1 *p) {
    unk_func_00165FD0_0 *q;

    if (p && (q = p->unk_4C) && func_00165FD0_f(q, 0x10400)) {
        return 1;
    }
    return 0;
}

static inline s32 func_00165FD0_c(unk_func_00165FD0_1 *p) {
    unk_func_00165FD0_0 *q;

    if (p && (q = p->unk_4C) && func_0011DB00(q->unk_4A, D_00349230)) {
        return 1;
    }
    return 0;
}

void func_00165FD0(void) {
    u32 i;
    unk_func_00165FD0_1 *p;

    for (i = 0; i < D_0035FAC4; i++) {
        p = D_0035FAC0[i];
        if (p != 0) {
            p->unk_44 = 0;
            if (func_001661B0(p)) {
                p->unk_44 |= 1;
            }
            if (func_00165FD0_a(p)) {
                p->unk_44 |= 2;
            }
            if (func_00165FD0_b(p)) {
                p->unk_44 |= 4;
            }
            if (func_00165FD0_c(p)) {
                p->unk_44 |= 8;
            }
            func_001843B0(p);
        }
        if (p->unk_4C) {
            if (func_0011DB00(p->unk_4C->unk_4A, D_00349240)) {
                p->unk_44 |= 0x10;
            }
            if (func_0011DB00(p->unk_4C->unk_4A, D_00349250)) {
                p->unk_44 |= 0x20;
            }
        }
    }
}
