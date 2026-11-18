/* profile: o0_301 */
#include "common.h"

s32 func_00199810();
void func_00176740();
extern s32 D_003338D0[];

void func_0019A630(s32 arg0) {
    s32 temp2;
    s32 temp;

    temp = arg0 - 0x10000;
    temp2 = func_00199810(D_003338D0[0], temp);
    func_00176740(temp2);
}
