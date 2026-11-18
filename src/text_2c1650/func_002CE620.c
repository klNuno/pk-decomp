#include "common.h"

void func_002CEEA0();
void func_002CE760();
void __register_global_object();
void func_002CE690();
extern s8 D_00360518;
extern u8 D_007BDF30[];
extern u8 D_007BDF40[];

u8 *func_002CE620(void) {
    s32 sp18;
    s32 sp1C;

    if (D_00360518 == 0) {
        func_002CEEA0(D_007BDF40, &sp1C, &sp18);
        func_002CE760(&sp18, -1);
        __register_global_object(D_007BDF40, func_002CE690, D_007BDF30);
        D_00360518 = 1;
    }
    return D_007BDF40;
}
