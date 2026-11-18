#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0016FE20_0;

f32 func_001E60E0(f32);
extern unk_func_0016FE20_0 D_003317E0;
extern s32 D_0035F4A8;
extern f32 D_0035F4AC;
extern u8 D_0035FBD0;
extern u8 D_0035FBD8;

void func_0016FE20(u8 arg0, unk_func_0016FE20_0 *arg1, s32 arg2, u8 arg3, f32 arg4) {
    f32 len;
    f32 inv;
    f32 x;
    f32 y;
    f32 z;

    D_0035FBD8 = arg0;
    y = arg1->unk_04;
    x = arg1->unk_00;
    z = arg1->unk_08;
    len = func_001E60E0(x * x + y * y + z * z);
    if (len != 0.0f) {
        inv = 1.0f / len;
        D_003317E0.unk_00 = inv * arg1->unk_00;
        D_003317E0.unk_04 = inv * arg1->unk_04;
        D_003317E0.unk_08 = inv * arg1->unk_08;
    } else {
        D_003317E0 = *arg1;
    }
    D_0035F4A8 = arg2;
    D_0035F4AC = arg4;
    D_0035FBD0 = arg3;
}
