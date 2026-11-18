#include "common.h"

s32 func_001979C0();
void func_00155E80();
void func_001559E0();
void func_00313D30();

void func_00313C30(s32 arg0, s32 arg1, f32 *arg2) {
    f32 tmp[4];
    s32 obj;

    obj = func_001979C0();
    if (arg1 == 0x10) {
        func_00155E80(obj, arg2);
    } else {
        func_001559E0(tmp, obj, arg2);
        func_00155E80(obj, tmp);
    }
    func_00313D30(arg0);
}
