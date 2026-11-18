/* profile: o1 */
#include "common.h"

void func_0017E8D0();
void func_00280270(s32, f32);
void func_00162A40();
s32 func_00281990();
extern u8 D_003600B0;
extern s32 D_003603C8;
extern s32 D_007B00E0[];

void func_002815C0(void) {
    s32 i;

    if (D_003603C8 != 0 && func_00281990() == 0) {
        for (i = 0; i < 120; i++) {
            func_0017E8D0();
            func_00280270(D_007B00E0[0], 450.0f);
            func_00162A40();
        }
        D_003603C8 = 0;
        D_003600B0 = 0xFD;
    }
}
