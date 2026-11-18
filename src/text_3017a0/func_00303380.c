#include "common.h"

void func_00303440();
void func_00303400();
void __register_global_object();
void func_00303470();
extern s8 D_00360774;
extern u8 D_007BF350[];
extern u8 D_007BF360[];

u8 *func_00303380(void) {
    if (D_00360774 == 0) {
        s32 sp18;
        u8 *volatile p;

        p = D_007BF360;
        func_00303440(p);
        func_00303400(p + 0xC, &sp18);
        p[0x1C] = 1;
        __register_global_object(p, func_00303470, D_007BF350);
        D_00360774 = 1;
    }
    return D_007BF360;
}
