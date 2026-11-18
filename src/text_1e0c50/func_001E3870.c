#include "common.h"

typedef struct unk_func_001E3870_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001E3870_0;

u8 func_001E3870(unk_func_001E3870_0 *arg0, unk_func_001E3870_0 *arg1, unk_func_001E3870_0 *arg2, unk_func_001E3870_0 *arg3) {
    s32 ret;
    s32 ok;

    ret = 0;
    ok = 0;
    if ((arg0->unk_00 > arg2->unk_00 ? arg0->unk_00 : arg2->unk_00) <= (arg1->unk_00 < arg3->unk_00 ? arg1->unk_00 : arg3->unk_00) &&
        (arg0->unk_04 > arg2->unk_04 ? arg0->unk_04 : arg2->unk_04) <= (arg1->unk_04 < arg3->unk_04 ? arg1->unk_04 : arg3->unk_04)) {
        ok = 1;
    }
    if (ok && (arg0->unk_08 > arg2->unk_08 ? arg0->unk_08 : arg2->unk_08) <= (arg1->unk_08 < arg3->unk_08 ? arg1->unk_08 : arg3->unk_08)) {
        ret = 1;
    }
    return ret;
}
