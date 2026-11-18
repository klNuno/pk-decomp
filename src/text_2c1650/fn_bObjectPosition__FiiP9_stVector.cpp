#include "common.h"

struct _stVector {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
};

s32 fn_bObjectPosition(s32 arg0, s32 arg1, _stVector *arg2) {
    s32 ret = 0;
    if (arg2 != NULL) {
        arg2->unk_00 = 0.0f;
        arg2->unk_04 = 0.0f;
        arg2->unk_08 = 0.0f;
        ret = 1;
    }
    return ret;
}
