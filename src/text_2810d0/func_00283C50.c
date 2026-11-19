/* profile: o1_p */
#include "common.h"

void func_0017E8D0();
void func_00162A40();
void func_00280090();
void func_002801D0();
void func_00280270(s32, f32);
s32 func_0027FF10();
s32 func_0027FDA0();
extern s32 D_007B0060[];

s32 func_00283C50(void) {
    s32 i;
    s32 r;
    u8 unk_00[0x80];
    u8 *temp = unk_00;

    (void)temp;
    r = -1;
    while (r != 5) {
        func_0017E8D0();
        func_00162A40();
        func_0017E8D0();
        func_00162A40();
        func_00280090();
        func_002801D0();
        do {
            func_0017E8D0();
            func_00280270(D_007B0060[i], 450.0f);
            func_00162A40();
            func_0017E8D0();
            func_00280270(D_007B0060[i], 450.0f);
            func_00162A40();
        } while ((r = func_0027FF10()) == 0 && func_0027FDA0() == 0);
        if (r == 4) {
            i--;
            if (i < 0) {
                i += 0x22;
            }
        } else if (r == 1) {
            i++;
            if (i >= 0x22) {
                i -= 0x22;
            }
        } else {
            return 0;
        }
    }
}
