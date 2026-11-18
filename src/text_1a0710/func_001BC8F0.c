/* profile: o0 */
#include "common.h"

s32 func_00127318(f32);
s32 func_001BC820(s32, f32 *);

s32 func_001BC8F0(s32 arg0) {
    f32 temp[4];
    s32 temp2;

    temp2 = 0;
    if (func_001BC820(arg0, temp) != 0) {
        temp2 = func_00127318(65536.0f * temp[0]);
    }
    return temp2;
}
