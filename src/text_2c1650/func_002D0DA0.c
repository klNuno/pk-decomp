#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s8 *unk_0C;
} unk_func_002D0DA0_0;

typedef struct {
    unk_func_002D0DA0_0 *unk_00;
} unk_func_002D0DA0_1;

void *func_002D2BC0(u32);
extern s8 D_0035F690;

unk_func_002D0DA0_1 *func_002D0DA0(unk_func_002D0DA0_1 *volatile arg0) {
    unk_func_002D0DA0_0 *p;

    arg0->unk_00 = 0;
    arg0->unk_00 = func_002D2BC0(0x10);
    p = arg0->unk_00;
    if (p != NULL) {
        unk_func_002D0DA0_0 *volatile r = p;
        u32 n;
        p->unk_04 = 3;
        r->unk_08 = 1;
        n = r->unk_04 + 1;
        r->unk_0C = n ? func_002D2BC0(n) : NULL;
    }
    arg0->unk_00->unk_0C[0] = D_0035F690;
    arg0->unk_00->unk_00 = 0;
    return arg0;
}
