/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BBD20_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001BBD20_0;

typedef struct unk_func_001BBD20_1 {
    unk_func_001BBD20_0 *unk_00;
    u8 pad_04[4];
    s8 unk_08;
} unk_func_001BBD20_1;

s32 func_001BBA90();
s32 func_001EE9C0();

s32 func_001BBD20(unk_func_001BBD20_1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 n;
    s32 a;
    s32 b;

    if (arg0 != NULL && arg0->unk_00 != NULL) {
        n = arg0->unk_00->unk_08;
        if (arg0->unk_08) {
            arg1 %= n;
            if (arg1 < 0) {
                arg1 += n;
            }
        }
        if (arg1 >= 0 && arg1 < n) {
            a = func_001BBA90(arg0, arg1);
            b = func_001BBA90(arg0, arg1 + 1);
            if (b != 0) {
                return func_001EE9C0(arg0->unk_00, a, b, arg2, arg3);
            }
        }
    }
    return -1;
}
