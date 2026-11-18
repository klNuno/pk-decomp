/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_00294D80_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00294D80_0;

extern unk_func_00294D80_0 D_007B8420[];

static inline void func_inl(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    D_007B8420[arg0].unk_00 = arg1;
    D_007B8420[arg0].unk_04 = arg2;
    D_007B8420[arg0].unk_08 = arg3;
    D_007B8420[arg0].unk_0C = arg4;
}

void func_00294D80(s32 arg0, u8 *arg1) {
    func_inl(arg0, arg1[0] / 255.0f, arg1[1] / 255.0f, arg1[2] / 255.0f, arg1[3] / 255.0f);
}
