/* profile: o0 */
#include "common.h"

typedef struct unk_func_001E9220_0 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001E9220_0;

s32 func_001E9220(s32 *arg0, u8 arg1, unk_func_001E9220_0 *arg2) {
    s32 temp;

    temp = *arg0;
    arg1 = arg1;
    arg2->unk_00 = temp;
    arg2->unk_0C = 0x24;
    if (temp == -1) {
        return 0;
    }
    return 1;
}
