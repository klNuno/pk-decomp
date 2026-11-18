/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_001E8D00_0;

s32 func_001E8D00(f32 *arg0, u8 arg1, unk_func_001E8D00_0 *arg2) {
    f32 temp;

    temp = *arg0;
    arg1 = arg1;
    arg2->unk_00 = temp;
    arg2->unk_0C = 8;
    return 1;
}
