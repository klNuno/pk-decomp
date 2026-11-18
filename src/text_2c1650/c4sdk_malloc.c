#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 unk_04[4];
    s32 unk_08;
    void *unk_0C;
} unk_c4sdk_malloc_0;

typedef struct {
    unk_c4sdk_malloc_0 *unk_00;
} unk_c4sdk_malloc_1;

void func_002CD300(void *, s32);
void func_002D2BB0(void *);
void func_00304B00(void *);

static inline void c4sdk_malloc_rep_dtor(unk_c4sdk_malloc_0 *p) {
    if (p != NULL) {
        func_002D2BB0(p->unk_0C);
        if (p->unk_04 != NULL) {
            func_002CD300(p->unk_04, 0);
        }
    }
}

unk_c4sdk_malloc_1 *c4sdk_malloc(unk_c4sdk_malloc_1 *arg0, s16 arg1) {
    unk_c4sdk_malloc_0 *rep;
    unk_c4sdk_malloc_0 *p;
    s32 n;

    if (arg0 != NULL) {
        rep = arg0->unk_00;
        n = rep->unk_08;
        if (n == 0) {
            rep->unk_08 = n != 0 ? n : 1;
        }
        n = --rep->unk_08;
        arg0->unk_00 = n == 0 ? rep : NULL;
        p = arg0->unk_00;
        if (p != NULL) {
            c4sdk_malloc_rep_dtor(p);
            func_002D2BB0(arg0->unk_00);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
