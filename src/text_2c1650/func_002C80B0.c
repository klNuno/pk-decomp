#include "common.h"

extern u8 D_007B7B8C[];
extern u8 D_007B8324[];
extern f32 D_007B83F0[];
extern f32 D_007B83F4[];
extern f32 D_007B8400[];
extern f32 D_007B8408[];
extern f32 D_007B840C[];

void func_002C80B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp;

    if (D_007B8324[0]) {
        arg3 >>= 1;
    }
    D_007B8400[0] = D_007B83F0[0] + arg0;
    temp = arg3;
    D_007B8400[1] = temp + (D_007B83F4[0] + arg1);
    D_007B8408[0] = arg2;
    D_007B840C[0] = -temp;
    D_007B7B8C[0] = 1;
}
