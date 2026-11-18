#include "common.h"

typedef struct unk_func_00308CA0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u32 unk_10;
    u32 unk_14;
} unk_func_00308CA0_0;

s32 func_0031A320(unk_func_00308CA0_0 *);
void func_0031A340(s32);
extern s32 D_003607E4;
extern s32 D_007C79C0[];
extern s32 D_007C7DC0[];

s32 func_00308CA0(void) {
    unk_func_00308CA0_0 sp20;
    s32 temp_s0;

    sp20.unk_04 = 1;
    sp20.unk_08 = 0;
    temp_s0 = func_0031A320(&sp20);
    D_003607E4++;
    func_0031A340(temp_s0);
    D_007C7DC0[temp_s0] = 0;
    D_007C79C0[temp_s0] = -1;
    return temp_s0 + 1;
}
