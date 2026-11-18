#include "common.h"

typedef struct unk_func_0029DBE0_0 {
    struct unk_func_0029DBE0_0 *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0C;
} unk_func_0029DBE0_0;

typedef struct {
    u8 pad_00[0x8];
    unk_func_0029DBE0_0 *unk_08;
} unk_func_0029DBE0_1;

extern void *(*D_0035F644)(s32);
extern unk_func_0029DBE0_1 *D_007B8048[];

void *func_0029DBE0(s32 arg0) {
    void *ret = D_0035F644(arg0);
    unk_func_0029DBE0_0 *p = D_007B8048[0]->unk_08;
    unk_func_0029DBE0_0 *n;

    if (p == 0 || p->unk_0C != 0) {
        n = D_0035F644(0x10);
        n->unk_0C = 0;
        n->unk_08 = 0;
        n->unk_04 = ret;
        n->unk_00 = p;
        D_007B8048[0]->unk_08 = n;
    } else if (p->unk_08 == 0) {
        p->unk_08 = ret;
    } else {
        p->unk_0C = ret;
    }
    return ret;
}
