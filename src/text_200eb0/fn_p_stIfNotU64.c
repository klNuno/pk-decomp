/* profile: o0 */
#include "common.h"

typedef struct unk_fn_p_stIfNotU64_0 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_fn_p_stIfNotU64_0;

s32 *func_002206F0();
extern s8 D_0035F5A0;

s32 *fn_p_stIfNotU64(s32 arg0, s32 *arg1, unk_fn_p_stIfNotU64_0 *arg2) {
    s32 temp;

    temp = arg1[-2];
    arg0 = arg0;
    arg2 = arg2;
    if (temp == 0xF && D_0035F5A0) {
        arg1 = func_002206F0(arg1 - 2, arg1 - 2);
    }
    arg2->unk_00 = 0;
    arg2->unk_0C = 0x14;
    return arg1;
}
