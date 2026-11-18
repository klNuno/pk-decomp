/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_0;
    u8 pad_4[0x8];
    s32 unk_C;
} unk_func_001E8E80_0;

s32 func_001E8E80(s32 *arg0, u8 arg1, unk_func_001E8E80_0 *arg2) {
    s32 temp;

    temp = *arg0;
    arg1 = arg1;
    arg2->unk_0 = temp;
    arg2->unk_C = 0x21;
    if (temp == 0) {
        return 0;
    }
    return 1;
}
