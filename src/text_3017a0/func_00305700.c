#include "common.h"

void func_00308B80(s32);
void func_00308BE0(s32);
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
s32 *func_0030D3F0(s32);
s32 func_0030D400(void);
extern s32 D_0036079C;

void func_00305700(s32 arg0) {
    s32 temp_s0;
    s32 *temp_v0;

    if (D_0036079C != 0) {
        func_00308BE0(D_0036079C);
    }
    temp_s0 = func_0030D400();
    temp_v0 = func_0030D3F0(temp_s0);
    *temp_v0 = 0;
    if (arg0 != 0) {
        *temp_v0 = 1;
    }
    func_0030D0F0(9, temp_s0, 4, 0, 0, 1, 0);
    if (D_0036079C != 0) {
        func_00308B80(D_0036079C);
    }
}
