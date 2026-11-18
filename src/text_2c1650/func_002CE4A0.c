/* profile: opt_300 */
#include "common.h"

s32 func_002CD350(s32, char *, s32);
s32 func_002CD540(char *, f32);
extern s32 D_00360500;
extern s8 D_00360504;

s32 func_002CE4A0(void) {
    char sp20[0x100];
    s32 var_s0;

    if (!D_00360504) {
        D_00360500 = 0;
        D_00360504 = 1;
    }
    var_s0 = -1;
    if (func_002CD350(D_00360500, sp20, 0x100) != 0 && func_002CD540(sp20, 0.0f) != 0) {
        var_s0 = D_00360500++;
    }
    return var_s0;
}
