/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001BB7D0_0;

typedef struct {
    unk_func_001BB7D0_0 *unk_00;
    s32 unk_04;
    s8 unk_08;
} unk_func_001BB7D0_1;

s32 func_001BB7D0(unk_func_001BB7D0_1 *arg0, s32 arg1) {
    s32 temp;

    if (arg0 != NULL && arg0->unk_00 != NULL) {
        temp = arg0->unk_00->unk_08;
        if (arg0->unk_08) {
            arg1 = arg1 % temp;
            if (arg1 < 0) {
                arg1 += temp;
            }
        }
        if (arg1 >= temp) {
            arg1 = temp - 1;
        }
        if (arg1 < 0) {
            arg1 = 0;
        }
        arg0->unk_04 = arg1;
        return arg0->unk_04;
    }
    return -1;
}
