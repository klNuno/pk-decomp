/* profile: o0 */
#include "common.h"

typedef struct unk_func_001F1B10_0 {
    union {
        f32 f;
        s32 i;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001F1B10_0;

s32 func_0019D550(f32);

u8 func_001F1B10(unk_func_001F1B10_0 *arg0) {
    u8 ret;
    s32 val;

    ret = arg0->unk_0C == 8;
    if (ret) {
        if (arg0->unk_00.f < 2147483648.0f && arg0->unk_00.f > -2147483648.0f) {
            val = func_0019D550(arg0->unk_00.f);
        } else if (arg0->unk_00.f > 0.0f) {
            val = 0x7FFFFFFF;
        } else {
            val = -0x7FFFFFFF;
        }
        arg0->unk_00.i = val;
        arg0->unk_0C = 6;
    }
    return ret;
}
