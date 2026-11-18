#include "common.h"

typedef struct unk_func_001891A0_0 {
    u8 pad_00[0x1CC];
    s32 unk_1CC;
} unk_func_001891A0_0;

s32 func_00127318(f32);
extern f32 D_00333380[];
extern f32 D_00333384[];
extern f32 D_00333388[];
extern f32 D_0035F4E0;
extern unk_func_001891A0_0 *D_0035FB04;
extern s8 D_0035FD28;
extern s32 D_0035FD6C;
extern f32 D_0035FD74;
extern f32 D_0035FD78;
extern s32 D_0035FD8C;
extern s8 D_00360230;

void func_001891A0(f32 *arg0, f32 arg1, f32 arg2) {
    D_0035FD74 = arg1;
    D_0035F4E0 = arg2;
    if (D_00360230 != 0) {
        D_00333380[0] = 1.0f;
        D_00333384[0] = 1.0f;
        D_00333388[0] = 1.0f;
    } else {
        D_00333380[0] = arg0[0];
        D_00333384[0] = arg0[1];
        D_00333388[0] = arg0[2];
        if (D_0035FD28 == 5 || D_0035FD28 == 4) {
            f32 t = 0.3f * arg0[0] + 0.59f * arg0[1] + 0.11f * arg0[2];
            D_00333380[0] = t;
            D_00333384[0] = t;
            D_00333388[0] = t;
        }
    }
    D_0035FD8C = (u8)func_00127318(255.0f * D_00333380[0]) + ((u8)func_00127318(255.0f * D_00333384[0]) << 8) + ((u8)func_00127318(255.0f * D_00333388[0]) << 16);
    if (arg1 != arg2) {
        D_0035FD78 = 1.0f / (arg1 - arg2);
    } else {
        D_0035FD78 = -0.02f;
    }
    if (D_0035FB04->unk_1CC == 0) {
        D_00333380[0] = 1.0f;
        D_0035FD74 = 4095.0f;
        D_00333384[0] = 1.0f;
        D_0035F4E0 = 4096.0f;
        D_00333388[0] = 1.0f;
        D_0035FD78 = -1.0f;
    }
    D_0035FD6C = 0;
}
