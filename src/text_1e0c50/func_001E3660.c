#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001E3660_0;

s32 func_001E3660(unk_func_001E3660_0 *arg0, unk_func_001E3660_0 *arg1, unk_func_001E3660_0 *arg2) {
    s32 ret = 0;

    if (arg0->unk_00 < arg1->unk_00) {
        ret |= 1;
    } else if (arg0->unk_00 > arg2->unk_00) {
        ret |= 2;
    }
    if (arg0->unk_04 < arg1->unk_04) {
        ret |= 4;
    } else if (arg0->unk_04 > arg2->unk_04) {
        ret |= 8;
    }
    if (arg0->unk_08 < arg1->unk_08) {
        ret |= 0x10;
    } else if (arg0->unk_08 > arg2->unk_08) {
        ret |= 0x20;
    }
    return ret;
}
