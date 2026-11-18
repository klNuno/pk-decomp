/* profile: o0 */
#include "common.h"

void func_0027B9D0();
extern s32 D_00360398;
extern s32 D_0036039C;
extern s32 D_003603A0;

s32 func_0027BB70(void) {
    s32 temp;
    s32 temp2;

    temp = D_00360398;
    func_0027B9D0();
    temp2 = D_0036039C;
    D_0036039C = 0;
    D_003603A0 = 0;
    if (temp == D_00360398) {
        return 0;
    }
    return 1;
}
