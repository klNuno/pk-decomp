/* profile: o0 */
#include "common.h"

typedef struct unk_func_00218F60_0 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00218F60_0;

extern "C" {
extern u8 D_005ACACF[];

s32 func_00218F60(s32, s32 arg1, unk_func_00218F60_0 *arg2) {
    arg2->unk_00 = D_005ACACF[0];
    arg2->unk_0C = 6;
    return arg1;
}
}
