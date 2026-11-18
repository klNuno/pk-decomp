/* profile: o0_301 */
#include "common.h"

extern s32 D_003338D0[];

s32 func_00199810(s32, s32);
void func_00176740(s32);

void func_0019A6A0(s32 arg0) {
    s32 temp2;
    s32 temp;

    temp = arg0 - 0x10000;
    temp2 = func_00199810(D_003338D0[0], temp);
    func_00176740(temp2);
}
