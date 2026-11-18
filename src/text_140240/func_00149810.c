#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    f32 unk_10;
    u8 pad_14[0xC];
    f32 unk_20;
    u8 pad_24[0xC];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
} unk_func_00149810_0;

unk_func_00149810_0 *func_00138800(s32);

void func_00149810(f32 *arg0, s32 arg1, s32 arg2, f32 arg3) {
    arg3 *= func_00138800(arg1)->unk_10;
    arg0[0] = arg3 * func_00138800(arg1)->unk_30;
    arg0[1] = arg3 * func_00138800(arg1)->unk_34;
    arg0[2] = arg3 * func_00138800(arg1)->unk_38;
    if (arg2 != 0) {
        arg0[0] *= func_00138800(arg1)->unk_20;
        arg0[1] *= func_00138800(arg1)->unk_20;
        arg0[2] *= func_00138800(arg1)->unk_20;
    }
}
