/* profile: o0_p */
#include "common.h"

void func_00162A40(void);
void func_0017E8D0(void);
s32 func_001DA8C0(s32 *);
s32 func_001DA910(void);
void func_00280270(s32, f32);
extern s32 D_003603C4;
extern s32 D_003603D8;
extern s32 D_007B00D0[];
extern s32 D_007B00D4[];

void func_00281650(void) {
    D_003603C4 = 1;
    while (func_001DA910() != 0) {
        func_0017E8D0();
        func_00280270(D_007B00D0[0], 450.0f);
        func_00162A40();
        D_003603D8 = 1;
    }
    if (D_003603D8 != 0) {
        while (func_001DA8C0(&D_003603D8) == 0) {
            func_0017E8D0();
            func_00280270(D_007B00D4[0], 450.0f);
            func_00162A40();
        }
    }
    D_003603C4 = 0;
}
