/* profile: o0 */
#include "common.h"

typedef struct unk_fn_p_stCapsNullKeyWord_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_fn_p_stCapsNullKeyWord_0;

s32 fn_p_stCapsNullKeyWord(s32 arg0, s32 arg1, unk_fn_p_stCapsNullKeyWord_0 *arg2) {
    arg2->unk_00 = 0;
    arg2->unk_0C = 0x2C;
    return arg1;
}
