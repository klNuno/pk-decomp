#include "common.h"

typedef struct unk_func_00138EF0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00138EF0_0;


void func_00138EF0(unk_func_00138EF0_0 *arg0, unk_func_00138EF0_0 *arg1, unk_func_00138EF0_0 *arg2, unk_func_00138EF0_0 *arg3) {
    unk_func_00138EF0_0 sp;
    unk_func_00138EF0_0 *p = &sp;
    f32 d;
    f32 t;

    if (arg3 != arg2) {
        d = arg3->unk_00 * arg2->unk_00 + arg3->unk_04 * arg2->unk_04 + arg3->unk_08 * arg2->unk_08;
    } else {
        d = 1.0f;
    }
    if (d != 0.0f) {
        t = -(arg1->unk_00 * arg2->unk_00 + arg1->unk_04 * arg2->unk_04 + arg1->unk_08 * arg2->unk_08);
        t = t / d;
        ((s32 *)p)[0] = ((s32 *)arg3)[0];
        ((s32 *)p)[1] = ((s32 *)arg3)[1];
        ((s32 *)p)[2] = ((s32 *)arg3)[2];
        p->unk_00 = t * p->unk_00;
        p->unk_04 = t * p->unk_04;
        p->unk_08 = t * p->unk_08;
        if (arg0 != arg1) {
            ((s32 *)arg0)[0] = ((s32 *)arg1)[0];
            ((s32 *)arg0)[1] = ((s32 *)arg1)[1];
            ((s32 *)arg0)[2] = ((s32 *)arg1)[2];
        }
        arg0->unk_00 = arg0->unk_00 + p->unk_00;
        arg0->unk_04 = arg0->unk_04 + p->unk_04;
        arg0->unk_08 = arg0->unk_08 + p->unk_08;
    }
}
