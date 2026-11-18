/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001E8EE0_0;

s32 func_001E8EE0(s32 *arg0, u8 arg1, unk_func_001E8EE0_0 *arg2) {
    s32 temp;

    temp = *arg0;
    arg1 = arg1;
    arg2->unk_00 = temp;
    arg2->unk_0C = 0x2B;

    if (temp == 0) {
        return 0;
    }
    return 1;
}
