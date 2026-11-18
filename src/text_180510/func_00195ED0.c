#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00195ED0_0;

void func_00195ED0(unk_func_00195ED0_0 *arg0, unk_func_00195ED0_0 *arg1, unk_func_00195ED0_0 *arg2) {
    if (arg2->unk_00 < arg0->unk_00) {
        arg0->unk_00 = arg2->unk_00;
    } else if (arg2->unk_00 > arg1->unk_00) {
        arg1->unk_00 = arg2->unk_00;
    }
    if (arg2->unk_04 < arg0->unk_04) {
        arg0->unk_04 = arg2->unk_04;
    } else if (arg2->unk_04 > arg1->unk_04) {
        arg1->unk_04 = arg2->unk_04;
    }
    if (arg2->unk_08 < arg0->unk_08) {
        arg0->unk_08 = arg2->unk_08;
    } else if (arg2->unk_08 > arg1->unk_08) {
        arg1->unk_08 = arg2->unk_08;
    }
}
