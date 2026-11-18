#include "common.h"

void func_00153920(f32 *, u8 *);
void func_001930E0(void *, s32, f32, f32 *, s32, s32);

void func_00195F80(u8 ***arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4) {
    f32 sp60[24];

    func_00153920(sp60, *arg0[0x1A] + 0x10);
    func_001930E0(arg0, arg1, arg4, sp60, arg2, arg3);
}
