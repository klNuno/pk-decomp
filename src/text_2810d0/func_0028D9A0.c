#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x4];
} unk_func_0028D9A0_0;

extern unk_func_0028D9A0_0 D_007B8460[];

void func_0028D9A0(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    D_007B8460[arg0].unk_00 = arg1;
    D_007B8460[arg0].unk_04 = arg2;
    D_007B8460[arg0].unk_08 = arg3;
}
