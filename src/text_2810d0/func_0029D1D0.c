#include "common.h"

typedef struct unk_func_0029D1D0_0 {
    f32 unk_00;
    f32 unk_04;
} unk_func_0029D1D0_0;

void func_0029D1D0(unk_func_0029D1D0_0 *arg0, unk_func_0029D1D0_0 *arg1) {
    s32 i;

    if (arg1 != NULL) {
        for (i = 0; i < 3; i++) {
            if (arg0->unk_00 > arg1->unk_00) {
                arg0->unk_00 = arg1->unk_00;
            }
            if (arg0->unk_04 < arg1->unk_04) {
                arg0->unk_04 = arg1->unk_04;
            }
            arg1++;
            arg0++;
        }
    } else {
        arg0[0].unk_00 = 16777215.0f;
        arg0[0].unk_04 = -16777215.0f;
        arg0[1].unk_00 = 16777215.0f;
        arg0[1].unk_04 = -16777215.0f;
        arg0[2].unk_00 = 16777215.0f;
        arg0[2].unk_04 = -16777215.0f;
    }
}
