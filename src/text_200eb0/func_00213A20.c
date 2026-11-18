/* profile: o0 */
#include "common.h"

typedef struct unk_func_00213A20_0 {
    f32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00213A20_0;

extern u32 D_005AB848[];

s32 func_00213A20(s32 arg0, s32 arg1, unk_func_00213A20_0 *arg2) {
    arg2->unk_00 = D_005AB848[0];
    arg2->unk_0C = 8;
    return arg1;
}
