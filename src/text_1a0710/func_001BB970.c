/* profile: o0 */
#include "common.h"

typedef struct unk_func_001BB970_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001BB970_0;

typedef struct unk_func_001BB970_1 {
    unk_func_001BB970_0 *unk_00;
    s32 unk_04;
    s8 unk_08;
} unk_func_001BB970_1;

s32 func_001BB970(unk_func_001BB970_1 *arg0, s32 arg1) {
    s32 temp_s0;

    if (arg0 == NULL) {
        return -1;
    }
    if (arg0->unk_00 != NULL) {
        temp_s0 = arg0->unk_00->unk_08;
        if (arg0->unk_08) {
            arg0->unk_04 += arg1;
            arg0->unk_04 %= temp_s0;
            if (arg0->unk_04 < 0) {
                arg0->unk_04 += temp_s0;
            }
            return arg0->unk_04;
        }
        if (arg0->unk_04 + arg1 >= 0 && arg0->unk_04 + arg1 < temp_s0) {
            arg0->unk_04 += arg1;
            return arg0->unk_04;
        }
    }
    return -1;
}
