/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_0028DC40_0 {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028DC40_0;

extern unk_func_0028DC40_0 D_007B8460[];
extern unk_func_0028DC40_0 D_007B8464[];

void func_0028DC40(s32 arg0, s16 *arg1) {
    f32 x;
    f32 y;

    x = arg1[0] / 32767.0f;
    y = arg1[1] / 32767.0f;
    D_007B8460[arg0].unk_00 = x;
    D_007B8464[arg0].unk_00 = y;
}
