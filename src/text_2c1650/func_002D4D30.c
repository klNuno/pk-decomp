#include "common.h"

void __register_global_object();
void func_002CF3E0();
void func_002CF4C0();
void func_002D4F80();
void func_002D53B0();
void func_002D5450();
s32 func_002D6290();
void func_002D6560(s32, s32, s32);
extern s32 D_0035B248[];
extern s8 D_00360520;
extern u8 D_007BDF80[];
extern u8 D_007BE810[];

void func_002D4D30(void) {
    s32 i;

    func_002CF3E0();
    func_002D6560(func_002D6290(), 2, -2);
    func_002D6560(func_002D6290(), 1, -2);
    for (i = 0; i < (D_0035B248[0] + 1) * 2; i++) {
        func_002CF3E0();
    }
    if (D_00360520 == 0) {
        func_002CF4C0(D_007BDF80);
        __register_global_object(D_007BDF80, func_002D5450, D_007BE810);
        D_00360520 = 1;
    }
    func_002D53B0(D_007BDF80);
    func_002D4F80();
}
