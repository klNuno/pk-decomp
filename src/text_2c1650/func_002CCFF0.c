#include "common.h"

void func_002857F0(s32, s32, s32, s32);
void func_00285AC0(s32);
void func_00285B00(void);
f64 func_00125EE8(s32);
void func_00285A40(f64, f64, f64, f64, f64, f64);

void func_002CCFF0(s32 arg0, s32 arg1) {
    func_002857F0(0, 0, arg0, arg1);
    func_00285AC0(0x1701);
    func_00285B00();
    func_00285A40(0.0, func_00125EE8(arg0), 0.0, func_00125EE8(arg1), -1.0, 1.0);
    func_00285AC0(0x1700);
    func_00285B00();
}
