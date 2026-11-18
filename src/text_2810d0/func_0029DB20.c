#include "common.h"

typedef struct unk_func_0029DB20_0 {
    struct unk_func_0029DB20_0 *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0C;
} unk_func_0029DB20_0;

typedef struct {
    u8 pad_00[0x8];
    unk_func_0029DB20_0 *unk_08;
} unk_func_0029DB20_1;

void *memcpy(void *, const void *, u32);
extern void *(*D_0035F644)(s32);
extern unk_func_0029DB20_1 *D_007B8048[];

void *func_0029DB20(void *arg0, s32 arg1) {
    void *ret = D_0035F644(arg1);
    unk_func_0029DB20_0 *p = D_007B8048[0]->unk_08;
    unk_func_0029DB20_0 *n;

    memcpy(ret, arg0, arg1);
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
