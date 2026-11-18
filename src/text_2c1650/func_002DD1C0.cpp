#include "common.h"

extern "C" {
void *func_002D2BC0(u32);
void *memcpy(void *, const void *, u32);
}

struct unk_func_002DD1C0_0 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    char *unk_0C;

    unk_func_002DD1C0_0 *unk_dup(const u32 &n);
};

static inline const u32 &unk_min(const u32 &a, const u32 &b) {
    return b < a ? b : a;
}

static inline unk_func_002DD1C0_0 *unk_new(const u32 &n) {
    unk_func_002DD1C0_0 *p;
    unk_func_002DD1C0_0 *volatile q;
    u32 c;

    p = (unk_func_002DD1C0_0 *)func_002D2BC0(0x10);
    if (p != NULL) {
        q = p;
        p->unk_04 = n + 3 - (n & 3);
        q->unk_08 = 1;
        c = q->unk_04 + 1;
        q->unk_0C = c ? (char *)func_002D2BC0(c) : 0;
    }
    return p;
}

inline unk_func_002DD1C0_0 *unk_func_002DD1C0_0::unk_dup(const u32 &n) {
    unk_func_002DD1C0_0 *p;

    if (unk_08 < 2) {
        return this;
    }
    p = unk_new(n);
    unk_08--;
    memcpy(p->unk_0C, unk_0C, unk_min(n, unk_00) + 1);
    p->unk_00 = unk_00;
    return p;
}

extern "C" {
char *func_002DD1C0(unk_func_002DD1C0_0 **arg0, s32 arg1) {
    u32 n;

    if ((*arg0)->unk_08 > 1) {
        n = (*arg0)->unk_00;
        *arg0 = (*arg0)->unk_dup(n);
    }
    (*arg0)->unk_08 = 0;
    return (*arg0)->unk_0C + arg1;
}
}
