/* profile: o0 */
#include "common.h"

typedef struct unk_fn_bObjectPositionNull_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_fn_bObjectPositionNull_0;

s32 fn_bObjectPositionNull(s32 arg0, s32 arg1, unk_fn_bObjectPositionNull_0 *arg2) {
    s32 temp;

    temp = 0;
    if (arg2 != NULL) {
        arg2->unk_00 = 0.0f;
        arg2->unk_04 = 0.0f;
        arg2->unk_08 = 0.0f;
        temp = 1;
    }
    return temp;
}
