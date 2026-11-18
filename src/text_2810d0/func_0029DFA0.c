#include "common.h"

typedef struct unk_func_0029DFA0_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_0029DFA0_0;

typedef struct unk_func_0029DFA0_1 {
    struct unk_func_0029DFA0_1 *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C[1];
} unk_func_0029DFA0_1;

extern unk_func_0029DFA0_0 D_007B8070[];
extern unk_func_0029DFA0_1 *D_007B8270[];

s32 *func_0029DFA0(s32 arg0) {
    unk_func_0029DFA0_0 *e;
    unk_func_0029DFA0_1 *p;
    s32 i;
    s32 d;

    p = D_007B8270[0];
    e = D_007B8070;
    for (i = 0; i < 64; i++, e++) {
        if (e->unk_00 == arg0) {
            return &e->unk_04;
        }
    }
    while (p != NULL) {
        d = arg0 - p->unk_04;
        if (d >= 0 && d < p->unk_08) {
            return &p->unk_0C[d];
        }
        p = p->unk_00;
    }
    return NULL;
}
