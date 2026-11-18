#include "common.h"

typedef struct unk_func_0028DEE0_0 {
    f32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
} unk_func_0028DEE0_0;

extern unk_func_0028DEE0_0 D_007B8460[];

void func_0028DEE0(s32 arg0, f32 arg1) {
    D_007B8460[arg0].unk_00 = arg1;
    D_007B8460[arg0].unk_04 = 0;
}
