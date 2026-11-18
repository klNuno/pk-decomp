#include "common.h"

typedef struct {
    u8 pad_00[0x38];
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    u8 pad_44[4];
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
} unk_func_00270100_0;

extern f32 D_00360240;

void func_00270100(unk_func_00270100_0 *arg0) {
    arg0->unk_50 -= 9.81f * D_00360240;
    arg0->unk_38 += arg0->unk_48 * D_00360240;
    arg0->unk_3C += arg0->unk_4C * D_00360240;
    arg0->unk_40 += arg0->unk_50 * D_00360240;
}
