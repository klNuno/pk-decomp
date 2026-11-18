/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00218F20_0;

extern "C" {
extern u8 D_005ACACE[];

s32 func_00218F20(s32, s32 arg1, unk_func_00218F20_0 *arg2) {
    arg2->unk_00 = D_005ACACE[0];
    arg2->unk_0C = 6;
    return arg1;
}
}
