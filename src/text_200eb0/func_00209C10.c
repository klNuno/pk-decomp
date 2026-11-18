/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_0;
    u8 pad_4[0x8];
    s32 unk_C;
} unk_func_00209C10_0;

s32 func_0015C2F0(u8);
extern u8 D_00360190;

s32 func_00209C10(s32 arg0, unk_func_00209C10_0 *arg1) {
    arg0 = arg0;
    arg1->unk_0 = func_0015C2F0(D_00360190);
    arg1->unk_C = 6;
    return 1;
}
