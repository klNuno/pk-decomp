/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001BD3A0_0;

s32 func_001BD120();
s32 func_00127318(f32);

s32 func_001BD3A0(s32 arg0) {
    unk_func_001BD3A0_0 sp20;
    s32 ret;

    ret = 0;
    if (func_001BD120(arg0, &sp20) != 0) {
        ret = func_00127318(65536.0f * sp20.unk_08);
    }
    return ret;
}
