#include "common.h"

f32 func_001158E0(f32);
void func_002DE050(s32 *, f32);
s32 func_002DE470(s32 *);
void func_002DE7C0(s32 *, s32);

void func_002DFDC0(s32 arg0, f32 *arg1) {
    s32 temp[4];

    func_002DE7C0(temp, arg0);
    if (func_002DE470(temp) != 0) {
        func_002DE050(temp, func_001158E0(*arg1));
    }
}
