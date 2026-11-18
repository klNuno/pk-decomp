#include "common.h"

typedef struct unk_func_00270080_0 {
    s32 unk_00;
    u8 pad_04[0x54];
    f32 unk_58;
    f32 unk_5C;
} unk_func_00270080_0;

extern f32 D_00360240;

void func_00270080(unk_func_00270080_0 *arg0) {
    arg0->unk_58 -= D_00360240 * arg0->unk_5C;
    if (arg0->unk_58 < 0.0f) {
        arg0->unk_58 = 0.0f;
        arg0->unk_00 |= 1;
    } else if (!(arg0->unk_58 < 255.0f)) {
        arg0->unk_58 = 255.0f;
    }
}
