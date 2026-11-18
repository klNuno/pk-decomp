#include "common.h"

f32 func_00115CE0(f32);
void func_002DE050(s32 *, f32);
s32 func_002DE470(s32 *);
void func_002DE7C0(s32 *, s32);

void func_002DFEA0(s32 arg0, f32 *arg1) {
    s32 sp20[4];

    func_002DE7C0(sp20, arg0);
    if (func_002DE470(sp20) != 0) {
        func_002DE050(sp20, *arg1 <= 0.0f ? 0.0f : func_00115CE0(*arg1));
    }
}
