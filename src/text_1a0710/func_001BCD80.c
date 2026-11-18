/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[8];
} unk_func_001BCD80_0;

s32 func_001BCA10(s32, unk_func_001BCD80_0 *);
s32 func_00127318(f32);

s32 func_001BCD80(s32 arg0) {
    unk_func_001BCD80_0 sp20;
    s32 ret;

    ret = 0;
    if (func_001BCA10(arg0, &sp20)) {
        ret = func_00127318(65536.0f * sp20.unk_04);
    }
    return ret;
}
