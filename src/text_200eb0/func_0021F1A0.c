/* profile: o0 */
#include "common.h"

extern f32 D_005AB850[];

typedef struct {
    f32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_0021F1A0_0;

s32 func_0021F1A0(s32 arg0, s32 arg1, unk_func_0021F1A0_0 *arg2) {
    arg2->unk_00 = D_005AB850[0];
    arg2->unk_0C = 8;
    return arg1;
}
