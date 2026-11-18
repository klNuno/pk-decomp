/* profile: o0 */
#include "common.h"

extern s32 D_0036018C;

void func_00222F50(s32 arg0, s32 arg1) {
    if (arg0 == arg1) {
        D_0036018C = 0;
        return;
    }
    D_0036018C = arg1;
}
